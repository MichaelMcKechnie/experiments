#include "stdafx.h"

#include "../experimentLib/stringSorter.h"

using namespace NUnit::Framework;
using namespace FluentAssertions;
using namespace System;
using namespace System::Runtime::InteropServices;
using namespace std;

	[TestFixture]
	public ref class StringSorterTest
	{
	public:
		[Test]
		void sortShortListTest()
		{
			// arrange
			list<string> simpleList;
			simpleList.insert(simpleList.end(), "b");
			simpleList.insert(simpleList.end(), "a");

			ISorter *testSorter = new StringSorter(&simpleList);

			// act
			testSorter->sort();

			// assert
			String^ tStr = gcnew String(simpleList.begin()->c_str());
			StringAssert::AreEqualIgnoringCase((String ^)"a",tStr,(String ^)"String sorting failed");
			//			theString.Should().NotBeNull();

			// adieu
			delete testSorter;
		};
	};
