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
    shared_ptr<Point> point {new Point(2, 5)};       //creating an shared ptr of Point class
    point->print();
    Point* p = point.get();                         // if we want a raw pointer then we can call get method on the smart pointer
    p->print();

    shared_ptr<Point> point2 = point;              // Creating copy of shared_ptr is allowed                            
  
    std::cout<<"Reference count is: "<<point2.use_count()<<std::endl;     //gives the reference count

    point2.reset();                       // deletes the underlying pointer and decrements the reference count

    std::cout<<"Reference count is: "<<point2.use_count()<<std::endl;

}