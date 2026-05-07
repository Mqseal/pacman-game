#ifndef GHOST_H
#define GHOST_H

class Ghost {
private:
    int x;
    int y;

public:
    Ghost();
    Ghost(int startX, int startY);

    int getX() const;
    int getY() const;

    void move();
};

#endif