class MyClass_Impl; // forward declaration

class MyClass {

	public:
		MyClass();
		~MyClass();
		void some_method();

	private:
		MyClass_Impl *pimpl; // pointer to implementation
};
