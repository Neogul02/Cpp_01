#pragma once
class Ram
{
	char mem[100 * 1024]; //100KB �޸�. �� ������ �� ����Ʈ�̹Ƿ� char Ÿ�� ���
	int size;
public:
	Ram();  //������ mem �迭�� 0���� �ʱ�ȭ
	~Ram(); //�Ҹ��� '�޸� ���ŵǾ����ϴ�.' ���
	char read(int address); //address�� ����� ���� ��ȯ
	void write(int address, char value);  //address�� value ����
};

