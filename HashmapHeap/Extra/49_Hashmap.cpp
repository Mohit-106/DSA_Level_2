#include <bits/stdc++.h>
using namespace std;
template <typename K, typename V>
class HashmyMap {
private:
    class HMNode {
        public:
        K key;
        V value;
        HMNode(K key, V value) : key(key), value(value) {}
    };

    int size; // n
    vector<vector<HMNode>> buckets; // N = buckets.size()

public:
    HashmyMap() {
        initbuckets(4);
        size = 0;
    }

private:
    void initbuckets(int N) {
        buckets.resize(N);
    }

public:
    void put(K key, V value) {
        // write your code here
    }

    V get(K key) {
        // write your code here
    }

    bool find(K key) {
        // write your code here
    }

    V remove(K key) {
        // write your code here
    }

    vector<K> keyset() {
        // write your code here
    }

    int getSize() {
        // write your code here
    }

    void display() {
        cout << "Display Begins" << endl;
        for (int bi = 0; bi < buckets.size(); bi++) {
            cout << "Bucket" << bi << " ";
            for (const auto& node : buckets[bi]) {
                cout << node.key << "@" << node.value << " ";
            }
            cout << "." << endl;
        }
        cout << "Display Ends" << endl;
    }
};

int main() {
    HashmyMap<string, int> myMap;
    

    return 0;
}
