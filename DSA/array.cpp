/* #include<iostream>
using namespace std;
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[5]={1,2,3,4,5};
    printArr(arr,5);
}


// max and minimum function in array
#include<iostream>
#include<limits.h>
using namespace std;
int array[5]={1,2,3,4,5};
int findmin(int arr[],int size){
    int min= INT16_MAX;
    cin>>array[5];
    for(int i=0;i<size;i++){
        if(array[i]<min){
         min=array[i];
        }
    }
    return min;
}
int main(){
    cout<<"min elemnt is"<<findmin(array,5)<<endl;
}

// linear serach
#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int array[5]={1,2,3,4,5};
    int key;
    cin>>key;
    bool result=linearsearch(array,5,key);
    if(result){
        cout<<"elemnt present"<<endl;
    }
    else{
        
        cout<<"elemnt not  found"<<endl;
    }
return 0;
}

// find uniue elemnts in array 
#include<iostream>
using namespace std;
void print(int array[], int n) {
for(int i = 0; i < n; i++) {
int j;
for(j=0;j<i;j++) {
if(array[i] == array[j])
    break;
    }
if(j==i)
 cout << array[i] << endl;
}
}
int main() {
    int array[7] = {1, 1, 2, 2, 2, 3, 3};
    print(array, 7);
    return 0;
}
*/

//targetsum
#include<iostream>
using namespace std;
int main(){
    int array[]={3,2,5,10,1,7};
    int size=6;
    int pairs=0;
    int targetsum=17;
    for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
    if(array[i]+array[j]==targetsum){
        pairs ++;
    }
    }
}
cout<<pairs<<endl;
return 0;
}


