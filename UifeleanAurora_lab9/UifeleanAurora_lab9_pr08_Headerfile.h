class Calculator {
	int x;
	int y;
	int z;
public:
	int getX() {
		return x;
	}
	void setX(int x) {
		this->x = x;
	}
	int getY() {
		return y;
	}
	void setY(int y) {
		this->y = y;
	}
	int getZ() {
		return z;
	}
	void setZ(int z) {
		this->z = z;
	}
	int calcul(int x) {
		return x * x;
	}
	int calcul(int x, int y) {
		return x * y;
	}
	double calcul(int x, int y, int z) {
		return (x - y) * (x + z) / 2;
	}
	static int calcul(int x, double d) {
		return x * x;
	}
	static int calcul(int x, int y, double d) {
		return x * y;
	}
	static double calcul(int x, int y, int z, double d) {
		return (x - y) * (x + z) / 2;
	}
};