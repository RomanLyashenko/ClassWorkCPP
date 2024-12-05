#include <iostream>
using namespace std;
#include "List.h"
#pragma once

template <typename T>
class Queue
{
	List<T> data;
	int length;
public:
	int getLenght();
	Queue();
	Queue(T *data, int length);

	void insert(T value);
	void remove(T value);

	~Queue();
};

template<typename T>
inline int Queue<T>::getLenght()
{
	return this->length;
}

template<typename T>
inline Queue<T>::Queue()
{
}

template<typename T>
inline Queue<T>::Queue(T* data, int length): data(data, length)
{
	
}

template<typename T>
inline void Queue<T>::insert(T value)
{
	data.pushBack(value);

}

template<typename T>
inline void Queue<T>::remove(T value)
{
	data.popStart(value);
}

template<typename T>
inline Queue<T>::~Queue()
{
}
