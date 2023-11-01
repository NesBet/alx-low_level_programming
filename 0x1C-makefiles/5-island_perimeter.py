#!/usr/bin/python3
""" Module containing island_perimeter code."""


def island_perimeter(grid):

    perimeter = 0

    no_rows = len(grid)

    if grid != []:
        no_columns = len(grid[0])

    for a in range(nrows):
        for b in range(no_columns):
            if grid[a][b] == 1:
                if (a - 1) == -1 or grid[a - 1][b] == 0:
                    perimeter += 1
                if (a + 1) == no_rows or grid[a + 1][b] == 0:
                    perimeter += 1
                if (b - 1) == -1 or grid[a][b - 1] == 0:
                    perimeter += 1
                if (b + 1) == no_columns or grid[a][b + 1] == 0:
                    perimeter += 1

    return perimeter
