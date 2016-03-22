#include <iostream>
#include <string>

using namespace std;

class Card{
private:
	
    int num;
	string colour = "";

public:
	Card(int num = 0, string colour = "none"){
		this->num = num;
		this->colour = colour;
	}
	~Card(){

	}

	string colours(){
		return colour;
	}

	int number(){
		return num;
	}

	void print(){
		cout << "colour: " << colour << endl;
		cout << "number: " << num << endl;
	}
};
