#include <iostream>
using namespace std;
int main(){
    int A[2][3] = {{1, 2, 3}, 
                    {4, 5, 6}};
    int B[3][2] = {{2, 4}, 
                    {6, 8}, 
                    {10, 12}};
    //cout << sizeof(A)/sizeof(A[0]) << endl;

    int AB[sizeof(A)/sizeof(A[0])][sizeof(B[0])/sizeof(B[0][0])];

    for (int i = 0; i< sizeof(A)/sizeof(A[0]); i++){ //iterates the first dim
        for(int j = 0; j<sizeof(B[0])/sizeof(B[0][0]); j++){ //iterates the 2nd dim
            AB[i][j]=0;
            for(int k = 0; k<sizeof(A[0])/sizeof(A[0][0]); k++)
                AB[i][j] += (A[i][k] * B[k][j]);
        }
    }

    for (int i = 0; i< sizeof(A)/sizeof(A[0]); i++){ //iterates the first dim
        for(int j = 0; j<sizeof(B[0])/sizeof(B[0][0]); j++) //iterates the 2nd dim
            cout << AB[i][j] << " ";
        cout << endl;
    }
}