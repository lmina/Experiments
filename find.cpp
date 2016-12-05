#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <list>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/lexical_cast.hpp>

using boost::lexical_cast;
using boost::bad_lexical_cast;
using namespace boost::filesystem;
using namespace std;

bool find(string s) {
    path p(s);
    if(exists(p)) {
        for(directory_iterator it(p); it != directory_iterator(); ++it) {
            path p2 = it->path();
            if (is_directory(p2) && (p2.filename()).find(".") == string::npos) { 
                cout << "directory " << p2.string() << "\n";
                find(p2.string());
            }
            else if(is_regular_file(p2) && p2.extension() == ".mp3") {
/*                cout << p2.file_string() << "\n";
                cout << " name " << p2.filename() << "\n";*/
                fstream f(p2.string().c_str());
                f.seekg(0, ios::end);
                int start = f.tellg();
                f.seekg(start - 125, ios::beg);
                char* title = new char[31], *ar = new char[31], *al = new char[31], *year = new char[5], *comm = new char[31];
                if(f.is_open()) {
                    f.read(title, 30);
                    title[30] = 0;
                    f.read(al, 30);
                    al[30] = 0;
                    f.read(ar, 30);
                    ar[30] = 0;
                    f.read(year, 4);
                    year[4] = 0;
                    f.read(comm, 30);
                    comm[30] = 0;
                }
                f.close();
                string a(title);
                string b(ar);
                string c(al);
                string d(year);
                string e(comm);
                cout << a << " " << b << " " << c << " " << d << " " << e << "\n";
            }
        }
        return true;
    }
    cout << "doesn't exit" << endl;
    return false;
}

int main() {

/*    int x = 3452;
    try {
        string s =  lexical_cast<string, int>(x);
        cout << s << endl;
    }catch(bad_lexical_cast &) {
        cout << "not changed to string" << endl;
    }

    char* l = new char[3];
    l[0] = 'v'; l[1] = 'a'; l[2] = 'l';
    string t(l);
    string p;
    p = t;

    string q = "oh my my sull";
    if(q.find("z") != string::npos)
        cout << "no happening\n";

    string o = "123";
    int a = stoi(o);
    cout << a << endl;
    int b;
    string s = "22222222222222222222222222222222222222222222222222222222222222";
    b = atoi(s.c_str());
    cout << b << endl;*/
//    find(".");

    list<string*> is;

    string l = "list", m = "mymy", n = "narnar";
    is.push_back(&l);
    is.push_back(&m);
    is.push_back(&n);

    list<string*>::iterator it;
    for (it = is.begin(); it != is.end(); ++it) {
        string* b = *it;
        cout << *b << "\n";
    }












    is.clear();

    return 0;
}

