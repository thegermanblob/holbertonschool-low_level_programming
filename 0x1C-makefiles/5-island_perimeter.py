#!/usr/bin/python3
""" Module containing the island perimeter function """


def island_perimeter(grid):
    """ calculates the perimeter of island from grid """

    if grid is None:
        return 0

    num_land = 0
    for line in grid:
        for land in line:
            if land == 1:
                num_land += 1
    if num_land == 0:
        return 0
    else:
        return (num_land * 2) + 2
