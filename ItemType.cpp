#include "ItemType.h"
#include <iostream>

using namespace std;

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
	if  ( value  <  otherItem.Value() )
		return  LESS ;
	else  if ( value  > otherItem.Value() )
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
int ItemType::Value()
{
	return value;
}