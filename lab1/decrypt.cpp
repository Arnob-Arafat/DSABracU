#include <bits/stdc++.h>
using namespace std;


int main(void){
    vector<vector<int>> v = {
        {1, 3, 1},
        {6, 4, 2},
        {5, 1, 7},
        {9, 3, 3},
        {8, 5, 4}
    };

    vector<int> d;
    int diff;

    for (int i = 0; i < v[0].size()-1; i++){
        diff = 0;
        for (int j = 0; j < v.size(); j++){
            diff += v[j][i+1] - v[j][i];
        }
        d.push_back(diff);
    }

    for (int x : d) cout << x << " ";
    cout << endl;
}