#include <cmath>
#include <iostream>

void print_result(const double angle, const double result, int func_numner);

int main(){
	double angle;
	std::cout << "введите угол" << std::endl;
	std::cin >> angle;


	double result_f1 =
		(1 + sin(2 * angle))
		/
		(1 - cos(2 * angle))
	print_result(cos(2 * angle), result_f1, 1);


	double result_f2 = 
		(1 + tan(angle) * tan(angle))
		/
		(1 - tan(angle) * tan(angle))
	print_result(tan(angle), result_f2, 2);


	return 0;
}


void print_result(const double angle, double result, int func_numner) {
	if (fabs(angle - 1) > 0.00001) {
		std::cout
			<<"F(x" 
			<< func_numner
			<< ")=" 
			<< result
			<<std::endl;
	} else {
		std::cout
			<<"невереный ввод для F(x"
			<< func_number
			<< ") "
			<< std::endl;
	}

}

