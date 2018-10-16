template <typename T>
class backspace {
	public:
		backspace(T Invoer);
		void filter();

	private:
		T invoer;
};

backspace<T>::backspace(T Invoer) {
	invoer = Invoer;
}
