#include <iostream>
#define MAX 3
using namespace std;

struct Stack {
	int top;
	string nama[MAX], posisi[MAX];
} Tumpukan;

void init() {
	Tumpukan.top = -1;
}

bool isEmpty() {
	return Tumpukan.top == -1;
}

bool isFull() {
	return Tumpukan.top == MAX - 1;
}

void push() {
	if (isFull()) {
		cout << "\nTumpukan penuh" << endl;
	} else {
		Tumpukan.top++;
		cout << "\nNama Masuk = ";
		cin >> Tumpukan.nama[Tumpukan.top];
		cout << "nama " << Tumpukan.nama[Tumpukan.top] << " masuk ke stack"<< endl;
		cout << "\nMasukkan posisi = ";
		cin >> Tumpukan.posisi[Tumpukan.top];
		cout << "posisi " << Tumpukan.posisi[Tumpukan.top] << " masuk ke stack"<< endl;
	}
}

void pop() {
	if (isEmpty()) {
		cout << "\nData kosong\n" << endl;
	} else {
		cout << "\nData Nama " << Tumpukan.nama[Tumpukan.top] <<"dan Posisinya " << Tumpukan.posisi[Tumpukan.top]<<" sudah terambil"<< endl;
		Tumpukan.top--;
	}
}

void printStack() {
	if (isEmpty()) {
        cout << "===============";
		cout << "Tumpukan Kosong";
		cout << "===============";
	} else {
		cout << "\nTumpukan : "<<endl;
		for (int i = Tumpukan.top; i >= 0; i--){
            cout <<"data ke-"<<i+1<<endl;
			cout <<"nama  : "<< Tumpukan.nama[i]<<endl;
			cout <<"posisi: "<< Tumpukan.posisi[i]<<endl;
		}

	}
}

int main() {
	int pilihan, data;
	init();
	do {
		printStack();
		cout << "\n1. PUSH\n"
			 << "2. POP\n"
			 << "3. EXIT\n"
			 << "......................\n"
			 << "Masukkan Pilihan [1-3]: ";
		cin >> pilihan;
		switch (pilihan) {
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
			cout << "Tidak Tersedia Pilihan" << endl;
			break;
		}
	} while (pilihan != 3);
}
