#ifndef PACMAN_H
#define PACMAN_H

class PacMan {
private:
    int x;
    int y;
    int lives;
    int score;

public:
    PacMan();
    PacMan(int startX, int startY);

    int getX() const;
    int getY() const;
    int getLives() const;
    int getScore() const;

    void move(char direction);
    void loseLife();
    void addScore(int points);
};

#endif