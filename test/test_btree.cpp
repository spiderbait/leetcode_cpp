#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x): val(x) {
        cout << x << endl;
    };
    Node(int x, Node *l, Node *r): val(x), left(l), right(r) {
        cout << x << endl;
    };
};

int main() {
    Node *root = new Node(1, new Node(2), new Node(3));
    for(int i=0; i<3; i++) {
        cout << (root+i) << endl;
    }
}