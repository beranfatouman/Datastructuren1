template <typename T>
class backspace {
	public:
		backspace(std::string Input);
		void filter();

	private:
		std::string input;
		T stapelverliefd;
};

template <typename T>
backspace<T>::backspace(std::string Input) {
	input = Input;
}

template <typename T>
void backspace<T>::filter() {

	for (unsigned int i=0; i<input.size(); i++) {
		if (input[i]!='*')
			stapelverliefd.push(input[i]);
		else
			stapelverliefd.pop();
	}
	std::string printStapelverliefd;
	char x;
	while(!stapelverliefd.isEmpty()) {
		stapelverliefd.top(x);
		stapelverliefd.pop();
		printStapelverliefd = x + printStapelverliefd;
	}
	std::cout<< printStapelverliefd << std::endl;
}
