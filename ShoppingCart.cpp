#include <iostream>
int main()
{
    int n,coupon;
    float subtotal,price,sum, total = 0;
    float disc = .10;
    float ship = .25;
    double discount =0.00;
    std::cout << "Please enter the amount of products in your order: ";
    std::cin >> n;
    sum = 0;
    for (int p=1;p<=n;p++)
    {
        std::cout << "Please enter your the prices of your products: \n";
        std::cin >> price;
        sum = sum + price;
    }
    std::cout << "Please enter your coupon here: ";
    std::cin >> coupon;
    subtotal = 0;
    discount = 0;
    if (coupon==1234){
        discount = sum * disc;
    }
    subtotal = sum - discount;
    float shipping = subtotal * ship;
    total = subtotal + shipping;
    std::cout << "\nYour total (with shipping included) is: $" << total <<"\n";
}