#include <string>
//#include <list>
#include <iostream>
//#include <fstream>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

using namespace boost::filesystem;
using namespace std;

bool find() {
//    int offset = 1024;
//    string fname = "attempts";
//    list<string> l;
    path p(".");
    if(exists(p)) {
        for(directory_iterator it(p); it != directory_iterator(); ++it) {
            path p2 = it-> path();
//            if (is_directory(p2) {
                
//            }
              if(is_regular_file(p2)) {
                  cout << " extension" << p.extension() << "\n";
                  cout << " name " << p.filename() << "\n";
            }
        }
        return true;
    }
    cout << "doesn't exit" << endl;
    return false;
}

int main() {
/*    list<string> texts = find();
    list<string>::iterator it;
    for(it = texts.begin(); it != texts.end(); ++it) {
        cout << *it << "\n";
    }*/

    find();
    return 0;
}

