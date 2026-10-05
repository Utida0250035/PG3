#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
T Min(T a, T b) {

	if (a < b) {
		return a;
	}

	return b;

}

int main() {
	system("chcp 65001 > nul");

	printf("1, 2 >> min: %d\n\n", Min(1, 2));

	printf("2.0f, 5.0f >> min: %f\n\n", Min(2.0f, 5.0f));

	printf("10.0, 16.0 >> min : %lf\n\n", Min(10.0, 16.0));

	return 0;
}