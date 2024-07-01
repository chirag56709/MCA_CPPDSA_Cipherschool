/* #include<iostream>
using namespace std;
int main(){
    //vreating 2d array
    int arr[3][4];
   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
   }
 
 for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
bool keyispresent(int arr[][4],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if (target==arr[i][j]){
               return true;
            }
            return false;
        }
    }
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   cout<<keyispresent(arr,9,3,4);
    }

#include<iostream>
using namespace std;
int sumofarray(int arr[3][4],int col,int row){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
        cout<<sumofarray(arr,4,3);
    }
    
#include <iostream>
using namespace std;

void waveprint(int arr[][4], int row, int col) {
    for (int i = 0; i < col; i++) {
        if (i % 2 == 1) {
            for (int j = row - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        } else {
            for (int j = 0; j < row; j++) {
                cout << arr[j][i] << " ";
            }
        }
    }
    cout << endl; // To ensure the output ends with a newline
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    waveprint(arr, 3, 4);
    return 0;
}
*/

