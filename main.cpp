#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include "graphic.h"
#include "check.h"

int main()

{	char go[20]; //����1
	int result1; //������ ���
	int result2; //������ ���
	int result3; //������ ���
	int item[5] = { 0, }; //ǰ�� ������ �����
	int ticket = 10; //�̱�� �⺻����
	int gogo;//����2
	int save1;//����3

	srand((unsigned)time(NULL));

	while (1){
		print1();
		printmenu(ticket);
		scanf_s("%s", &go, 20);
		gogo = atoi(go);
		if (gogo <= 0 || gogo > 5){
			continue;
		}
		else if (gogo == 1 || gogo == 2){
			if (ticket <= 0 || ticket <= 2){
				continue;
			}
		}
		system("cls");
		switch (gogo){
			case 1:{
				while (1){
					ticket = ticket - 1;
					result1 = pickup(result1 = (rand() % 100) + 1);
					save(item,result1);

					while (1){
						print2(result1, ticket);
						scanf_s("%s", &go, 20);
						gogo = atoi(go);
						if (gogo == 1){
							if (ticket <= 0){
								break;
							}
						}
						else if (gogo <= 0 || gogo > 2){
							continue;
						}
						break;
					}//�̱����� ����
					if (gogo == 2 || ticket <= 0){
						break;
					}
					else if (gogo == 1 && ticket >= 1){
						continue;
					}
				}//�Ϲ� �̱�
				break;
			}//�Ϲ� �̱�
		case 2:{
			if (gogo == 1 && ticket >= 3) {
				break;
			}
			while (1){
				ticket = ticket - 3;
				result1 = pickup(result1 = (rand() % 100));
				save(item, result1);
				result2 = pickup(result2 = (rand() % 100));
				save(item, result2);
				result3 = pickup(result3 = (rand() % 100));
				save(item, result3);
				system("cls");

				while (1){
					print4(result1, result2, result3, ticket);
					scanf_s("%s", &go, 20);
					gogo = atoi(go);
					if (gogo <= 0 || gogo > 2){
						continue;
					}
					break;
				}//���ӻ̱� ����	
				if (gogo == 2){
					break;
				}
				else if (gogo == 1 && ticket <= 1){
					break;
				}
				else if (gogo == 1 && ticket >= 3) {
					continue;
				}
			}
			break;
		}//���� �̱�
		case 3:{
			ticket = 10;
			continue;
		}//�̱�� ����
		case 4:{
			while (1){
				print3(item);
				scanf_s("%s", &go, 20);
				gogo = atoi(go);
				if (gogo <= 0 || gogo > 2){
					continue;
				}
				else if (gogo == 1){
					while (1) {
						print5(item);
						scanf_s("%s", &go, 20);
						gogo = atoi(go);
						if (gogo > 5 || gogo < 0) {
							continue;
						}
						else if (gogo == 0) {
							break;
						}
						else if (item[gogo - 1] == 0) {
							continue;
						}
						save1 = gogo;
						while (1) {
							print6(item, save1);
							scanf_s("%s", &go, 20);
							gogo = atoi(go);
							if (0 == elimination(item,gogo,save1)) {
								continue;
							}
							break;
						}
					}//â������
					continue;
				}//â������
				break;
			}//â�������� ���
			continue;
		}//������ Ȯ��
		case 5:{
			return 0;
		}//���� ����
		}//�̱���
	}//�̱⼱��
	return 0;
}
