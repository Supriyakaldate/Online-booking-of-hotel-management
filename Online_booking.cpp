// Online Booking of Hotel Management
// By Supriya Kaldata
// By Saloni Kodam 
// By Prathamesh Khande  
// In this program we mention the concepts of Class,Object,Inheritance and Friend Function
#include<iostream>
using namespace std;
const int MAX = 30;

class Location
{
    public:
    int location;
    int hoTel_Goa;
    int hoTel_Maha;
    int hoTel_Lonavala;
    int hoTel_Kokan;
    void Hotel_Goa()
    {
        
        cout<<"So You have Selected Location as \n \t   *  GOA  *\n   ::";
        cout<<"So we have 8 hotels in Goa \n";
        cout<<"1. The Westin  \n"; 
        cout<<"2. The St.Regis Resort  \n"; 
        cout<<"3. Caravela Beach Resort  \n";  
        cout<<"4. Taj Exotica Resort & Spa  \n";
        cout<<"5. Resort Rio  \n";
        cout<<"6. W Goa  \n";
        cout<<"7. Azaya Beach Resort  \n";
        cout<<"8. Le Meridien Goa, Calangute    \n";
        cin>>hoTel_Goa;
        switch (hoTel_Goa)
        {
            case 1:
            cout<<" *    Welcome to The Westin Hotel      *   \n";
            cout<<" ADDRESS   --   Survey No  204/1 Sub Division 1,Dmello Vaddo ,Anjuna Bardez,Goa India. \n";
            cout<<" CONTACT DITAILS ::  +91 832 663 6600.  ";
            break;
        
            case 2:
            cout<<" 2.   Welcome to The St.Regis Resort \n";
           cout<<" ADDRESS   --   Mobar ,Cavelossaim ,south Goa ,Goa 4403731. India\n";
           cout<<"CONTACT NO.-- +91 832 662 1234.";
            break;

            case 3:
            cout<<"3.  Welcome to Caravela Beach Resort \n";
           cout<<"ADDRESS   --   Varca Beach ,Sacete,Varca 440321 India.\n";
           cout<<"CONTACT NO.--  +91 836 621 9658.n";
            break;
        
            case 4:
            cout<<"4. Taj Exotica Resort and Spa \n";
            cout<<"ADDRESS   --    Calwaddo ,Benaulim 403716 India.\n";
            cout<<"CONTACT NO.-- +91 836 615 4865.\n";
            break;

            case 5:
            cout<<"5. Resort Rio\n ";
            cout<<"ADDRESS   --     Near Baga Beach Tambudi ,Arpora 403318 India.\n";
            cout<<"CONTACT NO.--   +91 836 651 2369.";
            break;

            case 6:
            cout<<"6. S Goa \n";
            cout<<" ADD-- Vagator Beach Bardez ,Vegator 403519 India.\n";
            cout<<"CONTACT NO.--   +91 836 641 2356.";
            break;

            case 7:
            cout<<"7. Azaya Beach Resort\n ";
            cout<<"ADD--  336/0 ,Village Callavado,Benaullim 403716 India .\n";
            cout<<"CONTACT NO.--   +91 836 646 2531.";
            break;

            case 8:
            cout<<"8. Le Meridien Goa\n ";
            cout<<"ADD-- Aguada-Siolim Road ,Calangute 403516 India.\n";
            cout<<"CONTACT NO.--   +91 833 626 7802.";
            break;
        default:
            break;
        }
    }
    void Hotel_Maha()
    {
        cout<<" b)  We have to 5 Hotels in Mahabaleshwar    ::   \n ";
        cout<<"1.Courtyard by Marriott  \n";
        cout<<"2.Evershine Resort   \n";
        cout<<"3.Le Meridien Mahabaleshwar Resort& Spa  \n";
        cout<<"4.Bella Vista Resort  \n";
        cout<<"5.The Grand Legacy Resort & Spa   \n";
        cin>>hoTel_Maha;
        switch (hoTel_Maha)
        {
            case 1:
            cout<<"1.Courtyard by Marriott\n";
            cout<<" ADDRESS --  19/B Metgutad Panchgani - Mahabaleshwar Road, Mahabaleshwar 412806 India.\n";
            cout<<"Contact No .. --  02168 262 000.";
            break;

            case 2:
             cout<<"2. Evershine Resort\n ";
             cout<<" ADDRESS --  182 C T S No Mahabaleshwar, Mahabaleshwar 412806 India.\n";
             cout<<" Contact No.-- 02168 268 050.";
            break;

            case 3:
              cout<<"3. Le Meridien Mahabaleshwar Resort& Spa \n";
             cout<<"ADDRESS --  211/ 212 Mahabaleshwar - Medha Road , Mahabaleshwar 412806 India.\n";
               cout<<"Contact No.-- 084463 10595.";
            break;

            case 4:
            cout<<"4.Bella Vista Resort \n";
            cout<<"ADDRESS --  Survey No. 19/9 A Met Gutad, Mahabaleshwar 412806 India.\n";
            cout<<"Contact No--08745122530.";
            break;

            case 5:
            cout<<" 5.The Grand Legacy Resort & Spa \n ";
            cout<<"ADDRESS --  Mahabaleshwar Panchgani Road Metgutad, Mahabaleshwar 412806 India. \n";
            cout<<"CONTACT  NO.--08552847888.";
            break;
        
            default:
            break;
        }
    }
    void Hotel_Lonavala()
    {
        cout<<" c) We have 5 Hotels in Lonavala are as follows  ::  \n";
        cout<<"1. Fariyas Resort Lonavala  \n";
        cout<<"2. Della Adventure Resorts  \n";
        cout<<"3.Radisson Resort & Spa Lonavala  \n";
        cout<<"4.Meritas Adore Resort  \n";
        cout<<"5. Upper Deck Resort  \n";
        cin>>hoTel_Lonavala;

        switch (hoTel_Lonavala)
        {
        case 1:
              cout<<"1. Fariyas Resort Lonavala \n";
              cout<<"ADDRESS --Frichley Hills, Kune Nane Mawal, Lonavala 410401 India. \n";
              cout<<"CONTACT  NO.--9970898881.";
            break;

        case 2:
              cout<<"2. Della Adventure Resorts \n";
              cout<<"ADDRESS --Kunegaon, Lonavala 410401 India. \n ";
              cout<<"CONTACT  NO.--998253014.";
            break;
            
        case 3:
              cout<<"3.Radisson Resort & Spa Lonavala \n";
              cout<<" ADDRESS --Plot No - 19 - 21 - 27 -29 Sector D Gold Valley Road Tungarli Village, Lonavala 410401 India.\n";
              cout<<" CONTACT  NO.--9402578418.";
            break;

        case 4:
              cout<<"4.Meritas Adore Resort \n"; 
              cout<<" ADDRESS --Tungarli Near Narayani Dham Temple, Lonavala 410403 India.\n";
              cout<<" CONTACT  NO.-- 09689521111.";
            break;

        case 5:
              cout<<"5. Upper Deck Resort \n";
              cout<<"ADDRESS --13/15 Pangloli Village Thakurwadi Off Tungarli Lake, Lonavala 410401 India.\n";
              cout<<"CONTACT NO-- 9402517853.";
            break;
        default:
            break;
        } 
    }
        
