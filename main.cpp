#include <iostream>
#include "tCircuito.cpp"
using namespace std;

int main()
{

tCircuito dados;

cout << "Digite a primerira resitencia:" << endl;
cin >> dados.R1;

cout << "Digite a segunda resitencia:" << endl;
cin >> dados.R2;

cout << "Digite a tensão da fonte:" << endl;
cin >> dados.V1;

int a=0;
float resistenciaEquivalente;
cout << "As resistencias estão em serie ou em paralelo? " << endl;
cout << "Digite 1 para paralelo ou 2 para serie. " << endl;
cin >> a;
if (a==2)
{
  cout <<  "A resistencia equivalente em serie é: " << ResistenciaEmSerie(dados.R1,dados.R2) << endl;
  resistenciaEquivalente=ResistenciaEmSerie(dados.R1,dados.R2);
}
if(a==1)
{
  cout <<  "A resistencia equivalente em Paralelo é: " << ResistenciaEmParalelo(dados.R1, dados.R2) << endl;
  resistenciaEquivalente=ResistenciaEmParalelo(dados.R1, dados.R2);
}
else
{
  cout << "Favor definir um numero valido para as resistencias: " << endl;
}

cout <<  "A corrente total do circuito é " << CorrenteTotalCircuito(resistenciaEquivalente, dados.V1) << endl;
float CorrenteTotal=0;
CorrenteTotal=CorrenteTotalCircuito(resistenciaEquivalente, dados.V1);

cout <<  "A resistencia equivalente em Paralelo é: " << PotenciaAssociadaFonte(dados.V1, CorrenteTotal) << endl;





}