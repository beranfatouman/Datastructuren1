/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

#include <vector>

// De meeste functies van de vectorStack zijn geimplementeerd mbv
// functies van std::vector. Als de functie ook een booleaanse waarde
// terug moet geven is dat er dan ook bij geimplementeerd.
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

} //constructor

template <typename T>
bool vectorStack<T>::isEmpty() {
	if (Stack.empty())
		return true;
	else
		return false;
} //isEmpty

template <typename T>
void vectorStack<T>::clear() {
	if (!Stack.empty())
		Stack.clear(); // clears all data from a vector.
} //clear

template <typename T>
bool vectorStack<T>::push(T newItem) {
	unsigned int startsize;
	startsize = Stack.size();
	Stack.push_back(newItem);

	if (Stack.size() == startsize+1)
		return true;
	else
		return false;
} //push

template <typename T>
bool vectorStack<T>::pop() {
	if (!Stack.empty()) {
		Stack.pop_back();
		return true;
	}
	else
		return false;
} //pop

template <typename T>
bool vectorStack<T>::top(T& topItem) {
	if (!Stack.empty()) {
		topItem = Stack.back();
		return true;
	}
	return false;
} //top
