#include <iostream>
using namespace std;

int main() {

    void* a;
    cout << "num: ";
    cin >> a;
    int x = *((int*)(&a));

    cout << x  << endl;

    return 0;
}
