/* Datastructuren Opdracht 1 */
/* Programmeurs:             */
/*  - Luc Schreurs           */
/*    s1987747							 */
/*  - Berend van Statkenburg */
/*		s1800604							 */

//Node struct
template <typename T>
struct node {
	T data;
	node<T> *next;
};

template <typename T>
class listStack {
	private:
		node<T> *head;
  	public:
		listStack();
		//~listStack();
		bool isEmpty();
		void clear();
		bool push(T newItem);
		bool pop();
		bool top(T& topItem);
};

template <typename T>
listStack<T>::listStack() {
	head = NULL;
} //constructor

template <typename T>
bool listStack<T>::isEmpty() {
	if (head == NULL)
		return true;
	return false;
} //isEmpty

template <typename T>
void listStack<T>::clear() {
	if (!isEmpty()) {
		while (head != NULL) {
			node<T>* temp;
			temp = head->next;
			delete head;
			head = temp;
		}
	}
} //clear

template <typename T>
bool listStack<T>::push(T newItem) {
	node<T> *temp = new node<T>;
	temp->data = newItem;
	temp->next = head;
	head = temp;
	return true;
} //push

template <typename T>
bool listStack<T>::pop() {
	if (!isEmpty()) {
		node<T> * temp = head;
		head = head->next;
		delete temp;
		return true;
	}
	return false;
} //pop

template <typename T>
bool listStack<T>::top(T& newItem) {
	if (!isEmpty()) {
		newItem = head->data;
		return true;
	}
	return false;
} //top
