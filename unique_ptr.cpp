#include <iostream>
#include <memory>

using namespace std;

class Point{
    int m_x {0};
    int m_y {0};

    public:
    Point() = default;          
    Point(int x, int y)
    {
       this->m_x = x;
       this->m_y = y;
       std::cout<<"Constructor called"<<std::endl;
    }

    void print()
    {
        std::cout<<"X is: "<<this->m_x<<" "<<"Y is: "<<this->m_y<<std::endl;
    }

    ~Point()
    {
        std::cout<<"Destructor called"<<std::endl;
    }
};

int main()
{
    unique_ptr<Point> point {new Point(2, 5)};       //creating an unique ptr of Point class
    point->print();
    point.reset(new Point(3, 5));                   // it will first destruct the previous underlying pointer and will assign the new underlying pointer
    Point* p = point.get();                         // if we want a raw pointer then we can call get method on the smart pointer
    p->print();

    //unique_ptr<Point> point2 = point;              // it will throw compiler error as the copy constructor is deleted for unique_ptr and it will not allow to create copy of unique_ptr                            
  
    unique_ptr<Point> point2 = std::move(point);   // we cannot copy unique_ptr but we can share it using std::move() method it will transfer the state of point to point2
    point2->print();

}