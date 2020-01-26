#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<conio.h>
using namespace std;
void write_account();
void balance_eq(int,int);
void delete_account(int);
void change_amount(int,int, int);
void recover(int);
void transfer(int,int,int);
void home();
main()
{
	
    char ch;
    int num,num1,num2;
    home();
    system("cls");
    cout<<"\n\n\t\t\tWelcome to online Banking portal";
    cout<<"\n\n\n\t\tMAIN MENU";
    cout<<"\n\n\t1. CREATE A NEW ACCOUNT";
    cout<<"\n\n\t2. BANKING";
    cout<<"\n\n\t3. RECOVERY OPTIONS";
    cout<<"\n\n\t4. QUIT";
    cout<<"\n\n\tSELECT YOUR OPTION (1-4)";
    cin>>ch;
    system("cls");

    switch(ch)
    {
    	case '1':
            write_account();
            getch();
            system("cls");
            main();
            break;
        int a1;
        cin>>a1;
        if(a1==0)
        break;
        case '2':
        	char temp1;
        	do{
        	cout<<"\t\n\nChoose Option";
		    cout<<"\t\n\n1. DEPOSIT AMOUNT";
	        cout<<"\t\n\n2. WITHDRAW AMMOUNT";
	        cout<<"\t\n\n3. BALANCE ENQUIRY";
	        cout<<"\t\n\n4. TRANSFER MONEY"<<endl;
	        cout<<"\t\n\n\n Please enter your choice...(1-4)";
			cin>>temp1;
			switch(temp1)
			{
            
				case '1':
		            cout<<"\t\n\nEnter The account No : "; cin>>num;
		            cout<<"\t\n\nEnter The pin: "; cin>>num1;
		            change_amount(num,num1, 1);
		            getch();
		            system("cls");
		            home();
        		    break;
        		case '2':
            		cout<<"\t\n\nEnter The account No. : "; cin>>num;
            		  cout<<"\t\n\nEnter The pin: "; cin>>num1;
            		change_amount(num,num1, 2);
            		getch();
            		system("cls");
            		break;
        		case '3':
            		cout<<"\t\n\nEnter The account No. : "; cin>>num;
            		 cout<<"\t\n\nEnter The pin: "; cin>>num1;
            		 	balance_eq(num,num1);
            		getch();
            		system("cls");
            		balance_eq(num,num1);
            		break;
            		
            	case '4':
            		cout<<"\t\n\nEnter The your account No : "; cin>>num;
            		  cout<<"\t\n\nEnter The pin: "; cin>>num1;
            		  cout<<"\t\n\nEnter The account No to which you want to transfer: "; cin>>num2;
            		  transfer(num,num1,num2);
            		  getch();
            		system("cls");
            	default:cout<<"\t\n\n invalid choice";
            	break;
            }
        }while(temp1!=5);
            break;
        case '3':
        char temp2;
        	
        	cout<<"\t\n\nChoose Option";
		    cout<<"\t\n\n1. FORGET PIN";
		    cout<<"\t\n\n2. DELETE ACCOUNT";
		    
        	cin>>temp2;
        	switch(temp2){
        		int num;
        		case '1':
        			cout<<"\t\n\nEnter The account No. : "; cin>>num;
        			recover(num);
        			getch();
        			system("cls");
        			main();
		
			    case '2':
			    	char a;
			    	cout<<"\t\n\nEnter The account No. : "; cin>>num;
        			cout<<"\t\n\nEnter The pin: "; cin>>num1;
        			cout<<"Are you sure You want to delete the account [ Y | N]";
        			cin>>a;
        			if('a'=='y'||'Y')
        			delete_account(num);
        			else{
        			cout<<"Press any key to go back";
        			getch();
        			system("cls");
        			main();
        	
        	}while(temp2!=3);
        }
         case '4':
            cout<<"\t\n\nThanks for using online banking...";
            break;
            

    }
}

class account
{
    int acno,pin;
    char name[50];
    int amount;
    char type;
public:
    void create_account();  
    void show_account() const;
	void deposit(int);  
    void withdraw(int); 
    void report() const;
    int retacno() const; 
    int retamount() const;
    char rettype() const; 
	int retpin() const; 
	void show_pin() const;
};         

void account::create_account()
{
    cout<<"\t\n\nCreate an account number :";
    cin>>acno;
    cout<<"\t\n\nEnter Your Name : ";
    cin>> name;
    cout<<"\t\n\nCreate a 4 digit pin :";
    cin>>pin;
    cout<<"\t\n\nEnter Type of The account (C | S) : ";
    cin>>type;
    type=toupper(type);
    cout<<"\t\n\nEnter The Initial amount you want toamount : ";
    cin>>amount;
    cout<<"\t\n\nSuccessfully created your account...\t\nPress any key to go to main menu...";
}

void account::show_account() const
{
    cout<<"\t\n\nAccount No. : "<<acno;
    cout<<"\t\n\nAccount Holder Name : ";
    cout<<name;
    cout<<"\t\n\nType of Account : "<<type;
    cout<<"\t\n\nBalance amount : "<<amount;
}

void account::show_pin() const
{
    cout<<"Welcome "<<name<<" Your pin is "<<pin;
}
void account::deposit(int x)
{
   amount+=x;
}

void account::withdraw(int x)
{
   amount-=x;
}

void account::report() const
{
    cout<<acno<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<amount<<endl;
}


int account::retacno() const
{
    return acno;
}

int account::retpin() const
{
    return pin;
}

