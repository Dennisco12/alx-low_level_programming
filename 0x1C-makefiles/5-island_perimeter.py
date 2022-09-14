#!/usr/bin/python3
"""A function that computes the perimeter of an island"""

def island_perimeter(grid):
    """grid is a list of list of integers
    0 represents a water zone
    1 represents a land zone
    one cell is a square with side length 1
    grid cells are connected horizontally/vertically only
    """
    perimeter = 0
    i = 0
    for n in grid:
        i += 1
        for j in range(len(n)):
            """Isolated land"""
            if grid[i - 1][j] == 1:
                perimeter += 4

                """land below"""
                if (i - 1 != len(grid) - 1 and grid[i][j] == 1):
                    perimeter -= 1

                """land above"""
                if (i - 1 != 0 and grid[i - 2][j] == 1):
                    perimeter -= 1

                """land by the right"""
                if (j != len(n) -1 and grid[i - 1][j + 1] == 1):
                    perimeter -= 1

                """land by the left"""
                if (j != 0 and grid[i - 1][j - 1] == 1):
                    perimeter -= 1

    return perimeter
