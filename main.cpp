#include <iostream>
#include <string>
#include <vector>

void Labor(int hour, int recursivePay) {
	int pay = hour * 1226;

	printf("Labor Time: %d(hour)\n\n", hour);
	printf("%d(1226 * hour) %d(Recursive)\n\n", pay, recursivePay);

	if (pay > recursivePay) {
		printf("Legally > Recursive\n\n");
	} else if (pay < recursivePay) {
		printf("Legally < Recursive\n\n");
	} else {
		printf("Legally == Recursive\n\n");
	}

	printf("Extend 1 hour?\n");
	printf("YES: 1,  NO: 2\n\n");

	int choice = -1;

	while (true) {
		std::cin >> choice;

		if (choice == 1) {
			printf("Extend.\n\n");

			break;

		} else if (choice == 2) {
			printf("End.\n\n");

			break;

		} else {
			printf("Error: Please retry\n\n");
		}
	}

	if (choice == 1) {
		Labor(hour + 1, recursivePay * 2 - 50);
	} else {
		return;
	}
}

int main() {
	system("chcp 65001 > nul");

	Labor(1, 100);

	return 0;
}