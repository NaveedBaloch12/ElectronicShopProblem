#include <iostream>
using namespace std;

// User Defined Functions....
int getMoneySpent(int b, int KB[], int USB[], int n, int m)
{
    long moneySpent = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            long Sum = KB[i] + USB[j];
            if(Sum >= moneySpent || Sum <= b)
            {
                moneySpent = Sum;
            }
        }
    }
    if(moneySpent > b)
    {
        return -1;
    }

    return moneySpent;
}
int main()
{
    int b, n, m;
    cin>> b;
    if(b < 1 || b > 1000000)
    {
        cout<<"Invalid Input";
        return 0;
    }

    cin>> n;
    cin >> m;

    if(n < 1 || n > 1000 || m < 1 || m > 1000)
    {
        cout<<"Invalid Input";
        return 0;
    }

    int KB[n];
    int USB[m];

    for(int i=0; i<n; i++)
    {
        cin>> KB[i];
        if(KB[i] < 1 || KB[i] > 1000000)
        {
            cout<<"Invalid Input";
            return 0;
        }
    }
    for(int i=0; i<m; i++)
    {
        cin>> USB[i];
        if(USB[i] < 1 || USB[i] > 1000000)
        {
            cout<<"Invalid Input";
            return 0;
        }
    }

    cout<< getMoneySpent(b, KB, USB, n, m);

    return 0;
}