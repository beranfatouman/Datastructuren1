/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

#include <vector>

template <typename T>
class vectorStack {
	private:
		std::vector<T> Stack;

	public:
		vectorStack(); // constructor

		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T& topItem);
};

template <typename T>
vectorStack<T>::vectorStack() {
	
}

template <typename T>
bool vectorStack<T>::isEmpty() {
	if (Stack.empty())
		return true;
	else
		return false;
}

template <typename T>
void vectorStack<T>::clear() {
	if (!Stack.empty())
		myvector.clear(); // clears all data from a vector.
	//else ??
}

template <typename T>
bool vectorStack<T>::push(T newItem) {
	int startsize;
	startsize = Stack.size();
	Stack.push_back(newItem);

	if (Stack.size() == startsize+1)
		return true;
	else
		return false;
}

template <typename T>
bool vectorStack<T>::pop() {
	if (!Stack.empty()) {
		Stack.pop_back();
		return true;
	}
	else
		return false;
}

template <typename T>
bool vectorStack<T>::top(T& topItem) {
	if (!Stack.empty()) {
		topItem = stack.back();
		return true;
	}
	return false;
}
