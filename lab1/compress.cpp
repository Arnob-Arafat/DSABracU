#include <bits/stdc++.h>
using namespace std;


int main(void){
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {1, 3, 5, 2},
        {-2, 0, 6, -3}
    };


    vector<vector<int>> compressed;
    int sum = 0;
    vector<int> s;

    for(int i = 0; i < v.size()-1; i+=2){

        for (int j = 0; j < v[i].size()-1; j+=2){
            sum = v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1];
            s.push_back(sum);
        }
        compressed.push_back(s);
        s.clear();
    }

    for(int i = 0; i < compressed.size(); i++){
        for (int j = 0; j < compressed[i].size(); j++){
            cout << compressed[i][j] << " ";
        }
        cout << endl;
    }

}
