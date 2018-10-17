#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <locale>

using namespace std;
//funciones de recursividad
void menu();

int euclides(int,int);
int ackerman(int,int);
int particion(int,int); 
unsigned long int catalan(long int);
int bn(int,int);
int han(int);

int main()
{
	int opcion;
	do{
		menu();
		cin>>opcion;
		system("cls");
		switch(opcion)
		{
			case 1:
				{
					int M,N;
				cout<<"Introdusca un numero"<<endl;
				cin>>M;
				cout<<"Introdusca otro numero"<<endl;
				cin>>N;
				cout<<" MCD Euclides "<<euclides(M,N)<<endl;
				}
				
				
				break;
				
			case 2:
					int a,b,num;
					num=ackerman(a,b);
					cout<<"Introdusca un numero "<<endl;
					cin>>a;
					cout<<"Introdusca otro numero"<<endl;
					cin>>b;
					cout<<"Akerman : "<<num<<endl;
					
				   
				break;
				
			case 3:
					int w,z;
					cout<<"Introdusca un numero"<<endl;
					cin>>w;
					cout<<"Introdusca otro numero"<<endl;
					cin>>z;
					cout<<"particion :"<<particion(w,z)<<endl;
					
				    
					
			break;
				
			case 4:
					cout<<"Numeros de catalan"<<endl;
					long int e;
					cout<<"Introdusca un numero"<<endl;
					cin>>e;
					cout<<endl;
					for(int i=0;i<e;i++)
					{
						cout<<catalan(i);
						cout<<" , ";
					}
				    
			break;
				
			case 5:
					int p,q;
					cout<<"Coeficientes binomiales"<<endl;
					cout<<"Introdusca un numero"<<endl;
					cin>>p;
					cout<<"Introdusca otro numero"<<endl;
					cin>>q;
					cout<<endl;
					cout<<bn(p,q)<<endl;
					
			break;
				
			case 6:
				    int disco;
					cout<<"Torre de Hanoi"<<endl;
					cout<<"Cuantos discos abra en la torre"<<endl;
					cin>>disco;
					cout<<"Numero de movimientos"<<endl;
					cout<<han(disco)<<endl;
					
			break;
				
			case 7:
			break;
			default:
				cout<<"Opcion NO valida"<<endl;
				system("pause");
		 		system("cls");
			break;
		}
	
	}while(opcion=!7);
	return 0;
	
}
void menu()
{
	cout<<"\t\t**FUNCIONES DE RECURSIVIDAD**\t\t"<<endl;
	cout<<"Eliga una opcion"<<endl;
	cout<<"1.-Algoritmo de euclides"<<endl;
	cout<<"2.-Algoritmo de akerman"<<endl;
	cout<<"3.-Algoritmo de particion"<<endl;
	cout<<"4.-Numeros de catalan"<<endl;
	cout<<"5.-Coeficientes binomiales"<<endl;
	cout<<"6.-Torres de hanoi"<<endl;
	cout<<"7.-Salir"<<endl;
	cout<<"?"<<endl;
}

int euclides(int M,int N)
{
	if(N==0)
	{
		return M;
	}
	else 
	{ 
		return (N,M%N);
	}
}//fin euclides

int ackerman(int a,int b)
{
	if(a==0)
	{
		return b+1;
	}
	else if(b==0)
	{
		return ackerman(a-1,1);	
	}
	else
	{
		return ackerman(a-1,ackerman(a,b-1));
	}
	
}//fin de akerman

int particion(int w,int z)
{
	if(w==1||z==1)
	{
		return 1;
	}else
	if(w==z)
	{
		return 1+ particion(w,w-1);
	}else
	{
		return particion(w,z-1)+particion(w-z,z);
	}
}

unsigned long int catalan(long int e)
{
	if(e<=0)
	{
		return 1;
	}else{
		

		return (2*(2* e-1)*catalan(e-1))/(e+1);
	}
}//fin cataln
int bn(int p,int q)
{
	if(q==0||p==q)
	{
		return 1;
	}
	else
	{
		return bn(p-1,q-1)+ bn(p-1,q);
	}
}


int han(int disco )
{
	if(disco==1)
	{
		return 1;
	}else
	{
	 return	2 * han(disco-1)+1; 
	}
}

