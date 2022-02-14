#include "Functions.h"

void Copy(BMW* d_n, BMW* d_o, int n) {
	for (int i = 0; i < n; i++) {
		d_n[i] = d_o[i];
	}
}

void AddBaseConfig(BMW* (&bmw), int& n) {

	Technical_Part technical_part;
	Suspension suspension;
	Wheels wheels;
	Body body;
	Interior interior;
	Lights lights;
	Deal_Conditions deal_conditions;

	if (n == 0) {
		n += 1;

		bmw = new BMW[n];
		for (int i = 0; i < n; i++) {
			technical_part.Engine = "2.0 petrol";
			technical_part.Gearbox = "manual";
			technical_part.Diffelencial = "basic diffelencial";
			technical_part.Exhaust = "basic exhaust";
			technical_part.Wheel_drive = 2;

			suspension.Type_of_suspension = "spring suspension";
			suspension.Brakes = "metal brakes";
			suspension.Stabilizators = "basic stabilizators";
			suspension.Steering_control = "basic steering_control";

			wheels.Size = 18;
			wheels.Type_of_tyres = "basic tyres";

			body.Type_of_body = "sedan";
			body.Count_of_doors = 4;
			body.M_package = "No";
			body.Paint = "White";

			interior.Count_of_seats = 5;
			interior.Material = "cloth";
			interior.Type_of_seats = "basic seats";
			interior.Panorama = "No";
			interior.Projection = "No";
			interior.Door_closers = "No";

			lights.Headlights = "basic headlights";
			lights.Taillights = "basic taillights";

			deal_conditions.price = 40000;
			deal_conditions.Days_of_man = 3;
			deal_conditions.country = "Russia";

			bmw[i].DataEntry(technical_part, suspension, wheels, body, interior, lights, deal_conditions);
		}
	}
	else {
		BMW* buf = new BMW[n];
		int size = n, new_size = ++n;

		Copy(buf, bmw, size);

		bmw = new BMW[new_size];

		Copy(bmw, buf, size);

		technical_part.Engine = "2.0 petrol";
		technical_part.Gearbox = "manual";
		technical_part.Diffelencial = "basic diffelencial";
		technical_part.Exhaust = "basic exhaust";
		technical_part.Wheel_drive = 2;

		suspension.Type_of_suspension = "spring suspension";
		suspension.Brakes = "metal brakes";
		suspension.Stabilizators = "basic stabilizators";
		suspension.Steering_control = "basic steering control";

		wheels.Size = 18;
		wheels.Type_of_tyres = "basic tyres";

		body.Type_of_body = "sedan";
		body.Count_of_doors = 4;
		body.M_package = "No";
		body.Paint = "White";

		interior.Count_of_seats = 5;
		interior.Material = "cloth";
		interior.Type_of_seats = "basic seats";
		interior.Panorama = "No";
		interior.Projection = "No";
		interior.Door_closers = "No";

		lights.Headlights = "basic headlights";
		lights.Taillights = "basic taillights";

		deal_conditions.price = 40000;
		deal_conditions.Days_of_man = 3;
		deal_conditions.country = "Russia";

		bmw[size].DataEntry(technical_part, suspension, wheels, body, interior, lights, deal_conditions);
	}
}

