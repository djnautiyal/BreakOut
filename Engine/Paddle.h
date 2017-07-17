#pragma once

#include"Keyboard.h"
#include"Rect.h"

class Paddle
{
	float height, width;
	//Rect rect;
	
	Vec2 pos;
	float speed = 300;
	float wingPadding = 3.0f;

	static constexpr Color c = Colors::Yellow;
	static constexpr Color wingColor = Colors::Red;
public:
	Paddle(Vec2 pos, float height, float width);
	void GetInput(Keyboard& kbd,float dt);
	void Draw(Graphics& gfx)const;
	Rect GetRect()const;
	void DoWallCollision(const Rect& walls);
	
};