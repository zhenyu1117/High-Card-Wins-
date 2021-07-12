#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#define ll  long long
#define T 200022
using namespace std;
int sc()
{
	int i=0; char c=getchar();
	while(c>'9'||c<'0') c=getchar();
	while(c>='0'&&c<='9') i=i*10+c-'0',c=getchar();
	return i;
}
int a[555555],b[555555];
int la,ra,lb,rb,n,ans=0;
int main()
{
	n=sc();
	for(int i=1; i<=n; i++) a[i]=sc();
	sort(a+1,a+n+1);
	lb=la=1,ra=n;rb=0;
	int x=1;
	for(int i=1;i<=n;i++)
	{
		while(x!=a[i])b[++rb]=x++;
		x++;
	}
	while(x<=2*n) b[++rb]=x++;
	for(;la<=ra;)
	{
		if(a[la]<b[lb])la++,lb++,ans++;
		else lb++,ra--;
	}
	cout << ans;
	return 0;
}
