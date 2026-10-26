#include <memory>

#include "Enemy.h"
#include "ToUtf8.h"

int main() {
	ToUtf8();
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();
	enemy->RunBehavior();
	return 0;
}