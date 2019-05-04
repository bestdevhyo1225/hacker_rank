#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[6][6];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }
    }
    
    const int dy[] = {-1, -1, -1, 1, 1, 1};
    const int dx[] = {-1, 0, 1, -1, 0, 1};
    
    int ans = 0;
    for (int y = 1; y < 5; y++) {
        for (int x = 1; x < 5; x++) {
            int sum = arr[y][x];
            for (int k = 0; k < 6; k++) {
                sum += arr[y + dy[k]][x + dx[k]];
            }
            ans = max(ans, sum);
        }
    }
    
    cout << ans << '\n';
    return 0;
}

