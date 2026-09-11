/*Takes n from user
Takes n pairs of integers as input (two numbers per pair)
Prints the pair where the sum of both elements is maximum*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<< "Enter the value of n :";
cin>>n;
int i=0;
int a=0;
int b=0;
vector<pair<int,int>> v;
for(i=0 ; i<n ; i++){
cout<<"Enter 1st integer of pair"<< i+1<<" :";
cin>>a;
cout<<"Enter 2nd integer of pair"<< i+1<<" :";
cin>>b;
v.push_back({a,b});
}
int c=0;
int maxindex=0;
int max=v[0].first + v[0].second;
for(c=0; c<n ; c++){
if((v[c].first+v[c].second) > max){
max=v[c].first+v[c].second;
maxindex=c;
}
}
cout<<"The pair whose sum of elements is maximum is : {"<< v[maxindex].first <<","<< v[maxindex].second<<"}"<< endl;


    return 0;
} 