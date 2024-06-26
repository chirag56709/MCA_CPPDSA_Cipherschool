/* #include<iostream>
using namespace std;
int findLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
 length++;
    }
    return length;
    }
int main(){
    char arr[100];
    cout<<"enter name";
    cin.getline(arr, 100);
    cout<<arr<<endl;
    int length = findLength(arr);
    cout<<length<<endl;
    }
    
   #include<iostream>
   #include <algorithm>
   #include <string>
   using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    reverse(str.begin(),str.end());

    cout << "Reversed string: " << str << endl;

    return 0;
}





   