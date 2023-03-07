#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv)
{
	int fd = 0;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read = 0;
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error: cannot open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read < 0)
	{
		 fprintf(stderr, "Error: cannot read ELF header from file %s\n", argv[1]);
		 exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
		exit(98);
	}

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\n");

	printf("Class:                             ");
	switch (elf_header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("Data:                              ");
	switch (elf_header.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("Version:                           %d\n", elf_header.e_ident[EI_VERSION]);

	printf("OS/ABI:                            ");
	switch (elf_header.e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);

	printf("Type:                              ");
	switch (elf_header.e_type)
	{
		case ET_NONE:
			printf("No file type\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN: Shared object file\n");
			break;
		case ET_CORE:
			printf("(CORE) Core file\n");
			break;
		default:
			printf("Unknown file type\n");
			break;
	}

	printf("Entry point address:               %#lx\n", elf_header.e_entry);
	close(fd);

	return 0;
}
