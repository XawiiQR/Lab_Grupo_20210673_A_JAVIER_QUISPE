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
	std::unique_ptr<Calculadora> cal{ new Calculadora(5, 8) };
	
	cal->suma();
	cal->resta();
	cal->multi();
	cal->divi();
	system("pause");
	return 0;
}

