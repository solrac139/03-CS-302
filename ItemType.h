#pragma once
class ItemType
{
public:
	ItemType(void);
	~ItemType(void);
private:
	int value;
public:
	RelationType ComparedTo(ItemType otherItem) const;
	void Print(void);
	void Initialize(int number);
};