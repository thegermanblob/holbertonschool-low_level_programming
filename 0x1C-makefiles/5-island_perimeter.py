#!/usr/bin/python3
""" Module containing the island perimeter function """


def island_perimeter(grid):
    """ calculates the perimeter of island from grid """

    num_land = 0
    for line in grid:
        for land in line:
            if land == 1:
                num_land += 1
    return (num_land * 2) + 2
