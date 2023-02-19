#include<iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(int argc, char const *argv[])
{
    float a,b,c,s,r,m,i,x,d;
    string pr,pa;

    int O_P;
   
   do{ 
     system("cls");
    cout<<"******MENU******"<<endl;
    cout<<"SELECCIONE UNA OPCION"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"1.suma-resta-multiplicacion-division"<<endl;
    cout<<"2.Determinar si un numero es par o impar"<<endl;
    cout<<"3.Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
    cout<<"4.Determinar si una palabra o un numero es palíndromo."<<endl;
    cout<<"5.Conversión de numeros arabigos a romanos (mínimo 1,000)"<<endl;
    cout<<"6.Conversión de numeros enteros a letras"<<endl;
    cout<<"7.Conversión de numeros enteros con decimal a letras"<<endl;
    cout<<"8.Una tabla de multiplicar"<<endl;
    cout<<"9.Todas las tablas de multiplicar del 1 al 10"<<endl;
    cout<<"10.Crear de forma grafica la multiplicación manual"<<endl;
    cout<<"11.Conversion de numeros decimales a binario"<<endl;
    cout<<"12.Conversion de numeros decimales a hexadecimales"<<endl;
    cout<<"13.Crear Figuras Geometricas Basicas"<<endl;
    cout<<"14.Mover un punto en toda la pantalla"<<endl;
    cout<<"15.Simulacion de un Cajero (Autómata)"<<endl;
    cout<<"16.Calcular la hipotenusa"<<endl;
    cout<<"17."<<endl;
    cout<<"18."<<endl;
    cout<<"19."<<endl;
    cout<<"20."<<endl;
    cout<<"Opcion (1-20): ";
    cin>>O_P;
    switch(O_P)
        {
        case 1:
        system("cls");
            float opc,n1,n2, r;
            do{
                cout<<" "<<endl;
                cout<<"*****ELIGA OPCION******"<<endl;
                cout<<"1.Suma"<<endl;
                cout<<"2.Resta"<<endl;
                cout<<"3.Multiplicacion."<<endl;
                cout<<"4.Division"<<endl;
                cout<<"5.Salir"<<endl;
                cout<<"opc: "<<endl;
                cin>>opc;
                    if(opc==1){
                        system("cls");
                        
                        cout<<"Ingrese primer numero: "<<endl;
                        cin>>n1;
                        cout<<"Ingrese segundo numero:"<<endl;
                        cin>>n2;
                        r=n1+n2;
                        cout<<"sumar = "<<r<<endl;

                    }
                    if(opc==2){
                        system("cls");
                        
                        cout<<"Ingrese primer numero: "<<endl;
                        cin>>n1;
                        cout<<"Ingrese segundo numero:"<<endl;
                        cin>>n2;
                        r=n1-n2;
                        cout<<"resta = "<<r<<endl;
                    }
                    if(opc==3){
                        system("cls");
                        
                        cout<<"Ingrese primer numero: "<<endl;
                        cin>>n1;
                        cout<<"Ingrese segundo numero:"<<endl;
                        cin>>n2;
                        r=n1*n2;
                        cout<<"Multiplicacion = "<<r<<endl;
                    }
                    if(opc==4){
                        system("cls");
                    
                        cout<<"Ingrese primer numero: "<<endl;
                        cin>>n1;
                        cout<<"Ingrese segundo numero:"<<endl;
                        cin>>n2;
                        if(n2==0){
                        cout<<"No se puede dividir entrre cero"<<endl;
                        }else{
                            r=n1/n2;
                        cout<<"Division = "<<r<<endl;}
                    
                    }
            } while (opc!=5);

                
                    
                    
            break;
        case 2:
                system("cls");
                int a, re;
                cout<<"Ingrese Numero:"<<endl;
                cin>>a;
                if(a % 2==0){
                   cout<<"Es par"<<endl;

                }else{
                     cout<<"Es impar"<<endl;
                }
                system("pause");

        break;

        case 3:
                system("cls");
                int op,m_k,m_p,l_k;
                cout<<"CONVERSIONES"<<endl;
                cout<<""<<endl;
                cout<<"1.Millas a Kilometros y viceversa"<<endl;
                cout<<"2.Metros a Pulgadas y viceversa"<<endl;
                cout<<"3.Libras a Kilogramos y viceversa"<<endl;
                 cout<<"ELIGA OPCION: ";
                cin>>op;
                switch(op)
                {
                        case 1:
                         system("cls");
                        cout<<"***************"<<endl;
                        cout<<"1.Millas a Kilometros"<<endl;
                        cout<<"2.Kilometros a millas"<<endl;
                        cout<<"Elija una opcion: "<<endl;
                        cin>>m_k;
                            if(m_k==1){
                                cout<<"Ingrese Millas: "; 
                                cin>>a;
                                b=1.60934;
                                r=a*b;
                                  cout<<"KILOMETROS : "<<r<<endl; 

                            }
                             if(m_k==2){
                                cout<<"Ingrese Kilometros: "; 
                                cin>>a;
                                b=1.60934;
                                r=a/b;
                                  cout<<"Millas: "<<r<<endl; 

                            }
                            system("pause");
                        break;
                        case 2:
                        system("cls");
                        cout<<"***************"<<endl;
                        cout<<"1.Metros a Pulgadas"<<endl;
                        cout<<"2.Pulgadas a Metros"<<endl;
                        cout<<"Elija una opcion: "<<endl;
                        cin>>m_p;
                           if(m_p==1){
                                cout<<"Ingrese Metros: "; 
                                cin>>a;
                                b=39.3701;
                                r=a*b;
                                  cout<<"Pulgadas : "<<r<<endl; 

                            }
                             if(m_p==2){
                                cout<<"Ingrese Pulgadas: "; 
                                cin>>a;
                                b=39.3701;
                                r=a/b;
                                  cout<<"Metros:  "<<r<<endl; 

                            }
                            system("pause");
                        break;

                        case 3:
                        system("cls");
                        cout<<"***************"<<endl;
                        cout<<"1.Libras a Kilogramos"<<endl;
                        cout<<"2.Kilogramos a libras"<<endl;
                        cout<<"Elija una opcion: "<<endl;
                        cin>>m_k;
                            if(m_k==1){
                                cout<<"Ingrese Libras: "; 
                                cin>>a;
                                b=0.453592;
                                r=a*b;
                                  cout<<"KILOGRAMOS : "<<r<<endl; 

                            }
                             if(m_k==2){
                                cout<<"Ingrese Kilogramos: "; 
                                cin>>a;
                                b=0.453592;
                                r=a/b;
                                  cout<<"LIBRAS: "<<r<<endl; 

                            }
                            system("pause");
                        break;
                        }
                        break;
        
                case 4:
                        system("cls");
                       
                        i = 0;
                        cout<<"Ingrese palabra: "<<endl;
                        cin>>pa;
                        for(i = pa.size()-1; i>=0; i--){
                            cout<<pa[i]<<endl;   
                            pr += pa[i];
                        }
                        if (pa==pr)
                        {
                            cout<<"Es una palabra palindroma "<<endl;
                        }else{
                            cout<<"No es una palabra palindroma "<<endl;
                        }
                        
                        system("pause");
                break;
            
                case 5:
                        system("cls");
                            cout<<"Ingrese un numero entre 0-999"<<endl;
                            cin>>x;
                            cout<<"La conversion es: "<<endl;
                        if((x<1)||(x>999))
                            cout<<"Ingrese un numero entre 0-999"<<endl;
                        else
                        {
                        
                                if(x>=900){
                                    cout<<"CM";   x=x-900; }
                                if(x>=500){
                                    cout<<"D"    ;x=x-500; }
                                if(x>=400){
                                    cout<<"CD"   ;x=x-400; }
                                if(x>=300){
                                    cout<<"C"    ;x=x-100; }
                                if(x>=200){
                                    cout<<"C"    ;x=x-100; }
                                if(x>=100){
                                    cout<<"C"    ;x=x-100; }
                                if(x>=90){
                                    cout<<"XC"   ;x=x-90;  }
                                if(x>=50){
                                    cout<<"L"    ;x=x-50;  }
                                if(x>=40){
                                    cout<<"XL"   ;x=x-40;  }
                                if(x>=30){
                                    cout<<"X"    ;x=x-10;  }
                                if(x>=20){
                                    cout<<"X"    ;x=x-10;  }
                                if(x>=10){
                                    cout<<"X"    ;x=x-10;  }
                                if(x>=9){
                                    cout<<"IX"   ;x=x-9;   }
                                if(x>=5){
                                    cout<<"V"    ;x=x-5;   }
                                if(x>=4){
                                    cout<<"IV"   ;x=x-4;   }
                                if(x>=3)
                                        {
                                    cout<<"III";x=x-3;     }
                                if(x>=2){
                                    cout<<"II"   ;x=x-2;   }
                                if(x>=1){
                                    cout<<"I"    ;x=x-1;   }
                        
                            }
                            cout<<""<<endl;
                        system("pause");
                break;
               
                

        }
        
           }while(O_P<=20);
    getch();
}
