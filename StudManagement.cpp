#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    float maths,science,english;

    Student()
    {
        name = "NA";
        roll = 0;
        maths = 0;
        science = 0;
        english =0;
    }
    void getvalue()
    {
        cout<<"Enter Student name : ";
        cin>>name;
        cout<<"Enter Maths Marks : ";
        cin>>maths;
        cout<<"Enter Science Marks : ";
        cin>>science;
        cout<<"Enter English Marks : ";
        cin>>english;
    }
    void getroll()
    {
        cout<<"Enter roll : ";
        cin>>roll;

    }
    void Search()
    {
        cout<<"Name       : "<<name<<endl;
        cout<<"roll       : "<<roll<<endl;
        cout<<"****** Marks ******"<<endl;
        cout<<"Maths      : "<<maths<<endl;
        cout<<"Science    : "<<science<<endl;
        cout<<"English    : "<<english<<endl;
        cout<<"Percentage : "<<((maths+science+english)/300)*100<<endl;
    }
    void show()
    {
        cout<<name<<"\t"<<roll<<"\t\t"<<maths<<"\t"<<science<<"\t"<<english<<"\t"<<((maths+science+english)/300)*100<<"\n";
    }
    void update()
    {
        int temp,k=1,new2,T;
        string new3;
        float t;

        while(k)
        {
        cout<<"What you want to update\n\n1.Name\n*** Marks ***\n2.Maths\n3.Science\n4.English\n0.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>temp;
        cout<<"\n";
            switch(temp)
            {
            case 1:
                cout<<"Old Name is : "<<name<<endl;
                cout<<"Enter New Name : ";
                cin>>new3;
                cout<<"Do you really want to change\n1.yes\n2.no"<<endl;
                cin>>T;
                if(T == 1)
                {
                    name = new3;
                }
                break;
           /* case 2:
                cout<<"Old Roll number is : "<<roll<<endl;
                cout<<"Enter New Roll number : ";
                cin>>new2;
                cout<<"Do you really want to change\n1.yes\n2.no"<<endl;
                cin>>T;
                if(T == 1)
                {
                    roll = new2;
                }
                break;*/
            case 2:
                cout<<"Old Maths marks is : "<<maths<<endl;
                cout<<"Enter new Maths marks : ";
                cin>>new2;
                cout<<"Do you really want to change\n1.yes\n2.no"<<endl;
                cin>>t;
                if(t == 1)
                {
                    maths = new2;
                }
                break;
            case 3:
                cout<<"Old Science marks is : "<<science<<endl;
                cout<<"Enter new Science marks : ";
                cin>>new2;
                cout<<"Do you really want to change\n1.yes\n2.no"<<endl;
                cin>>t;
                if(t == 1)
                {
                    science = new2;
                }
                break;
            case 4:
                cout<<"Old English marks is : "<<english<<endl;
                cout<<"Enter new English marks : ";
                cin>>new2;
                cout<<"Do you really want to change\n1.yes\n2.no"<<endl;
                cin>>t;
                if(t == 1)
                {
                    english = new2;
                }
                break;
            case 0:
                k = 0;
                break;
            default :
                cout<<"Invalid Option"<<endl;
                break;
            }
        }
    }

};

int main()
{
     Student a[100];
    int i=1,m,j,n=0,n2=0,f,v,t;


    while(i)
    {
        cout<<"\n\n****Asterisc Classes****\n\n1.Add Student\n2.Search Student\n3.Show students\n4.Update student data\n0.Exit\n";
        cout<<"\nEnter your choice = ";
        cin>>m;
        cout<<"\n";
        switch(m)
        {
        case 1:

            cout<<"Enter numbers of Students : ";
            if(n != 0)
            {
            cin>>n;
            }
            else
            {
                cin>>n2;
            }
            n += n2;
            for(j=0;j<n;j++)
            {
                if(a[j].roll == 0)
                {
                    cout<<"\nEnter Student Number "<<j+1<<" Details"<<endl;
                    //a[j].getroll();
                    cout<<"Enter roll number : ";
                    q:cin>>a[j].roll;
                    for(v=0;v<j;v++)
                    {
                        if(a[v].roll == a[j].roll)
                        {
                            cout<<"Entered Roll Number already Used \nPlease Enter Different Roll Number : ";
                            goto q;
                        }
                    }
                    a[j].getvalue();
                }
            }

                break;

        case 2:

            j:cout<<"\nEnter Roll Number : ";
            cin>>f;
            for(j=0;j<n;j++)
            {
                if(f == a[j].roll)
                {
                    a[j].Search();
                break;
                }
            }
                if(f != a[j].roll)
                {
                    cout<<"Roll number not found"<<endl;

                    goto j;
                }

                break;

        case 3:
            cout<<"Name\tRoll number\tMaths\tScience\tEnglish\tPercentage\n";
            for(j=0;j<n;j++)
            {

                    a[j].show();

            }
                break;


        case 4:
            b:cout<<"\nEnter Roll Number : ";
            cin>>f;
            for(j=0;j<n;j++)
            {
                if(f==a[j].roll)
                {
                    a[j].update();

                    break;
                }

            }
            if(f != a[j].roll)
                {
                    cout<<"Roll number not found"<<endl;

                    goto b;
                }

                break;
        case 0:
            i=0;
            break;

        default:
                printf("Invalid Option");
                break;
        }
    }

    return 0;
}
