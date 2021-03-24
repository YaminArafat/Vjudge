#include<stdio.h>
#include<math.h>
int main(){
	long long int t,n,k,m,i,j,a=1,b=2,c,val,ans;
	while(scanf("%lld",&t)==1 && t){
		for(i=1;i<=t;i++){
			scanf("%lld%lld%lld",&n,&k,&m);
			for(j=0;j<n;j++){
				c=a+b;
				a=b;
				b=c;
			}
			val=pow(k,a);
			if(val>m){
				ans=val%m;
			}
			else{
				ans=val;
			}
			printf("Case %lld: %lld\n",i,ans);
			a=1;
			b=2;
		}
	}
	return 0;
}
