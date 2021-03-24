#include<stdio.h>
#include<math.h>
int main(){
	long long int t,n,k,m,j,a=1,b=2,c,i,ans,val1;
	double k1,val,a1;
	while(scanf("%lld",&t)==1 && t){
		for(i=1;i<=t;i++){
			scanf("%lld%lld%lld",&n,&k,&m);
			for(j=0;j<n;j++){
				c=a+b;
				a=b;
				b=c;
			}
			k1=(double)k;
			a1=(double)a;
			val=pow(k,a);
			val1=(int)val;
			if(val>m){
				ans=(int)val%(int)m;
			}
			else{
				ans=val;
			}
			printf("Case %d: %d\n",i,ans);
			a=1;
			b=2;
		}
	}
	return 0;
}
