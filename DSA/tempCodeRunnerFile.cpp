#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&&ch<='z')
    return ch;else{
        char temp=ch-'A'+'a';
        return temp;

    }
}