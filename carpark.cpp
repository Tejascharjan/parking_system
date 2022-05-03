// PARKING SYSTEM BY TEJAS S. CHARJAN 
//BSc FINAL YEAR 
#include<iostream>
using namespace std;

int main()
{
    int u_input, c=0,r=0,b=0;
    int amount=0,count=0;
    //menu
    while (true)
    {
           
    cout<<"Press 1 for rickshaw: "<<endl;
    cout<<"Press 2 for car: "<<endl;
    cout<<"Press 3 for bus: "<<endl;
    cout<<"Press 4 to the record : "<<endl;
    cout<<"Press 5 to delete the record:"<<endl;
    cout<<"Press 6 to delete the rickshaw record:"<<endl;       // if you have to unparked the rickshaw then press the number six
    cout<<"Press 7 to delete the car record:"<<endl;       // if you have to unparked the car then press the number seven
    cout<<"Press 8 to delete the bus record:"<<endl;       // if you have to unparked the rickshaw then press the number eight
    cin>>u_input;

    if (u_input==1)
    {
        if (count<=50)
        {
        r++;
        amount=amount+100;
        count=count+1;
    }
    else{
        cout<<"No More cars, Parking is full"<<endl;
    }
 }
    else if (u_input==2)
    {
        if (count<=50)
        {
        c++;
        amount=amount+200;
        count=count+1;
        }
        else{
            cout<<"Parking is full"<<endl;
        }
    }
    else if (u_input==3)
    {
        if (count<=50)
        {
        b++;
        amount=amount+300;
        count=count+1;
        }
        else{
            cout<<"Parking is full"<<endl;
        }
    }
        else if (u_input==4)
    {
        cout<<"**********************************************"<<endl;
        cout<<"The total amount ="<<amount<<endl;
        cout<<"The total number of vehicles parked ="<<count<<endl;
        cout<<"The total number of rickshaws parked ="<<r<<endl;
        cout<<"The total number of cars parked ="<<c<<endl;
        cout<<"The total number of buses parked ="<<b<<endl;
        cout<<"**********************************************"<<endl<<endl;
    }

    else if (u_input==5)
    {        
        amount=0;
        count=0;
        r=0;
        c=0;
        b=0;
        cout<<"**********************************************"<<endl<<endl;
        cout<<"RECORD DELETED"<<endl;
        cout<<"**********************************************"<<endl<<endl;

    }
    else if(u_input==6)            // To delete the rickshaw record
    {
          r--;
        amount=amount-100;
        count=count-1;
      }
    else if (u_input==7)    // To delete the car record
    {
        c--;
        amount=amount-200;
        count=count-1;
    }
    else if (u_input==8)          // To delete the bus record
    {
        amount=amount-300;
        count=count-1;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
}  
    return 0;
}
