# pickupgame

>사용한 프레임워크 : 없음<br>
>사용한 언어 : C++ <br>
>사용한 DB : 없음 <br>
>사용한 Tool : Visual Studio 2019<br>
<br>

* 기능
  * 1회 뽑기 , 연속 뽑기 
  * 1 ~ 5 품급의 아이템중 랜덤으로 출현
  * 필요없는 아이템을 원하는 수량만큼 정리
  * 지금까지 얻은 아이템 확인
<br>

<b>제작한 목적</b> : 모바일 게임 등에서 볼 수 있는 뽑기를 최대한 구현해 보았습니다.

### 아이템 품급 확률 지정 코드 
```c
int pickup(int su1);
int pickup(int su1) {
	int su2;
	if (su1 <= 49 && su1 >= 1) {
		su2 = 1;
	}
	else if (su1 >= 50 && su1 <= 69) {
		su2 = 2;
	}
	else if (su1 >= 70 && su1 <= 84) {
		su2 = 3;
	}
	else if (su1 >= 85 && su1 <= 94) {
		su2 = 4;
	}
	else {
		su2 = 5;
	}
	return su2;
}
```

### 아이템 삭제 코드 
```c
int elimination(int array[],int gogosu1,int savesu2) {
	if (array[savesu2 - 1] < gogosu1) {
		return 0;
	}
	array[savesu2 - 1] = array[savesu2 - 1] - gogosu1;
	return array, gogosu1, savesu2;
}
```
### 게임 화면 
![가챠게임 캡처](https://user-images.githubusercontent.com/74585673/147436938-99509afb-66af-4f82-87ae-60bb10ebe5fe.PNG)

