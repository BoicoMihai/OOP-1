#include <iostream>
#include <string>
using namespace std;

class Apartment{
    private:
        string location;
        int SqMeter, Floor, Rooms;
        float Price;
        bool Avalability = false;
        
    public:
        Apartment(){
            location = "unknown";
            SqMeter = 0;
            Floor = 0;
            Rooms = 0;
            Price = 0;
            Avalability = false;
        }
        
        Apartment(string l, int s, int f, int r, float p, bool A){
            location = l;
            SqMeter = s;
            Floor = f;
            Rooms = r;
            Price = p;
            Avalability = A;
        }
        
        Apartment(const Apartment& p){
            location = p.location;
            SqMeter = p.SqMeter;
            Floor = p.Floor;
            Rooms = p.Rooms;
            Price = p.Price;
            Avalability = p.Avalability;
        }
        
        void SetPrice(float p){
            Price = p;
        }
        
        ~Apartment(){
            cout<<"Obiectul a fost sters!";
            cout<<endl;
        }
        
        void OutputObject(){
            cout<<"Price: "<<Price<<endl;
            cout<<"Location: "<<location<<endl;
            cout<<"Square meters: "<<SqMeter<<endl;
            cout<<"Rooms: "<<Rooms<<endl;
            cout<<"Avalability: "<< (Avalability ? "Valabil":"Nu este valabil") <<endl;
            cout<<endl;
        }
        
        void ChangeAvalability(bool p){
            Avalability = p;
        }
        
        void OutputPrice(){
            cout<<"Price: "<<Price<<endl;
            cout<<endl;
        }
        
        
        void OutputSqmeters(){
            cout<<"Square meters: "<<SqMeter<<endl;
            cout<<endl;
        }
};

int main()
{
    Apartment Ap1;
    Apartment Ap2("Ciocana 12", 58, 3, 2, 182000, true);
    Apartment Ap3(Ap2);
    
    Ap1.OutputObject();
    Ap2.OutputObject();
    Ap3.OutputObject();
    
    Ap1.SetPrice(200000);
    
    Ap1.OutputPrice();
    Ap2.OutputSqmeters();
    Ap3.ChangeAvalability(false);
    
    Ap3.OutputObject();
    

    return 0;
}