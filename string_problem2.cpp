/*Write a program that:

Takes a string input from the user
Counts how many vowels are in the string
Prints the string with all vowels replaced by */

#include <iostream>
using namespace std;

string repvowel(string s){
    int i;
    int n= s.length();
for(i=0 ; i<n ; i++){
if(s[i]=='A' or s[i]=='a' or s[i]=='e' or s[i]=='E' or s[i]=='I' or s[i]=='i' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u' ){

s[i] = '*' ;

}
}
cout<<"The new array is: "<<s<< endl;
    return s;

}
int countvowel(string s){
int i;
int a=0;
    int n= s.length();
for(i=0 ; i<n ; i++){
if(s[i]=='A' or s[i]=='a' or s[i]=='e' or s[i]=='E' or s[i]=='I' or s[i]=='i' or s[i]=='O' or s[i]=='o' or s[i]=='U' or s[i]=='u' ){

a=a+1;

}
}
cout<<"No. of vowels in the given string is :"<< a << endl;
    return a;


}

int main(){
string s;
cout<< "Enter the text to input in the string :"<< endl;
cin>> s;
countvowel(s);

repvowel(s);



    return 0;
} 