#include"R.h"
#include<cmath>

using namespace std;

R::R(int a,int b,int k)
{ R::set(a,b,k) ;}

int R::getA()
{  return A;}

int R::getB()
{  return B;}


void R::set(int x,int y,int z)
{  R::A=x; R::B=y; R::K=z; }



int R::answerA(double SA)
{  int a;
   a=R::A+K*(SA-(1/(1+pow(10,(B-A)/400))))+0.5; 
   R::A=a;
   return a;}

int R::answerB(double SB)
{ int b;
  b = R::B+K*(SB-(1/(1+pow(10,(A-B)/400))))+0.5;
  R::B=b; 
  return b;                }

