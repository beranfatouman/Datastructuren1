template <typename T>
class listStack {
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
listStack<T>::listStack() {
  start =  NULL;
}


bool isEmpty();
void clear();
bool push(T& newItem);
bool pop();
bool top(T& topItem)
