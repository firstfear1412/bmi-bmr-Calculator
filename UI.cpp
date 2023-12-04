#include <iostream>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <cstring>
#include <cstdlib> 
using namespace std;
fstream save,load,bill;
char filename[30];
char firstname[20];
char lastname[20];
char stu_id[10];
char filebill[30];
int type;
int choice,select;
float bmi,bmr;
void Ignore();
//float input_weight();
//float mainoi0(float *input_weight());

class CreateFile{
    public:

        CreateFile(char const * fname,char const * lname){
            char filespace[] = "_";
            strcat(filename,fname);
            strcat(filename,filespace);
            strcat(filename,lname);
            strcpy(filebill,filename);
            // strcat(filename,filetype);
            cout << filename << endl;
        };
        CreateFile(char const * student_id){
            strcat(filename,student_id);
            strcpy(filebill,filename);
            // strcat(filename,filetype);
        };
};

class Data{
    public:
        char v[20],w[20];        
		float x,y;
        int x1,y1;
        // char[2] type;
        // char name[20];
        // char filetype[] = ".txt";
        // void showData2(){
        //     strcat(filename,".txt");
        // 	load.open(filename,ios::in);
        //     while(1){
        //         load >> v >> w >> x >> y;
        //         cout << "==== Result BMI and BMR ====" << endl;
        //         cout << "Name : " << v << " " << w << endl;
        //         cout << "BMI is : " << x << endl;
        //         cout << "BMR is : " << y << endl;
        //         break;               
        //     }
        // }
        // void showData1(){
        //     // strcat(filename,".txt");
        // 	load.open(filename,ios::in);
        //     cout << filename << endl;
        //     while(1){
        //         load >> w >> x >> y;
        //         cout << "==== Result BMI and BMR ====" << endl;
        //         cout << "Student ID : " << w << endl;
        //         cout << "BMI is : " << x << endl;
        //         cout << "BMR is : " << y << endl;
        //         break;               
        //     }
        // }

        void showData(){
            // strcat(filename,".txt");
        	load.open(filename,ios::in);
            cout << filename << endl;
            while(1){
                cout << "==== Result BMI and BMR ====" << endl;                
                
                if (type == 1){
                    load >> w >> x >> y;
                    cout << "Student ID : " << w << endl;
                }
                else if (type == 2){
                    load >> v >> w >> x >> y;
                    cout << "Name : " << v << " " << w << endl;
                }
                cout << "BMI is : " << x << endl;
                cout << "BMR is : " << y << endl;
                break;               
            }
        }

