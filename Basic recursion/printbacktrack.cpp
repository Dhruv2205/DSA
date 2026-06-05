// print 1 to n by backtracking

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void f(int i, int n)
{
    if (i < 0)
    {
        return;
    }
    f(i - 1, n + 1);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    f(n, 0);
}