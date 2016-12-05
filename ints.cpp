#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> s;
    s.push_back("90");
    s.push_back("08");
    int y = stoi(s[1]);
   
    cout << "int " << y << endl;

/* find the default value for x : it's 0
    int x;
    cout << x << endl;*/

    return 0;
}
