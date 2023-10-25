#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """return island perimeter.
    The grid represents water by 0 and land by 1.
    Args:
         grid (list): A list of list of integers representing an island.
    Returns:
         The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    e = 0
    size = 0

    for j in range(height):
        for k in range(width):
            if grid[j][k] == 1:
                size += 1
                if (k > 0 and grid[j][k -1] == 1):
                    e += 1
                if (j > 0 and grid[j - 1][k] == 1):
                    e += 1
    return size * 4 - e * 2
