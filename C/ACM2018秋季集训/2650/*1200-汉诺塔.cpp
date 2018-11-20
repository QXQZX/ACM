//不太明白  什么东西
#include <iostream>
#include <cstdio>
using namespace std;
void move(int n, char a, char b, char c);
int main()
{
    int n;
    cin >> n;
    move(n, 'A', 'B', 'C');
    cout << endl;
    return 0;
}
void move(int n, char a, char b, char c)
{
    if (n == 1)
        printf("Move disk %d from %c to %c\n", n, a, c);
    else
    {
        move(n - 1, a, c, b);
        printf("Move disk %d from %c to %c\n", n, a, c);
        move(n - 1, b, a, c);
    }
}