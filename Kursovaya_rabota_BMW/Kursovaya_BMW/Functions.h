#pragma once
#include "Data.h"

void AddBaseConfig(BMW* (&bmw), int& n);

Technical_Part ChooseTechnicalPart(BMW* bmw, Technical_Part technical_part_, Deal_Conditions& deal_conditions_, int n);

Suspension ChooseSuspension(BMW* bmw, Suspension suspension_, Deal_Conditions& deal_conditions_, int n);

Wheels ChooseWheels(BMW* bmw, Wheels wheels_, Deal_Conditions& deal_conditions_, int n);

Body ChooseBody(BMW* bmw, Body body_, Deal_Conditions& deal_conditions_, int n);

Interior ChooseInterior(BMW* bmw, Interior interior_, Deal_Conditions& deal_conditions_, int n);

Lights ChooseLights(BMW* bmw, Lights lights_, Deal_Conditions& deal_conditions_, int n);

void AddIndividualConfig(BMW* (&bmw), int& n);

void Print(BMW* bmw, int n);

void Copy(BMW* d_n, BMW* d_o, int n);
