#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    int temp;
    if (n <= 1)
        return (1);
    else
        temp = n * factorial(n - 1);
    return (temp);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    
    cin >> n;
    cout << factorial(n);
    return 0;
}
