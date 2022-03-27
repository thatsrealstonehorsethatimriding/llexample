#include<iostream>

using namespace std;

// Every recursive process consists of a base case that is processed without recursion.
// A recursive case that reduces the problem into 1 or more recursive cases.

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    return n*fact(n-1);
}

int main()
{
    cout<<fact(5);
}