        void Name_SaveData(float bmi,float bmr){
            while (1)
            {
                save << fixed << setprecision(2);
                cout << firstname << " " << lastname << endl;
                save << firstname << endl << lastname << endl;
                save << bmi << endl << bmr << endl;
                break;
            }
        }
        void Stuid_SaveData(float bmi,float bmr){
            while (1)
            {
                save << fixed << setprecision(2);
                save << stu_id << endl;
                save << bmi << endl << bmr << endl;
                break;
            }
        }
        void Bill(float bmi,float bmr){
            if (type == 1){
                strcat(filebill,"_bill.txt");
            }
            else if(type == 2){
                strcat(filebill,"_bill.txt");
            }
            // strcat(filename,"_bill.txt");
            cout << filebill << endl;
            bill.open(filebill,ios::out);
            while(1){
                bill << fixed << setprecision(2);
                bill << "==== Result BMI and BMR ====" << endl;
                if (type == 1){
                    bill << "Student ID : " << stu_id << endl;
                }
                else if (type == 2){
                    bill << "Name : " << firstname << " " << lastname << endl;
                }
                bill << "BMI is : " << bmi << endl;
                bill << "BMR is : " << bmr << endl;
                bill << "******* Success ********" << endl;
                break;
            }
        }
        // void StuID_Bill(float bmi,float bmr){
        //     strcat(Name,"_bill.txt");
        //     bill.open(Name,ios::out);
        //     while(1){
        //         bill << fixed << setprecision(2);
        //         bill << "==== Result BMI and BMR ====" << endl;
        //         bill << "Student ID : " << stu_id << endl;
        //         bill << "BMI is : " << bmi << endl;
        //         bill << "BMR is : " << bmr << endl;
        //         bill << "******* Success ********" << endl;
        //         break;
        //     }
        // }
        // void Name_Bill(float bmi,float bmr){
        //     strcat(Name,"_bill.txt");
        //     bill.open(Name,ios::out);
        //     while(1){
        //         bill << fixed << setprecision(2);
        //         bill << "==== Result BMI and BMR ====" << endl;
        //         bill << "Name : " << firstname << " " << lastname << endl;
        //         bill << "BMI is : " << bmi << endl;
        //         bill << "BMR is : " << bmr << endl;
        //         bill << "******* Success ********" << endl;
        //         break;
        //     }
        // }
        // void SaveData(float bmi){
        //     cout << "bmi test print" << endl;
        // }
              
};
//class BMI{
//    public:
//        float weight,height;
//        void input_bmi(){
//            while(1){
//                cout << "input weight (kilo) : ";
//                cin >> weight;
//                Ignore();
//                // while(cin.fail()){
//                //     cout << "Input choice invalid!!!" << endl;
//                //     Ignore();
//                //     cout << "input weight (kilo) : ";
//                //     cin >> weight;
//                // }
//                cout << "input height (cen): ";
//                cin >> height;
//                Ignore();
//                // while(cin.fail()){
//                //     cout << "Input choice invalid!!!" << endl;
//                //     Ignore();
//                //     cout << "input height (cen): ";
//                //     cin >> height;
//                // }
//                break;
//            }
//        }
//};
class BMI{
    public:
        float weight,height;
        void input_bmi(){
            while(1){
                cout << "==== BMI ====" << endl;
                cout << "input weight (kilo) : ";
                cin >> weight;
                Ignore();
//                mainoi0(weight);
                if (weight <= 0 ){
                    cout << "Input choice invalid!!!" << endl;
                    //system("cls");
                    continue;
                }
                // else{
                //     cout << "Input choice invalid!!!" << endl;
                //     //system("cls");
                //     continue;
//                }
                // while(cin.fail()){
                //     //weight=0;
                //     cout << "Input choice invalid!!!" << endl;
                //     cout << "input weight (kilo) : ";
                //     cin >> weight;
                //     Ignore();
                //     if (weight > 0 );
                //     else{
                //         cout << "Input choice invalid!!!" << endl;
                //         continue;
                //         //system("cls");
                //     }
                // }
                cout << "input height (cen): ";
                cin >> height;
                Ignore();
//                mainoi0(height);
                if (height <= 0 ){
                    cout << "Input choice invalid!!!" << endl;
                    //system("cls");
                    continue;
                }
                // while(cin.fail()){
                //     //weight=0;
                //     cout << "Input choice invalid!!!" << endl;
                //     cout << "input weight (kilo) : ";
                //     cin >> height;
                //     Ignore();
                //     if (height > 0 );
                //     else{
                //         cout << "Input choice invalid!!!" << endl;
                //         continue;
                //         //system("cls");
                //     }
                // }
                break;
            }
        }
};

class calBMI : BMI{
    public:
        float showCal_bmi(){
            BMI::input_bmi();
            float Result_bmi = weight / ((height / 100) * (height / 100));
            cout << "BMI is : " << Result_bmi << endl;
            if(Result_bmi < 18.5 && Result_bmi > 0){
                cout << "underweight" << endl;
            }
            else if (Result_bmi >= 18.5&&Result_bmi <=22.9){
                cout << "slim" << endl;
            }
            else if (Result_bmi >= 23&&Result_bmi <=24.9){
                cout << "overweight" << endl;
            }
            else if (Result_bmi >= 25&&Result_bmi <=29.9){
                cout << "obesity" << endl;
            }
            else if (Result_bmi >=30){
                cout << "Dangerous obesity" << endl;
            }
            else{
                cout << "Error kuun mai chai manud" << endl;
            }
            return Result_bmi;
        }
};
class BMR{
    public:
        float weight,height;
        int age;
        char sex;
        void input_bmr(){
            while(1){
                weight = 0;
                cout << "input weight (kilo) : ";
                cin >> weight;
                Ignore();
                if (weight <= 0 ){
                    cout << "Input choice invalid!!!" << endl;
                    //system("cls");
                    continue;
                }
                cout << "input height (cen): ";
                cin >> height;
                Ignore();
                if (height <= 0 ){
                    cout << "Input choice invalid!!!" << endl;
                    //system("cls");
                    continue;
                }
                cout << "input age : ";
                cin >> age;
                Ignore();
                if (age <= 0 ){
                    cout << "Input choice invalid!!!" << endl;
                    //system("cls");
                    continue;
                }
                while(1){
                    cout << "input gender (M : male or F : female) : ";
                    cin >> sex;
                    Ignore();
                    if (toupper(sex) == 'M' || toupper(sex) == 'F'){
                        break;
                    }
                    else{
                        cout << "Input gender invalid please input M or F only." << endl;
                    }
                }

                break;
            }
        }
};