Technical_Part ChooseTechnicalPart(BMW* bmw, Technical_Part technical_part_, Deal_Conditions &deal_conditions_, int n) {

	Technical_Part technical_part;
	Deal_Conditions deal_conditions;
	technical_part = technical_part_;
	deal_conditions = deal_conditions_;

	string Engine1 = "3.0 bi-turbo diesel";
	string Engine2 = "3.0 turbo petrol";
	string Engine3 = "4.4 twinturbo petrol";
	string Gearbox1 = "manual";
	string Gearbox2 = "automatic";
	string Diffelencial1 = "basic diffelencial";
	string Diffelencial2 = "sport diffelencial";
	string Exhaust1 = "basic exhaust";
	string Exhaust2 = "sport exhaust";
	int WheelDrive1 = 2;
	int WheelDrive2 = 4;
	deal_conditions.country = "Russia";
	deal_conditions.price = 40000;
	deal_conditions.Days_of_man = 48;
	int a;

	cout << "Choose the engine ... for 3.0 diesel press 1, for 3.0 petrol press 2, for 4.4 petrol press 3 : ";
	cin >> a;
	switch (a) {
		case 1:
			technical_part.Engine = Engine1;
			deal_conditions.price += 7500;
			break;
		case 2:
			technical_part.Engine = Engine2;
			deal_conditions.price += 5000;
			break;
		case 3:
			technical_part.Engine = Engine3;
			deal_conditions.country = "Germany";
			deal_conditions.price += 15000;
			deal_conditions.Days_of_man = 135;
			break;
	}

	system("cls");

	cout << "Choose the gearbox ... for manual gearbox press 1, for automatic gearbox press 2 : ";
	cin >> a;
	cout << endl;
	switch (a) {
	case 1:
		technical_part.Gearbox = Gearbox1;
		if (technical_part.Engine == Engine3) {
			int b;
			while (technical_part.Gearbox == Gearbox1) {
				cout << "Sync 4.4 engine with manual gearbox is not available...Make configuration again\n";
				cout << "Choose the gearbox again... for manual gearbox press 1, for automatic gearbox press 2 : ";
				cin >> b;
				if (b == 1) {
					technical_part.Gearbox = Gearbox1;
					system("cls");
				}
				else if (b == 2) {
					technical_part.Gearbox = Gearbox2;
					system("cls");
					break;
				}
			}
		}
		break;
	case 2:
		technical_part.Gearbox = Gearbox2;
		deal_conditions.price += 3000;
		break;
	}

	system("cls");

	cout << "Choose the diffelencial ... for basic diffelencial press 1, for sport diffelencial press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		technical_part.Diffelencial = Diffelencial1;
		break;
	case 2:
		technical_part.Diffelencial = Diffelencial2;
		deal_conditions.price += 1300;
		break;
	}

	system("cls");

	cout << "Choose the exhaust ... for basic exhaust press 1, for sport exhaust press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		technical_part.Exhaust = Exhaust1;
		break;
	case 2:
		technical_part.Exhaust = Exhaust2;
		deal_conditions.price += 650;
		break;
	}

	system("cls");

	cout << "Choose the number of driving wheels ... for 2 wheels press 1, for 4 wheels press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		technical_part.Wheel_drive = WheelDrive1;
		if (technical_part.Engine == Engine3) {
			int b;
			while (technical_part.Wheel_drive == WheelDrive1) {
				cout << "Sync 4.4 engine with 2 driving wheels is not available...Make configuration again\n";
				cout << "Choose the number of driving wheels again ... for 2 wheels press 1, for 4 wheels press 2 : ";
				cin >> b;
				if (b == 1) {
					technical_part.Wheel_drive = WheelDrive1;
					system("cls");
				}
				else if (b == 2) {
					technical_part.Wheel_drive = WheelDrive2;
					system("cls");
					break;
				}
			}
		}
		break;
	case 2:
		technical_part.Wheel_drive = WheelDrive2;
		deal_conditions.price += 2340;
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return technical_part;

}

