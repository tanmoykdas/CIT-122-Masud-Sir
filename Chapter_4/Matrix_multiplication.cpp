#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Give your first matrixs row and column: ";
    int n1, m1;
    cin >> n1 >> m1;
    int a[n1][m1];
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < m1; j++){
            cin >> a[i][j];
        }
    }
    cout << "Give your second matrixs row and column: ";
    int n2, m2;
    cin >> n2 >> m2;
    int b[n2][m2];
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < m2; j++){
            cin >> b[i][j];
        }
    }
    if(m1 != n2){
        cout << "Multiplication is not possible..";
    } else {
        int c[n1][m2];
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m2; j++){
                c[i][j] = 0;
            }
        }
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m2; j++){
                for(int k = 0; k < n1; k++){
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i = 0; i < n1; i++){
            for(int j = 0; j < m2; j++){
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
}