#include <bits/stdc++.h>
using namespace std;

int choose_operation()
{
    cout<<"1. Dial a number"<<endl;
    cout<<"3. Get IEMI Number"<<endl;
    cout<<"4. Send Message"<<endl;

    int n;
    cin>>n;
    return n;
}

class CellPhone
{
    
    string Company;
    string IEMICode;
    string PhoneNumber;
    string Processor;
    int Memory ;

public:
    CellPhone()
    {
        Company = "";
        IEMICode = "";
        Processor = "";
        Memory = 0;
        PhoneNumber = "";
    }
    CellPhone(string company, string iemi, string processor, int memory,string phonenumber)
    {
        this->Company = company;
        this->IEMICode = iemi;
        this->Processor = processor;
        this->Memory = memory;
        this->PhoneNumber = phonenumber;
    }

    void GetIEMICode()
    {
        cout << "IEMI Code -"<<this->IEMICode<<endl;
    }
    void GetPhoneNumber()
    {
        cout<<"Phone Number:"<<this->PhoneNumber<<endl;
    }
    void Dial(const string num)
    {
        cout << "Dialing a number -> "<<num<<endl;
    }
    void SendMessage(string num,string message)
    {
        cout << "Message: "<<message<<endl<<"Sent to number:"<<num<<endl;
    }
};

class AboutPhone : public CellPhone
{
    string Model;
    string Battery ;
    string Wifi ;
    string Bluetooth;
    string Camera ;

public:
    AboutPhone()
    {
        CellPhone();
        Model = "";
        Battery = "";
        Wifi = "";
        Bluetooth = "";
        Camera = "";
    }
    void assign(string model, string battery, string wifi, string bluetooth, string camera, string company, string iemi, string processor, int memory,string phonenumber)
    {
        CellPhone(company, iemi, processor, memory,phonenumber);
    

        Model = model;
        Battery = battery;
        Wifi = wifi;
        Bluetooth = bluetooth;
        Camera = camera;
    
    }

    void Get_model()
    {
        cout << Model << endl;
    }
    void Battery_details()
    {
        cout << Battery << endl;
    }
    void Camera_details()
    {
        cout << Camera << endl;
    }
    void Wifi_and_Bluetooth_details()
    {
        cout << Wifi << " " << Bluetooth << endl;
    }
};

int main()
{

         AboutPhone *sam = new AboutPhone();
        AboutPhone *app = new AboutPhone();
    while (true)
    {
        string s;
        cout << "1. Create an Object" << endl<< "2. Show Specifications"<<endl<<"3. Operate Phone"<<endl<<"4. Exit"<<endl;
        cout << "Enter your Choice : " << endl;
        int choice;
        cin >> choice;
        if(choice ==4)
        {
            break;
        }
        string model, battery, wifi, bluetooth, camera, company, iemi, processor,phonenumber;
        int memory;
   

        switch (choice)
        {
        case 1:
        {
            cout << "1. Samsung" << endl
                 << "2. Apple" << endl;
            int c;
            cin >> c;
            switch (c)
            {
                {

                case 1:
                    company = "Samsung";

                    cout << "Enter Model :";
                    cin >> model;

                    cout<<"Enter Phone Number:"<<endl;
                    cin>> phonenumber;

                    cout << "Enter iemi :";
                    cin >> iemi;

                    cout << "Enter Battery :";
                    cin >> battery;

                    cout << "Enter Wifi:";
                    cin >> wifi;

                    cout << "Enter bluetooth :";
                    cin >> bluetooth;

                    cout << "Enter camera :";
                    cin >> camera;

                    cout << "Enter processor :";
                    cin >> processor;

                    cout << "Enter Memory :";
                    cin >> memory;

                    sam->assign(model, battery, wifi, bluetooth, camera, company, iemi, processor, memory,phonenumber);
                    break;
                }
                {
                case 2:
                    company = "Apple";

                    cout << "Enter Model :";
                    cin >> model;

                    cout<<"Enter the phone number:";
                    cin>>phonenumber;

                     cout << "Enter iemi :";
                    cin >> iemi;

                    cout << "Enter Battery :";
                    cin >> battery;

                    cout << "Enter Wifi:";
                    cin >> wifi;

                    cout << "Enter bluetooth :";
                    cin >> bluetooth;

                    cout << "Enter camera :";
                    cin >> camera;

                    cout << "Enter processor :";
                    cin >> processor;

                    cout << "Enter Memory :";
                    cin >> memory;

                    app->assign(model, battery, wifi, bluetooth, camera, company, iemi, processor, memory,phonenumber);

                    break;
                }
                {
                default:
                cout << "Enter valid choice...";
                break;
                }

        
            }
            break;
        }
        {
        case 2:
    

            cout << "1. Samsung Phone Specifications" << endl<<"2. Apple Phone Specifications" << endl;
            int ch;
            cin >> ch;
            switch (ch)
            {
                
                case 1:
                    sam->Get_model();
                    sam->GetIEMICode();
                    sam->GetPhoneNumber();

                    break;
                
                
                case 2:
                    app->Get_model();
                    app->GetIEMICode();
                    app->GetPhoneNumber();

                    break;
    
            }
            break;

        }
        {
            case 3:
                cout<<"1. Samsung"<<endl<<"2. Apple"<<endl;

                int which;
                cin>>which;

                switch (which)
                {
                    case 1:
                        switch (choose_operation())
                        {
                            {case 1:
                                cout<<"Enter a number: "<<endl;
                                string num;
                                cin>>num;
                                sam->Dial(num);
                                break;
                                }
                            {case 2:
                                sam->GetIEMICode();
                                break;
                                }
                            {case 3:
                                cout<<"Enter Number :"<<endl;
                                string n;
                                cin>>n;
                                cout<<"Enter the message :"<<endl;
                                string mess;
                                cin>>mess;

                                sam->SendMessage(n,mess);
                                break;
                                }

                        }
                            break;
                     case 2:
                        switch (choose_operation())
                        {
                            {case 1:
                                cout<<"Enter a number: "<<endl;
                                string num;
                                cin>>num;
                                app->Dial(num);
                                break;
                                }
                            {case 2:
                                app->GetIEMICode();
                                break;
                                }
                            {case 3:
                                cout<<"Enter Number :"<<endl;
                                string n;
                                cin>>n;
                                cout<<"Enter the message :"<<endl;
                                string mess;
                                cin>>mess;

                                app->SendMessage(n,mess);
                                break;
                                }

                        }
                        break;
                }
                break;
        }
        
    }
    }

    return 0;
}