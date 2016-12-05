#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define s string

void willItWork(const string& st){
    cout << st << endl;
}

int main() {
    string i = "234 hello";
    string j[2] = {" how do ", " you do? "};
    willItWork(string("Hello").append(j[1]));

    vector<string> l;
    l.push_back("aha");
    l.push_back("mymy");
    l.push_back("sasa");
    s k = "hi";

    for(int x = 0; x < l.size(); ++x){
        cout << l[x];
    }

    return 0;
}
