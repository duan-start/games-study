#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>

int main(){
 Eigen::Vector3f p(2.0f,1.0f,1.0f);

 Eigen::Matrix3f i,j;
 double x=45.0f/180.0f*acos(-1);
 i<<cos(x),-sin(x),0,sin(x),cos(x),0,0,0,1;
 j<<1,0,1,0,1,2,0,0,1;
 p=j*i*p;
 std::cout<<"position"<<p;
    
}