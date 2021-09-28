#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;
// Declaração ou Resumo das Sub Rotinas
double ler_a ( ) ;
double ler_b ( ) ;
double ler_c ( ) ;
double cal_s ( double a, double b, double c) ;
double cal_ah ( double a, double b, double c, double s);
void exibir ( double a, double b, double c, double s, double ah );


int main () 
{
setlocale(LC_ALL, "Portuguese");
double a, b, c, s, ah;     
int tecla;

MENU:  /* marca um ponto no código para retornar aqui depois */
cout << "\nMenu\n1 Ler\n2 Calcular\n3 Exibir\n4 Sair:";      cin >> tecla;
switch(tecla) 

    {   
        case 1:  a = ler_a ( );    b = ler_b ( );     c = ler_c ( ); 

        system ("pause");   
        exit ( 0 );   
        break;

            case 2:  s = cal_s (a, b, c );    ah = cal_ah (a, b, c, s);  

        system ("pause");   
        exit ( 0 );   
        break;

            case 3:  void exibir ( double a, double b, double c, double delta )

        system ("pause");   
        exit ( 0 );   
        break;
                                    

            case 4:    cout << "\nO programa será finalizado!";   

        system ("pause");   
        exit ( 0 );   
        break;
    }
    
    
    
    goto MENU;   /* executa novamente a partir do ponto marcado */
    return 0; 
}

// CODIFICAÇÃO DAS VOID E FUNCTIONS
double ler_a ( ) { double va;   cout << "Valor de A:";cin >> va;    return va; }
double ler_b ( ) { double vb;   cout << "Valor de B:";cin >> vb;    return vb; }
double ler_c ( ) { double vc;   cout << "Valor de C:";cin >> vc;    return vc; }
double cal_s ( double a, double b, double c) {double s = (a+b+c)/2; return s; }
double cal_ah ( double a, double b, double c, double s) {double ah = sqrt(s*(s-a)*(s-b)*(s-c)); return ah; }
void exibir (double a, double b, double c, double s, double ah)
{
       cout <<"\nO valor A é: " << a;
                cout <<"\nO valor B é: " << b;
                    cout <<"\nO valor C é: " << c;
                        cout <<"\nO valor S é: " << s;
                            cout <<"\nO valor AH é: " << ah;
system("pause"); 

}
