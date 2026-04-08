#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    freopen("triangles.in","r",stdin);
    freopen("triangles.out","w",stdout);
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (x[i] == x[j] && i != j) {
                for (int k = 0; k < n; k++) {
                    if (y[i] == y[k] && i != k) {
                        int base = abs(x[i] - x[k]);
                        int height = abs(y[i] - y[j]);
                        int area = base * height;
                        maxArea = max(maxArea, area);
                    }
                }
            }
        }
    }

    cout << maxArea << endl;
    return 0;
}