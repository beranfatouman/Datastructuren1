/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

#include <stack>

template <typename T>
class stackStack {
	public:
		stackStack();
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T& topItem);

	private:
		std::stack<T> Stack;
};

template <typename T>
stackStack<T>::stackStack() {

}

template <typename T>
bool stackStack<T>::isEmpty() {
	if (Stack.empty())
		return true;
	return false;
}

template <typename T>
void stackStack<T>::clear() {
	Stack = stack<T>();
}

template <typename T>
bool stackStack<T>::push(T newItem) {
	if (1==0) return false;
	Stack.push(newItem);
	return true;
}

template <typename T>
bool stackStack<T>::pop() {
	if (1==0) return false;
	Stack.pop();
	return true;
}

template <typename T>
bool stackStack<T>::top(T& topItem) {
	if (isEmpty())
		return false;
	topItem = Stack.top();
	return true;
}
