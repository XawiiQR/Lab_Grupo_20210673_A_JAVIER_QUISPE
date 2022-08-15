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
int main(){
	std::shared_ptr <double> d = std::make_shared<double>(2.0);
	std::shared_ptr <Punto> pt = std::make_shared<Punto>(2.0, 3.0);
	std::cout<<"pt=";
	pt->print();
	std::cout<<"d =";
	*d = 6.0;
	std::cout<<*d<<endl;
	std::cout<<"[Por Funcion]"<<endl;
	std::cout<<"pt=";
	(*pt).X(5.0);
	(*pt).Y(5.0);
	(*pt).print();
	
	std::cout<<"[Por Punteros]"<<endl;
	std::cout<<"pt=";
	pt->X(7.0);
	pt->Y(7.0);
	pt->print();
	
	std::shared_ptr <double> c1=d;
	std::shared_ptr <Punto> c2=pt;
	std::cout<<endl<<"**********Comprobacion de punteros*********"<<endl;
	std::cout<<endl<<"d = "<<*d<<" "<<d<<endl<<" y c1= "<<*c1<<" "<<c1<<endl<<" Son el mismo Puntero"<<endl;
	std::cout<<endl<<"**********Comprobacion de punteros*********"<<endl;
	std::cout<<endl<<"pt= ";
	pt->print();
	std::cout<<pt<<endl<<"y c2= ";
	c2->print();
	std::cout<<c2<<endl<<" Son el mismo puntero"<<endl;
	std::cout <<endl<< "*********shared_ptr a partir de un puntero debil********* " << std::endl;
	std::weak_ptr<double> d2 = d;
	std::weak_ptr<Punto> pt2 = pt;
	std::shared_ptr <double> d3 = d2.lock();
	std::shared_ptr <Punto> pt3 = pt2.lock();
	std::cout << "d3=: " << *d3 <<" "<<d3<< std::endl;
	std::cout<<"pt3:";
	(*pt3).print();
	std::cout<<pt3<<endl;
	c1.reset();
	c2.reset();
	d.reset();
	pt.reset();
	system("pause");
	return 0;
}
