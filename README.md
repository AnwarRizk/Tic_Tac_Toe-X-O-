# Tic Tac Toe Game in C++

This is a simple implementation of the classic Tic Tac Toe game in C++. The game is played in the console.

## How to Play

The game board is a 3x3 grid, and each cell corresponds to a number from 1 to 9, starting from the top left cell and going to the right and down. For example:

## 1 | 2 | 3

## 4 | 5 | 6

## 7 | 8 | 9

Players take turns to place their mark (X or O) in an empty cell. The first player to get three of their marks in a row (up, down, across, or diagonally) is the winner.

If all cells are filled and no player has won, the game is a draw.

## Code Structure

The code includes several functions:

- `DrawGrid()`: Draws the game board.
- `X_choice()` and `O_choice()`: Handle the player's choice of where to place their mark.
- `Is_X_win()` and `Is_O_win()`: Check if X or O has won the game.
- `x_won()`, `o_won()`, and `draw()`: Display the game result.

The `main()` function controls the game flow.

## Prerequisites

- A C++ compiler installed on your Windows

## How to Run

To run the game, compile the C++ file with a C++ compiler (like g++), and then run the resulting executable. The game is played in the console.
