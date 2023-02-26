#!/usr/bin/python3
"""
returns perimeter of island described in grid
grid is a list of list of integers
0 -  water zone;1 - land zone
1 cell = square, side length 1
Grid cells are not diagonally connected
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing).
The island doesn’t have “lakes”
"""


def island_perimeter(grid):
    """ calculates perimeter of island
        represemted in grid
    """
    perimeter = 0
    x, y = 0, 0
    height = len(grid)
    width = len(grid)

    while y < height:
        x = 0
        while x < width:
            cell = grid[y][x]
            if cell != 0:
                if y == 0 or grid[y - 1][x] == 0:
                    perimeter += 1
                if grid[y][x - 1] == 0:
                    perimeter += 1
                if grid[y][x + 1] == 0:
                    perimeter += 1
                if grid[y + 1][x] == 0:
                    perimeter += 1
            x += 1
        y += 1
    return perimeter
