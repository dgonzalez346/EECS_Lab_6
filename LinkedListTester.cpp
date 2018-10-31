/**
*@author: Daniel Gonzalez
*@file: LinkedListTester.cpp
*@date: 10/31/2018
*@brief: Implementation for Linked List Tester for EECS 448 Lab 6
*/

#include "LinkedListTester.h"
using namespace std;

LinkedListTester::LinkedListTester()
{

}

void LinkedListTester::runTests()
{
	testEmpty();
	testInsertNotEmpty();
	testAddFront();
	testAddFrontSize();
	testSizeEmpty();
	testAddBackSize();
	testAddBack();
	testAddRemFrontSize();
	testAddRemBackSize();
	/*
	testInsertMiddleSize();
	testAddRemMidSize();
	testGetEntryBounds();
	testGetEntryFront();
	testGetEntryMid();
	testGetEntryBack();
	testInsertInvalidPos();
	testReplaceBounds();
	testReplaceFront();
	testReplaceMid();
	testReplaceBack();
	testCopyConstructFront();
	testCopyConstructMid();
	testCopyConstructBack();
	testCCCleared();
	testAssignFirst();
	testAssignMid();
	testAssignLast();
	testAssignClear();
	testClearEmptyLength();
	testClearFilledLength();
	testInsertFront();
	testInsertMid();
	testInsertBounds();
	testRemoveFront();
	testRemoveMid();
	testRemoveBack();
	testRemoveBounds();
	*/

}
void LinkedListTester::testEmpty()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing isEmpty: Size of empty list is zero: ";
	if(testList->isEmpty())
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertNotEmpty()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing isEmpty: Size of nonempty list is not zero: ";
	testList->addFront(1);
	if(!testList->isEmpty())
	{
		cout<<"Passed\n";
	}else{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testAddFront()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing addFront: Function inserts correct entry: ";
	testList->addFront(1);
	vector<int> vecTest = testList->toVector();
	if(vecTest[0] == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testAddFrontSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing addFront: Size of list is 1 after 1 addFront: ";
	testList->addFront(1);
	vector<int> vecTest = testList->toVector();
	if(vecTest.size() == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testAddBackSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing addBack: List has correct size after 1 addBack: ";
	testList->addBack(1);
	if(testList->size() == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testAddBack()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing addBack: List returns correct entry after 1 addBack: ";
	testList->addBack(1);
	vector<int> vecTest = testList->toVector();
	if(vecTest[0] == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testSizeEmpty()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing Size: Size of empty List is 0: ";
	if(testList->size() == 0){
		cout<<"Passed\n";
	}else{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testAddRemFrontSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing removeFront: List has correct size after adding and removing from front: ";
	testList->addFront(1);testList->removeFront();
	vector<int> vecTest = testList->toVector();
	if(vecTest.size() == 0)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testAddRemBackSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing removeBack: List has correct size after adding and removing from back: ";
	testList->addFront(1);testList->removeBack();
	vector<int> vecTest = testList->toVector();
	if(vecTest.size() == 0)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
/*
void LinkedListTester::testInsertMiddleSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"List has correct size after adding to middle: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->addFront(i,i);
		i++;
		j++;
	}
	testList->insert(floor(testList->getLength()/2), j);
	if(testList->getLength() == j)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
*/
/*
void LinkedListTester::testAddRemMidSize()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"List has correct size after adding and removing from middle: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->insert(floor(testList->getLength()/2), i);
	testList->remove(floor(testList->getLength()/2));
	if(testList->getLength() == i-1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testGetEntryBounds()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing get entry out of bounds: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	try
	{
		tester = testList->getEntry(i + 1);
	}catch(const std::runtime_error& e)
	{
		cout<<"Passed\n";
		delete testList;
		return;
	}
	cout<<"Failed\n";
	delete testList;
}
void LinkedListTester::testGetEntryFront()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Get entry from front of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	tester = testList->getEntry(1);
	if(tester > -1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testGetEntryMid()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Get entry from middle of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	tester = testList->getEntry(floor(testList->getLength()/2));
	if(tester > -1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testGetEntryBack()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Get entry from back of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	tester = testList->getEntry(testList->getLength());
	if(tester > -1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertInvalidPos()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing insert out of bounds: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	try
	{
		testList->insert(testList->getLength()+2,i + 2);
	}catch(const std::runtime_error& e)
	{
		cout<<"Passed\n";
		delete testList;
		return;
	}
	cout<<"Failed\n";
	delete testList;
}
/*
void LinkedListTester::testReplaceBounds()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing replace out of bounds: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	try
	{
		testList->replace(testList->getLength()+2,i + 2);
	}catch(const std::runtime_error& e)
	{
		cout<<"Passed\n";
		delete testList;
		return;
	}
	cout<<"Failed\n";
	delete testList;
}
void LinkedListTester::testReplaceFront()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Replace entry in front of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->replace(1,tester);
	if(testList->getEntry(1) == tester)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testReplaceMid()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Replace entry in middle of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	int mid = floor(testList->getLength()/2);
	testList->replace(mid,tester);
	if(testList->getEntry(mid) == tester)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testReplaceBack()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Replace entry in back of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->replace(testList->getLength(),tester);
	if(testList->getEntry(testList->getLength()) == tester)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
*/
/*
void LinkedListTester::testCopyConstructFront()
{
	LinkedListOfInts testList;
	cout<<"Copy Constructor gives correct first value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedListOfInts testCopy(testList);
	if(testCopy.getEntry(1) == testList.getEntry(1))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
}
void LinkedListTester::testCopyConstructMid()
{
	LinkedListOfInts testList;
	cout<<"Copy Constructor gives correct middle value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedListOfInts testCopy(testList);
	if(testCopy.getEntry(floor(testCopy.getLength()/2)) == testList.getEntry(floor(testList.getLength()/2)))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
}
void LinkedListTester::testCopyConstructBack()
{
	LinkedListOfInts testList;
	cout<<"Copy Constructor gives correct last value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedListOfInts testCopy(testList);
	if(testCopy.getEntry(testCopy.getLength()-1) == testList.getEntry(testList.getLength()-1))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
		cout<<testCopy.getLength();
		cout<<testList.getLength();
	}
}
void LinkedListTester::testCCCleared()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Copy Constructor creates deep copy: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedListOfInts* testCopy = new LinkedListOfInts(*testList);
	delete testList;
	if(testCopy->getEntry(1) == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testCopy;
}
void LinkedListTester::testAssignFirst()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Assignment operator assigns first value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;

	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedListOfInts* testCopy = new LinkedListOfInts();
	*testCopy = *testList;
	if(testCopy->getEntry(1) == testList->getEntry(1))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
	delete testCopy;
}
void LinkedListTester::testAssignMid()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Assignment operator assigns middle value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedListOfInts* testCopy = new LinkedListOfInts();
	*testCopy = *testList;
	if(testCopy->getEntry(floor(testCopy->getLength()/2)) == testList->getEntry(floor(testList->getLength()/2)))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
	delete testCopy;
}
void LinkedListTester::testAssignLast()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Assignment operator assigns last value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedListOfInts* testCopy = new LinkedListOfInts();
	*testCopy = *testList;
	if(testCopy->getEntry(testCopy->getLength()) == testList->getEntry(testCopy->getLength()))
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
	delete testCopy;
}
void LinkedListTester::testAssignClear()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Copy made by assignment operator remains after original deleted: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedListOfInts* testCopy = new LinkedListOfInts();
	*testCopy = *testList;
	delete testList;
	if(testCopy->getEntry(1) == 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testCopy;
}
*/
/*
void LinkedListTester::testClearFilledLength()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Clearing filled list returns 0 length: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->clear();
	if(testList->getLength() == 0)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testClearEmptyLength()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Clearing empty list returns 0 length: ";
	testList->clear();
	if(testList->getLength() == 0)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}

void LinkedListTester::testInsertMid()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"List returns correct entry and size after inserting to mid: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	i = testList->getLength();
	testList->insert(floor(testList->getLength()/2),i);
	if((testList->getEntry(floor(testList->getLength()/2))) == i and testList->getLength() == i + 1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertBounds()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing insert out of bounds: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	try
	{
		testList->insert(i + 2,i);
	}catch(const std::runtime_error& e)
	{
		cout<<"Passed\n";
		delete testList;
		return;
	}
	cout<<"Failed\n";
	delete testList;
}
void LinkedListTester::testRemoveFront()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Remove entry in front of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	i = testList->getLength();
	testList->remove(1);
	if((testList->getEntry(1) == 2) and testList->getLength() == i-1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testRemoveMid()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Remove entry in middle of list: ";
	int i = 1;
	while(i < 101)
	{
		testList->insert(i,i);
		i++;
	}
	testList->remove(50);
	if((testList->getEntry(50) == 51) and testList->getLength() == 99)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testRemoveBack()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Remove entry in back of list: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	i = testList->getEntry(testList->getLength());
	testList->remove(testList->getLength());
	if((testList->getEntry(testList->getLength()) == i-1) and testList->getLength() == i-1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testRemoveBounds()
{
	LinkedListOfInts* testList = new LinkedListOfInts();
	cout<<"Testing remove out of bounds: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	try
	{
		testList->remove(i + 2);
	}catch(const std::runtime_error& e)
	{
		cout<<"Passed\n";
		delete testList;
		return;
	}
	cout<<"Failed\n";
	delete testList;

}
*/
