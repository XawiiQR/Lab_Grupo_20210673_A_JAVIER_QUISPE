#include <iostream>
#include<memory>
using namespace std;
class C1{
private:
	std::shared_ptr<double>d;
public:
	C1(std::shared_ptr<double>value){
		this->d=value;
	}
	virtual ~C1(){cout<<"\nC1 destructor n";}
	void print() const {cout<<"Valor"<<*d;}
};
class Punto{
public:
	Punto(double x, double y): x(x),y(y){};
	void print(){
		std::cout<<"("<<x<<","<<y<<")\n";
	}
		void X(double _x){
			this->x=_x;
		};
			void Y(double _y){
				this->y=_y;
			};
				~Punto(){}
private:
					double x{},y{};
};
class C2{
private:
	std::shared_ptr<Punto>pt;
public:
	C2(std::shared_ptr<Punto>value):pt(value){};
	virtual ~C2(){cout<<"\nC2 destructor n";}
	void print() const {(*pt).print();}
};

int main(int argc, char *argv[]) {
	
	std::unique_ptr<double> d{new double(2.0)};
	std::unique_ptr<Punto> pt{new Punto(2.0,3.0)};
	std::cout<<*d<<endl;
	pt->print();
	*d = 6.0;
	std::cout<<*d<<endl;
	(*pt).X(5.0);
	(*pt).Y(5.0);
	(*pt).print();
	pt->X(7.0);
	pt->Y(7.0);
	pt->print();
	d.reset();
	pt.reset();
	system("pause");
	return 0;
}

