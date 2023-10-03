#pragma once
class Ram
{
	char mem[100 * 1024]; //100KB 메모리. 한 번지는 한 바이트이므로 char 타입 사용
	int size;
public:
	Ram();  //생성자 mem 배열을 0으로 초기화
	~Ram(); //소멸자 '메모리 제거되었습니다.' 출력
	char read(int address); //address에 저장된 값을 반환
	void write(int address, char value);  //address에 value 저장
};

