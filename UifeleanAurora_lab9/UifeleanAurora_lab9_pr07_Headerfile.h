class MyClass {
	int a;
	int b;
	int c;
public:
	MyClass() {
		a = 0;
		b = 0;
		c = 0;
	}
	int getA() {
		return a;
	}
	void setA(int a) {
		this->a = a;
	}
	int getB() {
		return b;
	}
	void setB(int b) {
		this->b = b;
	}
	int getC() {
		return c;
	}
	void setC(int c) {
		this->c = c;
	}
	int myFunction(int p) {
		a = p;
		return a;
	}
	int myFunction(int p, int q) {
		return p * q;
	}
	int myFunction(int p, int q, int o) {
		return p * q * o;
	}
};