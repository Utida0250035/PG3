#include <iostream>
#include <memory>

#include "Comparison.h"
#include "ToUtf8.h"

int main() {
	ToUtf8();
	Comparison<int, float> comp0;
	Comparison<int, double> comp1;
	Comparison<float, int> comp2;
	Comparison<float, double> comp3;
	Comparison<double, int> comp4;
	Comparison<double, float> comp5;

	std::cout << "Min(1, 3.1): " << comp0.Min(1, 3.1) << std::endl;
	std::cout << "Min(3, 1.1): " << comp1.Min(3, 1.1) << std::endl;
	std::cout << "Min(0.1f, -1): " << comp2.Min(0.1f, -1) << std::endl;
	std::cout << "Min(1.1f, -3.1): " << comp3.Min(1.1f, -3.1) << std::endl;
	std::cout << "Min(1.1, -2): " << comp4.Min(1.1f, -2) << std::endl;
	std::cout << "Min(3.1, 1.1f): " << comp5.Min(3.1, 1.1f) << std::endl;

	return 0;
}