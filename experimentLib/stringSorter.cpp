#pragma once

#include "stdafx.h"

#include "stringSorter.h"

StringSorter::StringSorter(list<string>* listToSort)
{
	m_list = listToSort;
}

void StringSorter::sort()
{
	((list<string> *)m_list)->sort();
};
