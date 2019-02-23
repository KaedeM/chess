#ifndef __ROOK_HPP__
#define __ROOK_HPP__

using namespace std;

class Rook : public Piece {
    private:
        int value = 0;
    public:
        Rook() {};
        
        int getValue() { return this->value; };
};

#endif //__ROOK_HPP__
