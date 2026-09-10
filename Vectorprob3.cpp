/*take n integers into a vector. Then:

Find the maximum element
Find the minimum element
Print both*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
vector <int> v;
int n;
cout<<"Enter n : ";
cin>>n;
int i;
int a;
for(i=0 ; i<n ; i++ ){
    cout<<"Enter integer : ";
    cin>>a;
    v.push_back(a);
}
int b;
int max=v[0];
int min=v[0];
for(b=0 ;b<n; b++){
if(v[b]>max){
max=v[b];
}
}

int c;
for(c=0 ; c<n ; c++){
if(v[c]<min){
min=v[c];
}
}
cout<<"Maximum element : "<<max<< endl;
cout<<"Minimum element : "<<min<<endl;

    return 0;
}