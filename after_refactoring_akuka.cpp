#include <cmath>
#include <iostream>

void repeated(double x0, double s0, int num);

int main(){
	double x;
	std::cout<<"введите угол"<<std::endl;
	std::cin>>x;

	repeated(cos(2*x), (1+sin(2*x))/(1-cos(2*x)), 1);
	repeated(tan(x),(1+tan(x)*tan(x))/(1-tan(x)*tan(x)), 2);

	return 0;
}


void repeated(double x0, double s0, int num){
	if (fabs(x0 - 1) > 0.00001){
		std::cout<<"F(x" << num << ")=" << s0 <<std::endl;
	}else{
		std::cout<<"невереный ввод для F(x"<< num << ") "<< std::endl;
	}

}

