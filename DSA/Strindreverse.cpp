#include<iostream>
#include<stack>
using namespace std;
void revesreSentence(string s){
    stack<string> st;
    for(int i=0;i<s.size();i++){
        string word="";
        while(s[i]!=' '&&i<s.length()){
            word=word+s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){ cout<<st.top()<<" ";
    st.pop();
}
}
int main(){
    
    revesreSentence("my name is chirag");
}
