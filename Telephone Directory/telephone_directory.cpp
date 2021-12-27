#include<iostream>
#include<windows.h> 
using namespace std;
int k=0;
int menu()
{
	cout<<"\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t--------------------------------------\n";
	cout<<"\t\t\t\t\t\t--------------------------------------\n";
	cout<<"\t\t\t\t\t\t|       PHONE BOOK APPLICATION       |\n";
	cout<<"\t\t\t\t\t\t--------------------------------------\n";
	cout<<"\t\t\t\t\t\t|                                    |\n";
	cout<<"\t\t\t\t\t\t|         [1] ADD CONTACTS           |\n";
	cout<<"\t\t\t\t\t\t|         [2] DISPLAY ALL CONTACTS   |\n";
	cout<<"\t\t\t\t\t\t|         [3] SEARCH BY NUMBER       |\n";
	cout<<"\t\t\t\t\t\t|         [4] SEARCH BY NAME         |\n";
	cout<<"\t\t\t\t\t\t|         [5] UPDATE                 |\n";
	cout<<"\t\t\t\t\t\t|         [6] DELETE INDIVIDUALLY    |\n";
	cout<<"\t\t\t\t\t\t|         [7] DELETE ALL             |\n";
	cout<<"\t\t\t\t\t\t|         [8] NUMBER OF CONTACTS     |\n";
	cout<<"\t\t\t\t\t\t|                                    |\n";
	cout<<"\t\t\t\t\t\t--------------------------------------\n";
	cout<<"\t\t\t\t\t\t|         [9] EXIT                   |\n";
	cout<<"\t\t\t\t\t\t--------------------------------------\n";
	int a;
	cout<<"enter your choice: ";
	cin>>a;
	system("cls");
	return a;
}

void start()
{
	system("color 0F");
	cout<<"\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\------------------------------\n";
	cout<<"\t\t\t\t\t\t\------------------------------\n";
	cout<<"\t\t\t\t\t\t\PHONE BOOK APPLICATION\n";
	cout<<"\t\t\t\t\t\t\------------------------------\n";
	cout<<"\t\t\t\t\t\t\------------------------------\n";
	cout<<"\t\t\t\t\tLoading ";
	char x=219;
	for(int i=0;i<35;i++)
	{
		cout<<x;
		if(i<10)
		{
			Sleep(300);
		}
		if(i>=10 && i<20)
		{
			Sleep(150);
		}
		if(i>=10)
		{
			Sleep(25);
		}
	}
	system("cls");
}


int main()
{
	start();
	string name[100];
	string no[10];
	int check;
	int total_contacts=0;
	check=menu();
	do
	{
		//add contacts
		if(check==1)
		{
			cout<<"\t\t\t\t\t\t Name: ";
			cin>>name[k];
			cout<<"\t\t\t\t\t\t Phone Number: ";
			cin>>no[k];
			k++;
			total_contacts++;
		}
		//display added contacts
		else if(check==2)
		{
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(name[i]!="\0")
				{
					cout<<"\t\t\t\t\t Name :"<<name[i]<<"     Phone : "<<no[i]<<"\n";
				}
				check2++;
			}
			if (check2==0)
			{
				cout<<"\t\t\t\t\t Contact list is empty !! \n";
			}
		}
		//search by number
		else if(check==3)
		{
			string temp;
			cout<<"\t\t\t\t\tNumber: ";
			cin>>temp;
			int index;
			int check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"\t\t\t\t\tNumber Found !!\n";
					cout<<"\t\t\t\t\tName is: "<<name[i]<<"   Phone Number: "<<temp<<"\n";
					check2++;
				}
				if(check2==0)
			    {
				    cout<<"\t\t\t\t\t Entered Number not found in contact List\n";
			    }
			}
		}
		//search by name
		else if(check==4)
		{
			string temp;
			cout<<"\t\t\t\t\tName: ";
			cin>>temp;
			int index,check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\tName Found !!\n";
					cout<<"\t\t\t\t\tName is: "<<name[i]<<"   Phone Number: "<<no[i]<<"\n";
					check2++;
				}
			}
			if(check2==0)
			   {
				    cout<<"\t\t\t\t\t Entered Name not found in contact List\n";
		       }
		}
		//update
		else if(check==5)
		{
			string temp,temp2,temp3;
			cout<<"\t\t\t\t\tNumber: ";
			cin>>temp;
			int index,check2=0;
			for(int i=0;i<100;i++)
			{
				if(temp==no[i])
				{
					cout<<"\t\t\t\t\tEnter new name : ";
					cin>>temp2;
					cout<<"\t\t\t\t\tEnter new number : ";
					cin>>temp3;
					name[i]=temp2;
					no[i]=temp3;
					check2++;
					cout<<"\t\t\t\t\tUpdated Succesfully !! : ";
				}
			}
			if(check2==0)
			    {
				    cout<<"\t\t\t\t\t Entered Number not found in contact List\n";
			    }
		}
		//delete individually
		else if(check==6)
		{
			string temp;
			cout<<"\t\t\t\t\tEnter Name to delete: ";
			cin>>temp;
			int check2=0;
			int index;
			for(int i=0;i<100;i++)
			{
				if(temp==name[i])
				{
					cout<<"\t\t\t\t\tDeleted Succesfully !!\n";
					cout<<"\t\t\t\t\tName is: "<<name[i]<<"   Phone Number: "<<no[i]<<"\n";
					name[i]="\0";
					no[i]="\0";
					check2++;
					total_contacts--;
				}
			}
			if(check2==0)
			{
				cout<<"\t\t\t\t\t Entered Name not found in contact List\n";
			}
		}
		//delete all
		else if(check==7)
		{
			{
				for(int i=0;i<k;i++)
					{
						name[i]="\0";
					    no[i]="\0";
					}
				k=0;
				total_contacts=0;
				cout<<"\t\t\t\t\tAll contacts Deleted Succesfully !!\n";
			}
		}
		//display number of contacts
		else if(check==8)
		{
			cout<<"\t\t\t\t\tTotal number of contacts stored: "<<total_contacts<<"\n";
		}
		check=menu();
	}
	while(check!=9);
}






























