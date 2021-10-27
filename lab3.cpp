#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int Sum, i;
    Sum = 0;
    for (i = 0; i <= a.length(); i++)
    {
            if ('1' <= a[i] and a[i] <= '9')
            {
                Sum = Sum + 1;
            }
            if ('a' <=  a[i] and a[i] <= 'z') 
            {
                Sum = Sum + 1;
            }
    }
    cout << (Sum);
    
}