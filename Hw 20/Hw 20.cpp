

#include <iostream>

using namespace std;

class Cat {
public:
	unsigned short years;
	unsigned short legs;
	unsigned short ears;
	string color;
	string name;

	void Play() { cout << "Playing with 5 leg...:D"; }
	void Voice() { cout << "Go to ATB! Dont touch my beer! Miu-miu-miu"; }
	void Eating() { cout << "Nice Shaurma, guys!!"; }
	void Walking() { cout << "Walking with beer...."; }
};

class Window {
	
	string color;
	unsigned short glasses;
	string material;
	bool clean;
	bool working;

	void Open() { cout << "Open..."; }
	void Close() { cout << "Closed"; }
	void Broken() { cout << "Broken!!"; }
	
};

class Technic {
	string brand;
	string color;
	float price;
	bool working;

	void On() { cout << "Power on..."; }
	void Off() { cout << "Power off..."; }
	void Charge() { cout << "Charging..."; }
};

class Transport {
	string brand;
	string model;
	unsigned max_speed;
	unsigned short wheels;
	bool working;

	void IsGoing() { cout << "Going..."; }
	void Stay() { cout << "Parking..."; }
	void Sale() { cout << "For Sale!!"; }
};

class Plant {
	string color;
	bool alive;
	float height;

	void Stay() { cout << "Staying..."; }
	void WindReaction() { cout << "Reacting on wind...."; }
	void DroughtReaction() { cout << "Small chance to be alive..."; }
};

int main()
{
	Cat Alex;
	Alex.years = 3;
	Alex.legs = 5;
	Alex.ears = 2;
	Alex.color = "red";
	Alex.name = "Alex";

	Alex.Play();
	Alex.Voice();
	Alex.Eating();
	Alex.Walking();
}

