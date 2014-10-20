#pragma once

#include <iostream>
#include "../experimentLib/stringSorter.h"

int main(int argc, char* argv[])
{
	cout << "Experiment:" ;

	ISorter *is = new StringSorter();

	return 0;
}
