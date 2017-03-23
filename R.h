#ifndef MR
#define MR

#include<cstdio>
#include<cmath>
using namespace std;

class R
{ public:
    R();
    R(int a,int b,int k);
    int getA();
    int getB();
    double Ea();
    double Eb();
    void  set(int x,int y,int z);
    int answerA(float Sa);
    int answerB(float Sb);
    
  private:
   double A;
   double B;
   int K;

};

#endif
