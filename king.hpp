#ifndef __KING_HPP__
#define __KING_HPP__

using namespace std;

class King : public Piece {
    private:
        int value = 0;
    public:
        King() {};
        
        int getValue() { return this->value; };
};

#endif //__KING_HPP__
