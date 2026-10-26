#pragma once

class Enemy {
   private:
	static void (Enemy::* funcTable_[])();

   public:
	void Approach();
	void Shot();
	void BackOff();
	void RunBehavior();
};