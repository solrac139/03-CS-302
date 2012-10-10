#pragma once
#ifndef ITEMTYPE_H
#define ITEMTYPE_H

const int MAX_ITEMS = 5;
enum RelationType {LESS, EQUAL, GREATER };
class ItemType
{
public:
	RelationType ComparedTo(ItemType) const;
	void Print();
	void Initialize(int);
	int Value();
private:
	int value;
};
#endif