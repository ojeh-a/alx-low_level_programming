#!/usr/bin/python3
"""Defines island_erimeter."""


def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid reprresents water and land by 0 and 1 respectfully.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    x = len(grid[0])
    y = len(grid)
    edges = 0
    size = 0

    for i in range(y):
        for j in range(x):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
