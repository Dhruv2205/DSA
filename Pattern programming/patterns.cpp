#include <iostream>
using namespace std;
void printp1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printp2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printp3(int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printp4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}
void printp5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printp6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printp7(int n)
{
    for (int i = 1; i <= n; i++)
    { // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printp8(int n)
{
    for (int i = 1; i <= n; i++)
    { // for space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printp9(int n)
{
    for (int i = 1; i <= n; i++)
    { // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    { // for space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        // for space
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printp10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i > n)
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
        }
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void printp11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void printp12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void printp13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}
void printp14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printp15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printp16(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {

        for (char j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}
void printp17(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // characters
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            {
                cout << ch;
                if (j <= breakpoint)
                {
                    ch++;
                }
                else
                    ch--;
            }
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printp18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'E' - i + 1; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void printp19(int n)

{
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * i - 2; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    int inis = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // stars

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space

        for (int j = 1; j <= inis; j++)
        {
            cout << " ";
        }
        // stars

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        inis -= 2;
        cout << endl;
    }
}
void printp20(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
void printp21(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n) {cout<<"*";}
            else cout<<" ";
        }cout<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    printp21(n);
}