class calBMR : BMR{
    public:
        float showCalBMR(){
            float Result_bmr;
            BMR::input_bmr();
            if (toupper(sex) == 'M'){
                Result_bmr = 66 + (13.7 * weight) + (5 * height) - (6.8 * age);         
            }
            else if (toupper(sex) == 'F'){
                Result_bmr = 665 + (9.6 * weight) + (1.8 * height) - (4.7 * age);
            }
            // else{
            //     cout << "Input gender invalid please input M or F only." << endl;
            // }
            cout << "BMR is : " << Result_bmr << endl;
            return Result_bmr;
        }
};

calBMI test2;
calBMR test3;
Data testfile;




int main()
{
//	input_weight();
//	mainoi0(&input_weight());
    while(1){
    cout << fixed << setprecision(2);
    cout << "Input Student ID or Name\n1. Input Student ID\n2. Input Name" << endl;
    cin >> select;
    Ignore();
    if (select == 1){
        cout << "Student ID : ";
        cin >> stu_id;
//        Ignore();
        CreateFile filename(stu_id);
        type = 1;
        break;
    }
    else if(select == 2){
        cout << "Name : ";
        cin >> firstname;
//        Ignore();
        cout << "Lastname : ";
        cin >> lastname;
//        Ignore();
        CreateFile filename(firstname,lastname);
        type = 2;
        break;
    }
    else{
        cout << "Input menu invalid" << endl;
        cout << "************************" << endl;
        continue;
    }
    }
    // testfile.SaveType();
    strcat(filename,".txt");
    cout << "type : " << type << endl;
    while(1){
    
        save.open(filename,ios::out);
        cout << "====== Menu ====== \n1. BMI\n2. BMR\n3. Save Data" << endl;
        cout << "Select menu : ";
        cin >> choice;
        Ignore();
        if (choice == 1){
            bmi = test2.showCal_bmi();
        }
        else if (choice == 2){
            bmr = test3.showCalBMR();
        }
        else if (choice == 3){
            if(type == 1){
                testfile.Stuid_SaveData(bmi,bmr);
                // testfile.StuID_Bill(bmi,bmr);
            }
            else if (type == 2){
                testfile.Name_SaveData(bmi,bmr);
                // testfile.Name_Bill(bmi,bmr);
            }
            testfile.Bill(bmi,bmr);
            // while (1)
            // {
            //     save << bmi << endl << bmr << endl;
            //     break;
            // }
            break;
        }
        else{
            cout << "Input menu invalid" << endl;
        }
        save.close();
    }
    testfile.showData();
    // if (type == 1){
    //     testfile.showData1();
    // }
    // else if (type == 2){
    //     testfile.showData2();
    // }
    
    load.close();
    bill.close();

}
void Ignore(){
	cin.clear();
	cin.ignore(100,'\n');
//    if (check < 0) 
//        Ignore();
}
// float input_weight(){
// 	cin >> weight;
// 	cout << weight;
// }
// float mainoi0(float *input_weight()){
// 		if (input_weight <= 0 ){
// 	        cout << "Input choice invalid!!!" << endl;
// 	        //system("cls");
// 	        continue;
// 	    }
// 	    else{
// 	        return input_weight();
// 	    }
// }
