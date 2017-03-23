#include<cstdio>
#include"R.h"
#include<cmath>
#include<fstream>
#include<iostream>

int main()
{ int a,b,k,i;
  float s[6],ss[6];
  ifstream infile("file.in",ios::in);
  infile>>k>>a>>b;
  for(i=0;i<6;i++)
   { infile>>s[i]; 
     if(s[i]==0)
     {ss[i]=1;}
     else if(s[i]==1)
     { ss[i]=0;}
     else  ss[i]=0.5;
   }
  
  R e1(a,b,k);
  cout<<e1.Ea()<<" "<<e1.Eb()<<endl;
  ofstream outfile("file.out",ios::out);
   outfile<<e1.getA()<<" "<<e1.getB()<<endl;
  for(i=0;i<6;i++)
   {outfile<<e1.answerA(s[i])<<" "<<e1.answerB(ss[i])<<endl;}

  return 0;
}
   
