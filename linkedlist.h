template <typename T>
class listStack {
	private:
		node *head; node *tail;
  	public:
		listStack();
		~listStack();
		bool isEmpty();
		void clear();
		bool push(T& newItem);
		bool pop();
		bool top(T& topItem);
}

template <typename T>
struct node {
	T data;
	node *next;
}

template <typename T>
listStack<T>::listStack() {
	head = NULL;
	tail = NULL;
}

template <typename T>
bool listStack<T>::isEmpty() {
	if (head == NULL && tail == NULL)
		return true;
	return false;
}

template <typename T>
void listStack<T>::clear() {
	if (!isEmpty()) {
		while (head != NULL) {
			node* temp;
			temp = head->next;
			delete head;
			head = temp;
		}
		tail = NULL;
	}
}
		
template <typename T>
bool listStack<T>::push(T& newItem) {
	node *temp = new node;
	temp->data = newItem;
	temp->next = head;
	head = temp;
	return true;
}

template <typename T>
bool listStack<T>::pop() {
	if (!isEMpty()) {
		node * temp = head;
		head = head->next;
		delete temp;
	}
	return false;
}

template <typename T>
bool listStack<T>::top(T& newItem) {
	if (!isEMpty()) {
		topItem = head->data;
		return true;
	}	
	return false;
}

void clear();
bool push(T& newItem);
bool pop();
bool top(T& topItem)
