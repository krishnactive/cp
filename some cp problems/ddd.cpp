#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void solveTestCase() {
    int size, constant, delta;
    cin >> size >> constant >> delta;
    vector<int> elements(size * size);
    map<int, int> counts;

    for (int i = 0; i < size * size; i++) {
        int x;
        cin >> x;
        elements[i] = x;
        counts[x]++;
    }

    vector<int> up;

    int minimum = *min_element(begin(elements), end(elements));
    up.push_back(minimum);
    int val = 0;
    // counts[minimum]--;
    
    for (int i = 0; i < size; i++) {
        if (counts[minimum + delta] > 0) {
            up.push_back(minimum + delta);
            // counts[minimum + delta]--;
            delta += delta;
        }
    }

    if (up.size() != size) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < size; i++) {
        int temp = up[i];
        for (int j = 0; j < size; j++) {
            
            if (counts[temp] > 0) {
                counts[temp]--;
                temp += constant;
            } else {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}
