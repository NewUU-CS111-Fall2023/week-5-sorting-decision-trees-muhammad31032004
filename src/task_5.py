import matplotlib.pyplot as plt
import numpy as np

def display_color_matrix(matrix):
    color_map = {'b': [0, 0, 1], 'y': [1, 1, 0], 'w': [1, 1, 1], 'e': [0, 1, 0]}
    color_matrix = []

    for row in matrix:
        color_row = []
        for symbol in row:
            color_row.append(color_map.get(symbol.lower(), [0, 0, 0]))  # default to black if unknown symbol
        color_matrix.append(color_row)

    plt.imshow(color_matrix, interpolation='nearest')
    plt.axis('off')
    plt.show()

matrix = [
    "bbwbbywww",
    "bbwwbyybb",
    "yyywwbbbb",
    "yeyeywwbb",
    "wbbwwbwww",
    "Bbwwwwwyw"
]

matrix_list = [list(row) for row in matrix]
display_color_matrix(matrix_list)
