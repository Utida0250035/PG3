#include "Shape.h"

#include <iostream>
#include <numbers>

void IShape::Flow() {
	InputInfo();
	Size();
	Draw();
}

void Circle::InputInfo() {
	std::cout << "半径を入力: " << std::flush;

	std::cin >> radius_;
}

void Circle::Size() { size_ = std::numbers::pi_v<float> * radius_ * radius_; }

void Circle::Draw() { std::cout << "circleSize= " << size_ << std::endl; }

void Rectangle::InputInfo() {
	std::cout << "幅を入力: " << std::flush;

	std::cin >> width_;

	std::cout << "高さを入力: " << std::flush;

	std::cin >> height_;
}

void Rectangle::Size() {
	size_ = width_ * height_;
}

void Rectangle::Draw() { std::cout << "rectangleSize= " << size_ << std::endl; }