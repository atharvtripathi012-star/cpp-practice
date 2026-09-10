/*Write a program that:

Takes n from the user
Takes n integers as input and stores them in a vector using a loop
Prints the sum and average of all elements*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter n :";
cin>>n;
int i=0;
int a;
vector<int> v;
for(i=0 ;i<n ; i++){
cout<<"Enter Integer :";
cin>> a;
v.push_back(a);
}
int b=0;
int sum=0;
int avg;
for(b=0; b<n; b++){
sum += v[b];
}
avg=sum/n;


cout<<"The Sum of all elements is : "<< sum <<endl;
cout<<"The Average of all elements is : "<< avg <<endl;
    return 0;
}