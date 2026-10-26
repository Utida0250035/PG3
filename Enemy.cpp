#include "Enemy.h"

#include <iostream>
#include <iterator>

void (Enemy::* Enemy::funcTable_[])() = {&Enemy::Approach, &Enemy::Shot, &Enemy::BackOff};

void Enemy::Approach() { std::cout << "Enemy: Approach player" << std::endl; }

void Enemy::Shot() { std::cout << "Enemy: Shot player" << std::endl; }

void Enemy::BackOff() { std::cout << "Enemy: BackOff" << std::endl; }

void Enemy::RunBehavior() {
	for (size_t i = 0; i < std::size(funcTable_); ++i) {
		(this->*funcTable_[i])();
	}
}