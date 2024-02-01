#!/usr/bin/python3

""" measures the primeter of island"""


def island_perimeter(grid):
    """
    calculates the perimeter
    """
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[1])):
            if grid[i][j] == 1:
                p = p + 4
                if i > 0 and grid[i - 1][j] == 1:
                    p = p - 1
                if grid[i + 1][j] == 1 and i < len(grid) - 1:
                    p = p - 1
                if j > 0 and grid[i][j - 1] == 1:
                    p = p - 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    p = p - 1
    return p
