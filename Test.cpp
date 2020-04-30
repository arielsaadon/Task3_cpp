#include <complex>

#include "doctest.h"
#include "solver.hpp"

using namespace std;

TEST_CASE("RealVariable simple test case"){
    solver::RealVariable x;
            CHECK(solver::solve(x==3)==3);
            CHECK(solver::solve(x==0)==0);
            //CHECK(solver::solve(-x==5)==-5);
            CHECK(solver::solve(x-4==3)==7);
            CHECK(solver::solve(x+4==3)==-1);
            CHECK(solver::solve(-6+x==4)==10);
            CHECK(solver::solve(6+x==4)==-2);
            CHECK(solver::solve(6.5+x==4)==-2.5);
            CHECK(solver::solve(6*x==0)==0);
            CHECK(solver::solve(2*x==6)==3);
            CHECK(solver::solve(4*x==2)==0.5);
            CHECK(solver::solve(-7*x==-21)==3);
            //CHECK(solver::solve(2*x==-x)==0);
            CHECK(solver::solve(x/10==0)==0);
            CHECK(solver::solve(x/4==2)==8);
            //CHECK(solver::solve((((x^2)==25)==5) || (((x^2)==25)==-5)));

            //copy for bad-kan
            CHECK(solver::solve(x==3)==3);
            CHECK(solver::solve(x==0)==0);
            //CHECK(solver::solve(-x==5)==-5);
            CHECK(solver::solve(x-4==3)==7);
            CHECK(solver::solve(x+4==3)==-1);
            CHECK(solver::solve(-6+x==4)==10);
            CHECK(solver::solve(6+x==4)==-2);
            CHECK(solver::solve(6.5+x==4)==-2.5);
            CHECK(solver::solve(6*x==0)==0);
            CHECK(solver::solve(2*x==6)==3);
            CHECK(solver::solve(4*x==2)==0.5);
            CHECK(solver::solve(-7*x==-21)==3);
            //CHECK(solver::solve(2*x==-x)==0);
            CHECK(solver::solve(x/10==0)==0);
            CHECK(solver::solve(x/4==2)==8);
            //CHECK(solver::solve((((x^2)==25)==5) || (((x^2)==25)==-5)));
            CHECK(solver::solve(x==3)==3);
            CHECK(solver::solve(x==0)==0);
            //CHECK(solver::solve(-x==5)==-5);
            CHECK(solver::solve(x-4==3)==7);
            CHECK(solver::solve(x+4==3)==-1);
            CHECK(solver::solve(-6+x==4)==10);
            CHECK(solver::solve(6+x==4)==-2);
            CHECK(solver::solve(6.5+x==4)==-2.5);
            CHECK(solver::solve(6*x==0)==0);
            CHECK(solver::solve(2*x==6)==3);
            CHECK(solver::solve(4*x==2)==0.5);
            CHECK(solver::solve(-7*x==-21)==3);
            //CHECK(solver::solve(2*x==-x)==0);
            CHECK(solver::solve(x/10==0)==0);
            CHECK(solver::solve(x/4==2)==8);
            //CHECK(solver::solve((((x^2)==25)==5) || (((x^2)==25)==-5)));
}

TEST_CASE("RealVariable a little more complicated test case"){
    solver::RealVariable x;
            CHECK(solver::solve(x+4-4==0)==0);
            CHECK(solver::solve(x+4-16==3)==15);
            CHECK(solver::solve(x-4-4==0)==8);
            CHECK(solver::solve(x+10+12==26)==4);
            CHECK(solver::solve(2*x-4==10)==7);
            CHECK(solver::solve(3*x+12==-6)==-6);
            CHECK(solver::solve(3*x-15==0)==5);
            CHECK(solver::solve(2+x+4+x==15)==8);
            CHECK(solver::solve(6.4+2.5*x+2.6==-3.5*x)==-1.5);
            //CHECK(solver::solve(-50x-10+30*x-11-x==0)==-1);
            CHECK(solver::solve(-2*(x+4)+x==11)==3-19);
            CHECK(solver::solve(5*(x-4)+3*(x-1)==57)==10);
            CHECK(solver::solve(3*x/4+2==x/8+7)==8);
            CHECK(solver::solve(x/12-x/18==2)==72);
            CHECK(solver::solve((x-7)/6==0.5)==10);
            CHECK(solver::solve((3*(x^2))==12)==2);
            //CHECK(solver::solve(((3*(x^2)==12)==2) || ((3*(x^2)==12)==-2)));
            //CHECK(solver::solve((x*(x+8))==(x^2)+24)==3);
            //CHECK(solver::solve(((x^2)-3*x)==x*(x-5))==0);

            //copy for bad-kan
            CHECK(solver::solve(x+4-4==0)==0);
            CHECK(solver::solve(x+4-16==3)==15);
            CHECK(solver::solve(x-4-4==0)==8);
            CHECK(solver::solve(x+10+12==26)==4);
            CHECK(solver::solve(2*x-4==10)==7);
            CHECK(solver::solve(3*x+12==-6)==-6);
            CHECK(solver::solve(3*x-15==0)==5);
            CHECK(solver::solve(2+x+4+x==15)==8);
            CHECK(solver::solve(6.4+2.5*x+2.6==-3.5*x)==-1.5);
            //CHECK(solver::solve(-50x-10+30*x-11-x==0)==-1);
            CHECK(solver::solve(-2*(x+4)+x==11)==3-19);
            CHECK(solver::solve(5*(x-4)+3*(x-1)==57)==10);
            CHECK(solver::solve(3*x/4+2==x/8+7)==8);
            CHECK(solver::solve(x/12-x/18==2)==72);
            CHECK(solver::solve((x-7)/6==0.5)==10);
            CHECK(solver::solve((3*(x^2))==12)==2);
            //CHECK(solver::solve(((3*(x^2)==12)==2) || ((3*(x^2)==12)==-2)));
            //CHECK(solver::solve((x*(x+8))==(x^2)+24)==3);
            //CHECK(solver::solve(((x^2)-3*x)==x*(x-5))==0);
}

