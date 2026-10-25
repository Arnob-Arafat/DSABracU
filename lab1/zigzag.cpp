#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    vector<vector<int>> v = {
        {3, 8, 4, 6, 1}, 
        {7, 2, 1, 9, 3}, 
        {9, 0, 7, 5, 8}, 
        {2, 1, 3, 4, 0}, 
        {1, 4, 2, 8, 6}
    };

    int row = 0, col = 0;
    int len = v.size();
    int c = v[0].size();

    while(col < c){

        if(col%2 == 0) {
            if(row == len-1){
                cout << v[row][col] << " ";
                row--;
                col++;
                cout << endl;
                cout << v[row][col] << " ";
                row -= 2;
                
            }
            else if (row == len-2){
                cout << v[row][col] << " ";
                row++;
                col++;
                cout << endl;
                cout << v[row][col] << " ";
                row -= 2;
            }
            else{
                cout << v[row][col] << " ";
                row += 2;
            }
            
        }
        else {
            if (row == 0){
                cout << v[row][col] << " ";
                row++;
                col++;
                cout << endl;
                cout << v[row][col] << " ";
                row += 2;

            }
            else if (row == 1){
                cout << v[row][col] << " ";
                row--;
                col++;
                cout << endl;
                cout << v[row][col] << " ";
                row += 2;
                
            }
            else{
                cout << v[row][col] << " ";
                row += 2;
            }        
        } 
    }
}