/*Write a program that:

Stores 5 students and their marks in a map
Takes a student name as input from the user
Prints their marks if found, "Student not found" if not

Use count() for the existence check.*/
#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main(){
map<string, int> marksheet;
string name;
int marks;
int i;
for(i=0 ; i<5 ; i++){
cout<<"Enter Name of Student " << i+1 <<" : ";
cin>>name;
cout<<"Enter Marks of Student "<< i+1 <<" : ";
cin>>marks;
marksheet[name]=marks;
}
string stuinput;
cout<<"Enter Student's name to verify marks : ";
cin>>stuinput;
if (marksheet.count(stuinput)==0){
cout<<"Student not found "<<endl;
}
else{
    cout<<"Marks of the student : "<< marksheet[stuinput];

}
    return 0;
}  