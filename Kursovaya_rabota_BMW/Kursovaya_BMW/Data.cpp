#include "Data.h"

BMW::BMW() {

	technical_part.Engine = "";
	technical_part.Gearbox = "";
	technical_part.Diffelencial = "";
	technical_part.Exhaust = "";
	technical_part.Wheel_drive = 0;

	suspension.Type_of_suspension = "";
	suspension.Brakes = "";
	suspension.Stabilizators = "";
	suspension.Steering_control = "";

	wheels.Size = 0;
	wheels.Type_of_tyres = "";

	body.Type_of_body = "";
	body.Count_of_doors = 0;
	body.M_package = "";
	body.Paint = "";

	interior.Count_of_seats = 0;
	interior.Material = "";
	interior.Type_of_seats = "";
	interior.Panorama = "";
	interior.Projection = "";
	interior.Door_closers = "";

	lights.Headlights = "";
	lights.Taillights = "";

	deal_conditions.price = 0;
	deal_conditions.Days_of_man = 0;
	deal_conditions.country = "";

}

BMW::BMW(Technical_Part technical_part_, Suspension suspension_, Wheels wheels_, Body body_, Interior interior_, Lights lights_, Deal_Conditions deal_conditions_) {

	technical_part.Engine = technical_part_.Engine;
	technical_part.Gearbox = technical_part_.Gearbox;
	technical_part.Diffelencial = technical_part_.Diffelencial;
	technical_part.Exhaust = technical_part_.Exhaust;
	technical_part.Wheel_drive = technical_part_.Wheel_drive;

	suspension.Type_of_suspension = suspension_.Type_of_suspension;
	suspension.Brakes = suspension_.Brakes;
	suspension.Stabilizators = suspension_.Stabilizators;
	suspension.Steering_control = suspension_.Steering_control;

	wheels.Size = wheels_.Size;
	wheels.Type_of_tyres = wheels_.Type_of_tyres;

	body.Type_of_body = body_.Type_of_body;
	body.Count_of_doors = body_.Count_of_doors;
	body.M_package = body_.M_package;
	body.Paint = body_.Paint;

	interior.Count_of_seats = interior_.Count_of_seats;
	interior.Material = interior_.Material;
	interior.Type_of_seats = interior_.Type_of_seats;
	interior.Panorama = interior_.Panorama;
	interior.Projection = interior_.Projection;
	interior.Door_closers = interior_.Door_closers;

	lights.Headlights = lights_.Headlights;
	lights.Taillights = lights.Taillights;

	deal_conditions.price = deal_conditions_.price;
	deal_conditions.Days_of_man = deal_conditions_.Days_of_man;
	deal_conditions.country = deal_conditions_.country;
}

BMW::~BMW() {
	
}

void BMW::PrintData() {

	cout << "Technical parts of current BMW are : " << endl << "Engine : " << technical_part.Engine << endl << "Gearbox : " << technical_part.Gearbox << endl
		<< "Diffelencial : " << technical_part.Diffelencial << endl << "Exhaust : " << technical_part.Exhaust << endl << "Wheel drive : " 
		<< technical_part.Wheel_drive << endl;

	cout << "Suspension of current BMW is : " << endl << "Type of suspension : " << suspension.Type_of_suspension << endl << "Brakes : " 
		<< suspension.Brakes << endl << "Stabilizators : " << suspension.Stabilizators << endl << "Steering control : " << suspension.Steering_control << endl;

	cout << "Wheels of current BMW are : " << endl << "Size of wheels : " << wheels.Size << endl << "Type of tyres : " << wheels.Type_of_tyres << endl;

	cout << "Body of current BMW is : " << endl << "Type of body : " << body.Type_of_body << endl << "Count of doors : " << body.Count_of_doors << endl
		<< "M Perfomance kit : " << body.M_package << endl << "Color :" << body.Paint << endl;
	
	cout << "Interior of current BMW is : " << endl << "Count of seats : " << interior.Count_of_seats << endl << "Material of interior : " << interior.Material
		<< endl << "Type of seats : " << interior.Type_of_seats << endl << "Panorama : " << interior.Panorama << endl << "Projection : " << interior.Projection
		<< endl << "Door closers : " << interior.Door_closers << endl;

	cout << "Optics of current BMW is : " << endl << "Headlights : " << lights.Headlights << endl << "Taillights : " << lights.Taillights << endl;

	cout << "Deal Conditions are : " << endl << "Price : " << deal_conditions.price << endl << "Days of manufacture : " << deal_conditions.Days_of_man
		<< endl << "Country of manufacture : " << deal_conditions.country << endl;
}

