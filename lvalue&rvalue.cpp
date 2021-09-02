#include <iostream>

using namespace std;

// returns r-value
int Add(int x, int y)
{
    return x+y;
}

// returns l-value
int& Transform(int &x)
{
    x*=x;
    return x;
}

int main()
{
    //x,y and z are l-values 5,10 and 15 are r-values
    int x = 5;
    int y = 10;
    int z = 15;

    int result = x + y;

    x = Transform(x);

    int && r = 10; // r-value references
    int && r1 = Add(10, 15);    // r-value references

    //int && r2 = x;      // r-value cannot bind to l-value
}