#ifndef __BISHOP_HPP__
#define __BISHOP_HPP__

using namespace std;

class Bishop : public Piece {
    private:
        int value = 0;
    public:
        Bishop() {};
        
        int getValue() { return this->value; };
};

#endif //__BISHOP_HPP__
