#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
#include<cstdlib>
using namespace std;

class basic
{
protected:
    long long aadhar_no, dob, phone_no;
    string name;
    string address;

public:
  void getdata()
    {
        cout << "\tEnter name:";  
        getline(cin, name);
        getline(cin, name);
        cout << "\n\tEnter address: "; 
        getline(cin, address);
        cout << "\n\tEnter phone no :"; 
        cin >> phone_no;
        cout << "\n\tEnter  DOB (DDMMYYYY)  :";  
        cin >> dob;
        cout<<"\n";
        aadhar_no = 1;
}
    void simpleshow()
    {
    	cout.width(52);cout.fill(' ');
        cout<<"~ YOUR AADHAR NO- 8277 9791 8876 ~\n\n";
        cout.width(20); cout<<"NAME";
       cout.width(30); cout<<"ADDRESS";
       cout.width(34); cout<<"PHONE NO";
       cout.width(22); cout<<"DOB";
       cout<<endl;
       cout.width(20); cout<<name;
       cout.width(30); cout<<address;
       cout.width(34); cout<<phone_no;
       cout.width(22); cout<<dob;
       cout<<endl;
    }

    void showdata()
    {
    	cout.width(112);cout.fill('*');
    	cout<<"*";
    	cout.fill(' ');
    	cout<<endl;
    	cout.width(74);
    	cout<<"|  Authority Of Unique Identification  |\n\n\n";
    	cout.width(70);
    	cout<<"~ YOUR AADHAR NO- 8277 9791 8876 ~\n\n";
    	
    	
       cout.width(20); cout<<"NAME";
       cout.width(30); cout<<"ADDRESS";
       cout.width(34); cout<<"PHONE NO";
       cout.width(22); cout<<"DOB";
       cout<<endl;
       cout.width(20); cout<<name;
       cout.width(30); cout<<address;
       cout.width(34); cout<<phone_no;
       cout.width(22); cout<<dob;
       cout<<endl;
       cout.width(112);cout.fill('*');
    	cout<<"*";
    	cout.fill(' ');
       
    }
};

class create :virtual public basic
{
public:
    void getdata2()
    {
       basic:: getdata();
    }
    void showdata2()
    {
        basic::showdata();

    }
};

class booking :public virtual basic
{
public:
    void book()
    {
       int choice2, slotno;
        int k = 0;
        int t = 8;
        cout.fill(' ');
         cout << "                     officer 1 " << setw(12) << "     officer 2" << setw(13) << "     officer 3\n";
            for (int i = 0; i < 3; i++)
            {
                cout << setw(5) << t << "-" << t + 1 << "am\t";
                for (int j = 0; j < 3; j++)
                {
                    k++;
                    cout.width(10); cout << "slot " << k << ".\t";
                }
                cout << "\n";
                t++;
            }
            cout<<"\n\tSelect a slot number of your choice-";
            cin >> slotno;
            cout<<endl;
            k = 0;
            t = 8;
             cout << "                     officer 1 " << setw(12) << "     officer 2" << setw(13) << "     officer 3\n";
            for (int i = 0; i < 3; i++)
            {
                cout << setw(5) << t << "-" << t + 1 << "am\t";
                for (int j = 0; j < 3; j++)
                {
                    k++;
                    if (slotno == k)
                    {
                        cout.width(10); cout << "^booked^\t";
                    }
                    else
                    {
                        cout.width(10); cout << "slot " << k << ".\t";
                    }
                }
                cout << "\n";
                t++;
            }
            cout<<"\n\n";
             cout.width(51);cout.fill('-');cout<<"-";cout<<endl;
           cout << "| Dear  " << name << " your appointment is booked! |\n";
          cout.width(51);cout.fill('-'); cout<<"-";cout<<endl;
            
        
    }
};

class download : public virtual basic
{
public:
    void downloaddata()
    {
       basic:: showdata();
    }
};

class retrieve : virtual public basic
{
public:
    void operator++(int)
    {
            cout << "\tEnter phone no to search your data-\n";
            long long g;
            cin >> g;
            if (g == phone_no)
            {
            	 cout.width(55);cout.fill('-');cout<<"-";cout<<endl;
           cout << "| Dear  " << name << " your account details are found ! |\n";
          cout.width(55);cout.fill('-'); cout<<"-";cout<<endl;
                cout<<"\n";
                simpleshow();
            }
            else
            {
            	cout.width(55);cout.fill('-');cout<<"-";cout<<endl;
           cout << "| Dear  " << name << " your account details are NOT found ! |\n";
          cout.width(55);cout.fill('-'); cout<<"-";cout<<endl;
               
            }
        
    }

};

