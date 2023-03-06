#include "pch.h"
//In unele cazuri putem folosi #include"stdafx.h"
using namespace System;
int main(array<System::String^>^ args)
{

	unsigned contor = 0; int div1 = 0;
	try {

		for (contor; contor < 5; contor++)
		{

			Console::WriteLine("Afisare [0][1]", "var", contor);
		}

		double div = contor / div1;
		Console::WriteLine(div);
	}
	catch (Exception^ exception)
	{
		Console::WriteLine("A fost gasita  o exceptie " + exception->Message);
	}
}
