#ifndef __KNIGHT_HPP__
#define __KNIGHT_HPP__

using namespace std;

class Knight : public Piece {
    private:
        int value = 0;
    public:
        Knight() {};
        
        int getValue() { return this->value; };
};

#endif //__KNIGHT_HPP__
