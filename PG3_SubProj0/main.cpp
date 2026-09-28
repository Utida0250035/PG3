#include <string.h>

#include <iostream>
#include <list>

int main() {
	std::list<const char*> yamanoteLineStations1970{"Tokyo",
													"Kanda",
													"Akihabara",
													"Okachimachi",
													"Ueno",
													"Uguisudani",
													"Nippori",
													"Tabata",
													"Komagome",
													"Sugamo",
													"Otsuka",
													"Ikebukuro",
													"Mejiro",
													"Takadanobaba",
													"Shin-Okubo",
													"Shinjuku",
													"Yoyogi",
													"Harajuku",
													"Shibuya",
													"Ebisu",
													"Meguro",
													"Gotanda",
													"Osaki",
													"Shinagawa"
													"Tamachi",
													"Hamamatucho",
													"Shimbashi",
													"Yurakucho"};

	std::list<const char*> yamanoteLineStations2019 = yamanoteLineStations1970;

	for (auto itr = yamanoteLineStations2019.begin(); itr != yamanoteLineStations2019.end(); ++itr) {
		if (strcmp(*itr, "Tabata") == 0) {
			yamanoteLineStations2019.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	std::list<const char*> yamanoteLineStations2022 = yamanoteLineStations2019;

	for (auto itr = yamanoteLineStations2022.begin(); itr != yamanoteLineStations2022.end(); ++itr) {
		if (strcmp(*itr, "Tamachi") == 0) {
			yamanoteLineStations2022.insert(itr, "Takanawa Gateway");
			break;
		}
	}

	printf("\nyamanote1970\n");

	for (auto cell : yamanoteLineStations1970) {
		printf(cell);
		printf("\n");
	}

	printf("\nyamanote2019\n");

	for (auto cell : yamanoteLineStations2019) {
		printf(cell);
		printf("\n");
	}

	printf("\nyamanote2022\n");

	for (auto cell : yamanoteLineStations2022) {
		printf(cell);
		printf("\n");
	}
}