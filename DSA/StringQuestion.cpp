/*#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&&ch<='z')
    return ch;else{
        char temp=ch-'A'+'a';
        return temp;

    }
}
int main(){

    char uppercaseChar = 'H';
    
    char lowercaseChar = tolowercase(uppercaseChar);
    
    cout << "Original character: " << uppercaseChar << endl;
    cout << "Lowercase character: " << lowercaseChar << endl;

    return 0;
}
*/
#include<iostream>
using namespace std;
string replaceWhitespace(string str) {
    for (char &c : str) {
        if (c == ' ') {
            c = '@';
        }
    }
    return str;
}
int main(){
    string input = "you are given string of words";
    string replaced =replaceWhitespace(input);
    cout<<input<<endl;
    cout<<replaced<<endl;
}
