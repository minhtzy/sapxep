#include <iostream>
#include "MainScene.h"
using namespace std;
void main()
{
	cin.clear();
	MainScene* mainScene = new MainScene();
	mainScene->doShow();
	delete mainScene;
	/*int n;
	int chucnangmenu;
	bool flagmenu = true;
	bool flagmenucon;
	int chucnangmenucon;
	bool flagchucnangmenucon2;
	int chucnangmenucon2;
	bool flagchucnangmenucon3;
	int chucnangmenucon3;
	do
	{
		cout << "1. Nhap so phan tu" << endl;
		cout << "2. Thoat" << endl;
		cin >> chucnangmenu;
		switch (chucnangmenu)
		{
		case 1:
				cout << "nhap so phan tu" << endl;
				cin >> n;
				cout << "chon sap xep" << endl;
				flagmenucon = true;
				do {
					cout << "1. Sap xep tang dan" << endl;
					cout << "2. Sap xep giam dan" << endl;
					cin >> chucnangmenucon;
					switch (chucnangmenucon) {
					case 1:
						cout << "Chon thuan toan" << endl;
						flagchucnangmenucon2 = true;
						do {
							cout << "1. Thuat toan Quick Sort" << endl;
							cout << "2. Thuat toan Selection Sort" << endl;
							cout << "3. Thuat toan Bubble Sort" << endl;
							cout << "4. Quay lai " << endl;
							cin >> chucnangmenucon2;
							switch (chucnangmenucon2) {
							case 1:
								cout << " Thuat toan Quick Sort" << endl;
								
								break;
							case 2:
								cout << "Thuat toan Selection Sort" << endl;
								break;
							case 3:
								cout << "Thuat toan Bubble Sort" << endl;
								break;
							case 4:
								switch (chucnangmenucon2)
								{
								default:
									break;
								}
								break;
							}
							{
							default:
								break;
							}
						} while (chucnangmenucon2);
						break;
					case 2:
						cout << "Chon thuan toan" << endl;
						flagchucnangmenucon3 = true;
						do {
							cout << "1. Thuat toan Quick Sort" << endl;
							cout << "2. Thuat toan Selection Sort" << endl;
							cout << "3. Thuat toan Bubble Sort" << endl;
							cout << "4. Quay lai " << endl;
							cin >> chucnangmenucon3;
							switch (chucnangmenucon3) {
							case 1:
								cout << " Thuat toan Quick Sort" << endl;
								break;
							case 2:
								cout << "Thuat toan Selection Sort" << endl;
								break;
							case 3:
								cout << "Thuat toan Bubble Sort" << endl;
								break;
							case 4:
								switch (chucnangmenucon3)
									break;
							}

						} while (chucnangmenucon3);
						break;
					}
				} while (chucnangmenucon);
				break;
				break;
		case 2:
				
		default:
			flagmenu = false;
			break;
		}
	} while (flagmenu);*/
	cout << "Ket thuc chuong trinh" << endl;
}