void BMW::DataEntry(Technical_Part technical_part_, Suspension suspension_, Wheels wheels_, Body body_, Interior interior_, Lights lights_, Deal_Conditions deal_conditions_) {

	technical_part.Engine = technical_part_.Engine;
	technical_part.Gearbox = technical_part_.Gearbox;
	technical_part.Diffelencial = technical_part_.Diffelencial;
	technical_part.Exhaust = technical_part_.Exhaust;
	technical_part.Wheel_drive = technical_part_.Wheel_drive;

	suspension.Type_of_suspension = suspension_.Type_of_suspension;
	suspension.Brakes = suspension_.Brakes;
	suspension.Stabilizators = suspension_.Stabilizators;
	suspension.Steering_control = suspension_.Steering_control;

	wheels.Size = wheels_.Size;
	wheels.Type_of_tyres = wheels_.Type_of_tyres;

	body.Type_of_body = body_.Type_of_body;
	body.Count_of_doors = body_.Count_of_doors;
	body.M_package = body_.M_package;
	body.Paint = body_.Paint;

	interior.Count_of_seats = interior_.Count_of_seats;
	interior.Material = interior_.Material;
	interior.Type_of_seats = interior_.Type_of_seats;
	interior.Panorama = interior_.Panorama;
	interior.Projection = interior_.Projection;
	interior.Door_closers = interior_.Door_closers;

	lights.Headlights = lights_.Headlights;
	lights.Taillights = lights_.Taillights;

	deal_conditions.price = deal_conditions_.price;
	deal_conditions.Days_of_man = deal_conditions_.Days_of_man;
	deal_conditions.country = deal_conditions_.country;
}

BMW& BMW::operator=(BMW d_o){

	this->technical_part.Engine = d_o.technical_part.Engine;
	this->technical_part.Gearbox = d_o.technical_part.Gearbox;
	this->technical_part.Diffelencial = d_o.technical_part.Diffelencial;
	this->technical_part.Exhaust = d_o.technical_part.Exhaust;
	this->technical_part.Wheel_drive = d_o.technical_part.Wheel_drive;

	this->suspension.Type_of_suspension = d_o.suspension.Type_of_suspension;
	this->suspension.Brakes = d_o.suspension.Brakes;
	this->suspension.Stabilizators = d_o.suspension.Stabilizators;
	this->suspension.Steering_control = d_o.suspension.Steering_control;

	this->wheels.Size = d_o.wheels.Size;
	this->wheels.Type_of_tyres = d_o.wheels.Type_of_tyres;

	this->body.Type_of_body = d_o.body.Type_of_body;
	this->body.Count_of_doors = d_o.body.Count_of_doors;
	this->body.M_package = d_o.body.M_package;
	this->body.Paint = d_o.body.Paint;

	this->interior.Count_of_seats = d_o.interior.Count_of_seats;
	this->interior.Material = d_o.interior.Material;
	this->interior.Type_of_seats = d_o.interior.Type_of_seats;
	this->interior.Panorama = d_o.interior.Panorama;
	this->interior.Projection = d_o.interior.Projection;
	this->interior.Door_closers = d_o.interior.Door_closers;

	this->lights.Headlights = d_o.lights.Headlights;
	this->lights.Taillights = d_o.lights.Taillights;

	this->deal_conditions.price = d_o.deal_conditions.price;
	this->deal_conditions.Days_of_man = d_o.deal_conditions.Days_of_man;
	this->deal_conditions.country = d_o.deal_conditions.country;

	return *this;
}

