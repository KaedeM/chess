#ifndef __BOARD_HPP__
#define __BOARD_HPP__

using namespace std;

class Piece;

class Board {
    private:
        vector< vector<int> > board;
    public:
        Board() {};
        pair<char,int> get_position(Piece* piece) {  }
}

#endif //__BOARD_HPP__
