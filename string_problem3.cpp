/*Takes a string input from the user
Counts how many words are in the string (words are separated by spaces)
Prints the count*/
#include <iostream>
using namespace std;
int main(){
string s;
cout<<"Enter the text for the string (don't include spaces at start or end) :"<<endl;
getline(cin , s);
int i;
int a = 0;
int n = s.length();
for( i=0 ; i<n ; i++){
if(s[i]==' '){
a = a+1;
}
}
cout<<"Total no. of words in the string is :"<< a+1 <<endl;
    return 0;
}     