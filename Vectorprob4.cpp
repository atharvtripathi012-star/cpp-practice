/*Write a program that takes n integers into a vector and prints only
 the even numbers from it.*/
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
for(b=0 ;b<n; b++){
if(v[b]%2==0){
cout<< v[b] << endl;
}
}
    return 0;
 }