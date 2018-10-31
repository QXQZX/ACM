#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    while (cin >> n)
    {
        char c = 'A';
        for (i = 1; i < n; i++)
        {
            cout << c++ << endl;
            if (c > 'Z')
                c = 'A';
        }
        for (i = 0; i < n; i++)
        {
            cout << c++;
            if (c > 'Z')
                c = 'A';
        }
        cout << endl
             << endl;
    }
    return 0;
}
