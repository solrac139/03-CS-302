#pragma once
#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

#include "NodeType.h"
#include "ItemType.cpp"
#include <stdio.h>
template <typename ItemType>
class UnsortedList
{
public:
	UnsortedList();
	~UnsortedList();
	void MakeEmpty();
	int GetLength() const;
	bool IsFull() const;
	void GetItem(ItemType&, bool&);
	void PutItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetList();
	void GetNextItem(ItemType&);
	bool IsLastItem() const;
private:
	int length;
	NodeType<ItemType> *currentPos;
	NodeType<ItemType> *listData;
};

template<typename ItemType>
UnsortedList<ItemType>::UnsortedList()
{
	length = 0;
	listData = NULL;
}
template<typename ItemType>
UnsortedList<ItemType>::~UnsortedList()
{
	MakeEmpty();
}

template<typename ItemType>
void UnsortedList<ItemType>::MakeEmpty()
{
	NodeType<ItemType> *tempPtr;
	while( listData != NULL )
	{
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
	length = 0;
}
template<typename ItemType>
int UnsortedList<ItemType>::GetLength() const
{
	return length;
}
template<typename ItemType>
bool UnsortedList<ItemType>::IsFull() const
{
	NodeType<ItemType> *location;
	try
	{
		location = new NodeType<ItemType>;
		delete location;
	}
	catch ( bad_alloc&)
	{
		return true;
	}
	return false;
} 
template<typename ItemType>
void UnsortedList<ItemType>::GetItem(ItemType  &item, bool &found)
{
	NodeType<ItemType> *location;
	location = listData;
	found = false;
 
   while( (location != NULL) && !found )
	{
		if( item == location->info )
		{
			found = true;
			item = location->info;
		}

		else
			location = location->next;
	}
}
template <typename ItemType>
void UnsortedList<ItemType>::PutItem(ItemType newItem)
{
	NodeType<ItemType> *location;
	location = new NodeType<ItemType>;
	location->info = newItem;
	location->next = listData;
	listData = location;
	length++;

}
template <typename ItemType>
void UnsortedList<ItemType>::DeleteItem(ItemType item)
{
	NodeType<ItemType> *location = listData;
	NodeType<ItemType> *tempLocation;
	if(item == listData->info) 
	{
		tempLocation = location;
		listData = listData->next;  // delete first node
	}
	else 
	{
		while(!(item == (location->next)->info))
		{
			location = location->next;
		}
	// delete node at location->next
	tempLocation=location->next;
	location->next = (location->next)->next;
	}
	delete tempLocation;
	length--;
 } 
template<typename ItemType>
void UnsortedList<ItemType>::ResetList()
{
	currentPos = NULL;
}

template<typename ItemType>
void UnsortedList<ItemType>::GetNextItem(ItemType& item)
{
	if( currentPos == NULL )
		currentPos == listData;
	else
		currentPos = currentPos->next;

	item = currentPos->info;
}
template<typename ItemType>
bool UnsortedList<ItemType>::IsLastItem() const
{
 return(currentPos == NULL);
} 

#endif
