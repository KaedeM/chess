#ifndef __PAWN_HPP__
#define __PAWN_HPP__

using namespace std;

class Pawn : public Piece {
    private:
        int value = 0;
        bool changed = 0;
    public:
        Pawn() {};
        
        int getValue() { return this->value; };
};

#endif //__PAWN_HPP__
