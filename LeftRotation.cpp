#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, d;
    cin >> n >> d;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        q.push(val);
    }
    
    for (int i = 0; i < d; i++) {
        q.push(q.front());
        q.pop();
    }
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    cout << '\n';
    return 0;
}

