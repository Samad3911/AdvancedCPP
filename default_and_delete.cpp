#include <iostream>

using namespace std;

class Point{
    int m_x {0};
    int m_y {0};

    public:
    Point() = default;          // when you want compiler to synthesis default constructor for us
    Point(int x, int y)
    {
       this->m_x = x;
       this->m_y = y;
    }

    Point(const Point&) = delete;       // when we don't want to create copy of Point object

    void print()
    {
        std::cout<<"X is: "<<this->m_x<<" "<<"Y is: "<<this->m_y<<std::endl;
    }
};
int main()
{
    Point p1;
    p1.print();

    //Point p2 = p1;        // it will throw error use of deleted function ‘Point::Point(const Point&)

}