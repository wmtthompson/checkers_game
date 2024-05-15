#include "direction.hpp"

class Position2DAbstract
{
    private:
    int x;
    int y;

    public:
    virtual void move(Direction dir) = 0;

    virtual void moveTo(Direction dir) = 0;

    virtual int getX() = 0;

    virtual int getY() = 0;
};

class Position2D:Position2DAbstract
{
    public:
    void move(Direction dir);
    void moveTo(Direction dir);
    int getX();
    int getY();
};