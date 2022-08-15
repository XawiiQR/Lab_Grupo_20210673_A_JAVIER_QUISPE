#include <iostream>
#include<memory>
using namespace std;
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
int main() {
	
	std::unique_ptr<double> d{new double(1.0)};
	std::unique_ptr<Punto>pt{new Punto(1.0,2.0)};
	std::cout<<*d<<endl;
	pt->print();
	*d = 2.0;
	std::cout<<*d<<endl;
	(*pt).X(3.0);
	(*pt).Y(3.0);
	(*pt).print();
	pt->X(4.0);
	pt->Y(4.0);
	pt->print();
	d.reset();
	pt.reset();
	system("pause");
	
	return 0;
}
