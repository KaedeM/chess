#ifndef __QUEEN_HPP__
#define __QUEEN_HPP__

using namespace std;

class Queen : public Piece {
    private:
        int value = 0;
    public:
        Queen() {};
        
        int getValue() { return this->value; };
};

#endif //__QUEEN_HPP__
