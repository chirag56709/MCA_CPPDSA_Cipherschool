/*#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> vector1={1,2,3,4,5};
  vector<int>::iterator itr;
    itr =vector1.end()-1;
    for(itr =vector1.begin(); itr !=vector1.end();itr ++){
        cout<<*itr<<" ";
    }
     }
    // second largest elemnt in cpp #include<iostream>
  
#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int secondMax(vector<int>& vec) {
    int maxElement = numeric_limits<int>::min();
    int secondMax = numeric_limits<int>::min();
    for(int num : vec){
        if(num > maxElement){
            secondMax = maxElement;
            maxElement = num;
        }
        else if(num >secondMax && num != maxElement){
            secondMax = num;
        }
    }
   return secondMax;
}
int main(){
 vector<int> vec = {9,4,6,7,2};
cout<< "Second largest element is:"<<secondMax(vec)<<endl;
}
*/




