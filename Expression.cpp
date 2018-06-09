#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,s1,s2,s3,s4,s5,s6,i,large=0;
    cin>>a>>b>>c;
    s1=a+b+c;
    s2=a*b*c;
    s3=(a*b)+c;
    s4=(a+b)*c;
    s5=a+(b*c);
    s6=a*(b+c);
   // cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl<<s6<<endl;
   for(i=0;i<7;i++)
   {
       if(s1>=s2 && s1>=s3 && s1>=s4 && s1>=s5 && s1>=s6)
       {
           large=s1;
       }
       else if(s2>=s1 && s2>=s3 && s2>=s4 && s2>=s5 && s2>=s6)
       {
           large=s2;
       }
         else if(s3>=s2 && s3>=s1 && s3>=s4 && s3>=s5 && s3>=s6)
       {
           large=s3;
       }
         else if(s4>=s2 && s4>=s3 && s4>=s1 && s4>=s5 && s4>=s6)
       {
           large=s4;
       }
         else if(s5>=s2 && s5>=s3 && s5>=s4 && s5>=s1 && s5>=s6)
       {
           large=s5;
       }
       else if(s6>=s2 && s6>=s3 && s6>=s4 && s6>=s5 && s6>=s1)
       {
           large=s6;
       }

   }
   cout<<large;
}
