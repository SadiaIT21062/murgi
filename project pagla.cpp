#include <iostream>
#include<string>
#include <conio.h>
using namespace std;
class Person
{
public:
    float height; // give the height as inch
    float age;
    float weight;
    string gender;
    int work_amount;

    Person()
    {
        ;
    }

    Person(float height, float age, float weight, string gender, int workAmount)
    {
        this->height = height;
        this->age = age;
        this->weight = weight;
        this->gender = gender;
        this->work_amount = work_amount;
    }

    float GetHeightAsMeter()
    {
        return height * 0.0254;//1 inch=0.0254 mtr  //BMI
    }

    float GetHeightAsCentimeter()
    {
        return height * 2.54;//1 inch=2.54 cm   //BMR
    }

    void GetPersonInfo()
    {
        cout << "Enter Your Height (feet): ";
        float feet, inch;
        cin >> feet;
        cout << "Enter the remaining inch: ";
        cin >> inch;
        SetHeightAsFeet(feet, inch);
        cout << "Enter your Age: ";
        cin >> age;
        cout << "Enter your Weight (kg): ";
        cin >> weight;
        cout << "Enter your Gender (Male/Female): ";
        cin >> gender;
        cout << "What is the level of your daily WorkAmount: ";
        cin >> work_amount;
    }
    void SetHeightAsFeet(float feet, float inch)
    {
        height = (feet * 12 + inch);
    }
};
class BMI :public Person
{
public:
    float bmi;
    string level;
    float calculateBMI()
    {
        float height_meter = GetHeightAsMeter();
        return weight / (height_meter * height_meter);
    }

    float BMI_level()
    {
        bmi = calculateBMI();

        if (bmi < 16)
        {
            level = "Severely Underweight";
            return -2;
        }
        else if (bmi < 18.5)
        {
            level = "Underweight";
            return -1;

        }
        else if (bmi >= 18.5 && bmi < 25)
        {
            level = "Normal weight";
            return 0;
        }
        else if (bmi >= 25 && bmi < 30)
        {
            level = "Overweight";
            return 1;
        }
        else if (bmi >= 30 && bmi < 35)
        {
            level = "Moderately Obese";
            return 2;
        }
        else if (bmi >= 35 && bmi < 40)
        {
            level = "severely Obese";
            return 3;
        }
        else if (bmi > 40)
        {
            level = "Morbidly Obese";
            return 4;
        }
    }

};
class BMR : public BMI
{
public:


    float calculateBMR()
    {

        if (gender == "Male")
        {
            float bmr;
            bmr = 66 + (13.7 * float(weight)) + (5 * GetHeightAsCentimeter()) - (6.8 * float(age));
            return bmr;
        }
        else
        {
            float bmr;
            bmr = 655 + (9.6 * float(weight)) + (1.8 * GetHeightAsCentimeter()) - (4.7 * float(age));
            return bmr;
        }
    }

};

int main()
{



    int type;
    BMR person;
    float bmi, bmr;
    while (1)
    {
        system("cls");
        cout << "\n\t\t........Welcome to Our Health Project.......\n" << endl;
        cout << endl << endl;
        cout << "1. Enter Your information" << endl << "2. Calculate BMI" << endl << "3. Calculate BMR" << endl << "4. Exit" << endl << "Enter Your choice: " << endl;
        cin >> type;
        switch (type)
        {
        case 1:
            person.GetPersonInfo();
            break;
        case 2:
        {
            bmi = person.calculateBMI();
            cout << "Your BMI is " << bmi << endl;
            string type_Health;
            cout << "Do you want to see your Health level" << endl << "Enter y/n: ";
            cin >> type_Health;
            if (type_Health == "y" || type_Health == "Y")
            {
                person.BMI_level();
                cout << person.level << endl;
                getch();
            }
            break;
        }
        case 3:
        {
            bmr = person.calculateBMR();
            cout << "Your BMR is " << bmr << endl;
            string type_show;
            cout << "Do you want to see your Health level" << endl << "Enter y/n: ";
            cin >> type_show;
            if (type_show == "y" || type_show == "Y")
            {
                float lower_weight = 18.5 * person.GetHeightAsMeter() * person.GetHeightAsMeter();
                float upper_weight = 24.9 * person.GetHeightAsMeter() * person.GetHeightAsMeter();
                float avg_weight = (lower_weight + upper_weight) / 2.0;
                float cur_bmr = person.calculateBMR();
                person.weight = avg_weight;
                float perfect_bmr = person.calculateBMR();
                cout << "To maintain your current Health, You should take " << cur_bmr << " cal per day" << endl;
                cout << "To control your Health level to perfect range, you should take " << perfect_bmr << " cal per day" << endl;
                if (perfect_bmr - cur_bmr < 0)
                {
                    cout << "Or you should burn " << cur_bmr - perfect_bmr << " cal per day" << endl;
                }
                else
                {
                    cout << "You should take extra " << perfect_bmr - cur_bmr << " cal per day" << endl;
                }
                getch();
            }
            getch();

            break;
        }
        case 4:
            cout << "Thanks for using our project." << endl;
            return 0;
            break;
        default:
            cout << "Invalid choice. Try again..." << endl;
        }
    }
}

