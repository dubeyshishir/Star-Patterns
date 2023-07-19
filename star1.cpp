#include <iostream>
using namespace std;

int main()
{
    int gaps, lines, i, k;

    cout <<"Enter number of lines: ";
    cin >> lines;

    for(i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(gaps = 1; s <= lines-i; ++gaps)
        {
            cout <<"  ";
        }

        while(k != (2*i)-1)
        {
            cout << "* ";
            k++;
        }
        cout << endl;
    }   
    return 0;
}
