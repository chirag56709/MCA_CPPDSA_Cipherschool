 /*#include<iostream>
 #include<set>
 using namespace std;
 int main(){
 set<int>set1={5,3,8,1,9};
 set1.insert(789);
 set1.erase(3);
 for(int i:set1)
 {
 cout<<i<<" ";
 }
 }
 */
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int> uset={5,3,9,7,1};
uset.insert(20);

for(int i: uset){
    cout<<i<<" ";
}
}