

CheckersGame::CheckersGame(int width, int height) :
    board(width, height)
    {
        red = new CheckersPlayer('r', Point2D(height / 2, width / 2));
        black = new CheckersPlayer('b', Point2D(0, 0));
    }

    void moveRed()
    {
        red->move(Direction::UP);
    }

    void moveBlack()
    {
        black->move(Direction::DOWN);
    }

    char checkForWinner() const
    {
        for (auto i = 0; i < red->getPieces().size(); i++) {
            if (!red->pieces[i].isValid()) {
                continue;
            }
            Point2D position = red->pieces[i].getPosition();
            for (int y = position.getY(); y < height; ++y) {
                for (int x = position.getX(); x < width; ++x) {
                    if ((x == position.getX() && y == position.getY()) ||
                        (x == (position.getX() + 1) && y == (position.getY() - 1)) ||
                        (x == (position.getX() - 1) && y == (position.getY() + 1))) {
                        removeSquare(x, y);
                    }
                }
            }
            return 1;
        }
        for (auto i = 0; i < black->getPieces().size(); i++) {
            if (!black->pieces[i].isValid()) {
                continue;
            }
            Point2D position = black->pieces[i].getPosition();
            for (int y = position.getY(); y < height; ++y) {
                for (int x = position.getX(); x < width; ++x) {
                    if ((x == position.getX() && y == position.getY())
