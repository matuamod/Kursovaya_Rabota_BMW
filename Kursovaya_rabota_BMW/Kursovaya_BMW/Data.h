#pragma once

#include <iostream>
#include <string.h>
#include <Windows.h>

#define N 100

using namespace std;

struct Technical_Part {
	string Engine;
	string Gearbox;
	string Diffelencial;
	string Exhaust;
	int Wheel_drive;
};

struct Suspension {
	string Type_of_suspension;
	string Brakes;
	string Stabilizators;
	string Steering_control;
};

struct Wheels {
	int Size;
	string Type_of_tyres;
};

struct Body {
	string Type_of_body;
	int Count_of_doors;
	string M_package;
	string Paint;
};

struct Interior {
	int Count_of_seats;
	string Material;
	string Type_of_seats;
	string Panorama;
	string Projection;
	string Door_closers;
};

struct Lights {
	string Headlights;
	string Taillights;
};

struct Deal_Conditions {
	int price;
	int Days_of_man;
	string country;
};

class BMW {
private:
	Technical_Part technical_part;
	Suspension suspension;
	Wheels wheels;
	Body body;
	Interior interior;
	Lights lights;
	Deal_Conditions deal_conditions;
public:
	BMW();
	BMW(Technical_Part technical_part_, Suspension suspension_, Wheels wheels_, Body body_, Interior interior_, Lights lights_, Deal_Conditions deal_conditions_);
	~BMW();

	void PrintData();

	void DataEntry(Technical_Part technical_part_, Suspension suspension_, Wheels wheels_, Body body_, Interior interior_, Lights lights_, Deal_Conditions deal_conditions_);

	Technical_Part GetTechnicalPart() {
		return technical_part;
	}

	Suspension GetSuspension() {
		return suspension;
	}

	Wheels GetWheels() {
		return wheels;
	}

	Body GetBody() {
		return body;
	}

	Interior GetInterior() {
		return interior;
	}

	Lights GetLights() {
		return lights;
	}

	Deal_Conditions GetDealConditions() {
		return deal_conditions;
	}

	// перегрузка оператора =
	BMW& operator=(BMW d_o);
};
