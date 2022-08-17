#!/usr/bin/python3
"""Module calculate the perimeter of an island in  a grid"""
def island_perimeter(grid):
    """Return the perimeter of the island in grid
       Args:
            -grid: the first parameter
    """
    per_meter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                per_meter += numberOfWater(grid, i, j)

    return per_meter
def numberOfWater(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid.
       Args:
            -grid:matrix
            -i :row
            -j:columns
    """

    number = 0

    if i <= 0 or not grid[i - 1][j]:
        number += 1
    if j <= 0 or not grid[i][j - 1]:
        number += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        number += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        number += 1

    return number

