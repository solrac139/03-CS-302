#include "ItemType.h"
#include <iostream>

using namespace std;

const int MAX_ITEMS = 5;
enum RelationType {LESS, EQUAL, GREATER };

ItemType::ItemType()
{
	value = 0;
}


ItemType::~ItemType()
{
}


RelationType ItemType::ComparedTo(ItemType otherItem) const
{
	if  ( value  <  otherItem.value )
		return  LESS ;
	else  if ( value  > otherItem.value )
		return  GREATER ;
	else  
		return  EQUAL ;
}


void ItemType::Print()
{
	cout  <<  value  <<  endl;
}


void ItemType::Initialize(int number)
{
	value  =  number;
}
