#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<int> toN(int x,int y){
	vector<int> v;
	int c=0;
	while(x!=0){
		v.push_back(x%y);
		x=(x-x%y)/y;
		c++;
	}
	return v;
}
vector<int> t(vector<int> v,vector<int> w,int a,int offset,int b){
	for(int i=0;i<w.size()-1;i++){
		v[i+offset]=w[i]*a;
	}
	for(int i=0;i<v.size()-1;i++){
		if(i+1>v.size()){
			v.push_back(0);
		}		
		v[i+1]=floor(v[i]/b)+v[i+1];
		v[i]=v[i]-v[i]%b;

	}
	return v;
}
vector<int> times(vector<int> v,vector<int> w,int b){
	vector<int> x;
	for(int i=0;i<w.size();i++){
		t(x,v,w[i],i,b);
	}
	return x;
}
int main(){
	vector<int> w=toN(1199,100);
	for(int i=0;i<w.size();i++){
		cout<<w[i]<<" ";
	}
	vector<int> x=toN(188,100);
	for(int i=0;i<x.size();i++){
		cout<<x[i]<<" ";
	}
	vector<int> t=times(x,w,100);
	for(int i=0;i<t.size();i++){
		cout<<t[i];
	}
}