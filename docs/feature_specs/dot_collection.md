# Dot Collection and Wall Collision — Spec

## Problem statement
Pac-Man can move around the maze, collect dots, and gain score. Pac-Man should not be able to move through walls.

## Types involved
- PacMan: stores position and score
- Maze: stores the board, walls, and dots
- Game: connects Pac-Man movement with the maze

## Public interface
- bool Maze::isWall(int x, int y) const;
- bool Maze::hasDot(int x, int y) const;
- void Maze::removeDot(int x, int y);
- void PacMan::addScore(int points);

## Inputs and outputs
- Input: user types W, A, S, or D
- Output: Pac-Man moves if the space is not a wall
- Output: score increases if Pac-Man collects a dot

## Edge cases
- Pac-Man tries to move into a wall
- Pac-Man moves onto an empty space
- Pac-Man moves onto a dot
- Pac-Man tries an invalid key

## Three tests
- Normal: Pac-Man collects a dot and score increases
- Edge: Pac-Man moves onto an empty space and score stays the same
- Boundary: Pac-Man tries to move into a wall and position does not change

## Design decisions
I will keep this feature simple by using the existing Maze, PacMan, and Game classes. The maze will store dots and walls as characters in a vector of strings, and the game will check the next position before moving Pac-Man.