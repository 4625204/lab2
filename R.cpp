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

double R::Ea()
{  return  1/(1+pow(10,(B-A)/400));}

double R::Eb()
{  return  1/(1+pow(10,(A-B)/400));}

int R::answerA(float SA)
{  R::A=R::A+K*(SA-Ea())+0.5; 
   return R::A;}

int R::answerB(float SB)
{ R::B= R::B+K*(SB-Eb())+0.5; 
    return R::B;                }

