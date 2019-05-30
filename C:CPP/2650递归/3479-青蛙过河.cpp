#include <iostream>
using namespace std;
int jump(int s, int y);
int main() {
    int s, y;
    while (cin >> s >> y) {
        cout << jump(s, y) << endl;
    }
    return 0;
}
int jump(int s, int y) {
    if (s == 0)
        return y + 1;
    else
        return 2 * jump(s - 1, y);
}