Suspension ChooseSuspension(BMW* bmw, Suspension suspension_, Deal_Conditions &deal_conditions_, int n) {

	Suspension suspension;
	Deal_Conditions deal_conditions;
	suspension = suspension_;
	deal_conditions = deal_conditions_;

	string Suspension1 = "spring suspension";
	string Suspension2 = "air suspension";
	string Brakes1 = "basic brakes";
	string Brakes2 = "carbonceramic brakes";
	string Stabilizators1 = "basic stabilizators";
	string Stabilizators2 = "sport stabilizators";
	string Steering_control1 = "basic steering control";
	string Steering_control2 = "sport steering control";
	int a;

	cout << "Choose the suspension ... for spring suspension press 1, for air suspension press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		suspension.Type_of_suspension = Suspension1;
		break;
	case 2:
		suspension.Type_of_suspension = Suspension2;
		deal_conditions.price += 4000;
		if (deal_conditions.country == "Russia") {
			deal_conditions.country = "Germany";
			deal_conditions.Days_of_man = 135;
		}
		break;
	}

	system("cls");

	cout << "Choose the brakes ... for basic brakes press 1, for carbonceramic brakes press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		suspension.Brakes = Brakes1;
		break;
	case 2:
		suspension.Brakes = Brakes2;
		deal_conditions.price += 11000;
		if (deal_conditions.country == "Russia") {
			deal_conditions.country = "Germany";
			deal_conditions.Days_of_man = 135;
		}
		break;
	}

	system("cls");

	cout << "Choose the stabilizators with steering control ... for basic kit press 1, for sport kit press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		suspension.Stabilizators = Stabilizators1;
		suspension.Steering_control = Steering_control1;
		break;
	case 2:
		suspension.Stabilizators = Stabilizators2;
		suspension.Steering_control = Steering_control2;
		deal_conditions.price += 3000;
		if (suspension.Type_of_suspension == Suspension2) {
			int b;
			while (suspension.Stabilizators == Stabilizators2 && suspension.Steering_control == Steering_control2) {
				cout << "Sync sport kit with air suspension is not available...Make configuration again\n";
				cout << "Choose the stabilizators with steering control again ... for basic kit press 1, for sport kit press 2 : ";
				cin >> b;
				if (b == 1) {
					suspension.Stabilizators = Stabilizators1;
					suspension.Steering_control = Steering_control1;
					system("cls");
					break;
				}
				else if (b == 2) {
					suspension.Stabilizators = Stabilizators2;
					suspension.Steering_control = Steering_control2;
					system("cls");
				}
			}
		}
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return suspension;
}

Wheels ChooseWheels(BMW* bmw, Wheels wheels_, Deal_Conditions& deal_conditions_, int n) {

	Wheels wheels; 
	Deal_Conditions deal_conditions;
	wheels = wheels_;
	deal_conditions = deal_conditions_;

	int Wheels1 = 18;
	int Wheels2 = 19;
	int Wheels3 = 20;
	string Tyres1 = "basic tyres";
	string Tyres2 = "RunFlat tyres";
	int a;

	cout << "Choose diametr of the wheels ... for 18' diametr press 1, for 19' diametr press 2, for 20' diametr press 3 : ";
	cin >> a;
	switch (a) {
	case 1:
		wheels.Size = Wheels1;
		wheels.Type_of_tyres = Tyres1;
		break;
	case 2:
		wheels.Size = Wheels2;
		wheels.Type_of_tyres = Tyres1;
		deal_conditions.price += 1000;
		break;
	case 3:
		wheels.Size = Wheels3;
		wheels.Type_of_tyres = Tyres2;
		deal_conditions.price += 3000;
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return wheels;

}

Body ChooseBody(BMW* bmw, Body body_, Deal_Conditions& deal_conditions_, int n) {

	Body body;
	Deal_Conditions deal_conditions;
	body = body_;
	deal_conditions = deal_conditions_;

	string Body1 = "sedan";
	string Body2 = "touring";
	int doors = 5;
	string Mpack1 = "No";
	string Mpack2 = "Yes";
	string Color1 = "Black";
	string Color2 = "Blue";
	string Color3 = "Red";
	int a;

	cout << "Choose type of body ... for sedan press 1, for touring press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		body.Type_of_body = Body1;
		body.Count_of_doors = doors;
		break;
	case 2:
		body.Type_of_body = Body1;
		body.Count_of_doors = doors;
		break;
	}

	system("cls");

	cout << "Choose including M perfomance kit ... for No press 1, for Yes press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		body.M_package = Mpack1;
		break;
	case 2:
		body.M_package = Mpack2;
		deal_conditions.price += 4630;
		break;
	}

	system("cls");

	cout << "Choose color of the car ... for Black press 1, for Blue press 2, for Red press 3 : ";
	cin >> a;
	switch (a) {
	case 1:
		body.Paint = Color1;
		deal_conditions.price += 1000;
		break;
	case 2:
		body.Paint = Color2;
		deal_conditions.price += 2000;
		break;
	case 3:
		body.Paint = Color3;
		deal_conditions.price += 2000;
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return body;

}

