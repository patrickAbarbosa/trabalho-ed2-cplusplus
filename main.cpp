/*
 * Data Struct II
 * 
 * Local: Federal University of Juiz de Fora
 * Authors: Igor Phelype, Mirian Queiroz, Patrick Barbosa and Pedro Reis
 * Course: Science Computer
 * 
 * Licence: GNU
 */

#include <iostream>
#include "src/Header/utils.h"
#include "src/Header/ReadFile.h"
#include "src/Header/Rating.h"
#include "src/Header/Data.h"
#include "src/Header/QuickSort.h"
#include "src/Header/Heapsort.h"
#include "src/Header/CenarioUm.h"

using namespace std;

void involuntario()
{
  cout << "Rodar todos cenarios. Ps: nao implementado." <<endl;
}

void cenario1(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 1" << endl;
  int *vet = read->readUserId(size);

  cout << "Tempo de leitura de user ID: " << endl;

  delete [] vet;
}

void cenario2(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 2" << endl;
  int *vet = read->readUserId(size);
  int v[5] = {5, 2, 3, 4, 1};
  QuickSort qs = QuickSort();

  qs.sort(v, 0, 4);

  for(int i = 0; i < 5; i++){
    cout << " " << v[i];
  }

  cout << "Tempo de leitura de user ID: " << endl;

  delete [] vet;
}

void cenario3(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 3" << endl;
  int *vet = read->readUserId(size);

  cout << "Tempo de leitura de user ID: " << endl;

  cout << "Vetor com user ID: ";
  for(int i = 0; i < size; i++)
    cout << vet[i] << ", ";
  cout << endl;
  
  heapSort(vet, size);
  
  cout << "Sort: ";
  for(int i = 0; i < size; i++)
    cout << vet[i] << ", ";
  cout << endl;
  delete [] vet;
}
void menuSelecionado(char c)
{
  switch (c)
  {
  case '0':
    
    break;
  
  default:
    break;
  }
}

void menu()
{
	char menu;
	while(1)
	{
		cout << "#-- \t MENU \t--#" << endl;
		cout << "[0] - Passar por todos cenarios automaticamente." << endl;
		cout << "[1] - Processar cenario 1" << endl;
		cout << "[2] - Processar cenario 2" << endl;
		cout << "[3] - Processar cenario 3" << endl;
		cout << "[4] - Processar cenario 4" << endl;
		cout << "[5] - Processar parte 2"   << endl;
		cout << "[6] - Gerar relatorio"     << endl;
		cout << "[q] - Sair"                << endl;
		cin >> menu;

		do
		{
			cout << "Digite uma opcao do menu: ";
			cin >> menu;
		} while ((menu < '0' || menu > '9') && menu != 'q');

		if (menu == 'q')
		{
			cout << "Saindo..." << endl;
			cout << "Bye" << endl;
			return;
		}
	}
}

int main(int argc, char *argv[])
{
  cout << "Estrutura de dados II - parte 1" << endl;
  
  QuickSort qs = QuickSort();

  int v[5] = {5, 3, 4, 2, 1};

  qs.sort(v, 0, 4);

  for(int i = 0; i < 5; i++){
    cout << " " << v[i];
  }

  // Cenário 1 sendo executado
  // int vetorN[6] = {1000,5000, 10000,50000,100000,500000};
  // CenarioUm::exec(new Data(), new ReadFile("ratings.csv"), vetorN);

  /*Data *db;
  db = new Data();
  ReadFile a("ratings.csv");
  
  return 0;
  cenario3(db, &a, 550);
  
  Rating *b = a.readUMRT(10);
  
  int *vet = a.readUserId(80);
  cout<<"oi"<<endl;
  heapSort(vet, 80);
  cout<<"oi2"<<endl;
  return 0;
  for(int i = 0; i< 10; i++)
    b[i].print();
  return 0;
  switch (argc)
  {
  case 1:
    
    break;
  case 2:
    cout << "arquivo de saida" << endl;
    break;
  default:
    break;
  }*/
}