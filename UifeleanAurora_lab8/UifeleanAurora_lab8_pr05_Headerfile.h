class Masina {
	int cc;
	static int var_static;
public:
	Masina() = default;
	Masina(int c) {
		cc = c;
		var_static++;
	}
	int accesor() {
		return var_static;
	}
	static int accesor(int p) {
		return var_static;
	}
};

int Masina::var_static;
