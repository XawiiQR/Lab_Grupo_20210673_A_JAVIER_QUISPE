#include <iostream>
#include <vector>
using namespace std;
class Find{
private:
	vector<int> ind;
	vector<int> list;
public:
	Find(vector<int> lista){
		this->list=lista;
	}
	vector<int> operator()(int start,int end,int dato){
		for(int i=start;i<end;i++){
			if(list[i]==dato)ind.push_back(i);
		}
		return ind;
	}
};
int main(int argc, char *argv[]) {
	int dato;
	int k=0;
	vector<int>list={4,7,9,3,8,5,3,8,4,9,10,8,3,5,4,7,8};
	Find p2(list);
	cout<<"Que numero desea buscar: "<<endl;
	cin>>dato;
	for(int j=0; j<list.size();j++){
		if(list[j]==dato){
			k++;
		}
	}
	if(k>0){
		vector<int> ind=p2(0,list.size(),dato);
		cout<<"El numero "<<dato<<" se encontro en los indices :";
		for(int i=0;i<ind.size();i++){
			cout<<ind[i]<<" ";
		}
		cout<<endl;
	}
	else{
		cout<<"Dato no existente en la lista"<<endl;
	}
	
	
	return 0;
}

