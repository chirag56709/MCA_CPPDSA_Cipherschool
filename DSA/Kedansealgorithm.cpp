#include<iostream>
using namespace std;
int maxsubarraysum(int array[],int size){
int max= INT8_MIN;
int sum=0;
for(int i=0;i<size;i++){
    sum+=array[i];
    if(sum>max)
    max=sum;
    if(sum<0)
    sum=0;
}
return max;
}
int main(){
int array[]={-2,-3,4,-1,-2,1,5,-3};
cout<<maxsubarraysum(array,8);
}




