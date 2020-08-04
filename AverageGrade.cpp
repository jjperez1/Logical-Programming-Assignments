#include <iostream>
int main()
{
    int n,sum,grade;
    float average;
    std::cout << "Please enter the amount of students: ";
    std::cin >> n;
    for (int s=0;s<n;s++)
    {
        sum = 0;
        for (int g=1;g<=5;g++)
        {
            std::cout << "Enter student grades: \n";
            std::cin >> grade;
            sum = sum + grade;
        }
        average = sum/5;
        std