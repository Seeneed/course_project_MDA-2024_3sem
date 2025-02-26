#pragma once
#include <iostream>

#define MAXSIZE_ID	16						//���� ����� �������� ��������������
#define SCOPED_ID_MAXSIZE   MAXSIZE_ID*2	//���� ����� �������� ������������� + ������� ���������
#define MAXSIZE_TI		4096				//���� ����� ���������� ����� � ������� ���������������
#define INT_DEFAULT	0x00000000				//�������� �� ��������� ��� digit
#define STR_DEFAULT	0x00					//�������� �� ��������� ��� sting
#define NULLIDX_TI		0xffffffff			//��� �������� ������� ���������������
#define STR_MAXSIZE	255						//������������ ����� ���������� ��������
#define CHAR_MAXSIZE 1						//������������ ����� ����������� ��������
#define INT_MAXSIZE   2147483647			//������������ �������� ��� �������������� ����
#define INT_MINSIZE   -2147483647			//����������� �������� ��� �������������� ����
#define MAX_PARAMS_COUNT 3					//������������ ���������� ���������� � �������
#define CONCAT_PARAMS_CNT 2					//���-�� ���������� � ������� concat
#define POW_PARAMS_CNT 2					//���-�� ���������� � ������� pow
#define RANDOM_PARAMS_CNT 2					//���-�� ���������� � ������� random
#define LENGHT_PARAMS_CNT 1					//���-�� ���������� � ������� lenght
#define ATOII_PARAMS_CNT 1					//���-�� ���������� � ������� atoii
#define COMPARE_PARAMS_CNT 2				//���-�� ���������� � ������� compare
#define COPY_PARAMS_CNT 1					//���-�� ���������� � ������� copystr
#define CONCAT_TYPE IT::IDDATATYPE::STR
#define COMPARE_TYPE IT::IDDATATYPE::INT
#define LENGHT_TYPE IT::IDDATATYPE::INT
#define POW_TYPE IT::IDDATATYPE::INT
#define RANDOM_TYPE IT::IDDATATYPE::INT
#define ATOII_TYPE IT::IDDATATYPE::INT
#define COPY_TYPE IT::IDDATATYPE::STR


namespace IT
{
	enum IDDATATYPE { INT = 1, STR = 2, PROC = 3, CHAR = 4, UNDEF };//���� ������ ���������������: ��������, ���������, ��� ����(��� ��������), ��������������
	enum IDTYPE { V = 1, F = 2, P = 3, L = 4, S = 5 };	//���� ���������������: ����������, �������, ��������, �������, ����������� �������
	enum STDFNC { F_POW, F_COMPARE, F_RANDOM, F_CONCAT, F_LENGHT, F_ATOII, F_COPY, F_NOT_STD };	//����������� �������
	static const IDDATATYPE CONCAT_PARAMS[] = { IT::IDDATATYPE::STR, IT::IDDATATYPE::STR };//��������� �������  concatstr
	static const IDDATATYPE LENGHT_PARAMS[] = { IT::IDDATATYPE::STR };//��������� ������� strlen
	static const IDDATATYPE ATOII_PARAMS[] = { IT::IDDATATYPE::STR };//��������� �-��� atoi
	static const IDDATATYPE POW_PARAMS[] = { IT::IDDATATYPE::INT, IT::IDDATATYPE::INT };//��������� �-��� atoi
	static const IDDATATYPE RANDOM_PARAMS[] = { IT::IDDATATYPE::INT, IT::IDDATATYPE::INT };//��������� �-��� atoi
	static const IDDATATYPE COMPARE_PARAMS[] = { IT::IDDATATYPE::STR, IT::IDDATATYPE::STR };//��������� �-��� atoi
	static const IDDATATYPE COPY_PARAMS[] = { IT::IDDATATYPE::STR}; //��������� ������� copystr
	struct Entry
	{
		union
		{
			int	vint;            			//�������� integer
			struct
			{
				int len;					//���������� ��������
				char str[STR_MAXSIZE - 1];//�������
			} vstr;							//�������� ������
			struct
			{
				int count;					// ���������� ���������� �������
				IDDATATYPE* types;			//���� ���������� �������
			} params;
		} value;						//�������� ��������������
		int			idxfirstLE;				//������ � ������� ������		
		char		id[SCOPED_ID_MAXSIZE];	//�������������
		IDDATATYPE	iddatatype;				//��� ������
		IDTYPE		idtype;					//��� ��������������

		Entry()							//����������� ��� ����������
		{
			this->value.vint = INT_DEFAULT;
			this->value.vstr.len = NULL;
			this->value.params.count = NULL;
		};
		Entry(char* id, int idxLT, IDDATATYPE datatype, IDTYPE idtype) //����������� � �����������
		{
			strncpy_s(this->id, id, SCOPED_ID_MAXSIZE - 1);
			this->idxfirstLE = idxLT;
			this->iddatatype = datatype;
			this->idtype = idtype;
		};
	};
	struct IdTable		//��������� ������� ���������������
	{
		int maxsize;	//������� ������� ��������������� < TI_MAXSIZE
		int size;		//������� ������ ������� ��������������� < maxsize
		Entry* table;	//������ ����� ������� ���������������
	};
	IdTable Create(int size = NULL);	//������� ������� ��������������� < TI_MAXSIZE
	void Add(					//�������� ������ � ������� ���������������
		IdTable& idtable,		//��������� ������� ���������������
		Entry entry);			//������ ������� ��������������� 
	int isId(					//�������: ����� ������(���� ����), TI_NULLIDX(���� ����)
		IdTable& idtable,		//��������� ������� ���������������
		char id[SCOPED_ID_MAXSIZE]);	//�������������
	bool SetValue(IT::Entry* entry, char* value);	//������ �������� ��������������
	bool SetValue(IT::IdTable& idtable, int index, char* value);
	void writeIdTable(std::ostream* stream, IT::IdTable& idtable); //������� ������� ���������������
};
