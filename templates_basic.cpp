#include <iostream>
#include <string>

using namespace std;

template <typename T>

T Add(const T& x, const T& y){
    return x+y;
}

template <typename T>
T ArraySum(T* pArr, const T& size){
     T sum{};
     for(int i=0;i<size;i++){
         sum += *(pArr+i);
     }
     return sum;
}

int main()
{
    std::cout<<"Sum of two integer elements is: "<<Add(20, 30)<<std::endl;
    std::cout<<"Sum of two floating elements is: "<<Add(20.56789f, 30.68976f)<<std::endl;
    std::cout<<"Sum of two double elements is: "<<Add(20.56789, 30.68976)<<std::endl;
    std::cout<<"Sum of two char elements is: "<<Add('A', '0')<<std::endl;

    int arr[5] = {1,5,8,9,11};
    std::cout<<"Sum of the array is: "<<ArraySum(arr, 5)<<std::endl;
    return 0;
}