#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {
    int x, y, t;

    cin >> x >> y >> t;
    cout << setfill('0') << setw(3) << x << " y " << y << endl;

    return 0;
}
