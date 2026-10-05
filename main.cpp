#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <chrono>

void ClearScreen() {
	std::cout << "\033[2J\033[H" << std::flush;
}

void ShowResult(int roll, int userGuess) {

	printf("dice : %d\n", roll);

	if (userGuess == roll % 2) {
		printf("Correct!!\n\n");
	} else {
		printf("Wrong....\n\n");
	}
}

void DelayReveal(void (*fn)(int, int), unsigned int delayMs, int roll, int userGuess) {

	char letters[] = {
		'/',
		'-',
		'|'
	};

	for (size_t i = 0; i < 9; ++i) {

		std::printf("%c", letters[i % 3]);

		std::this_thread::sleep_for(std::chrono::milliseconds(delayMs / 9));

		ClearScreen();

	}

	fn(roll, userGuess);

}

void EvenOdd() {
	srand(static_cast<unsigned int>(time(nullptr)));

	int num = 0;

	int choice = -1;

	int correct = -1;

	while (true) {
		num = rand() % 6 + 1;

		printf("Even : 0, Odd: 1 (1d6)\n");

		scanf_s("%d", &choice);

		DelayReveal(ShowResult, 3000, num, choice);

		while (true) {
			printf("One more play?\n");
			printf("Yes: 0; No: 1\n");

			scanf_s("%d", &choice);

			if (choice == 0 || choice == 1) {
				break;
			} else {
				printf("Error: Please retry.\n\n");
			}
		}

		if (choice == 0) {
			printf("One more.\n\n");
		} else if (choice == 1) {
			printf("End.\n\n");
			break;
		}
	}
}

int main() {
	system("chcp 65001 > nul");

	EvenOdd();

	return 0;
}