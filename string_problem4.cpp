/*to get a string from user and also some n and rotate the string n times*/
#include <iostream>
using namespace std;
int main(){
string s;
cout<<"Enter the String : "<<endl;
cin>>s;
int n;
cout<<"Enter the no. of times you want to rotate the string : "<<endl;
cin>>n;
 string result = s.substr(n) + s.substr(0, n);
 cout << "Output: " << result << endl;

    return 0;
}