#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    float n1,n2,n3,n4,n5,average;
 
    cin >> n1 >> n2 >> n3 >> n4;
 
    n1 *= 2.0;
    n2 *= 3.0;
    n3 *= 4.0;
    n4 *= 1.0;
    average = (n1+n2+n3+n4)/10.0;
    cout << fixed << setprecision(1) << "Media: "<<average<< endl;
 
    if (average >=7.0)
    {
        cout <<"Aluno aprovado."<< endl;
    }
    else if (average < 5.0)
    {
        cout <<"Aluno reprovado."<<endl;
    }
    else
    {
        cout << "Aluno em exame."<<endl;
        cin >> n5;
        cout <<fixed<<setprecision(1)<< "Nota do exame: "<<n5<<endl;
        average = (average + n5)/2.0;
        if (average >= 5.0)
            cout << "Aluno aprovado."<<endl;
        else
            cout << "Aluno reprovado."<<endl;
        cout <<fixed<<setprecision(1)<<"Media final: "<<average<<endl;
 
    }
 
    return 0;
}