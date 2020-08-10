#include <iostream>
using namespace std;

class BSTNode
{
public:
    int Key;
    BSTNode * Left;
    BSTNode * Right;
    BSTNode * Parent;
};

class Tree
{
    private:
        BSTNode * root;
    public:
        Tree(int key) {
            root->Key = key;
        }

        void add(int key) {
            
        }

};

void traverse(BSTNode *root) {
    BSTNode *t = root;
    if(t != nullptr) {
        cout << t->Key << endl;
        traverse(t->Left);
        traverse(t->Right);
    }
}

int main() {
    Tree t(50);
    traverse(&t);
}