int account::retamount() const
{
    return amount;
}

char account::rettype() const
{
    return type;
}



void home()
{		
	cout<<"\n\t\t\t**************************************************************************** ";
	cout<<"\n\t\t\t*******************   ################################  ******************** ";
	cout<<"\n\t\t\t*******************    #                            #   ******************** ";
	cout<<"\n\t\t\t*******************    #       Welcome              #   ******************** ";
	cout<<"\n\t\t\t*******************    #         To                 #   ******************** ";
	cout<<"\n\t\t\t*******************    #    Online Banking          #   ******************** ";
	cout<<"\n\t\t\t*******************    #         System             #   ******************** ";
	cout<<"\n\t\t\t*******************    #                            #   ******************** ";
	cout<<"\n\t\t\t*******************   ################################  ******************** ";
	cout<<"\n\t\t\t****************************************************************************\n";
	cout<<"\n\n\t\t\t\t Press Enter to start banking...\n";
	cin.get();
}

void write_account()
{
    account ac;
    ofstream outFile;
    outFile.open("indra.txt");
    ac.create_account();
    outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
    outFile.close();
}
void balance_eq(int n,int p)
{
    account ac;
    int flag=0;
    ifstream inFile;
    inFile.open("indra.txt");
    if(!inFile)
    {
        cout<<"*******File could not be open !! Press any Key...*********";
        return;
    }
    cout<<"\t\n\nBALANCE DETAILS";

        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()==n && ac.retpin()==p)
        {
            ac.show_account() ;
            flag=1;
        }
    }
    inFile.close();
    if(flag==0)
        cout<<"\t\n\nSORRY Invalid Account number or pin";
}

void change_amount(int n,int p, int option)
{
    int amt;
    int flag=0;
    account ac;
    fstream File;
    File.open("indra.txt");
    if(!File)
    {
        cout<<"********File could not be open !! Press any Key...********";
        return;
    }
    while(!File.eof() && flag==0)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));
        if(ac.retacno()==n && ac.retpin()==p)
        {
            ac.show_account();
            if(option==1)
            {
                cout<<"\n\n\nTO DEPOSITE AMOUNT ";
                cout<<"\t\n\nEnter The amount to be deposited";
                cin>>amt;
                ac.deposit(amt);
            }
            if(option==2)
            {
                cout<<"\t\n\nTO WITHDRAW AMOUNT ";
                cout<<" \t\n\nEnter The amount to be withdraw";
                cin>>amt;
                int bal=ac.retamount()-amt;
                if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
                    cout<<"\t\n\nInsufficience balance";
                else
                    ac.withdraw(amt);
            }
            int pos=(-1)*static_cast<int>(sizeof(ac));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(account));
            cout<<"\t\n\nRecord Updated";
            flag=1;
           }
         }
    File.close();
    if(flag==0)
        cout<<"\nInvalid pin Or account not found ";
}



void recover(int r)
{
    account ac;
    int flag=0;
    ifstream inFile;
    inFile.open("indra.txt");
    if(!inFile)
    {
        cout<<"*******File could not be open !! Press any Key...*********";
        return;
    }
        while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()==r)
        {
            ac.show_pin() ;
            flag=1;
        }
    }
    inFile.close();
    if(flag==0)
        cout<<"\t\n\nSORRY Account number does not exist";
}

void delete_account(int n)
{
    account ac;
    ifstream inFile;
    ofstream outFile;
    inFile.open("indra.txt");
    if(!inFile)
    {
        cout<<"********File could not be open !! Press any Key...*********";
        return;
    }
    outFile.open("Temp.txt");
    inFile.seekg(0,ios::beg);
    while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
    {
        if(ac.retacno()!=n)
        {
            outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
        }
    }
    inFile.close();
    outFile.close();
    remove("indra.txt");
    rename("Temp.txt","account.txt");
    cout<<"\t\n\nRecord Deleted successfully..";
}


void transfer(int n,int p, int n1)
{
	
    int amt;
    int flag=0;
    account ac;
    fstream File;
    File.open("indra.txt");
    if(!File)
    {
        cout<<"********File could not be open !! Press any Key...********";
        return;
    }
    while(!File.eof() && flag==0)
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));
      if(ac.retacno()==n && ac.retpin()==p)
        {
	
                cout<<" \t\n\nEnter The amount to be Transfer";
                cin>>amt;
                int bal=ac.retamount()-amt;
                if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
                    cout<<"\t\n\nInsufficience balance";
                else
                    ac.withdraw(amt);
            int pos=(-1)*static_cast<int>(sizeof(ac));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(account));
            cout<<"\t\n\nTransaction Successfull";
            flag=1;
           
         }
    File.close();
    if(flag=0)
        cout<<"\nInvalid pin Or account not found ";
    flag=0;
    File.open("indra.txt");
    if(!File)
    {
        cout<<"********File could not be open !! Press any Key...********";
        return;
    }
    
    while(!File.eof() && flag==0 )
    {
        File.read(reinterpret_cast<char *> (&ac), sizeof(account));
        if(ac.retacno()==n1 )
        {
        
            cin>>amt;
                ac.deposit(amt);
            int pos=(-1)*static_cast<int>(sizeof(ac));
            File.seekp(pos,ios::cur);
            File.write(reinterpret_cast<char *> (&ac), sizeof(account));
            cout<<"\t\n\nTransaction Successfull";
            flag=1;
           }
         }
    File.close();
    if(flag=0)
        cout<<"\nInvalid pin Or account not found ";   
}
}
