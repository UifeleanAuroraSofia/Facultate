class Punct{
	int x;
	int y;
	int z;
public:
	int getX(){
		return x;
	}
	void setX(int x){
		this->x = x;
	}
	int getY(){
		return y;
	}
	void setY(int y) {
		this->y = y;
	}
	int getZ(){
		return z;
	}
	void setZ(int z) {
		this->z = z;
	}
	Punct translatie(int distanta){
		Punct l;
		l.x = x + distanta;
		l.y = y + distanta;
		l.z = z + distanta;
		return l;
	}
	int coliniaritate(Punct a, Punct b);
};

int Punct::coliniaritate(Punct a, Punct b){
	double fr1, fr2, fr3;
	fr1 = (double)(x - a.x) / (b.x - a.x);
	fr2 = (double)(y - a.y) / (b.y - a.y);
	fr3 = (double)(z - a.z) / (b.z - a.z);
	if (fr1 == fr2 && fr1 == fr3){
		return 1;
	}
	else {
		return 0;
	}
}