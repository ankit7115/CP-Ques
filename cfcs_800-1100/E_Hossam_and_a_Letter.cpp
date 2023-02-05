#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Read the grid and count the number of perfect and medium squares
    int num_perfect = 0, num_medium = 0;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == '.') {
                num_perfect++;
            } else if (grid[i][j] == 'm') {
                num_medium++;
            }
        }
    }

    // The maximum number of walls is the minimum of the number of perfect squares and
    // the number of medium squares plus twice the number of perfect squares minus 1
    int ans = min(num_perfect, num_medium + 2 * num_perfect - 1);

    // If there are not enough perfect squares, the answer is 0
    if (ans < 2) {
        cout << 0 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
