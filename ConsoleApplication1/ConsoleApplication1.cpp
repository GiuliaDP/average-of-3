// ConsoleApplication1.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include  <iostream>
using namespace std;

int main() {
	//prompt to get 3 user's numbers

	cout << "Please enter number 1: ";
	float num1;
	cin >> num1;

	cout << "Please enter number 2: ";
	float num2;
	cin >> num2;

	cout << "Please enter number 3: ";
	float num3;
	cin >> num3;

	//calculate sum
	float sum = num1 + num2 + num3;

	//get the average
	float average = sum / 3;

	//print average
	cout << "Your average is  " << average;
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
