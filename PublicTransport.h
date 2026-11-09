#pragma once

class PublicTransport {
   public:
	void Use();

   protected:
	virtual void Transport() = 0;
};

class Train : public PublicTransport {
   public:
	void Transport() override;
};

class Airliner : public PublicTransport {
   public:
	void Transport() override;
};