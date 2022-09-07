#include<iostream>
using namespace std;
int main()
{
    string product[]={"Leather Wallet","Umbrella","Cigarette","Honey"};
    int price[]={1100,900,200,100};
    int gst[]={18,12,28,0};
    int quantity[]={1,2,3,4};
    float curr_price[4];
    float total_amount=0;
    float mx=0;
    string product_name;
    for(int i=0;i<4;i++)
    {
        float d=0,add_gst=0;
        //calculation discount
        if(price[i]>500)
        {
            d=(price[i]*5)/100.0;
        }
        curr_price[i]=price[i]-d;
        curr_price[i]=curr_price[i]*quantity[i];
        //finding gst
        if(gst[i]>0)
        {
            add_gst=(curr_price[i]*gst[i])/100.0;
            if(add_gst>mx)
            {
                mx=add_gst;
                product_name=product[i];
            }
            curr_price[i]=curr_price[i]+add_gst;
        }
        //adding total amount
        total_amount=total_amount+curr_price[i];
    }
    cout<<"Total amount to paid="<<total_amount<<endl;
    cout<<"Product with Max GST is "<<product_name<<endl;
};
