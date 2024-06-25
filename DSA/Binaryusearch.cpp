/*#include<iostream>
  using namespace std;
  bool binarysearch(int array[],int key,int size){
 int start=0;
 int end=size-1;
 int mid =(start+end)/2;
  while(start<=end){
 if(array[mid]==key){
    return true;
  }
  if(key>array[mid]){
  start=mid+1;
    }
   else{
   end=mid-1;
   }
   mid=(start+end)/2;
 }
 return false;
}

int main(){
  int array[7]={0,1,2,3,4,5,6};
  int size=7;
  int key=6;
  bool found = binarysearch(array, key, size);
  if(found){
    cout<<"Key found in the array"<< endl;
    }else{
        cout<<"Key not found "<< endl;
    }
   return 0;
}
//first occurence in binary search
#include <iostream>
using namespace std;

int firstOccurrence(int array[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (array[mid] == key){
            result=mid;
            end = mid - 1;  
        } else if (array[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
return result;
}

int main() {
    int array[7] = {2, 3, 3, 3, 3, 3, 4};
    int size = 7;
    int key = 3;

    int index = firstOccurrence(array, key, size);

    if (index != -1) {
        cout << "The first occurrence of "<<key<<" is at index "<< index << "." << endl;
    } else {
        cout << key <<"is not present in the array."<< endl;
    }
return 0;
}

#include <iostream>
using namespace std;

int lastOccurrence(int array[], int key, int size) {
    int start = 0;
    int end = size-1;
    int result =-1;

    while (start <= end) {
        int mid = start+(end-start)/ 2;
        
        if(array[mid]==key){
            result=mid;
            start=mid+1; 
        } else if(array[mid]<key){
            start=mid + 1;
        } else{
            end=mid-1;
        }
    }
  return result;
}

int main() {
int array[7] = {2, 3, 3, 3, 3, 3, 4};  
int size = 7;
int key = 3;

  
    int index = lastOccurrence(array, key, size);

    if (index != -1) {
        cout << "The last occurrence of " << key << " is at index " << index << "." << endl;
    } else {
        cout << key << " is not present in the array." << endl;
    }

    return 0;
}
*/
#include<iostream>
using namespace std;

int upperbound(int array[], int key, int size) {
    int start = 0;
    int end = size - 1;
    int ans = size;
    int mid = (start + end) / 2;
    
    while (start <= end) {
        if (array[mid] > key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    return ans;
}

int main() {
    int array[7] = {1, 2, 3, 5, 8, 10};
    int size = 7;
    int key = 3;
    
    int index = upperbound(array, key, size);
    if (index < size) {
        cout << "The upper bound of " << key << " is at index " << index << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}

     