Interior ChooseInterior(BMW* bmw, Interior interior_, Deal_Conditions& deal_conditions_, int n) {

	Interior interior;
	Deal_Conditions deal_conditions;
	interior = interior_;
	deal_conditions = deal_conditions_;

	int CountOfSeats = 5;
	string Material1 = "cloth";
	string Material2 = "leather";
	string Seats1 = "basic seats";
	string Seats2 = "smart seats";
	string Panorama1 = "No";
	string Projection1 = "No";
	string Door_closers1 = "No";
	string Panorama2 = "Yes";
	string Projection2 = "Yes";
	string Door_closers2 = "Yes";
	int a;

	cout << "Choose Material ... for cloth press 1, for leather press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		interior.Material = Material1;
		break;
	case 2:
		interior.Material = Material2;
		deal_conditions.price += 2500;
		break;
	}

	system("cls");

	cout << "Choose Seats ... for basic seats press 1, for smart seats press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		interior.Type_of_seats = Seats1;
		interior.Count_of_seats = CountOfSeats;
		break;
	case 2:
		interior.Type_of_seats = Seats2;
		interior.Count_of_seats = CountOfSeats;
		deal_conditions.price += 5300;
		break;
	}

	system("cls");

	cout << "Choose including Comfort kit (panorama, projection, door closers ... for No press 1, for Yes press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		interior.Panorama = Panorama1;
		interior.Projection = Projection1;
		interior.Door_closers = Door_closers1;
		break;
	case 2:
		interior.Panorama = Panorama2;
		interior.Projection = Projection2;
		interior.Door_closers = Door_closers2;
		deal_conditions.price += 3300;
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return interior;
}

Lights ChooseLights(BMW* bmw, Lights lights_, Deal_Conditions& deal_conditions_, int n) {
	
	Lights lights;
	Deal_Conditions deal_conditions;
	lights = lights_;
	deal_conditions = deal_conditions_;

	string HeadLights1 = "basic headlights";
	string HeadLights2 = "lazer headlights";
	string TailLights1 = "basic taillights";
	string TailLights2 = "diod headlights";
	int a;

	cout << "Choose headlights ... for basic headlights press 1, for lazer headlights press 2 : ";
	cin >> a;
	switch (a) {
	case 1:
		lights.Headlights = HeadLights1;
		lights.Taillights = TailLights1;
		break;
	case 2:
		lights.Headlights = HeadLights2;
		lights.Taillights = TailLights2;
		deal_conditions.price += 5500;
		break;
	}

	system("cls");
	deal_conditions_ = deal_conditions;

	return lights;
}

void AddIndividualConfig(BMW* (&bmw), int& n) {

	Technical_Part technical_part;
	Suspension suspension;
	Wheels wheels;
	Body body;
	Interior interior;
	Lights lights;
	Deal_Conditions deal_conditions;

	if (n == 0) {
		n += 1;

		bmw = new BMW[n];
		for (int i = 0; i < n; i++) {
			technical_part = ChooseTechnicalPart(bmw, technical_part, deal_conditions, n);
			suspension = ChooseSuspension(bmw, suspension, deal_conditions, n);
			wheels = ChooseWheels(bmw, wheels, deal_conditions, n);
			body = ChooseBody(bmw, body, deal_conditions, n);
			interior = ChooseInterior(bmw, interior, deal_conditions, n);
			lights = ChooseLights(bmw, lights, deal_conditions, n);

			bmw[i].DataEntry(technical_part, suspension, wheels, body, interior, lights, deal_conditions);
		}
	}
	else {
		BMW* buf = new BMW[n];
		int size = n, new_size = ++n;

		Copy(buf, bmw, size);

		bmw = new BMW[new_size];

		Copy(bmw, buf, size);

		technical_part = ChooseTechnicalPart(bmw, technical_part, deal_conditions, n);
		suspension = ChooseSuspension(bmw, suspension, deal_conditions, n);
		wheels = ChooseWheels(bmw, wheels, deal_conditions, n);
		body = ChooseBody(bmw, body, deal_conditions, n);
		interior = ChooseInterior(bmw, interior, deal_conditions, n);
		lights = ChooseLights(bmw, lights, deal_conditions, n);

		bmw[size].DataEntry(technical_part, suspension, wheels, body, interior, lights, deal_conditions);
	}
}

void Print(BMW* bmw, int n) {
	for (int i = 0; i < n; i++) {
		cout << "---------------------------------------------\n";
		bmw[i].PrintData();
		cout << "---------------------------------------------\n";
	}
}

