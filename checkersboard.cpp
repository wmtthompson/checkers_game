CheckersBoard::CheckersBoard(int width, int height) :
    width(width),
    height(height)
    {
        squares.reserve(width * height);
    }

    const Square& CheckersBoard::getSquare(int x, int y) const
    {
        if (x < 0 || y < 0 || x >= width || y >= height)
        {
            throw std::out_of_range("Not a valid square");
        }
        return squares[x * height + y];
    }

    void CheckersBoard::setSquare(int x, int y, char color)
    {
        if (x < 0 || y < 0 || x >= width || y >= height)
        {
            throw std::out_of_range("Not a valid square");
        }
        Square& square = squares[x * height + y];
        square.setColor(color);
    }

    void CheckersBoard::removeSquare(int x, int y)
    {
        if (x < 0 || y < 0 || x >= width || y >= height)
        {
            throw std::out_of_range("Not a valid square");
        }
        squares[x * height + y].remove();
    }
};

// class CheckersGame {
// private:
//     CheckersBoard board;
//     CheckersPlayer *red = nullptr, *black = nullptr;

// public:
//     CheckersGame(int width, int height) :
//         board(width, height)
//     {
//         red = new CheckersPlayer('r', Point2D(height / 2, width / 2));
//         black = new CheckersPlayer('b', Point2D(0, 0));
//     }

//     void moveRed()
//     {
//         red->move(Direction::UP);
//     }

//     void moveBlack()
//     {
//         black->move(Direction::DOWN);
//     }

//     char checkForWinner() const
//     {
//         for (auto i = 0; i < red->getPieces().size
//     }
// };

// Checkers.h
// class CheckersPlayer {
// private:
//     char color;
//     Position2D position;
//     int score;
//     vector<Piece*> pieces;

// public:
//     CheckersPlayer(char color, Position2D position) : color(color), position(position) {}

//     void move(Direction dir) {
//         if (!canMove(dir)) {
//             return;
//         }
//         position.move(dir);
//         score += moveScore(dir);
//     }

//     int getScore() const {
//         return score;
//     }

//     Position2D getPosition() const {
//         return position;
//     }

//     char getColor() const {
//         return color;
//     }

//     vector<Piece*> getPieces() const {
//         return pieces;
//     }
// };

// class Piece : public Board {
// private:
//     char color;
//     Position2D position;

// public:
//     Piece(char color, Position2D position) : color(color), position(position) {}

//     char getColor() const {
//         return color;
//     }

//     Position2D getPosition() const {
//         return position;
//     }

//     void moveTo(Position2D target) {
//         position.moveTo(target);
//     }
// };

// class CheckersBoard {
// private:
//     int width, height;
//     vector<Square> squares;

// public:
//     CheckersBoard(int width, int height) : width(width), height(height) {
//         squares.reserve(width * height);
//     }

//     Square getRandomSquare() {
//         int x = static_cast<int>(std::random_device{()}) % width;
//         int y = static_cast<int>(std::random_device{()}) % height;
//         return squares[x * height + y];
//     }

//     const Square& getSquare(int x, int
