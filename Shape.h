#pragma once

class IShape {
   protected:
	float size_ = 0.0f;

   public:
	void Flow();
	virtual void InputInfo() = 0;
	virtual void Size() = 0;
	virtual void Draw() = 0;
};

class Circle : public IShape {
   private:
	float radius_ = 0.0f;

   public:
	void InputInfo() override;
	void Size() override;
	void Draw() override;
};

class Rectangle : public IShape {
   private:
	float width_ = 0.0f;
	float height_ = 0.0f;

   public:
	void InputInfo() override;
	void Size() override;
	void Draw() override;
};