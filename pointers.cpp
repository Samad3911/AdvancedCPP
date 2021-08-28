#include <iostream>

int Add(int *a, int *b){
    return (*a+(*b));
}

void AddVal(int *a, int *b, int *result){
    *result = (*a) + (*b);
}

void Swap(int *a, int *b){
    int temp{0};
    temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a=10,b=20,result=0;
    std::cout<<"Addition of a and b is "<<Add(&a, &b)<<std::endl;
    AddVal(&a, &b, &result);
    std::cout<<"Result is: "<<result<<std::endl;
    std::cout<<"Values before swapping is "<<a<<" "<<b<<std::endl;
    Swap(&a, &b);
    std::cout<<"Values after swapping is "<<a<<" "<<b<<std::endl;
    return 0;
}