template <typename T>
class backspace {
	public:
		backspace(std::string Input);
		void filter();

	private:
		std::string input;
		T stapel;
};

template <typename T>
backspace<T>::backspace(std::string Input) {
	input = Input;
}

template <typename T>
void backspace<T>::filter() {

	for (unsigned int i=0; i<input.size(); i++) {
		if (input[i]!='*')
			stapel.push(input[i]);
		else
			stapel.pop();
	}
	std::string printstapel;
	char x;
	while(!stapel.isEmpty()) {
		stapel.top(x);
		stapel.pop();
		printstapel = x + printstapel;
	}
	std::cout<< printstapel << std::endl;
}
