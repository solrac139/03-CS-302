#include "UnsortedList.h"

using namespace std;

template<class ItemType>
UnsortedList<ItemType>::UnsortedList()
{
	length = 0;
	listData = NULL;
}


template<class ItemType>
UnsortedList<ItemType>::~UnsortedList()
{
	NodeType<ItemType>* tempPtr;

	while( listData != NULL ) 
	{
		tempPtr	= listData;
		listData = listData->next;
		delete tempPtr;
	}
}



template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
	NodeType<ItemType>* tempPtr;

	while( listData != NULL ) 
	{
		tempPtr	= listData;
		listData = listData->next;
		delete tempPtr;
	}
	length=0;
} 


template<class ItemType>
int UnsortedList<ItemType>::Length() const
{
	return length;
}


template<class ItemType>
bool UnsortedList<ItemType>::IsFull() const
{
	NodeType<ItemType>* location;
 	try
	{
		location = new NodeType<ItemType>;
		delete location;
		return false;
	}
	catch( std::bad_alloc exception)
	{
		return true;
	}
} 


template<class ItemType>
void UnsortedList::GetItem(ItemType item, bool& found)
{
	bool continueSearch
	NodeType<ItemType>* location;
 
	location = listData;
	found = false;
 
	while( (location != NULL) && !found ) 
	{
 		switch ( item.ComparedTo( info[location]) )
		{
			case LESS		:
			case GREATER	:	location = location->next;
								continueSearch = (location != NULL);
								break;
			case EQUAL		:	found = true;
								item = location->info;
								break;
		}
	} 

}

template <class ItemType>
void UnsortedList::PutItem(ItemType item)
{
	NodeType<ItemType>* location;
	location = new NodeType<ItemType>;
	location->info = newItem;
	location->next = listData;
	listData = location;
	length++;

}


template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
	NodeType<ItemType>* location = listData;
	NodeType<ItemType>* tempLocation;
 
	if(item == listData->info) 
	{
		tempLocation = location;
		listData = listData->next;  // delete first node
	}
	else 
	{
 
		while(!(item == (location->next)->info))
			location = location->next;
    
	// delete node at location->next
 
	tempLocation=location->next;
	location->next = (location->next)->next;
	}
	delete tempLocation;
	length--;
 } 



template<class ItemType>
int UnsortedList<ItemType>::ResetList()
{
	currentPos = NULL;
}

template<class ItemType>
void UnsortedList<ItemType>::GetNextItem(ItemType& item)
{
	if( currentPos == NULL )
		currentPos == listData;
	else
		currentPos = currentPos->next;

	 item = currentPos->info;
}

template<class ItemType>
bool UnsortedList<ItemType>::IsLastItem() const
{
 return(currentPos == NULL);
} 
