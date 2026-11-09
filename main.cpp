#include <iostream>
#include <memory>

#include "Shape.h"

#include "ToUtf8.h"

int main() {

	ToUtf8();

	std::unique_ptr<IShape> shapes[] = {std::make_unique<Circle>(), std::make_unique<Rectangle>()};

	for (const auto& shape : shapes) {
		shape->Flow();
	}

	return 0;
}