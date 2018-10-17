/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

#include <stack>


// De meeste functies van de vectorStack zijn geimplementeerd mbv
// functies van std::stack. Als de functie ook een booleaanse waarde
// terug moet geven is dat er dan ook bij geimplementeerd.
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

}//constructor

template <typename T>
bool stackStack<T>::isEmpty() {
	if (Stack.empty())
		return true;
	return false;
}//isEmpty

//The stack can be cleared by overwriting the existing
//stack with a new stack.
template <typename T>
void stackStack<T>::clear() {
	Stack = std::stack<T>();
}//clear

//If compiled without Wextra, this function gives a warning
//because there is no return false statement
template <typename T>
bool stackStack<T>::push(T newItem) {
	Stack.push(newItem);
	return true;
}//push

template <typename T>
bool stackStack<T>::pop() {
	Stack.pop();
	return true;
}//pop

template <typename T>
bool stackStack<T>::top(T& topItem) {
	if (isEmpty())
		return false;
	topItem = Stack.top();
	return true;
}//top
