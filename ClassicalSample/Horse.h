#pragma once
#include <iostream>
#include <string>
using namespace std;

class Horse
{
protected:
	int weight;
	int speed;
	int age;
public:
	Horse()
	{
		this->weight = 0;
		this->speed = 0;
		this->age = 0;
		cout << "use the constructor of Horse" << endl;
	}
	Horse(int weight, int speed, int age)
	{
		this->weight = weight;
		this->speed = speed;
		this->age = age;
	}
	void setWeight(int w)
	{
		this->weight = w;
	}
	void setSpeed(int s = 0)
	{
		this->speed = s;
	}
	void setAge(int a = 2)
	{
		this->age = a;
	}
	int getWeight()
	{
		return this->weight;
	}
	int getSpeed()
	{
		return this->speed;
	}
	int getAge()
	{
		return this->age;
	}
};
class HorseColor
{
protected:
	string color;
public:
	HorseColor()
	{
	}
	HorseColor(string color)
	{
		this->color = color;
	}
	void setColor(string c)
	{
		this->color = c;
	}
	string getColor()
	{
		return this->color;
	}
};
class WhiteHorse :public Horse, public HorseColor
{
public:
	string getColor()
	{
		return "white";
	}
};
class BlackHorse :public Horse, public HorseColor
{
public:
	BlackHorse(int weight, int speed, int age, string color = "black") :Horse(weight, speed, age), HorseColor(color) {}
};