    void Hotel_Kokan()
    {
        cout<<"  We have 5 Hotels in KOKAN are as follows  ::  \n";
        cout<<"1.Kenilworth Beach Resort & Spa  \n";
        cout<<"2.Hotel Sea Fans  \n";
        cout<<"3.Hotel Landmark  \n";
        cout<<"4.Capital O 44358 Hotel Vihar Deluxe  \n";
        cout<<"5.Hotel Sea Rock  \n";
        cin>>hoTel_Kokan;

        switch (hoTel_Kokan)
        {
        case 1:
        cout<<"1.Kenilworth Beach Resort & Spa \n"; 
        cout<<"ADDRESS --Majorda - Utorda, Majorda, Goa 403713.India, \n";
        cout<<"Contact  No.-- 8744124578.";
        break;

        case 2:
        cout<<"2.Hotel Sea Fans  \n";
        cout<<"ADDRESS -- Mandvi Beach , Ratnagiri 415612 India. \n";
        cout<<"CONTACT NO. -- 7845129605.";
        break;

        case 3:
       cout<<"3.Hotel Landmark \n";
       cout<<"ADDRESS NO.--Thiba Palace Road, Ratnagiri 415612 India. \n";
       cout<<"CONTACT NO. -- 9874152637.";
       break;

        case 4:
       cout<<"4.Capital O 44358 Hotel Vihar Deluxe  \n";
       cout<<"ADDRESS -- 27,870, Main Road Juna Malanakar Near Domino's, Ratnagiri 415612 India. \n";
       cout<<"CONTACT NO .-- 9800744512.";
       break;
        
        case 5:
       cout<<"5.Hotel Sea Rock \n";
       cout<<"ADDRESS --Beach Rd, Near Collector's office , Ratnagiri 415612 India. \n";
       cout<<"CONTACT NO. -- 9866002100";
         break;
        
        default:
            break;
        }

    
    }      
        
};
class Rentals
{
    int pay;
    public:
    void display_RENTALS()
    {
        int p = 1000;
        int Num_ber;
        int choice2;
        char choice3;
        cout << "\n Whether the room is 1.AC \n 2.Non_AC  \n";
        cin >> choice3;
        cout << "\n Choose the type of Room which you want : \n 1.Single Room \n 2.Double Room \n 3.Triple Room \n 4.Twin Room \n 5.Studio Room \n 6.Mini Suite \n 7.Presidential Suite \n";
        cin >> choice2;
        if (choice3 == '1')
        {

            switch (choice2)
            {
            case 1:
                cout << "\n   Rent for a Single Room = " << p*6;
                break;

            case 2:
                cout << "\n  Rent for  a Double Room = " << p*5;
                break;

            case 3:
                cout << "\n  Rent for  a Triple Room = " << p*4;
                break;

            case 4:
                cout << "\n  Rent for  a Twin Room =  " << p*6;
                break;

            case 5:
                cout << "\n  Rent for  a Studio Room = " << p*5;
                break;

            case 6:
                cout << "\n  Rent for  a Mini Suite = " << p*3;
                break;

            case 7:
                cout << " Rent for  a Presidential Suite = " << p*4;
                break;

            default:
                break;
            }
        }
        else if (choice3 == '2')
        {
            switch (choice2)
            {
            case 1:
                cout << "\n   Rent for a Single Room = " << p*4;
                break;

            case 2:
                cout << "\n  Rent for  a Double Room = " << p*3;
                break;

            case 3:
                cout << "\n  Rent for  a Triple Room = " << p*3;
                break;

            case 4:
                cout << "\n  Rent for  a Twin Room = " << p*2;
                break;

            case 5:
                cout << "\n  Rent for  a Studio Room =" << p*2;
                break;

            case 6:
                cout << "\n  Rent for  a Mini Suite = " << p*2;
                break;

            case 7:
                cout << " Rent for  a Presidential Suite = " << p*4;
                break;

            default:
                break;
            }
        }
        else
        {
            cout << " \n no option \n";
        }
    }
};
class Customer
{
    int id;
    char name[20];
    char address[20];
    int phone;
    int priority;
    friend class Hotel_management;

public:
    void getdata()
    {

        cout << "\n Enter the Customer priority            ::   ";
        cin >> priority;
        cout << "\n Enter the Name of Customer             ::   ";
        cin >> name;
        cout << "\n Enter ID of the Customer               ::   ";
        cin >> id;
        cout << "\n Enter the Address of the Customer      ::   ";
        cin >> address;
        cout << "\n Enter the Phone number of the Customer ::   ";
        cin >> phone;
    }
    void putdata()
    {
        cout << "\n  Customer Priority       ::  " << priority;
        cout << "\n  Customer Name           ::  " << name;
        cout << "\n  Customer ID             ::  " << id;
        cout << "\n  Customer Address        ::     " << address;
        cout << "\n  Customer Phone Number   ::   " << phone;
    }
};
class Hotel_management
{
    int front;
    int rear;
    Customer queue[MAX];

public:
    Hotel_management()
    {
        front = rear = -1;
    }
    bool isEmpty();
    bool isFull();
    void insert();
    void remove();
    void display();
};
bool Hotel_management::isEmpty()
{
    if (front == (rear + 1) || rear == -1)
        return 1;
    else
        return 0;
}
bool Hotel_management::isFull()
{
    if (rear == MAX - 1)
    {
        return 1;
    }
    else
        return 0;
}
void Hotel_management::insert()
{
    Customer C;
    if (isFull())
    {
        cout << "\n $----Hotel is Fully Booked----$ ";
    }
    else
    {
        C.getdata();
        if (rear == -1)
        {
            front++;
            rear++;
            queue[rear] = C;
        }
        else
        {
            int i = rear;
            while (i > front && queue[i].priority > C.priority)
            {
                queue[i + 1] = C;
                rear++;
            }
        }
        cout << "\n Customer has Sucessfully booked the room...\n";
    }
}
void Hotel_management::remove()
{
    if (rear == -1 || front == (rear + 1))
    {
        cout << "\n      ---Hotel is Vacant---      ";
    }
    else
    {
        front++;
        cout << "\n Customer has Successfully Checked Out from the Hotel.....\n";
    }
}
void Hotel_management::display()
{
    if (isEmpty())
    {
        cout << "\n ---Hotel is Vacant---";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            queue[i].putdata();
        }
    }
}
class payment
{
    public:
    void displAy()
    {
        cout<<"Enter Room no - \n";// cout<<"\n "<<R.display()
        cout<<"Enter Room type -  \n";// cout<<"\n "<<R.display()
        cout<<"";
    }
    
