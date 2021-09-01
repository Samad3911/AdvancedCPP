#include <iostream>

using namespace std;

class Point{
    int m_x;
    int m_y;

    public:
    Point():Point(0,0){                                   //delegating constructor helps in removing duplicate codes
       std::cout<<"In default constructor"<<std::endl;
    }
    Point(int x, int y)
    {
       this->m_x = x;
       this->m_y = y;
       std::cout<<"In parameterised constructor"<<std::endl;
    }
};
int main()
{
    Point p1;

}