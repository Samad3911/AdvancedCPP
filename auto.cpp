#include <iostream>

using namespace std;

int Sum(int x, int y){
    return x+y;
}

int main(){
    auto i = 10;
    auto j = 43.4f;
    auto result = Sum(i,j);
    auto z{12};
    return 0;
}