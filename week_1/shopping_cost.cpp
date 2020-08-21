// Tina is preparing a shopping list containing N  items. She knows the quantity and price of each item on the list. The shop is offering a  20 %  discount on the items with a quantity of more than  100  units. Given the quantity and price of each of the N  items, your task is to calculate how much each item will cost. 

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int quantity=0;
        float price=0;
        double total;
        cin>>quantity>>price;
        if(quantity>100)
        {
            price=price-(price*(0.2));
            total=quantity*price;
            cout<<std::fixed<<std::setprecision(1)<<total<<"\n";
        }else
        {
            total=quantity*price;
            cout<<std::fixed<<std::setprecision(1)<<total<<"\n";
        }
        
    }
    return 0;
}