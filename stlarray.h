/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

template <typename T>
class arrayStack {
	public:
		arrayStack();
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T& topItem);

	private:
		int n;
		T *DynamicArray;

};

template <typename T>
arrayStack<T>::arrayStack() {
	n = 0;
	DynamicArray = new T[n];
}

template <typename T>
~arrayStack<T>::arrayStack() {
	delete [] DynamicArray;
	DynamicArray = NULL;
}

template <typename T>
bool arrayStack<T>::isEmpty() {
	if (DynamicArray == NULL || n=0)
		return true;
	else
		return false;

}

template <typename T>
void arrayStack<T>::clear() {
	if (!isEmpty()) {
		delete [] DynamicArray;
		DynamicArray = NULL;
	}

}

template <typename T>
bool arrayStack<T>::push(T newItem) {
	curlength = n;
	T * tmp = new T[n+1];
	for (int i=0; i<n; i++)
		tmp[i] = DynamicArray[i];

	n++;

	delete[] DynamicArray;
	DynamicArray = NULL;
	DynamicArray = tmp;

	DynamicArray[n-1] = newItem;
	if (curlength != n-1)
		return false;
	return true;
}

template <typename T>
bool arrayStack<T>::pop() {
	if (!isEmpty()) {
		DynamicArray[n-1] = 0;
		n = n-1;
		return true;
	}
	return false;
}

template <typename T>
bool arrayStack<T>::top(T& topItem) {
	if (!isEmpty()) {
		topItem = DynamicArray[n-1];
		return true;
	}
	else
		return false;
}


#endif
