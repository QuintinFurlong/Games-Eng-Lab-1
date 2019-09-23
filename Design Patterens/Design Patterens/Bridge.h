#pragma once
class DrawAPI
{
public:
	virtual void Draw() = 0;
};

class DrawImp1 : public DrawAPI
{
public:
	void Draw()
	{
		std::cout << "Draw Imp1" << std::endl;
	}
};

class Character2
{
public:
	virtual void Draw() = 0;
};

class Player2 : public Character2
{
public:
	Player2(DrawAPI* api) { this->api = api; }
	void Draw() { api->Draw(); }
private:
	DrawAPI* api;
};