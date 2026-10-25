#include <bits/stdc++.h>
using namespace std;


int main(void){
    vector<vector<int>> v = {
        {0, 2, 2, 0},
        {50, 1, 2, 0},
        {2, 2, 2, 0},
        {1, 100, 2, 0}
    };

    int points = 0;
    int len;

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < (len = v[i].size()); j++){
            if (v[i][j] == 1) v[i][j] = 0;
        }
    }

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < (len = v[i].size()); j++){
            if (v[i][j]%50 == 0 && v[i][j] != 0){
                if (i == 0 and j == 0) points += v[i+1][j] + v[i][j+1];
                else if (i == 0 and j == len-1) points+= v[i+1][j] + v[i][j-1];
                else if (i == len-1 and j == 0) points += v[i-1][j] + v[i][j+1];
                else if (i == len-1 and j == len-1) points += v[i-1][j] + v[i][j-1];
                else if (i == 0) points += v[i+1][j] + v[i][j+1] + v[i][j-1];
                else if (j == 0) points += v[i+1][j] + v[i][j+1] + v[i-1][j];
                else if (i == len-1) points += v[i-1][j] + v[i][j+1] + v[i][j-1];
                else if (j == len-1) points += v[i-1][j] + v[i][j-1] + v[i][j+1];
                else points += v[i+1][j] + v[i][j+1] + v[i][j-1] + v[i-1][j];
            }
        }
    }

    cout << points << endl;
}