#include<iostream>
using namespace std;
int main()
{
float v[20],p[80],w[20]; int n,i,j,t=0,u=0,z=0;
float k[20],h,q,g[90],l[70],s[90],temp,f=0;
cout<<"enter no. of elements";
cin>>n;
cout<<"enter weight of elements";
for(i=0;i<n;i++)
{
cin>>w[i];
g[i]=w[i];
}
cout<<"enter value of elements";
for(i=0;i<n;i++)
{
cin>>v[i];
}
cout<<"emter capacity of bag";
cin>>q;
for(i=0;i<n;i++)
{
k[i]=v[i]/w[i];
l[i]=k[i];
}
for(j=0;j<n-1;j++)
{
for(i=0;i<n-1-j;i++)
{
if(l[i]>l[i+1])
{
temp=l[i];
l[i]=l[i+1];
l[i+1]=temp;
}}}
for(u=0;u<n;u++)
{
for(i=0;i<n;i++)
{
if(l[u]==k[i])
{
s[z]=i;
k[i]=0;
z++;}
}}
for(j=0;j<n-1;j++)
{
for(i=0;i<n-1-j;i++)
{
if(g[i]>g[i+1])
{
temp=g[i];
g[i]=g[i+1];
g[i+1]=temp;
}}}
cout<<"values which can come in bag"<<endl;
for(z=n-1;z>=0;z--)
{
t=s[z];
s[z]=v[t];
if(q>=g[0]&&q>=w[t])
{
cout<<s[z]<<endl;
q=q-w[t];
}
else if(q>0&&q<=g[0])
{
h=q/w[t];
s[z]=s[z]*h;
cout<<s[z]<<endl;
q=q-w[t];
}
else if(q>0)
{
h=q/w[t];
s[z]=s[z]*h;
cout<<s[z]<<endl;
q=q-w[t];}
else
{
break;}
f=s[z]+f;
}
cout<<"total value"<<f;
return 0;
}
