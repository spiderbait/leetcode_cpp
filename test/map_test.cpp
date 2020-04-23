#include <iostream>
#include <map>

using namespace std;

struct ProcessNode {
    int value;
    int cycle;
    ProcessNode(int v, int c): value(v), cycle(c) {};
};

class Map {
public:
    void print(map<int, int> *mp) {
        map<int, int>::iterator it = mp->begin();
        while(it != mp->end()) {
            cout << it->first << " ";
            it ++;
        }
        cout << endl;
    }
};

int main() {
    // map<int, ProcessNode*> mp;
    // mp.insert(pair<int, ProcessNode*>(1, new ProcessNode(1, 10)));
    // cout << mp.at(1)->value << endl;
    // mp.at(1)->value = 0;
    // cout << mp.at(1)->value << endl;

    Map m;
    map<int, int> mp;
    mp.insert(pair<int, int>(1, 1));
    m.print(&mp);
    mp.insert(pair<int, int>(2, 2));
    m.print(&mp);
    mp.erase(1);
    m.print(&mp);

}