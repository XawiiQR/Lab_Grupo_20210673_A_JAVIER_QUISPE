#include <iostream>
#include <memory>
class Calculadora
{
public:
	Calculadora(int _a, int _b) : a(_a), b(_b) {};
	void suma(){
		std::cout<<" La suma de "<<a<<" + "<<b<<" es: "<<a+b<<std::endl;
	}
	void multi(){
	std::cout<<" La multiplicacion de "<<a<<" * "<<b<<" es: "<<a*b<<std::endl;
	}
	void resta(){
		std::cout<<" La resta de "<<a<<" - "<<b<<" es: "<<a-b<<std::endl;
	}
	void divi(){
		std::cout<<" La división de "<<a<<" / "<<b<<" es: "<<a/(b*1.0)<<std::endl;
	}
private:
						int a,b;
};
int main()
{
	std::shared_ptr <Calculadora> cal1 = std::make_shared<Calculadora>(12,6);
	std::shared_ptr <Calculadora> cal2=cal1;
	std::cout<<std::endl<<"**********Comprobacion de punteros*********"<<std::endl;
	std::cout<<std::endl<<"Cal1: "<<std::endl;
	cal1->suma();
	cal1->resta();
	cal1->multi();
	cal1->divi();
	std::cout<<std::endl<<"Cal2= "<<std::endl;
	cal2->suma();
	cal2->resta();
	cal2->multi();
	cal2->divi();
	std::cout<<std::endl<<"Direccion de memoria de Cal1= "<<cal1<<std::endl;
	std::cout<<"Direccion de memoria de Cal2= "<<cal2<<std::endl;
	std::cout<<"Apuntan a la misma direccion"<<std::endl;
	cal1.reset();
	cal2.reset();
	system("pause");
	return 0;
}
