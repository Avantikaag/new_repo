#include<iostream>
using namespace std;

void printsub(int i, int n, string osf){
	if(i==n){
		cout<<osf<<endl;
		return;
	}
	if(osf[osf.length()-1]=='0'){
		printsub(i+1, n, osf+"0");
		printsub(i+1, n, osf+"1");
	}
	else{
		printsub(i+1, n, osf+"0");
	}
}

int main(){
	int n=5;
	string osf="1";
	printsub(1,n,osf);
	osf="0";
	printsub(1,n,osf);
}