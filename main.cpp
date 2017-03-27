#include<cstdio>
#include"R.h"
#include<cmath>
#include<fstream>
#include<iostream>

int main()
{ int a,b,k,i;
  double s,ss;
  ifstream infile("file.in",ios::in);
  infile>>k>>a>>b;
   R e1(a,b,k);
   ofstream outfile("file.out",ios::out);
   outfile<<e1.getA()<<" "<<e1.getB()<<endl;
  while(infile>>s)
   {  
     if(s==0)
     {ss=1;}
     else if(s==1)
     { ss=0;}
     else  ss=0.5;
   outfile<<e1.answerA(s)<<" "<<e1.answerB(ss)<<endl;
}
  return 0;
}
   
