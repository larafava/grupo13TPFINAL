#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"

using namespace std;

class cPersonal:
	public cPersona
{
protected:
	//cAvion* avionasociado;
	/*const*/ int codigoempleado;
	/*static*/ int contcodigo;

public:
	//constructor
	cPersonal(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cPersonal();
	string to_string();
	//getter y setter codigo empleado
};