class feedback : public virtual basic
{
	 
public:
    void getfeedback()
    {
        int score[5],i=0;
        int sum = 0;
        char c;
       cout.fill(' ');
        cout << setw(60) << "WE WOULD LOVE YOUR FEEDBACK !" << endl;
        cout << cout.width(90) << "Your Feedback" << endl;
       cout.setf(ios::left, ios::adjustfield);cout.width(12);cout<<"\tPromptness:";cout.setf(ios::right, ios::adjustfield);cout.width(60);cout<<"Excellent-(3)\tSatisfactory-(2)\tDisappointing-(1):   ";
        cin >> score[0];
       cout.setf(ios::left, ios::adjustfield);cout.width(12);cout<<"\tSecurity:";cout.setf(ios::right, ios::adjustfield);cout.width(60);cout<<"Excellent-(3)\tSatisfactory-(2)\tDisappointing-(1):   ";
        cin >> score[1];
       cout.setf(ios::left, ios::adjustfield);cout.width(12);cout<<"\tAccuracy:";cout.setf(ios::right, ios::adjustfield);cout.width(60);cout<<"Excellent-(3)\tSatisfactory-(2)\tDisappointing-(1):   ";
        cin >> score[2];
       cout.setf(ios::left, ios::adjustfield);cout.width(12);cout<<"\tEase:";cout.setf(ios::right, ios::adjustfield);cout.width(60);cout<<"Excellent-(3)\tSatisfactory-(2)\tDisappointing-(1):   ";
        cin >> score[3];
       cout.setf(ios::left, ios::adjustfield);cout.width(12);cout<<"\tQuality:";cout.setf(ios::right, ios::adjustfield);cout.width(60);cout<<"Excellent-(3)\tSatisfactory-(2)\tDisappointing-(1):   ";
        cin >> score[4];
        while (i < 5)
        {
             sum = score[i] + sum;
             i++;
        }
        cout.width(29);cout.fill('-');cout<<"-";cout<<endl;
        cout << left << "|The score you rate us=" << sum*6.6 << "  %|\n";
        cout.width(29);cout.fill('-');cout<<"-";cout<<endl;
             
    }
};
class final : public booking, public download,public feedback, public retrieve
{

};

int menu()
{
    int choice;
    cout << "\n\n\t1. create aadhar account";
    cout << "\n\t2. update aadhar account";
    cout << "\n\t3. download aadhar card";
    cout << "\n\t4. avail aadhar services: Booking Appointment";
    cout << "\n\t5. avail aadhar services: Retrieve Account Details";
    cout << "\n\t6. feedback";
    cout << "\n\t7. exit\n\n";
    cout<<"\tEnter your choice: ";cin >> choice;
    return choice;
}

int main()
{
    int d = 1;
    final f;
    create b;
    fstream file;
    cout.width(60);
    cout << "WELCOME\n\n";
    cout.width(70);
    cout << "AADHAR  INFORMATION  SYSTEM\n\n";
    cout.width(120);
    cout.fill('-');
    cout << "-"; 
    cout.fill(' ');
    while (1)
    {
        switch (menu())
        {
        case 1:

            file.open("stock.txt", ios::out);
            f.getdata();
            file.write((char*)&b, sizeof(b));
          cout.width(30);cout.fill('-');cout<<"-";cout<<endl;
            cout << " ACCOUNT CREATED SUCCESSFULLY !\n";
          cout.width(30);cout.fill('-'); cout<<"-";cout<<endl;
            file.close();
            break;
        case 2:
             file.open("stock.txt", ios::out);
            f.getdata();
            file.write((char*)&b, sizeof(b));
          cout.width(30);cout.fill('-');cout<<"-";cout<<endl;
            cout << " ACCOUNT UPDATED SUCCESSFULLY !\n";
          cout.width(30);cout.fill('-'); cout<<"-";cout<<endl;
            file.close();
            break;
        case 3:
             f.downloaddata();
            break;
        case 4:
          
            f.book();

            break;
        case 5:
        	f++;
        	break;
        case 6:
            f.getfeedback();
            cout<<"\nThank you for feedback !";
            break;
        case 7:
            exit(0);

        default:
            cout << "\tinvalid";
        }
    }
    _getch();
    return 0;
}
