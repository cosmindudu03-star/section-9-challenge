#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> lista = {};
    char selection;
 do{
    cout<<"\n         Meniu         "<<endl;
    cout<<"======================="<<endl;
    cout<<"P - Printeaza numere "<<endl;
    cout<<"A - Adauga numar "<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"B - Display the biggest number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"======================="<<endl;
    cout<<"Introduceti alegerea dvs: "<<endl;
    cin>>selection;

     if(selection == 'p' || selection =='P'){
      cout<<"Ati ales P - Printeaza numere"<<endl;
      char caracter;
       if(lista.size() != 0){
        for(int y = 0; y < lista.size(); y++)
         cout<<lista[ y ]<< " ";
         cout<<endl;
       }
       else{
         cout<<"[] - Lista este goala"<<endl;
       }
     }



    else if(selection == 'A' || selection == 'a'){
      cout<<"Ati ales A - Adauga numar "<<endl;
      cout<<"Introduceti numarul pe care doriti sa-l adaugati listei: "<<endl;
         int adauga;
         cin>>adauga;
         lista.push_back(adauga);
         cout<<adauga<<" a fost adaugat listei"<<endl;
         bool verificare{true};
         char caracter;
         do{cout<<"Doriti sa mai adaugati un numar?(Y/N)" <<endl;
            cin>>caracter;
            while(caracter == 'y' || caracter == 'Y'){
              cout<<"Introduceti numarul pe care doriti sa-l adaugati listei: "<<endl;
              cin>>adauga;
              lista.push_back(adauga);
              cout<<adauga<<" a fost adaugat listei"<<endl;
              cout<<"Doriti sa mai adaugati un numar?(Y/N)" <<endl;
              cin>>caracter;
            }
                if (caracter == 'n' || caracter == 'N')
                  verificare = {false};

                else
                  cout<<"Introduceti o valoare corecta"<<endl;
         }
    while(verificare != false);
    }

    else if(selection == 'M' || selection == 'm'){
      cout<<"Ati ales M - Display mean of the numbers "<<endl;
      double media = 0.0;
      int suma = 0;
      cout<<"Vom calcula media aritmetica a listei. "<<endl;
      cout<<"In lista sunt "<<lista.size()<<" numere."<<endl;
      cout<<"Numerele sunt: ";
        for(int y = 0; y < lista.size(); y++){
          cout<<lista[ y ]<< " ";
          suma += lista [ y ];
        }
       media = (double)suma / lista.size();
       cout<<endl;
       cout<<"Media lor aritmetica este "<<media;

    }

    else if(selection == 'S' || selection == 's'){
      cout<<"Ati ales S - Display the smallest number "<<endl;
      int smallest = 0;
      cout<<"Cel mai mic numar din lista ";
        for(int i = 0; i < lista.size(); i++)
             if (smallest > lista[i])
               smallest = lista [i];
             else;
      cout<<" este "<< smallest;
        }

    else if(selection == 'B' || selection == 'b'){
      cout<<" Ati ales B - Display the biggest number "<<endl;
     int biggest = 0;
      cout<<"Cel mai mare numar din lista ";
        for(int i = 0; i < lista.size(); i++)
             if (biggest < lista[i])
               biggest = lista [i];
             else;
      cout<<" este "<< biggest;
    }

    else if(selection == 'Q' || selection == 'q'){
      cout<<" Ati ales Q - Quit. La Revedere"<<endl;
    }

    else {
        cout<<"Introduceti o valoare corecta"<<endl;
    }
 }
 while( selection != 'Q' && selection != 'q');

 return 0;

}
