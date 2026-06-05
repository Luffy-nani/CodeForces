#include <bits/stdc++.h>
using namespace std;
int T,a,b,c,d;
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		int D=min(abs(c-b),a-abs(c-b));
		printf("%d\n",a<=3?1:D+d);
	}
	return 0;
}
