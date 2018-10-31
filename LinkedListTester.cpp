/**
*@author: Daniel Gonzalez
*@file: LinkedListTester.cpp
*@date: 2/5/2018
*@brief: Implementation for Linked List Tester, runs about 50 tests
*/

#include "LinkedListTester.h"

LinkedListTester::LinkedListTester()
{

}

void LinkedListTester::runTests()
{
	testEmpty();
	testInsertFrontSize();
	testInsertBackSize();
	testInsertMiddleSize();
	testAddRemFrontSize();
	testAddRemMidSize();
	testAddRemBackSize();
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
	testInsertBack();
	testInsertBounds();
	testRemoveFront();
	testRemoveMid();
	testRemoveBack();
	testRemoveBounds();
	
}
void LinkedListTester::testEmpty()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Size of empty list is zero: ";
	if(testList->isEmpty())
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertFrontSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List is not empty after adding 1 value: ";
	testList->insert(1,1);
	if(!testList->isEmpty())
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertBackSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List has correct size after adding to back: ";
	int j = 1;//an index used to keep track of what the correct length of the list should be after inserting values
	int randv = (rand() % 100) + 2;//rand value for list size;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
		j++;
	}
	testList->insert(testList->getLength(), testList->getLength());
	if(testList->getLength() == j)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testInsertMiddleSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List has correct size after adding to middle: ";
	int j = 1;//index to keep track of correct length since we use a random integer for size of list;
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
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
void LinkedListTester::testAddRemMidSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
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
void LinkedListTester::testAddRemBackSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List has correct size after adding and removing from back: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->insert(testList->getLength(),testList->getLength());
	testList->remove(testList->getLength());
	if(testList->getLength() == i-1)
	{
		cout<<"Passed\n";
	}else
	{
		cout<<"Failed\n";
	}
	delete testList;
}
void LinkedListTester::testAddRemFrontSize()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List has correct size after adding and removing from front: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	testList->insert(1,testList->getLength());
	testList->remove(1);
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
void LinkedListTester::testReplaceBounds()
{
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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

void LinkedListTester::testCopyConstructFront()
{
	LinkedList<int> testList;
	cout<<"Copy Constructor gives correct first value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedList<int> testCopy(testList);
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
	LinkedList<int> testList;
	cout<<"Copy Constructor gives correct middle value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedList<int> testCopy(testList);
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
	LinkedList<int> testList;
	cout<<"Copy Constructor gives correct last value: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList.insert(i,i);
		i++;
	}
	LinkedList<int> testCopy(testList);
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
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Copy Constructor creates deep copy: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedList<int>* testCopy = new LinkedList<int>(*testList);
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
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Assignment operator assigns first value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedList<int>* testCopy = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Assignment operator assigns middle value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedList<int>* testCopy = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Assignment operator assigns last value correctly: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedList<int>* testCopy = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"Copy made by assignment operator remains after original deleted: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	LinkedList<int>* testCopy = new LinkedList<int>();
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
void LinkedListTester::testClearFilledLength()
{
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
void LinkedListTester::testInsertFront()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List returns correct entry and size after inserting to front: ";
	testList->insert(1,1);
	if((testList->getEntry(1) == 1) and testList->getLength() == 1)
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
	LinkedList<int>* testList = new LinkedList<int>();
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
void LinkedListTester::testInsertBack()
{
	LinkedList<int>* testList = new LinkedList<int>();
	cout<<"List returns correct entry and size after inserting to back: ";
	int randv = (rand() % 100) + 2;
	int i = 1;
	int tester = -1;//set tester to negative int since entries are all positive
	while(i < randv)
	{
		testList->insert(i,i);
		i++;
	}
	i = testList->getLength();
	testList->insert(testList->getLength(),i);
	if((testList->getEntry(testList->getLength())) == i and testList->getLength() == i + 1)
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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
	LinkedList<int>* testList = new LinkedList<int>();
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

