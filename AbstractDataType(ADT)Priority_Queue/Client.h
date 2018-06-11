#pragma once
#include"Library.h"

class Client {
private:
	string name;
	int price;

public:
	Client() {
		name = "";
		price = 0;
	}
	Client(string name, int price) {
		this->name = name;
		this->price = price;
	}	
	
	friend ostream& operator<<(ostream& os,  Client obj) {
		os << obj.name << "\t" << obj.price << endl;
		return os;
	}
	friend istream& operator>>(istream& is, Client& obj) {
		is >> obj.name >>obj.price;
		return is;
	}
		
bool operator<(const Client& obj)const {
		return (this->price < obj.price);
	}
};
