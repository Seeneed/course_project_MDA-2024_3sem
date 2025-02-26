#include "Error.h"

namespace Error
{
	ERROR errors[ERROR_MAX_ENTRY] =
	{
		ERROR_ENTRY(0, "��������� ������: ������������ ��� ������"),
		ERROR_ENTRY(1, "��������� ������: ��������� ����"),
		ERROR_ENTRY_NODEF(2), ERROR_ENTRY_NODEF(3), ERROR_ENTRY_NODEF(4), ERROR_ENTRY_NODEF(5),
		ERROR_ENTRY_NODEF(6), ERROR_ENTRY_NODEF(7), ERROR_ENTRY_NODEF(8), ERROR_ENTRY_NODEF(9),
		ERROR_ENTRY_NODEF10(10), ERROR_ENTRY_NODEF10(20), ERROR_ENTRY_NODEF10(30), ERROR_ENTRY_NODEF10(40),
		ERROR_ENTRY_NODEF10(50), ERROR_ENTRY_NODEF10(60), ERROR_ENTRY_NODEF10(70), ERROR_ENTRY_NODEF10(80), ERROR_ENTRY_NODEF10(90),
		ERROR_ENTRY(100, "��������� ������: �������� -in ������ ���� �����"),
		ERROR_ENTRY(101, "��������� ������: ��������� ����� �������� ���������"),
		ERROR_ENTRY(102, "��������� ������: ������ ��� �������� ����� � �������� �����(-in)"),
		ERROR_ENTRY(103, "��������� ������: ������ ��� �������� ����� ���������(-log)"),
		ERROR_ENTRY_NODEF(104), ERROR_ENTRY_NODEF(105), ERROR_ENTRY_NODEF(106), ERROR_ENTRY_NODEF(107), ERROR_ENTRY_NODEF(108), ERROR_ENTRY_NODEF(109),
		ERROR_ENTRY_NODEF10(110), ERROR_ENTRY_NODEF10(120), ERROR_ENTRY_NODEF10(130), ERROR_ENTRY_NODEF10(140),
		ERROR_ENTRY_NODEF10(150), ERROR_ENTRY_NODEF10(160), ERROR_ENTRY_NODEF10(170), ERROR_ENTRY_NODEF10(180), ERROR_ENTRY_NODEF10(190),
		ERROR_ENTRY(200, "����������� ������: ������������ ������ � �������� �����(-in)"),
		ERROR_ENTRY(201, "����������� ������: ����������� ������������������ ��������"),
		ERROR_ENTRY(202, "����������� ������: �������� ������ ������� ������"),
		ERROR_ENTRY(203, "����������� ������: �������� ������ ������� ���������������"),
		ERROR_ENTRY(204, "����������� ������: ��������� ����� �������� ��������������"), 
		ERROR_ENTRY_NODEF(205), ERROR_ENTRY_NODEF(206), ERROR_ENTRY_NODEF(207), ERROR_ENTRY_NODEF(208), ERROR_ENTRY_NODEF(209),
		ERROR_ENTRY_NODEF10(210), ERROR_ENTRY_NODEF10(220), ERROR_ENTRY_NODEF10(230), ERROR_ENTRY_NODEF10(240),
		ERROR_ENTRY_NODEF10(250), ERROR_ENTRY_NODEF10(260), ERROR_ENTRY_NODEF10(270), ERROR_ENTRY_NODEF10(280), ERROR_ENTRY_NODEF10(290),
		ERROR_ENTRY(300, "������������� ������: ������������� �������������"),
		ERROR_ENTRY(301, "������������� ������: ����������� ����� ����� main"),
		ERROR_ENTRY(302, "������������� ������: ���������� ��������� ����� ����� main"),
		ERROR_ENTRY(303, "������������� ������: � ���������� �� ������ ��� ��������������"),
		ERROR_ENTRY(304, "������������� ������: � ���������� ����������� �������� �����"),
		ERROR_ENTRY(305, "������������� ������: ������� ��������������� ��������������"),
		ERROR_ENTRY(306, "������������� ������: ��������� ������������ ���������� ���������� �������"),
		ERROR_ENTRY(307, "������������� ������: ������� ����� ���������� � ������"),
		ERROR_ENTRY(308, "������������� ������: ���-�� ��������� �������� � ������������ ���������� �� ���������"),
		ERROR_ENTRY(309, "������������� ������: ������������ ����� ������������ ����������"),
		ERROR_ENTRY(310, "������������� ������: ������������� ������� ����������/����������� �������� �����������"),
		ERROR_ENTRY(311, "������������� ������: ��������� ������ \'\"\'. ��������, �� ������ ���������/���������� �������"),
		ERROR_ENTRY(312, "������������� ������: �������� ������ ���������� ��������"),
		ERROR_ENTRY(313, "������������� ������: ������������ ������������� �������"),
		ERROR_ENTRY(314, "������������� ������: ���� ������ � ��������� �� ���������"),
		ERROR_ENTRY(315, "������������� ������: ��� ������� � ������������� �������� �� ���������"),
		ERROR_ENTRY(316, "������������� ������: ������������ ��������� ��������� ������ �� ����� \'=\'"),
		ERROR_ENTRY(317, "������������� ������: �������� �������� ���������"),
		ERROR_ENTRY(318, "������������� ������: ������� �� ����"),
		ERROR_ENTRY(319, "������������� ������: �������� ������ ����������� ��������"),
		ERROR_ENTRY_NODEF10(320),ERROR_ENTRY_NODEF10(330),ERROR_ENTRY_NODEF10(340),ERROR_ENTRY_NODEF10(350),
		ERROR_ENTRY_NODEF10(360),ERROR_ENTRY_NODEF10(370),ERROR_ENTRY_NODEF10(380),ERROR_ENTRY_NODEF10(390),
		ERROR_ENTRY_NODEF100(400), ERROR_ENTRY_NODEF100(500),
		ERROR_ENTRY(600, "�������������� ������: �������� ��������� ���������"),
		ERROR_ENTRY(601, "�������������� ������: �� ������ ������ ���������� �������"),
		ERROR_ENTRY(602, "�������������� ������: ������ � ���� �������"),
		ERROR_ENTRY(603, "�������������� ������: ������ � ���� ���������"),
		ERROR_ENTRY(604, "�������������� ������: ������ � ������ ���������� �������"),
		ERROR_ENTRY(605, "�������������� ������: ������ � ������ �������/���������"),
		ERROR_ENTRY(606, "�������������� ������: ������ � ������ ����������� ���������� �������"),
		ERROR_ENTRY(607, "�������������� ������: ������ ��� ��������������� �����/��������� ���������"),
		ERROR_ENTRY(608, "�������������� ������: ������ � ���� �����/��������� ���������"),
		ERROR_ENTRY(609, "�������������� ������: ������ � ������� �����/��������� ���������"),
		ERROR_ENTRY(610, "�������������� ������: �������� �������� ��������"),
		ERROR_ENTRY(611, "�������������� ������: �������� �������������� ��������"),
		ERROR_ENTRY(612, "�������������� ������: �������� ���������. ��������� ������ ��������������/��������"),
		ERROR_ENTRY(613, "�������������� ������: ������ � �������������� ���������"),
		ERROR_ENTRY(614, "�������������� ������: ������������ �������������� �����������"),
		ERROR_ENTRY(615, "�������������� ������: ������������ �������������� ����������� � ���� �����/��������� ���������"),
		ERROR_ENTRY_NODEF(616), ERROR_ENTRY_NODEF(617),ERROR_ENTRY_NODEF(618), ERROR_ENTRY_NODEF(619),
		ERROR_ENTRY_NODEF10(620), ERROR_ENTRY_NODEF10(630), ERROR_ENTRY_NODEF10(640), ERROR_ENTRY_NODEF10(650),
		ERROR_ENTRY_NODEF10(660), ERROR_ENTRY_NODEF10(670), ERROR_ENTRY_NODEF10(680), ERROR_ENTRY_NODEF10(690),
		ERROR_ENTRY_NODEF100(700), ERROR_ENTRY_NODEF100(800), ERROR_ENTRY_NODEF100(900)
	};

	ERROR GetError(int id)
	{
		if (id < 0 || id > ERROR_MAX_ENTRY)
			return errors[0];
		else
			return errors[id];
	}

	ERROR GetError(int id, int line, int col)
	{
		ERROR err = GetError(id);
		err.position.col = col;
		err.position.line = line;
		return err;
	}
}