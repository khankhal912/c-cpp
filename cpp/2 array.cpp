#include <iostream>
#include <array>
using namespace std;
int main()
{
    int a[5][5], b, row, coloum;
    for (row = 0; row < 3; row++)
    {
        for (coloum = 0; coloum < 3; coloum++)
        {
            cout << "\n Enter [a]" << row << coloum << ": ";
            cin >> a[row][coloum];
        }
    }

    cout<<"\n enter delet value :";
    cin>>b;

    cout << "\n Matrix a is\n";
    for (row = 0; row < 3; row++)
    {
        for (coloum = 0; coloum < 3; coloum++)
        {
            if(a[row][coloum]==b)
            {
                cout<<"  ";    
            }
            else
            {
                cout << a[row][coloum]<<" ";    
            }    
        }
        cout << "\n";
    }
}