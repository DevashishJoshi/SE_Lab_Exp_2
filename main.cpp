#include<iostream>
using namespace std;

long long foo(long long x){
	return 0.5*x*x + 1.5*x + 1;
}

int main(){
	int T;
	cin>>T;
	long long ans[T];
	for(int t=0;t<T;t++){
		long long U,V;
		cin>>U,V;
		if(V>U)
			ans[t]=foo(U+1)-1;
		else ans[t]=foo(V);
	}
	for(int t=0;t<T;t++) cout<<ans[t]<<endl;

}