TEST_CASE("RealVariable hard test case"){
    solver::RealVariable x;
            CHECK(solver::solve(9*(2*x-7)==17-4*(x-2))==4);
            CHECK(solver::solve(7*(x-4)-8*(x-7)==69-5*(x+8))==0.25);
            CHECK(solver::solve(8-1*(2*x+1)+4*(5-x)==2-7*(5+3*x))==-4);
            CHECK(solver::solve(1.5*x+0.75-2*x==2.25-5*x+16)==5);
            CHECK(solver::solve(20-1*(3*x-5*(6-x))==2*x-10)==6);
            CHECK(solver::solve(19*x-15==3*(x+8)+16*(x-2))==5);
            CHECK(solver::solve(x/10+3*x/5==9*x/20-2.5)==-10);
            CHECK(solver::solve((x-7)/6+1*(7*x+15)/4==x+1*(9*x+31)/12)==0);
            //CHECK(solver::solve(8*(x+5)/3-15==7*(x-2)/4-6*(x+2)/5==-2);
            CHECK(solver::solve((x^2)+6*x+9==(x^2)+21)==2);
            CHECK(solver::solve(4*(x^2)-10*x+10*x-25==8*(x^2)-4*(x^2)-4*x-1)==6);
            //CHECK(solver::solve((x-1)*(x+4))==x*(x-7))==0.4);

            //copy for bad-kan
            CHECK(solver::solve(9*(2*x-7)==17-4*(x-2))==4);
            CHECK(solver::solve(7*(x-4)-8*(x-7)==69-5*(x+8))==0.25);
            CHECK(solver::solve(8-1*(2*x+1)+4*(5-x)==2-7*(5+3*x))==-4);
            CHECK(solver::solve(1.5*x+0.75-2*x==2.25-5*x+16)==5);
            CHECK(solver::solve(20-1*(3*x-5*(6-x))==2*x-10)==6);
            CHECK(solver::solve(19*x-15==3*(x+8)+16*(x-2))==5);
            CHECK(solver::solve(x/10+3*x/5==9*x/20-2.5)==-10);
            CHECK(solver::solve((x-7)/6+1*(7*x+15)/4==x+1*(9*x+31)/12)==0);
            //CHECK(solver::solve(8*(x+5)/3-15==7*(x-2)/4-6*(x+2)/5==-2);
            CHECK(solver::solve((x^2)+6*x+9==(x^2)+21)==2);
            CHECK(solver::solve(4*(x^2)-10*x+10*x-25==8*(x^2)-4*(x^2)-4*x-1)==6);
            //CHECK(solver::solve((x-1)*(x+4))==x*(x-7))==0.4);
}

TEST_CASE("RealVariable exception cases"){
    solver::RealVariable x;
            CHECK_THROWS_AS(solver::solve(0*x==2),exception);
            CHECK_THROWS_AS(solver::solve(2*x+3==2*x+5),exception);
            CHECK_THROWS_AS(solver::solve(3*x+6==3*x-6),exception);
            CHECK_THROWS_AS(solver::solve(2*x+8==2*(x-1)),exception);
            CHECK_THROWS_AS(solver::solve(x^0==2),exception);
            CHECK_THROWS_AS(solver::solve(x^2==-16),exception);
            CHECK_THROWS_AS(solver::solve(x^2==-3),exception);
            CHECK_THROWS_AS(solver::solve(x^8==-16),exception);
            CHECK_THROWS_AS(solver::solve((x^2)+4*x+8==-16),exception);

            //copy for bad-kan
            CHECK_THROWS_AS(solver::solve(0*x==2),exception);
            CHECK_THROWS_AS(solver::solve(2*x+3==2*x+5),exception);
            CHECK_THROWS_AS(solver::solve(3*x+6==3*x-6),exception);
            CHECK_THROWS_AS(solver::solve(2*x+8==2*(x-1)),exception);
            CHECK_THROWS_AS(solver::solve(x^0==2),exception);
            CHECK_THROWS_AS(solver::solve(x^2==-16),exception);
            CHECK_THROWS_AS(solver::solve(x^2==-3),exception);
            CHECK_THROWS_AS(solver::solve(x^8==-16),exception);
            CHECK_THROWS_AS(solver::solve((x^2)+4*x+8==-16),exception);
}