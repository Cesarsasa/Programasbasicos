#include<iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#define up 80
#define down 72
#define right 77
#define left 75

using namespace std;
 void gotoxy(int x1, int y1){
                    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
                    COORD dwPos;
                    dwPos.X = x1;
                    dwPos.Y = y1;
                    SetConsoleCursorPosition(hcon,dwPos);

                }
int main(int argc, char const *argv[])
{
      
    float a,b,c,s,m,d;
    int i,j, tabla,r1,r2,r3,r4,r5,b1,b2,b3,b4,b5,decimal, residuo, resultado,miles,cientos,unidades,decimales,retirar,saldo,saldo_adicional,saldo_inicial, contra;
   float opc,n1,n2, r;
    int digitoex[20];
    short binario[8];
    char numeros[100][20] = 
                    {
                    {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
                    {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
                    {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
                    {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
                    {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
                    {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
                    {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
                    {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
                    {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
                    {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
                    };

                    char centenas[10][20] = {
                    {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
                    };
    string pr,pa;
    double x,y;
      double valor;
    int  O_P;
    char punto;
    int peso;

    float estatura,imc;
    

   
   do{ 
     system("cls");
    cout<<"******MENU******"<<endl;
    cout<<"SELECCIONE UNA OPCION"<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"1.suma-resta-multiplicacion-division"<<endl;
    cout<<"2.Determinar si un numero es par o impar"<<endl;
    cout<<"3.Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
    cout<<"4.Determinar si una palabra o un numero es palindromo."<<endl;
    cout<<"5.Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
    cout<<"6.Conversion de numeros enteros a letras"<<endl;
    cout<<"7.Conversion de numeros enteros con decimal a letras"<<endl;
    cout<<"8.Una tabla de multiplicar"<<endl;
    cout<<"9.Todas las tablas de multiplicar del 1 al 10"<<endl;
    cout<<"10.Crear de forma grafica la multiplicacion manual"<<endl;
    cout<<"11.Conversion de numeros decimales a binario"<<endl;
    cout<<"12.Conversion de numeros decimales a hexadecimales"<<endl;
    cout<<"13.Crear Figuras Geometricas Basicas"<<endl;
    cout<<"14.Mover un punto en toda la pantalla"<<endl;
    cout<<"15.Simulacion de un Cajero (Autómata)"<<endl;
    cout<<"16.Calcular la hipotenusa"<<endl;
    cout<<"17.Calcular el area de un triangulo"<<endl;
    cout<<"18.Calcular el area de un rectangulo"<<endl;
    cout<<"19.Calcular la ecuacion de una recta"<<endl;
    cout<<"20.Calcular masa corporal"<<endl;
    cout<<"Opcion (1-20): ";
    cin>>O_P;
          if (O_P<1 || O_P>20 )
    {
        cout<<"INGRESE UN NUMERO DE 1-20"<<endl;
        system("pause");
    }
    switch(O_P)
        {
        case 1:
        system("cls");
      
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
                            pr+= pa[i];
                        }
                        cout<<pr<<endl;
                        if (pa==pr)
                        {
                            cout<<"Es una palabra palindroma "<<endl;
                            pr="";
                            
                        }else{
                            cout<<"No es una palabra palindroma "<<endl;
                            pr="";
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

            case 6:
            system("cls");
                cout<<"ingrese un numero"<<endl;
                cin>>x;
                cout<<"La conversion es: "<<endl;
                if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
                else
                
                {
                    if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
                else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
                else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
                else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
                else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
                else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
                else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
                else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
                else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
                else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
                    if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
                        if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
                        if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
                        if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
                        if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
                        if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
                        if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
                        if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
                        if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
                        if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
                        if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
                        if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
                        if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
                        if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
                        if(x>20) {cout<<"VEINTI"       ;x=x-20; }
                        if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
                    if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
                else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
                else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
                else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
                else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
                else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
                else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
                    if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
                    if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
                    if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
                        if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
                else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
                else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
                else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
                else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
                else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
                }
                    cout<<""<<endl;
                                    system("pause");
            break;
            case 7:
            system("cls");
                    
                    
                    cout << "Introduzca numero a transcribir: ";
                    cin >> valor;

                    miles = ((int)valor)/1000;
                    cientos = (((int)valor)%1000)/100;
                    unidades = ((int)valor)%100;
                    decimales = ((int) (valor*100.0))%100 ;

                    if (miles)
                    cout << numeros[miles] << " mil ";
                    
                    if (cientos)
                    cout << centenas[cientos] << " ";
                    
                    if (unidades) 
                   cout << numeros[unidades];
                    
                    if (decimales)
                    {
                    if(miles || cientos || unidades)
                    {
                    cout << " con ";
                    }
                    
                    cout << numeros[decimales] << " centimos.";
                    }

                    cout << endl;

                
                system("pause");


            break;
            
            case 8:
            system("cls");
            cout<<"INGRESE UN NUMERO:"<< endl;
            cin >>n1;
            for ( i = 0; i <=10; i++)
            {
                cout<<n1<<"*"<<i<<"="<<n1*i<< endl;
                
            }
        
             system("pause");
            break;

            case 9:
            system("cls");
            cout<<"TABLA DEL  "<< 1 <<endl;
            i=1;
            tabla=0;
             while(i<=10){ 
              
              tabla++;
             
             cout<<i<<"*"<<tabla<<"="<<i*tabla<< endl;
            
             if (tabla==10)
             {
                tabla=0;
                
                cout<<endl;
                i++;
                cout<<"TABLA DEL  "<< i <<endl;
                
                 
             }
             
            
             
             }
             
             
           system("pause");
           break;

           case 10:
           system("cls");
           cout<<"INGRESE PRIMER NUMERO:";
            cin>>a;
            cout<<"INGRESE SEGUNDO NUMERO:";
             cin>>i;
             b=i / 1000;
             b1=i%10;
             b2=(i/10)%10;
             b3=(i/10)/10;
             cout<<endl; 
             r5=b*a;
             cout<<r5<<endl;
             r1=b1*a;
               cout<<r1<<endl;
             r2=b2*a;
              cout<<r2<<endl;
             r3=b3*a;
            cout<<r3<<endl;
            cout<<"________"<<endl;
            r4=a*i;  
             cout<<r4<<endl;      

                
             
             
        system("pause");
           break;
            case 11:
            system("cls");

                cout<< "Teclea el valor en decimal a convertir:" << endl;
                cin >> decimal;

                for (int i = 0; i < 8; i++)
                {
                    binario[i] = decimal % 2;
                    decimal/= 2;
                }

                cout << "El numero en binario es:" << endl;

                for (int i = 7; i >= 0; i--)
                {
                    cout << binario[i];
                }

                cout << endl;
                system("PAUSE");
            break;

            case 12:
             system("cls");
             i=0;
              cout << "Introduce el numero decimal a convertir: " << endl;
                cin >> decimal;
                
                do
                {
                    residuo = decimal % 16;
                    resultado = decimal / 16;
                    digitoex[i] = residuo;
                    decimal = resultado;
                    i++;
                } while (resultado > 15);

                digitoex[i] = resultado;

                cout << "El equivalente en hexadecimal es: ";

                for (j = i; j >= 0; j--)
                {
                    if (digitoex[j] == 10)
                    {
                        cout << "A";
                    }
                    else if (digitoex[j] == 11)
                    {
                        cout << "B";
                    }
                    else if (digitoex[j] == 12)
                    {
                        cout << "C";
                    }
                    else if (digitoex[j] == 13)
                    {
                        cout << "D";
                    }
                    else if (digitoex[j] == 14)
                    {
                        cout << "E";
                    }
                    else if (digitoex[j] == 15)
                    {
                        cout << "F";
                    }
                    else
                    {
                        cout << digitoex[j];
                    }   
                }
                cout << endl;
                system("PAUSE");
            break;
             case 13:
             system("cls");
               cout<<" "<<endl;
                cout<<"*****ELIGA OPCION******"<<endl;
                cout<<"1.Cuadrado"<<endl;
                cout<<"2.Rectangulo"<<endl;
                cout<<"3.Triangulo"<<endl;
                cout<<"4.rombo"<<endl;
                cout<<"5.Salir"<<endl;
                cout<<"opc: "<<endl;
                cin >> opc;
                if(opc==1){
                    system("cls");
                    cout<<"Cuadrado"<<endl;
                    cout<<"Ingrese tamano de cuadrado: ";
                    cout << endl;
                    cin >> n1;
                    for(i=1; i<=n1; i++ ) {
                        for(j=1; j<=n1; j++ ) {
                        cout<<".";
                    }

                      cout<<endl;  
                    }   
                }
                 if(opc==2){
                    system("cls");
                    cout<<"Regtangulo"<<endl;
                    cout << endl;
                    cout<<"Ingrese alto de rectangulo: ";
                    cin >> n1;
                    cout<<"Ingrese ancho de rectangulo: ";
                    cin >> n2;
                    for(i=1; i<=n1; i++ ) {
                        for(j=1; j<=n2; j++) {
                        cout<<".";

                    }

                      cout<<endl;  
                    }

                    
                }
                if(opc==3){
                    system("cls");
                    cout<<"Triangulo"<<endl;
                    cout<<"Ingrese tamano de triangulo: ";
                    cout << endl;
                    cin >> n1;
                    for(i=0; i<n1; i++ ) {
                        for(j=0; j<n1-i; j++ ) {
                        cout<<" ";
                    }
                    for(j=0; j<i*2+1; j++ ) {
                        cout<<".";
                    }

                      cout<<endl;  
                    }
                    
                }
                if(opc==4){
                    system("cls");
                    cout<<"ROMBO"<<endl;
                    cout<<"Ingrese tamano de ROMBO : ";
                    cout << endl;
                    cin >> n1;
                    for(i=1; i<=n1; i++ ) {
                        for(j=i ; j<=n1-1; j++ ) {
                        cout<<" ";
                    }
                    for(j=1; j<=i*2-1; j++ ) {
                        cout<<".";
                    }

                      cout<<endl;  
                    }
                     for(i=n1-1; i>=1; i-- ) {
                        for(j=i; j<=n1-1; j++ ) {
                        cout<<" ";
                    }
                    for(j=1; j<=i*2-1; j++ ) {
                        cout<<".";
                    }

                      cout<<endl;  
                    }
                    
                }
                system("PAUSE");
             break;
               
                case 14:
              
               x=15; y=15;
             while (punto!='s')
                {
                    system("cls");
                     cout<<"(FLECHAS)"<<endl;
                      cout<<"arriba:    ^"<<endl;
                      cout<<"izq:der: <   > "<<endl;
                      cout<<"abajo:     v"<<endl;
                      cout<<"salir: s"<<endl;
                      
                      
                    gotoxy(x,y); cout<<".";
                    punto=getch();
                    switch (punto)
                    {
                    case up:
                        y++;
                        break;
                        case down:
                        y--;
                        break;
                        case left:
                        x--;
                        break;
                        case right:
                        x++;
                        break;
                    
                    default:
                        break;
                    }

    
                    }
                    system("pause");
                       
                break;

                case  15:
                system("cls");
                saldo=0;
                cout<<"BIENVENIDO                                                                 contrasEna:1234 "<<endl;
                cout<<" "<<endl;
                cout<<"INGRESE CONTRASENA"<<endl;
               cin >> contra;
               if(contra==1234){
                do
                {
                    system("cls");
                 cout<<" "<<endl;
                 cout<<"1.INGRESAR UNA CANTIDAD                                                      SU SALDO: Q"<<saldo<<endl;
                 cout<<" "<<endl;
                 cout<<"2.RETIRAR DINERO "<<endl;
                 cout<<" "<<endl;
                 cout<<"3.Salir"<<endl;
                cin >> a;
                switch (a)
                {
                case 1:
                cout<<" "<<endl;
                    cout<<"DIGITE UNA CANTIDAD DE DINERO"<<endl;
                     cin >> saldo_adicional;
                     saldo = saldo_adicional + saldo;
                    cout<<"CANTIDAD DE DINERO DE TU CUENTA: "<<saldo<<endl;
                    system("pause");

                    break;

                case 2:
                cout<<" "<<endl;
                   cout<<"DIGITE UNA CANTIDAD DE DINERO QUE DESEA RETIRAR"<<endl;
                   cin >> retirar;
                   if (retirar>saldo){
                    cout<<" "<<endl;
                    cout<<"NO TIENES ESA CANTIDAD DE DINERO"<<endl;
                   }
                   else {
                    saldo= saldo- retirar;
                    cout<<" "<<endl;
                    cout<<"SE HA RETIRADO DINERO : SU SALDO ES DE "<<saldo<<endl;
                   }
                    system("pause");
                    break;
                
                default:
                    break;
                }
                } while (a!=3);

               }else{
                 cout<<"INGRESE CONTRASENA CORRECTA"<<endl;
               }

              system("pause");
                break;

                case 16:
                system("cls");
                 cout<<"CALCULAR HIPOTENUSA"<<endl;
                 cout<<"INGRESA CATETO OPUESTO"<<endl;
                 cin >> n1;
                 cout<<"INGRESA CATETO ADYACENTE"<<endl;
                 cin >> n2;
                 x=(n1*n1)+(n2*n2);
                 y=sqrt(x);
                 cout<<"LA HIPOTENUSA ES :"<<y<<endl;
                 system("pause");

                break;

                case 17:
                system("cls");
                 cout<<"CALCULAR AREA E UN TRIANGULO"<<endl;
                 cout<<"INGRESA BASE"<<endl;
                 cin >> n1;
                 cout<<"INGRESA ALTURA"<<endl;
                 cin >> n2;
                 r=(n1*n2)/2;
                 cout<<"EL area es :"<<r<<endl;
                 system("pause");

                break;
                case 18:
                system("cls");
                cout<<"CALCULAR AREA DE UN RECTANGULO"<<endl;
                 cout<<"INGRESA BASE"<<endl;
                 cin >> n1;
                 cout<<"INGRESA ALTURA"<<endl;
                 cin >> n2;
                 r=(n1*n2);
                 cout<<"EL area es :"<<r<<endl;
                 system("pause");

                break;
                case 19:
                system("cls");
                cout<<"Calculo la ecuacion de una recta"; 
                cout<<"\nIngrese el valor de la pendiente: ";
                cin>>m; 
                cout<<"\nIngrese componente X de un punto que pertenesca a la recta: ";
                cin>>x; 
                cout<<"\nIngrese componente Y de un punto que pertenesca a la recta: ";
                cin>>y; 
                b=y-m*x; 
                cout<<"\nLa ecuacion de la recta es:"; 
                cout<<"\nY=mX+b , donde: ";
                 cout<<"m = "<<m<<" "; 
                 cout<<"b = "<<b<<" "<<endl;
                 cout<<"\nY = "<<m<<" X + "<<b<<endl;
                 system("pause");
                break;

                case 20:
                system("cls");
                cout<<"Introduce tu Peso (Kg):  ";

                cin>>peso;

                cout<<"Introduce tu Estatura  (Mts): ";

                cin>>estatura;

                imc=peso/(estatura*estatura);

                cout<<"Tu IMC es de :   "<<imc<<endl;
                system("pause");
                break;
          default:

          break;
        }
     
        
           }while(O_P<=20 ||O_P>=20 );
         
          
    getch();
}


