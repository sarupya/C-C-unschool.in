 #include <iostream>
using namespace std;


main()
{
    char op;
    float num1, num2,num;
    do{
    cout <<"enter an operation from +,-,*,/";
    cin >> op;
    cout << "enter a number";
    cin >> num1;
    cout<< "enter a number";
    cin >> num2;





    switch (op) {


        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;



        case '*':
            cout << num1 * num2;
            break;


        case '/':
            cout << num1 / num2;
            break;
        default:
            cout << "Error! operator is not correct";
            break;
    }
    cout<<"enter 1 to continue";
    cin>>num;
    }while(num==1);

    return 0;
}