    void show()
    {
        cout<<"\n           Hotel Bank Details...........       \n";
        cout<<" 1.    Bank Name      ::   UNIVERSAL BANK \n";
        cout<<" 2.  ACCOUNT NUMBER   ::   43115624364752  \n";
        cout<<" 3.     IFSC CODE     ::   AS111SO0ON11AS \n";
        cout<<"       *----Thanks---- \n";
        cout<<"       .....----VISIT AGAIN----.....";

    }
};

int main()
{
    int p = 1000;
    Location L;
    Rentals R;
    Customer C;
    Hotel_management H;
    payment P;
    int CHOice;
     char opt;
     int cho_ice;
    do
    {
        cout<<"   ***  Welcome to 'Make my Trip'  *** \n";
        cout<<" \n Different locations where you want to book a room of a particular hotel : \n";
        cout<<"1.Goa\n";
        cout<<"2.Mahabaleshwar\n";
        cout<<"3.Lonavala \n";
        cout<<"4.Kokan \n";
        cout<<"5.EXIT\n";
        cin>>CHOice;
        switch (CHOice)
        {
            case 1:
            L.Hotel_Goa();
                 cout<< "\n *** ---_M-E-N-U__---***";
                 cout << "\n 1.Different Types of Room in Hotel or Check Rental \n 2.Add Customers  \n 3.Payment \n 4.Exit \n";
                 cin >> opt;
                 switch (opt)
                {
                  case '2':
                    cout << " Adding Customers .............. ";
                    cout << "\n**MENU\n";
                    cout << "1.Insert  the Customer\n";
                    cout << "2.Display Details of the Customer  or  Check Availability of the Room \n";
                    cout << "3.Checked out Customer \n";
                    cout << "4.Exit\n";
                    cout << "Choice:";
                    cin >> cho_ice;
                    switch (cho_ice)
                    {
                        
                        case 1:
                        H.insert();
                        break;

                        case 2:
                        H.display();
                        break;

                        case 3:
                        H.remove();
                    }
                break;

                  case '1':
                  cout << "\n Rents of Rooms in the Hotel  ";
                  R.display_RENTALS();
                  break;

                  case '3':
                  P.displAy();
                  P.show();
                  break;
                }

        
        break;

        case 2:
            L.Hotel_Maha();
                cout<< "\n *** ---_M-E-N-U__---***";
                 cout << "\n 1.Different Types of Room in Hotel or Check Rental \n 2.Add Customers  \n 3.Payment \n 4.Exit \n";
                 cin >> opt;
                 switch (opt)
                {
                  case '2':
                    cout << " Adding Customers .............. ";
                    cout << "\n   *****--- MENU ---***** \n";
                    cout << "1.Insert  the Customer\n";
                    cout << "2.Display Details of the Customer  or  Check Availability of the Room \n";
                    cout << "3.Checked out Customer \n";
                    cout << "4.Exit\n";
                    cout << "Choice:";
                    cin >> cho_ice;
                    switch (cho_ice)
                    {
                        
                        case 1:
                        H.insert();
                        break;

                        case 2:
                        H.display();
                        break;

                        case 3:
                        H.remove();
                    }
                break;

                  case '1':
                  cout << "\n Rents of Rooms in the Hotel  ";
                  R.display_RENTALS();
                  break;

                  case '3':
                  P.displAy();
                  P.show();
                  break;
                }
            
            break;

        case 3:
            L.Hotel_Lonavala();
                cout<< "\n *** ---_M-E-N-U__---***";
                 cout << "\n 1.Different Types of Room in Hotel or Check Rental \n 2.Add Customers  \n 3.Payment \n 4.Exit \n  ";
                 cin >> opt;
                 switch (opt)
                {
                  case '2':
                    cout << " Adding Customers .............. ";
                    cout << "\n**MENU\n";
                    cout << "1.Insert  the Customer\n";
                    cout << "2.Display Details of the Customer  or  Check Availability of the Room \n";
                    cout << "3.Checked out Customer \n";
                    cout << "4.Exit\n";
                    cout << "Choice:";
                    cin >> cho_ice;
                    switch (cho_ice)
                    {
                        
                        case 1:
                        H.insert();
                        break;

                        case 2:
                        H.display();
                        break;

                        case 3:
                        H.remove();
                    }
                break;

                  case '1':
                  cout << "\n Rents of Rooms in the Hotel  ";
                  R.display_RENTALS();
                  break;

                  case '3':
                  P.displAy();
                  P.show();
                  break;
                }
            break;
        
        case 4:
            L.Hotel_Kokan();
                cout<< "\n *** ---_M-E-N-U__---***";
                 cout << "\n 1.Different Types of Room in Hotel or Check Rental \n 2.Add Customers  \n 3.Payment \n 4.Exit \n  ";
                 cin >> opt;
                 switch (opt)
                {
                  case '2':
                    cout << " Adding Customers .............. ";
                    cout << "\n**MENU\n";
                    cout << "1.Insert  the Customer\n";
                    cout << "2.Display Details of the Customer  or  Check Availability of the Room \n";
                    cout << "3.Checked out Customer \n";
                    cout << "4.Exit\n";
                    cout << "Choice:";
                    cin >> cho_ice;
                    switch (cho_ice)
                    {
                        
                        case 1:
                        H.insert();
                        break;

                        case 2:
                        H.display();
                        break;

                        case 3:
                        H.remove();
                    }
                break;

                  case '1':
                  cout << "\n Rents of Rooms in the Hotel  ";
                  R.display_RENTALS();
                  break;

                  case '3':
                  P.displAy();
                  P.show();
                  break;
                }
            break;
        

        default:
            break;
        }
        
    } while (CHOice!=4);
   return 0;
}



