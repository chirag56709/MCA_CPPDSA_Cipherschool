#include<iostream>
using namespace std;
/*
bool issorter(int arr[],int size){
    if(size==0 || size==1)return true;
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return issorter(arr+1,size-1);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    if(issorter(arr,5)){
        cout<<"array sorted";
            }
else{
cout<<"not sortted";
}    
}*/
int findsum(int arr[],int size){
    if(size==0){
        return 0;
    }
    return arr[0]+findsum(arr+1,size-1);
}
int main()
{
    int arr[5]={2,5,7,2,1};
   cout<<findsum(arr,5);
}