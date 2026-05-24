# Final Reflection

## Prompt 1: Plan vs. Reality

My original plan was to make a terminal based PacMan game with movement, dots, ghosts, collision, scoring, power mode, and multiple levels. What I actually built is a smaller but working version of that idea.

### Feature Status
- Pac-Man movement: Done
- Score tracking: Done
- Dot collection: Done
- Basic wall collision: Done
- Ghost movement: Done
- Ghost collision: Done
- Power mode: Not started
- Multiple levels: Not started
- Advanced ghost AI: Cut for now

The biggest difference was ghost AI. At first, I thought I could make ghosts chase PacMan like the real game, but I realized that would take more logic and testing. I decided to use random ghost movement instead because it was realistic and still made the game feel interactive.

## Prompt 2: Design Decisions I Would Change

If I started over, I would separate the display logic from the game logic more clearly. Right now, the `Game` and `Maze` classes are connected to both the board data and how the board is shown in the terminal. A cleaner design would have one class for storing the maze and another function or class for printing the screen.

I would also plan the `Game` class more carefully. It controls the player, ghosts, maze, collisions, and game state, so it can easily become too large. If I continued this project, I would split some responsibilities into smaller helper functions.

## Prompt 3: What I Learned

### Technical
I learned more about organizing larger C++ projects across multiple files and classes. This project had separate classes for Pac-Man, Ghosts, Maze, and Game, and I had to connect them through headers, implementations, CMake, and testing instead of keeping everything in one file.

### Design
I learned why separation of concerns matters. When movement, scoring, collision, and display are all connected, one small change can affect multiple parts of the program. This made me see why classes should have clear jobs.

### Process
I learned how to use Git branches and pull requests better. At first, the Git workflow felt confusing, but after making feature branches for movement, dot collection, and ghost collision, it became more natural.

## Prompt 4: What Is Left to Finish

1. Power mode — This would let Pac-Man eat ghosts after collecting a power pellet.
2. Multiple levels — This would make the game feel more complete and increase difficulty.
3. Smarter ghost AI — Random movement works, but ghosts chasing Pac-Man would make the game more challenging.
4. Better terminal display — The game could clear and redraw the screen more smoothly.
5. Game win condition — The game should detect when all dots are collected.
6. Better input handling — The program should handle invalid input more cleanly.

## Prompt 5: Workflow Reflection

The feature branch and pull request workflow became much more natural after doing it multiple times. Creating a branch, making commits, pushing, and opening a PR now makes more sense to me.

The part that still feels a little slow is reviewing and merging pull requests, especially because GitHub did not let me approve my own PR. If I were working with another developer, this workflow would matter even more because it would let someone else review my code before it gets merged.

## Prompt 6: AI Use

I used AI to help with debugging, planning small implementation steps, and understanding errors. It was most helpful when I gave it a specific error message or asked for one small step at a time. It was less helpful when the answer was too broad or tried to add features that were too advanced. 