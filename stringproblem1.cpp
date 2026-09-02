/*Write a program that:

Takes a string input from the user (can have spaces)
Prints its length
Prints it reversed — without using any built-in reverse function
Checks if it's a palindrome based on the reversal*/
#include <iostream>
using namespace std;

string swap(string s){
int i;
int n=s.length();

for(i=0;i<n/2;i++){
int temp = s[i];
        s[i] = s[n-1-i];
        s[n-1-i] = temp;

}
return s;
}
int main(){
string s;
cout<< "Enter the text for string : ";
getline(cin,s);
cout<< s.length()<<endl;

string s_1= swap(s);
cout<<"The reversed string is :"<<s_1<<endl;
if(s==s_1){
cout<<"It is a Palindrome"<<endl;
}
else{
cout<<"It is not a Palindrome"<<endl;
}
    return 0;
}