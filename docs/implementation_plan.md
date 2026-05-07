#Implementation 

#Feature 1: Move PacMan
Trigger: Player presses a key
PacMan moves in the chosen direction if there is no wall
The position updates and the maze is redrawn

#Feature 2: Eat Dots
Trigger: PacMan moves onto a dot
The dot is removed from the maze
The score increases

#Feature 3: Ghost Movement
Trigger: Each game loop
Ghosts move randomly in the maze
They avoid walls

#Feature 4: Collision with Ghost
Trigger: PacMan touches a ghost
PacMan loses a life.
Game checks if lives reach zero

## Feature 5: Win/Lose System
Trigger: All dots collected or lives = 0
If all dots are gone then win
If lives = 0 then game over