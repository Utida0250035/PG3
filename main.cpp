#include <iostream>
#include <memory>

#include "PublicTransport.h"

#include "ToUtf8.h"

int main() {

	ToUtf8();

	std::unique_ptr<PublicTransport> publicTransport[] = {std::make_unique<Airliner>(), std::make_unique<Train>()};

	for (const auto& transport : publicTransport) {
		transport->Use();
	}

	return 0;
}