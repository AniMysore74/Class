#include<iostream.h>
#include<conio.h>
#include<string.h>

class Clothing
{
		char Code[30],Type[30],Material[30];
		int Size;
		float Price;
		void Calc_Price() {
			if(!strcmp(Material,"COTTON"))
			//{
				if(!strcmp(Type,"TROUSER"))
					Price=1500;
				else if(!strcmp(Type,"SHIRT"))
					Price=1200;
			//}
			else
			//{
				if(!strcmp(Type,"TROUSER"))
					Price=0.75*1500;
				else if(!strcmp(Type,"SHIRT"))
					Price=0.75*1200;
			//}
		}
	public:
		Clothing()
		{
			strcpy(Code,"NOT ASSIGNED");
			strcpy(Type,"NOT ASSIGNED");
			strcpy(Material,"NOT ASSIGNED");
			Price = Size = 0;
		}
		void Enter()
		{
			cout<<"\nPlease Enter Details \n";
			cout<<"\nEnter Code : ";
			cin>>Code;
			cout<<"\nEnter Type : ";
			cin>>Type;
			cout<<"\nEnter Material : ";
			cin>>Material;
			cout<<"\nEnter Size : ";
			cin>>Size;
			Calc_Price();
		}
		void Show()
		{
			cout<<"\nCloth Details \n";
			cout<<"\nCode : "<<Code;
			cout<<"\nType : "<<Type;
			cout<<"\nMaterial : "<<Material;
			cout<<"\nSize : "<<Size;
			cout<<"\nPrice : "<<Price;
		}
};

int main()
{
	Clothing C;
	C.Enter();
	C.Show();
	getch();
	return 0;
}
