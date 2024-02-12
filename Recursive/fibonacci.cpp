// A Fibonacci series requrcive implementation in C++
// The Fibonacci series is a series of numbers in which each number (Fibonacci number) is the sum of the two preceding numbers.

#include <iostream>

using namespace std;

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n = 5;
    cout<<"Fibonacci of "<<n<<" is:";

    for(int i=0 ; i<n ; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}