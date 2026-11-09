#include "PublicTransport.h"
#include <iostream>

void PublicTransport::Use() {

	std::cout << "<公共交通機関を使用>" << std::endl;

	Transport();
}

void Train::Transport() {

	std::cout << "鉄道を使用\n" << std::endl;
}

void Airliner::Transport() {

	std::cout << "定期旅客機を使用\n" << std::endl;

}