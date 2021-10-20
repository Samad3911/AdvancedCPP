#include <iostream>
#include <cstring>

using namespace std;

template <typename T>

T Max(T x, T y){
    std::cout<<typeid(x).name()<<std::endl;
    return x > y ? x : y;
}

//Explicit instantiation
template char Max(char x, char y);

//Explicit Specialization
template<> const char* Max(const char *x, const char *y){
    std::cout<<"Max(const char*)"<<std::endl;
    return strcmp(x, y) > 0 ? x : y;
}



int main()
{
    std::cout<<"Max of two integer elements is: "<<Max(20, 30)<<std::endl;
    std::cout<<"Max of two floating elements is: "<<Max(20.56789f, 30.68976f)<<std::endl;
    std::cout<<"Max of two double elements is: "<<Max(20.56789, 30.68976)<<std::endl;

    const char* a {"A"};
    const char* b {"B"};
    std::cout<<"Max of two char elements is: "<<Max(a, b)<<std::endl;

    return 0;
}