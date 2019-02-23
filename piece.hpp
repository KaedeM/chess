#ifndef __PIECE_HPP__
#define __PIECE_HPP__

using namespace std;

class Piece {
    private:
        bool moved = 0;
        bool captured = 0;
    public:
        Pieces() {};
        
        bool has_moved() { return this->moved; }
        bool is_captured() { return this->captured; }
        
        virtual int getValue() = 0;
        virtual /*type*/ canMove() = 0; //Returns locations that the piece can move.
        virtual void move( /*variable holding location*/ ) = 0;
};

#endif //__PIECE_HPP__