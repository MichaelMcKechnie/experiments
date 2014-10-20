#pragma once

#include <list>
#include <string>
#include "isorter.h"

using namespace std;

class CLASS_DECLSPEC StringSorter : public ISorter 
{
protected:
	list<string>* m_list;

public:
	StringSorter() {};
	StringSorter(list<string>* listToSort);
	virtual void sort();
};
