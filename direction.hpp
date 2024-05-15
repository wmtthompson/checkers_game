class Direction {
    public:
    enum directionEnum{
        up,
        down,
        left,
        right
    };

    Direction():dir(directionEnum::up) {};

    Direction(directionEnum d):dir(d) {};

    enum directionEnum getDir() {return dir;}

private:
    directionEnum dir;
};