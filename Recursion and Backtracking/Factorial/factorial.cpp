#include <bits/stdc++.h>
using namespace std;
int factorial(int x)
{
    if (x == 1)
    return 1;
    return x * factorial(x-1);

}
int main()
{
    int x;
    cin >> x;
    int fact = factorial(x);
    cout << fact << endl;
    
}