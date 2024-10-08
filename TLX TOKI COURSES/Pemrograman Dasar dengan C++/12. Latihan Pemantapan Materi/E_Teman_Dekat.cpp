#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    vector<pair<int, int>> vec;
    cin >> n >> d;

    for (int i = 0; i < n; i++) {
        int p1, p2;
        cin >> p1 >> p2;
        vec.push_back(make_pair(p1, p2));
    }

    int maxValue = INT_MIN, minValue = INT_MAX; 

    for (int i = 0; i < vec.size() - 1; i++) {
        for (int j = i + 1; j < vec.size(); j++) {
            int diffX = abs(vec[i].first - vec[j].first);
            int diffY = abs(vec[i].second - vec[j].second);
            int sum=0;

            diffX=pow(diffX,d);
            diffY=pow(diffY,d);
            sum=diffX+diffY;

            maxValue = max(maxValue, sum);
            minValue = min(minValue, sum);
        }
    }

    cout<<minValue<<" "<<maxValue;

    return 0;
}
