#include <iostream>
#include <map>

using namespace std;



// struct ProcessNode {
//     int value;
//     int cycle;
//     ProcessNode(int v, int c): value(v), cycle(c) {};
// };

// class LRUCache {
// private:
//     map<int, ProcessNode*> queue;
//     int capacity;
//     int n;
// public:
//     LRUCache(int capacity) {
//         this->capacity = capacity;
//         this->n = 0;
//     }
    
//     int get(int key) {
//         this->susume();
//         if(this->queue.find(key) != this->queue.end()) {
//             this->queue.at(key)->cycle = 0;
//             return this->queue.at(key)->value;
//         } else {
//             return -1;
//         }
//     }
    
//     void put(int key, int value) {
//         this->susume();
//         if(this->queue.find(key) == queue.end()) {
//             if(this->n >= this->capacity) {
//                 this->clean();
//             }
//             this->queue.insert(pair<int, ProcessNode*>(key, new ProcessNode(value, 0)));
//             this->n++;
//         } else {
//             this->queue.at(key)->cycle = 0;
//             this->queue.at(key)->value = value;
//         }
//     }

//     void clean() {
//         int maxCycle = 0;
//         int cleaningKey = 0;
//         map<int, ProcessNode*>::iterator it = this->queue.begin();
//         while(it != this->queue.end()) {
//             if(it->second->cycle > maxCycle) {
//                 cleaningKey = it->first;  
//                 maxCycle = it->second->cycle;
//             }
//             it ++;
//         }
//         if(cleaningKey != -1) {
//             this->queue.erase(cleaningKey);
//             this->n--;
//         }
//     }

//     void susume() {
//         map<int, ProcessNode*>::iterator it = this->queue.begin();
//         while(it != this->queue.end()) {
//             it->second->cycle ++;
//             it ++;
//         }
//     }

//     void print() {
//         map<int, ProcessNode*>::iterator it = this->queue.begin();
//         while(it != this->queue.end()) {
//             cout << it->first << "-" << it->second->cycle << ", ";
//             it++;
//         }
//         cout << endl;
//     }

//     void getN() {
//         cout << "n: " << this->n << endl;
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */

// int main() {
//     int capacity = 2;
//     LRUCache* cache = new LRUCache(capacity);
//     // cache->put(1, 1);
//     // cache->put(2, 2);
//     // cout << cache->get(1) << endl;
//     // cache->put(3, 3);
//     // cout << cache->get(2) << endl;
//     // cache->put(4, 4);
//     // cout << cache->get(1) << endl;
//     // cout << cache->get(3) << endl;
//     // cout << cache->get(4) << endl;

//     cache->put(2, 1);cache->print();
//     cache->put(2, 2);cache->print();
//     cout << cache->get(2) << endl;cache->print();
//     cache->put(1, 1);cache->print();
//     cache->put(4, 1);cache->print();
//     cout << cache->get(2) << endl;cache->print();
// }