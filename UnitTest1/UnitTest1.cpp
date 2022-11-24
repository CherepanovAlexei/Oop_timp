#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Vanyu\OneDrive\Документы\GitHub\Oop_timp\Container.cpp"
#include "C:\Users\Vanyu\OneDrive\Документы\GitHub\Oop_timp\Flower.cpp"
#include "C:\Users\Vanyu\OneDrive\Документы\GitHub\Oop_timp\Plant.cpp"
#include "C:\Users\Vanyu\OneDrive\Документы\GitHub\Oop_timp\Tree.cpp"
#include "C:\Users\Vanyu\OneDrive\Документы\GitHub\Oop_timp\Bush.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Tests)
	{
	public:
	TEST_METHOD(TestCountLetters)
	{
		ifstream ifst("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/testCountLetters.txt");
		Plant* pl = Plant::In(ifst);

		int res = pl->CountLetters();
		int exp = 5;
		Assert::AreEqual(exp, res);
	}
	TEST_METHOD(TestCompare)
	{
		ifstream ifst("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/testCountLetters.txt");
		Plant* pl1, * pl2;
		pl1 = new tree;
		pl2 = new tree;

		pl1->In(ifst);
		pl2->In(ifst);
		Node* n1, * n2;
		n1 = new Node(pl1);
		n2 = new Node(pl2);
		bool res = n1->plnt->Compare(*n2->plnt);
		bool exp = false;
		Assert::AreEqual(exp, res);
	}

	TEST_METHOD(TestInOut)
	{
		ifstream ifst("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/inTest.txt");
		ofstream ofst("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expTestIn.txt");

		tree* t = new tree;
		bush* b = new bush;
		flower* f = new flower;

		t->In_Data(ifst);
		b->In_Data(ifst);
		f->In_Data(ifst);

		t->Out_Data(ofst);
		b->Out_Data(ofst);
		f->Out_Data(ofst);

		ifstream ifst1("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expInTest.txt");
		ifstream ifst2("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expTestIn.txt");
		char c1, c2;
		while (ifst1.get(c1) && ifst2.get(c2))
		{
			Assert::AreEqual(c1, c2);
		}
	}

	TEST_METHOD(TestInputOutput)
	{
		ifstream ifst;
		ifst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/inputTest.txt");
		ofstream ofst;
		ofst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outputTest.txt");
		Container c;

		bool res = true;
		bool exp = true;

		c.In(ifst);
		c.Out(ofst);

		ifstream ifst1("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expOutputTest.txt");
		ifstream ifst2("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outputTest.txt");
		char c1, c2;
		while (ifst1.get(c1) && ifst2.get(c2))
		{
			Assert::AreEqual(c1, c2);
		}
	}
	TEST_METHOD(TestClear)
	{
		ifstream ifst;
		ifst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/inputTest.txt");
		ofstream ofst;
		ofst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/clearTest.txt");
		Container c;

		bool res = true;
		bool exp = true;

		c.In(ifst);
		c.Clear();
		c.Out(ofst);


		ifstream ifst1("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/clearTest.txt");
		ifstream ifst2("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expClearTest.txt");
		char c1, c2;
		while (ifst1.get(c1) && ifst2.get(c2))
		{
			Assert::AreEqual(c1, c2);
		}
	}
	TEST_METHOD(TestSort)
	{
		ifstream ifst;
		ifst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/sortTest.txt");
		ofstream ofst;
		ofst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outSortTest.txt");
		Container c;


		c.In(ifst);
		c.Sort();
		c.Out(ofst);

		ifstream ifst1("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outSortTest.txt");
		ifstream ifst2("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expOutSortTest.txt");
		char c1 = ' ', c2 = ' ';
		while (ifst1.get(c1) && ifst2.get(c2))
		{
			Assert::AreEqual(c1, c2);
		}
	}
	TEST_METHOD(TestOutTrees)
	{
		ifstream ifst;
		ifst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/treesTest.txt");
		ofstream ofst;
		ofst.open("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outTreesTest.txt");
		Container c;

		bool res = true;
		bool exp = true;

		c.In(ifst);
		c.OutTrees(ofst);

		ifstream ifst1("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/outTreesTest.txt");
		ifstream ifst2("C:/Users/Vanyu/OneDrive/Документы/GitHub/Oop_timp/UnitTest1/expOutTreesTest.txt");
		char c1, c2;
		while (ifst1.get(c1) && ifst2.get(c2))
		{
			Assert::AreEqual(c1, c2);
		}
	}
	};
}