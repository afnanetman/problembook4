// Name : Afnan Samir Mohammed Abdulmajeed
// ID : 20170054
// Group : G2
// Assignment 2













#include <iostream>
#include <cstring>

using namespace std;

class Movie
{
private :
    string name ;
    string MPAA ;
    int rating [5]= {0};
public :
    Movie ()
    {
        name = "000";
        MPAA= "000";
    }
    void SetName ( string n)
    {
        name =n;
    }
    void SetMPAA ( string m)
    {
        MPAA =m;
    }
    string GetName ()
    {
        return name;
    }
    string GetMPAA ()
    {
        return MPAA;
    }
    void addRating (int r)
    {
        if (r<0||r>5)
        {
            cout << " Please enter a number between 1 and 5 : ";
        }
        else
        {
            rating[r-1]++;
        }

    }
    double getAverage ()
    {
        double average =0;
        int p=0;
        for (int i=0 ; i<5; i++)
        {
            average+= ((i+1)*rating[i]);
            if(rating [i]>0)
            {
                p+=rating[i];
            }
            else
            {
                continue;
            }
        }

        average /= p ;
        return (average);
    }




};


int main()
{
    Movie a ;
    Movie b ;
    a.SetName ("Titanic");
    b.SetName ("Iron Man");
    a.SetMPAA ("G");
    b.SetMPAA ("PG");
    int r=0;

    cout << "The MPAA of the movie " << a.GetName()<< " is " << a.GetMPAA()<<endl;
    cout << "The MPAA of the movie " << b.GetName()<< " is " << b.GetMPAA()<<endl;


    for (int i=0; i<5; i++)
    {
        cout << "Enter rating for the movie " << a.GetName()<< " : ";

        cin>> r;
        a.addRating (r);
        cout <<endl;
    }


    for (int i=0; i<5; i++)
    {
        cout << "Enter rating for the movie " << b.GetName()<< " : ";

        cin>> r;
        b.addRating (r);
        cout <<endl;
    }

    cout << " Average of the movie "<< a.GetName() << " is "<< a.getAverage()<<endl;
    cout << " Average of the movie "<< b.GetName() << " is "<< b.getAverage()<<endl;









}
