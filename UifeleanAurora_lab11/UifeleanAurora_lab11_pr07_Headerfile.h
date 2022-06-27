#include<iostream>
#include<math.h>

using namespace std;

class Punct {
protected:
	int x;
	int y;
public:
	int getX() {
		return x;
	}
	void setX(int xx) {
		x = xx;
	}
	int getY() {
		return y;
	}
	void setY(int yy) {
		y = yy;
	}
};

class PatrulaterAstract : public Punct {
protected:
	Punct a;
	Punct b;
	Punct c;
	Punct d;
public:
	virtual double perimetrul() = 0;
	virtual double aria() = 0;
};

class PatrulaterConcret : public PatrulaterAstract {
public:
	void setA(Punct aa) {
		a.setX(aa.getX());
		a.setY(aa.getY());
	}
	void setB(Punct bb) {
		b.setX(bb.getX());
		b.setY(bb.getY());
	}
	void setC(Punct cc) {
		c.setX(cc.getX());
		c.setY(cc.getY());
	}
	void setD(Punct dd) {
		d.setX(dd.getX());
		d.setY(dd.getY());
	}
	double latura(Punct a, Punct b) {
		double ab;
		ab = sqrt((b.getX() - a.getX()) * (b.getX() - a.getX()) + (b.getY() - a.getY()) * (b.getY() - a.getY()));
		return ab;
	}
	int tip() {
		double ab, bc, cd, da, dm, cn, bp, cq, db, ac;
		Punct m, n, p, q;
		ab = latura(a, b);
		bc = latura(b, c);
		cd = latura(c, b);
		da = latura(d, a);
		db = latura(d, b);
		ac = latura(a, c);

		m.setX((c.getX() + a.getX()) / 2);
		m.setY((c.getY() + a.getY()) / 2);
		dm = latura(d, m);

		n.setX((d.getX() + b.getX()) / 2);
		n.setY((d.getY() + b.getY()) / 2);
		cn = latura(c, n);

		p.setX((c.getX() + a.getX()) / 2);
		p.setY((c.getY() + a.getY()) / 2);
		bp = latura(d, b);

		q.setX((d.getX() + b.getX()) / 2);
		q.setY((d.getY() + b.getY()) / 2);
		cq = latura(d, b);


		if (ab == bc == cd == da) {
			cout << "\n\tFigura este un patrat";
			return 1; //patrat
		}

		if ((ab == bc && cd == da && ab != cd) || (ab == cd && bc == da && ab != bc)) {
			cout << "\n\tFigura este un dreptunghi";
			return 2; //dreptunghi
		}

		if (dm > db || cn > ac || db < bp || ac < cq) {
			cout << "\n\tFigura este un patrulater concav";
			return 3; //concav
		}
		else {
			cout << "\n\tFigura este un patrulater convex";
			return 3; //convex
		}

	}

	double perimetrul() {
		double ab, bc, cd, da;
		ab = latura(a, b);
		bc = latura(b, c);
		cd = latura(c, b);
		da = latura(d, a);
		return ab + bc + cd + da;
	}

	double aria() {
		int k = tip();
		switch (k)
		{
		case 1:
			return latura(a, b) * latura(a, b);
			break;
		case 2:
			return latura(a, b) * latura(b, c);
			break;
		case 3:
			double aa, bb, cc, dd, ac, db, p, q;
			aa = latura(a, b);
			bb = latura(b, c);
			cc = latura(c, b);
			dd = latura(d, a);
			db = latura(d, b);
			ac = latura(a, c);
			p = latura(d, b);
			q = latura(a, c);

			double s = (aa + bb + cc + dd) / 2;
			return sqrt((s - aa) * (s - bb) * (s - cc) * (s - dd) - 1 / 4 * (aa * cc + bb * dd + p * q) * (aa * cc + bb * dd - p * q));
			break;
		}
	}
};