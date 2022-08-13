#include "iostream"
#include "vector"
using namespace std;
class Automovil{
    public:
        std::vector<std::string> componentes;
        std::vector<std::string> colores;
        void ListaComp()const {
            std::cout << " \tComponentes: \tColor: "<<endl<<endl;
            for (size_t i = 0; i < componentes.size(); i++) {
                if (componentes[i] == componentes.back()) {
                    std::cout <<" \t"<< componentes[i];
                    std::cout <<" \t"<< colores[i];
                }
                else {
                    std::cout <<" \t"<< componentes[i];
                    std::cout <<" \t"<< colores[i]<<endl;
                }
            }
        }
};


class IBuilder {
    public:
        virtual ~IBuilder() {}
        virtual void ProducirPuerta(string) const = 0;
        virtual void ProducirLlanta(string) const = 0;
        virtual void ProducirTimon(string) const = 0;
        virtual void ProducirAsiento(string) const = 0;
        virtual void ProducirMotor(string) const = 0;
        virtual void ProducirEspejo(string) const = 0;
        virtual void ProducirVidrios(string) const = 0;
};


class BuilderEspecifico : public IBuilder {
    private:
        Automovil* product;
    public:
        BuilderEspecifico() {
            this->Reset();
        }
        ~BuilderEspecifico() {
            delete product;
        }
        void Reset() {
            this->product = new Automovil();
        }
        void ProducirPuerta(string color)const override {
            this->product->componentes.push_back("Puertas");
            this->product->colores.push_back(color);
        }
        void ProducirLlanta(string color)const override {
            this->product->componentes.push_back("Llantas");
            this->product->colores.push_back(color);
        }
        void ProducirTimon(string color)const override {
            this->product->componentes.push_back("Timon");
            this->product->colores.push_back(color);
        }
        void ProducirAsiento(string color)const override {
            this->product->componentes.push_back("Asiento");
            this->product->colores.push_back(color);
        }
        void ProducirMotor(string color)const override {
            this->product->componentes.push_back("Motor");
            this->product->colores.push_back(color);
        }
        void ProducirEspejo(string color)const override {
            this->product->componentes.push_back("Espejo");
            this->product->colores.push_back(color);
        }
        void ProducirVidrios(string color)const override {
            this->product->componentes.push_back("Vidrios");
            this->product->colores.push_back(color);
        }
        
        Automovil* GetProducto() {
            Automovil* resultado = this->product;
            this->Reset();
            return resultado;
        }
};

class Director {
    private:
        IBuilder* builder;
    public:
        void set_builder(IBuilder* builder) {
            this->builder = builder;
        }
};


void ClienteCode(Director& director){
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);
    
    //producto especial o personalizado 
    int opcion;
    do{
    	std::cout << " Componentes Disponibles:\n";
    	std::cout << " 1)Puerta"<<endl;
    	std::cout << " 2)Llanta"<<endl;
    	std::cout << " 3)Timon"<<endl;
    	std::cout << " 4)Asiento"<<endl;
    	std::cout << " 5)Motor"<<endl;
    	std::cout << " 6)Espejo"<<endl;
    	std::cout << " 7)Vidrios"<<endl;
    	std::cout << " 8)Concluir y mostrar"<<endl;
    	std::cout << " Ingrese opcion: ";
    	cin>>opcion;
    	int op;
    	string color;
    	switch(opcion){
    		case 1:
    			system("cls");
    			std::cout << endl<<"  Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirPuerta(color);
				}
				else{
					builder->ProducirPuerta("Gris");
				}
				system("cls");
				break;
			case 2:
				system("cls");
				std::cout << endl<<"  Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirLlanta(color);
				}
				else{
					builder->ProducirLlanta("Gris");
				}
				system("cls");
				break;
			case 3:
				system("cls");
				std::cout << endl<<"Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirTimon(color);
				}
				else{
					builder->ProducirTimon("Gris");
				}
				system("cls");
				break;
			case 4:
				system("cls");
				std::cout <<endl<< " Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirAsiento(color);
				}
				else{
					builder->ProducirAsiento("Gris");
				}
				system("cls");
				break;
			case 5:
				system("cls");
				std::cout << endl<<"  Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirMotor(color);
				}
				else{
					builder->ProducirMotor("Gris");
				}
				system("cls");
				break;
			case 6:
				system("cls");
				std::cout << endl<<" Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirEspejo(color);
				}
				else{
					builder->ProducirEspejo("Gris");
				}
				system("cls");
				break;
			case 7:
				system("cls");
				std::cout << endl<<"  Desea agregar un color personalizado?(Si-1/No-0):";
    			cin>>op;
    			if(op==1){
    				std::cout << " Ingrese su color : ";
    				cin>>color;
    				builder->ProducirVidrios(color);
				}
				else{
					builder->ProducirVidrios("Gris");
				}
				system("cls");
				break;
			case 8:
				system("cls");
		}		
	}while(opcion!=8);
	cout<<endl;
	Automovil* p = builder->GetProducto();
    p->ListaComp();
    delete p;
    delete builder;
}


int main() {
    Director* director = new Director();
    ClienteCode(*director);
    delete director;
    return 0;
}
