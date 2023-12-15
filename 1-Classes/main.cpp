#include <iostream>
#include <string>

using namespace std;
class Product{
private:
    string name;
    double price;
    double quantity;
public:
    string getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    double getQuantity() {
        return quantity;
    }
    void setName(string s){
        name=s;
    }
    void setPrice(double d){
        if(d>=0){
        price=d;}
    }
    void setQuantity(double d){
        if(d>=0){
            quantity=d;}
    }
    Product(string name,double price,double quantity){
        this->name=name;
        this->price=price;
        this->quantity=quantity;
    }
    double getTotalPrice(){
    return getPrice()*getQuantity();
    }
    string toString(){
        cout<<"Product name: "<<name<<endl<<"Product price: "<<price<<"$"<<endl<<"Product quantity: "<<quantity<<endl<<"Total price: "<<getTotalPrice()<<"$";
    }
};

int main(){
    Product p("Computer",10000,2);
    p.toString();
}

