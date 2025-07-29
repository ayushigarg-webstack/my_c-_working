#include<iostream>
using namespace std;
class book
{
    public:
    string id;
    string title;
    string author;
    int issue;
    string studentname;
    int studentid;
    int contactno;
    int date;
    int returnbook;
    bool bookissued;
    void inputid()
    {
        cout << "Enter Book ID: ";
        cin >> id;

        bookissued = false;
    }
    void issuebook()
    {
        cout<<"do you want to issue the book ?"<<endl;
        cout<<"enter 1 for yes and 0 for no : "<<endl;
        cin>>issue;

        if (issue == 1)
        {
            cout << "Enter your details : " << endl;
            cout << "name : ";
            cin >> studentname;
            cout << "studentid : ";
            cin >> studentid;
            cout << "contact no. : ";
            cin >> contactno;
            cout<<"today's date : ";
            cin>>date;
            cout<<"return date : ";
            date=date+20;
            if(date>=1&&date<=31)
            {
                cout<<date<<" of this month"<<endl;
            }
            else
            {
                date=date-31;
                cout<<date<<"of next month"<<endl;
            }


            bookissued = true;
            cout << "book issued successfully" << endl;
        }
    }
    void returnbooks()
    {
        cout<<"do you want to return the book ?"<<endl;
        cout<<"enter 1 for yes and 0 for no : "<<endl;
        cin>>returnbook;   
        if(returnbook==1)
        bookissued=false;    
        cout<<"book returned successfully"<<endl;
    }
};
class library:public book
{
    public:
    string books[3][3]={{"101","TheAlchemist","PauloCoelho"},{"102","C++Programming","BjarneStroustrup"},{"103","Discovery of India","Jawaharlal Nehru"}};

    int bookcount=0;
    void addbook()
    {
        bookcount++;
        cout<<"books added to the cart : "<<bookcount<<endl;
    }
    void deletebook()
    {
        if(bookcount==0)
        cout<<"no books in the cart!"<<endl;
        if(bookcount>0)
        bookcount--;
        cout<<"deleted succesfully!"<<endl;
         cout<<"books in the cart : "<<bookcount<<endl;
    } 
    void showbooks()
    {
        for(int i=0;i<3;i++)
        {
            cout<<books[i][0]<<"  "<<books[i][1]<<"  "<<books[i][2]<<endl;
        }

    }
    void displaybook()
    {
        inputid();
        int c=0;
         bookissued = false;
         for (int i = 0; i < 3; i++)
         {
             if (books[i][0] == id)
             {
                 cout << "ID: " << books[i][0] << endl
                      << "Title: " << books[i][1] << endl
                      << "Author: " << books[i][2] << endl;
                 bookissued = false;

                 cout << "Status: " << (bookissued ? "Issued" : "Available") << endl;
                 addbook();
             }
             else
             {
                c++;
                if(c==3)
                cout<<"book not found"<<endl;
             }
         }



    }
    
         

};
int main()
{
    library lib;

    
    int choice;
    cout<<"------ LIBRARY MANAGEMENT SYSTEM ------"<<endl;
    cout<<"1. Display All Books\n2. Add Book\n3. Issue Book\n4. Return Book\n5. Delete Book\n6. Exit"<<endl;
    
    while (1 == 1)
    {
        cout<<"Enter your choice: ";
        cin >> choice;
        if (choice == 1)
        {
            lib.showbooks();
        }
            
        else if (choice == 2)
        { 
            lib.displaybook();
            
        }
        else if(choice==3)
        {
            lib.issuebook();
        }    
        else if(choice==4)
        {
            lib.returnbooks();
        }
        else if(choice==5)
        {
            lib.deletebook();
        }
        else if(choice==6)
        {
            cout<<"exited!";
            break;
        }
    }
}
