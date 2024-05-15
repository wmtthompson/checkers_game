// Checkers.h
class CheckersPlayer {
private:
    char color;
    Position2D position;
    int score;
    vector<Piece*> pieces;

public:
    CheckersPlayer(char color, Position2D position) : color(color), position(position) {}

    void move(Direction dir) {
        if (!canMove(dir)) {
            return;
        }
        position.move(dir);
        score += moveScore(dir);
    }

    int getScore() const {
        return score;
    }

    Position2D getPosition() const {
        return position;
    }

    char getColor() const {
        return color;
    }

    vector<Piece*> getPieces() const {
        return pieces;
    }
};

class Piece : public Board {
private:
    char color;
    Position2D position;

public:
    Piece(char color, Position2D position) : color(color), position(position) {}

    char getColor() const {
        return color;
    }

    Position2D getPosition() const {
        return position;
    }

    void moveTo(Position2D target) {
        position.moveTo(target);
    }
};

class CheckersBoard {
private:
    int width, height;
    vector<Square> squares;

public:
    CheckersBoard(int width, int height) : width(width), height(height) {
        squares.reserve(width * height);
    }

    Square getRandomSquare() {
        int x = static_cast<int>(std::random_device{()}) % width;
        int y = static_cast<int>(std::random_device{()}) % height;
        return squares[x * height + y];
    }

    const Square& getSquare(int x, int
