#!/usr/bin/python3
""" island_perimeter module """


def island_perimeter(grid):
    """ calculates the perimeter of an island based on it's grid
        arguments:
            grid: the islands grid
        returns: islands perimeter
    """

    rows = len(grid)
    if rows > 0:
        columns = len(grid[0])
    row_total = 0
    column_total = 0
    for i in range(rows):
        alter = 0
        for j in range(columns):
            if grid[i][j] != alter:
                row_total += 1
                alter = grid[i][j]
        if grid[i][columns - 1] == 1:
            row_total += 1
    for j in range(columns):
        alter = 0
        for i in range(rows):
            if grid[i][j] != alter:
                column_total += 1
                alter = grid[i][j]
        if grid[rows - 1][j] == 1:
            column_total += 1
    return column_total + row_total
