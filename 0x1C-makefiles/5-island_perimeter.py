#!/usr/bin/python3
"""Module containing island_perimeter code"""


def island_perimeter(grid):
    """Return the perimiter of an island"""
    perimeter = 0
    edges = 0
    width = len(grid[0])
    height = len(grid)

    for n in range(height):
        for j in range(width):
            if grid[n][j] == 1:
                perimeter += 1
                if (j > 0 and grid[n][j - 1] == 1):
                    edges += 1
                if (n > 0 and grid[n - 1][j] == 1):
                    edges += 1
    return perimeter * 4 - edges * 2
