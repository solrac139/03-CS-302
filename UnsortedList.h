#pragma once

template <class ItemType>
struct NodeType
{
		ItemType info;
		NoteType* next;
};


template <class ItemType>
class UnsortedList
{
public:
	UnsortedList(void);
	~UnsortedList(void);
	virtual void MakeEmpty(void);
	int GetLength(void);
	bool IsFull(void);
	void GetItem(ItemType item, bool& found);
	void PutItem(ItemType item);
	void DeleteItem(ItemType item);
	void ResetList(void);
	void GetNextItem(ItemType&);
	bool IsLastItem;
private:
	int length;
	NodeType<ItemType>* currentPos;
	NodeType<ItemType>* listData;
};
