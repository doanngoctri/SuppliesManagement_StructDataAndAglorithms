#pragma once
#include"DocGhiFile.h"
#include <conio.h>
#include <ctime>
#include <math.h>
using namespace std;
#pragma warning(disable : 4996)

/* ============================== VE KHUNG ================================*/

void VeKhungCH(int x, int y, int width, int height, bool draw, WORD c)
{
	if (draw) {

		gotoXY(x, y);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x + width, y);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x, y + height);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x + width, y + height);
		SetBGColor(c);
		cout << "  ";

		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y + height);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x, i);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x + width, i);
			SetBGColor(c);
			cout << "  ";
		}
	}
	else {

		gotoXY(x, y);
		cout << " ";
		gotoXY(x + width, y);
		cout << " ";
		gotoXY(x, y + height);
		cout << " ";
		gotoXY(x + width, y + height);
		cout << " ";
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y);
			cout << " ";
		}
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y + height);
			cout << " ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x, i);
			cout << " ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x + width, i);
			cout << " ";
		}
	}
}

void XoaKhungThaoTac()
{
	gotoXY(116, 14);
	for (int i = 14; i < 35; i++)
	{
		for (int j = 1; j < 55; j++)
			cout << " ";
		gotoXY(116, i);
	}

}

void VeKhungLapHoaDon()
{
	VeKhungCH(0, 8, 125, 25, true, BLUE);

	for (int i = 0; i < 170; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}

	TextColor(25);
	//6 thanh doc
	for (int i = 9; i < 33; i++)
	{
		gotoXY(7, i);
		cout << " ";
	}
	// ma 6 ky tu
	for (int i = 9; i < 33; i++)
	{
		gotoXY(20, i);
		cout << " ";
	}
	// ten sach
	for (int i = 9; i < 33; i++)
	{
		gotoXY(58, i);
		cout << " ";
	}
	//ten TG
	for (int i = 9; i < 33; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}
	// The loai
	for (int i = 9; i < 33; i++)
	{
		gotoXY(76, i);
		cout << " ";
	}
	//so trang
	for (int i = 9; i < 33; i++)
	{
		gotoXY(100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(3, 9);
	cout << "STT";
	gotoXY(10, 9);
	cout << "MA VAT TU";
	gotoXY(35, 9);
	cout << "TEN VAT TU";
	gotoXY(60, 9);
	cout << "SO LUONG";
	gotoXY(72, 9);
	cout << "VAT";
	gotoXY(85, 9);
	cout << "DON GIA";
	gotoXY(105, 9);
	cout << "TRI GIA HOA DON";
}

void VeKhung_Xuat_LapHoaDon()
{
	int qua = 20;
	VeKhungCH(0 + qua, 8, 125, 25, true, BLUE);

	for (int i = qua; i < 147; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}

	TextColor(25);
	//6 thanh doc
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 7, i);
		cout << " ";
	}
	// ma 6 ky tu
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 20, i);
		cout << " ";
	}
	// ten sach
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 58, i);
		cout << " ";
	}
	//ten TG
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 70, i);
		cout << " ";
	}
	// The loai
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 76, i);
		cout << " ";
	}
	//so trang
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(qua + 3, 9);
	cout << "STT";
	gotoXY(qua + 10, 9);
	cout << "MA VAT TU";
	gotoXY(qua + 35, 9);
	cout << "TEN VAT TU";
	gotoXY(qua + 60, 9);
	cout << "SO LUONG";
	gotoXY(qua + 72, 9);
	cout << "VAT";
	gotoXY(qua + 90, 9);
	cout << "GIA";
	gotoXY(qua + 105, 9);
	cout << "TRI GIA HOA DON";
}

void VeKhung_Xuat_LapHoaDon_TrangThai()
{
	int qua = 10;
	VeKhungCH(0 + qua, 8, 125 + qua + qua, 25, true, BLUE);

	for (int i = qua; i < 147 + qua; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}

	TextColor(25);
	//6 thanh doc
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 7, i);
		cout << " ";
	}
	// ma 6 ky tu
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 20, i);
		cout << " ";
	}
	// ten sach
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 58, i);
		cout << " ";
	}
	//ten TG
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 70, i);
		cout << " ";
	}
	// The loai
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 76, i);
		cout << " ";
	}
	//so trang
	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 100, i);
		cout << " ";
	}

	for (int i = 9; i < 33; i++)
	{
		gotoXY(qua + 125, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(qua + 3, 9);
	cout << "STT";
	gotoXY(qua + 10, 9);
	cout << "MA VAT TU";
	gotoXY(qua + 35, 9);
	cout << "TEN VAT TU";
	gotoXY(qua + 60, 9);
	cout << "SO LUONG";
	gotoXY(qua + 72, 9);
	cout << "VAT";
	gotoXY(qua + 85, 9);
	cout << "DON GIA";
	gotoXY(qua + 105, 9);
	cout << "TRI GIA HOA DON";
	gotoXY(qua + 130, 9);
	cout << "TRANG THAI";
}

void Ve_Khung_Tao_Hoa_Don()
{
	// ve doc 6 cot
	for (int i = 6; i < 28; i++)
	{
		gotoXY(26, i);
		cout << char(179);
	}
	for (int i = 6; i < 28; i++)
	{
		gotoXY(42, i);
		cout << char(179);
	}

	for (int i = 6; i < 28; i++)
	{
		gotoXY(70, i);
		cout << char(179);
	}

	for (int i = 6; i < 28; i++)
	{
		gotoXY(87, i);
		cout << char(179);
	}
	for (int i = 6; i < 28; i++)
	{
		gotoXY(95, i);
		cout << char(179);
	}
	for (int i = 6; i < 28; i++)
	{
		gotoXY(110, i);
		cout << char(179);
	}
}

void XoaTrongKhungVatTu()
{
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 20;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiSoLuong; j++)
			cout << " ";

		dis += doDaiSoLuong + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiDonVi; j++)
			cout << " ";
	}
}

void XoaTrongKhungVatTuHoaDon()
{
	int qua = 25;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 20;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2 + qua;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiSoLuong; j++)
			cout << " ";

		dis += doDaiSoLuong + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiDonVi; j++)
			cout << " ";
	}
}

void XoaKhungThaoTacHoaDon()
{
	gotoXY(130, 14);
	for (int i = 14; i < 35; i++)
	{
		for (int j = 1; j < 40; j++)
			cout << " ";
		gotoXY(130, i);
	}

}

void Xoa_Khung_Xoa_Vat_Tu_Trong_HoaDon()
{
	gotoXY(2, 11);
	for (int i = 11; i < 34; i++)
	{
		for (int j = 2; j < 125; j++)
			cout << " ";
		gotoXY(2, i);
	}

}

void Ve_HOTKEY_VatTu() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F4";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "CHINH SUA VAT TU";
	gotoXY(ngang + 10, doc += 2);
	cout << "XOA VAT TU";
	gotoXY(ngang + 10, doc += 2);
	cout << "IN DANH SACH VAT TU";
	gotoXY(ngang + 10, doc += 2);
	cout << "THEM VAT TU";
}

void Ve_HOTKEY_NhapXuatHoaDon() {

	int x = 4, y = 8;
	int ngang = 130;
	int doc = 2;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 2;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY TAB";
	doc = 2;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "LUU HOA DON";
	gotoXY(ngang + 10, doc += 2);
	cout << "XOA VAT TU TRONG HOA DON";
	gotoXY(ngang + 10, doc += 2);
	cout << "THEM VAT TU VAO HOA DON";
	gotoXY(ngang + 10, doc += 2);
	cout << "CHINH SUA VAT TU";
}

void Ve_HOTKEY_NhanVien() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F4";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "CHINH SUA NHAN VIEN";
	gotoXY(ngang + 10, doc += 2);
	cout << "XOA NHAN VIEN";
	gotoXY(ngang + 10, doc += 2);
	cout << "IN DANH SACH NHAN VIEN";
	gotoXY(ngang + 10, doc += 2);
	cout << "THEM NHAN VIEN";
}

void Ve_HOTKEY_HoaDon() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";

	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "TAO HOA DON CHO NHAN VIEN";

}

void Ve_HOTKEY_ChonVatTu_HoaDon() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";

	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "DE THEM VAT TU VAO TRONG HOA DON";

}

void Ve_HOTKEY_TraHang() {

	int x = 4, y = 8;
	int ngang = 127;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F2";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "THUC HIEN TRA HANG";
	gotoXY(ngang + 10, doc += 2);
	cout << "THONG TIN HOA DON";
}

void Ve_HOTKEY_ThucHienTraHang() {

	int x = 4, y = 8;
	int ngang = 130;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F3";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "LUU HOA DON";
	gotoXY(ngang + 10, doc += 2);
	cout << "TRA VAT TU TRONG HOA DON";
}

void Ve_HOTKEY() {

	int x = 3, y = 8;
	int ngang = 15;
	int doc = 35;
	TextColor(119);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + j, doc + i);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + 30 + j, doc + i);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + 60 + j, doc + i);
			cout << " ";
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 1; j++)
		{
			gotoXY(ngang + j, doc + i + 5);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 2; j++)
		{
			gotoXY(ngang + 30 + j, doc + i + 5);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 1; j++)
		{
			gotoXY(ngang + 60 + j, doc + i + 5);
			cout << " ";
		}
	}
	TextColor(124);
	gotoXY(ngang + 3, doc + 1);
	cout << "ESC";


	gotoXY(ngang + 1 + 30, doc + 1);
	cout << "ENTEN";

	gotoXY(ngang + 1 + 60, doc + 1);
	cout << "KEYUP";


	gotoXY(ngang + 1, doc + 1 + 5);
	cout << "KEYDOWN";


	gotoXY(ngang + 1 + 30, doc + 1 + 5);
	cout << "KEYRIGHT";


	gotoXY(ngang + 1 + 60, doc + 1 + 5);
	cout << "KEYLEFT";

	TextColor(241);
	gotoXY(ngang + 10, doc + 1);
	cout << ": THOAT";
	gotoXY(ngang + 40, doc + 1);
	cout << ": CHON";
	gotoXY(ngang + 70, doc + 1);
	cout << ": LEN";
	gotoXY(ngang + 10, doc + 1 + 5);
	cout << ": XUONG";
	gotoXY(ngang + 40, doc + 1 + 5);
	cout << ": QUA PHAI";
	gotoXY(ngang + 70, doc + 1 + 5);
	cout << ": QUA TRAI";

}

void VeKhungVatTu()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 170; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 10; i < 33; i++)
	{
		gotoXY(20, i);
		cout << " ";
	}

	for (int i = 10; i < 33; i++)
	{
		gotoXY(65, i);
		cout << " ";
	}

	for (int i = 10; i < 33; i++)
	{
		gotoXY(93, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(7, 11);
	cout << "MA VAT TU";
	gotoXY(35, 11);
	cout << "TEN VAT TU";
	gotoXY(76, 11);
	cout << "SO LUONG";
	gotoXY(99, 11);
	cout << "DON VI";

	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH VAT TU TRONG KHO";
	gotoXY(125, 2);
	cout << "MENU LUA CHON THEM SUA XOA VAT TU";
	TextColor(241);
	Ve_HOTKEY();
	Ve_HOTKEY_VatTu();
}

void VeKhungTraVeVatTu()
{
	int qua = 25;
	VeKhungCH(qua, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = qua; i < 114 + qua; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = qua; i < 170 - qua - 4; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 10; i < 33; i++)
	{
		gotoXY(20 + qua, i);
		cout << " ";
	}

	for (int i = 10; i < 33; i++)
	{
		gotoXY(65 + qua, i);
		cout << " ";
	}

	for (int i = 10; i < 33; i++)
	{
		gotoXY(93 + qua, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(qua + 7, 11);
	cout << "MA VAT TU";
	gotoXY(qua + 35, 11);
	cout << "TEN VAT TU";
	gotoXY(qua + 76, 11);
	cout << "SO LUONG";
	gotoXY(qua + 99, 11);
	cout << "DON VI";

	TextColor(252);
	gotoXY(qua + 40, 3);
	cout << "DANH SACH VAT TU TRONG KHO";
	TextColor(241);
	//Ve_HOTKEY();
}

void VeKhungNhanVien()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 170; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 11; i < 33; i++)
	{
		gotoXY(20, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(65, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(93, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(5, 11);
	cout << "MA NHAN VIEN";
	gotoXY(35, 11);
	cout << "HO VA TEN NHAN VIEN";
	gotoXY(76, 11);
	cout << "CMNN";
	gotoXY(99, 11);
	cout << "GIOI TINH";

	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH NHAN VIEN";
	gotoXY(125, 2);
	cout << "MENU LUA CHON THEM SUA XOA NHAN VIEN";
	TextColor(241);
	Ve_HOTKEY();
}

void VeKhung_CacHoaDon_NhanVien(C_DATE &begin, C_DATE &end)
{
	VeKhungCH(5, 5, 165, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 5; i < 170; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(30, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(45, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(55, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(108, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(123, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(140, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(148, i);
		cout << " ";
	}
	//Số HĐ	Ngày lập     Loại HĐ	 Mã VT    Tên VT   Số lượng  Đơn giá  Vat	Trị giá 
	TextColor(241);
	gotoXY(12, 6);
	cout << "SO HOA DON";
	gotoXY(35, 6);
	cout << "NGAY LAP";
	gotoXY(47, 6);
	cout << "LOAI HD";
	gotoXY(58, 6);
	cout << "MA VAT TU";
	gotoXY(83, 6);
	cout << "TEN VAT TU";
	gotoXY(112, 6);
	cout << "SO LUONG";
	gotoXY(128, 6);
	cout << "DON GIA";
	gotoXY(143, 6);
	cout << "VAT";
	gotoXY(155, 6);
	cout << "TRI GIA";

	TextColor(252);
	gotoXY(60, 2);
	cout << "BANG LIET KE CAC HOA DON TRONG KHOANG THOI GIAN";
	gotoXY(5, 4);
	cout << "TU NGAY: ";
	gotoXY(14, 4);
	Out_Date(begin);
	gotoXY(133, 4);
	cout << "DEN NGAY: ";
	gotoXY(143, 4);
	Out_Date(end);
}

void XoaKhung_CacHoaDon_NhanVien()
{
	gotoXY(7, 8);
	for (int i = 0; i < 32; i++)
	{
		for (int j = 0; j < 163; j++)
			cout << " ";
		gotoXY(7, 8 + i);
	}
}

void VeKhung_LietKeHoaDon_NhanVien()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 170; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 11; i < 33; i++)
	{
		gotoXY(20, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(65, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(93, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(7, 11);
	cout << "GIOI TINH";
	gotoXY(35, 11);
	cout << "HO TEN NHAN VIEN";
	gotoXY(76, 11);
	cout << "GIOI TINH";
	gotoXY(95, 11);
	cout << "SO LUONG HOA DON";

	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH NHAN VIEN";
	gotoXY(125, 2);
	cout << "MENU LUA CHON THEM SUA XOA NHAN VIEN";
	TextColor(241);
	Ve_HOTKEY();
}

void VeKhungDS_HoaDon()
{
	int vt = 30;
	VeKhungCH(30, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = vt; i < 114 + vt; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = vt; i < 114 + vt; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}
	TextColor(25);
	//4 thanh doc
	for (int i = 11; i < 33; i++)
	{
		gotoXY(vt + 25, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(vt + 65, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(vt + 93, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(vt + 10, 11);
	cout << "MA HOA DON";
	gotoXY(vt + 40, 11);
	cout << "NGAY LAP";
	gotoXY(vt + 76, 11);
	cout << "LOAI HD";
	gotoXY(vt + 95, 11);
	cout << "TRI GIA HOA DON";
	TextColor(252);
	gotoXY(vt + 50, 3);
	cout << "DANH SACH HOA DON";
	TextColor(241);
	//Ve_HOTKEY();
}

void XoaTrongKhungDS_HoaDon() {
	for (int i = 13; i < 32; i++)
	{
		gotoXY(22 + 10, i);
		for (int j = 35; j < 147; j++)
		{
			cout << " ";
		}

	}
}

void VeKhungThongTinVatTu()
{
	int quaox = 15;
	VeKhungCH(20 + quaox, 5, 114, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 22; i < 134; i++)
	{
		gotoXY(quaox + i, 7);
		cout << " ";
	}
	TextColor(25);

	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 27, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 46, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 92, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 110, i);
		cout << " ";
	}


	TextColor(241);
	gotoXY(quaox + 23, 6);
	cout << "STT";
	gotoXY(quaox + 33, 6);
	cout << "MA VAT TU";
	gotoXY(quaox + 65, 6);
	cout << "TEN VAT TU";
	gotoXY(quaox + 96, 6);
	cout << "DON VI TINH";
	gotoXY(quaox + 117, 6);
	cout << "SO LUONG TON";
	gotoXY(quaox + 55, 3);
	cout << "DANH SACH VAT TU TRONG KHO";

}

void XoaKhung_ThongTinVatTu()
{
	int qua = 37;
	gotoXY(qua, 8);
	for (int i = 0; i < 32; i++)
	{
		for (int j = qua; j < 150 - 2; j++)
			cout << " ";
		gotoXY(qua, 8 + i);
	}
}

void VeKhungThongTinNhanVien()
{
	int quaox = 15;
	VeKhungCH(20 + quaox, 5, 114, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 22; i < 134; i++)
	{
		gotoXY(quaox + i, 7);
		cout << " ";
	}
	TextColor(25);

	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 27, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 42, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 85, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 104, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 117, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(quaox + 23, 6);
	cout << "STT";
	gotoXY(quaox + 29, 6);
	cout << "MA NHAN VIEN";
	gotoXY(quaox + 55, 6);
	cout << "HO VA TEN NHAN VIEN";

	gotoXY(quaox + 94, 6);
	cout << "CMNN";
	gotoXY(quaox + 106, 6);
	cout << "GIOI TINH";

	gotoXY(quaox + 120, 6);
	cout << "SL HOA DON";
	TextColor(252);

	gotoXY(80, 2);
	cout << "DANH SACH NHAN VIEN";
	TextColor(241);

}

void XoaKhungNhanVien() {
	for (int i = 8; i < 38; i++)
	{
		gotoXY(22 + 15, i);
		for (int j = 35; j < 147; j++)
		{
			cout << " ";
		}

	}
}

/* ============================== NHAP THOI GIAN ================================*/

int NhapNgayThang(C_DATE &begin, C_DATE &end)
{
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	int Pos = 1;
	bool kt = 1;// chuoi rong kt = 1
	string day1, month1, year1;
	string day2, month2, year2;
	C_DATE date;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;
	day2 = chuyenSoThanhChuoi(date.day);
	month2 = chuyenSoThanhChuoi(date.month);
	year2 = chuyenSoThanhChuoi(date.year);
	int vitri = 120;

	gotoXY(vitri + 10, 15);
	cout << "NGAY BAT DAU" << endl;
	gotoXY(vitri, 16);
	cout << "NGAY: ";
	gotoXY(vitri, 17);
	cout << "THANG: ";
	gotoXY(vitri, 18);
	cout << "NAM: ";
	gotoXY(vitri + 10, 20);
	cout << "NGAY KET THUC" << endl;
	gotoXY(vitri, 21);
	cout << "NGAY:" << day2;
	gotoXY(vitri, 22);
	cout << "THANG:" << month2;
	gotoXY(vitri, 23);
	cout << "NAM:" << year2;
	gotoXY(5 + vitri + day1.length(), 16);

	while (true)
	{
		TextColor(241);
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
					Pos = 6;
					gotoXY(vitri + 4 + year2.length(), 23);
				}
				else if (Pos == 2)
				{
					Pos = 1;
					gotoXY(5 + vitri + day1.length(), 16);
				}
				else if (Pos == 3)
				{
					Pos = 2;
					gotoXY(6 + vitri + month1.length(), 17);
				}
				else if (Pos == 4)
				{
					Pos = 3;
					gotoXY(4 + vitri + year1.length(), 18);
				}
				else if (Pos == 5)
				{
					Pos = 4;
					gotoXY(5 + vitri + day2.length(), 21);
				}
				else if (Pos == 6)
				{
					Pos = 5;
					gotoXY(6 + vitri + month2.length(), 22);
				}
			}
			else if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
					Pos = 2;
					gotoXY(6 + vitri + month1.length(), 17);
				}
				else if (Pos == 2)
				{
					Pos = 3;
					gotoXY(4 + vitri + year1.length(), 18);
				}
				else if (Pos == 3)
				{
					Pos = 4;
					gotoXY(5 + vitri + day2.length(), 21);
				}
				else if (Pos == 4)
				{
					Pos = 5;
					gotoXY(6 + vitri + month2.length(), 22);
				}
				else if (Pos == 5)
				{
					Pos = 6;
					gotoXY(vitri + 4 + year2.length(), 23);
				}
				else if (Pos == 6)
				{
					Pos = 1;
					gotoXY(5 + vitri + day1.length(), 16);
				}
			}
		}
		else if (k == KEYENTER)
		{
			begin.day = atoi(day1.c_str());
			begin.month = atoi(month1.c_str());
			begin.year = atoi(year1.c_str());
			end.day = atoi(day2.c_str());
			end.month = atoi(month2.c_str());
			end.year = atoi(year2.c_str());
			// ktra ngay bat dau
			if (day1.length() > 0 && month1.length() > 0 && year1.length() > 0)
			{
				if (begin.day < 1 || begin.month < 1 || begin.year < 1)
				{
					TextColor(252);
					gotoXY(vitri + 5, 26);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vitri + 5, 26);
					cout << "              ";
					if (begin.day < 1)
					{
						gotoXY(5 + vitri + day1.length(), 16);
						Pos = 1;
						continue;
					}
					else if (begin.month < 1)
					{
						gotoXY(6 + vitri + month1.length(), 17);
						Pos = 2;
						continue;
					}
					else if (begin.year < 1)
					{
						gotoXY(4 + vitri + year1.length(), 18);
						Pos = 3;
						continue;
					}

				}
				if (!KiemTraNgayHopLe(begin))
				{
					TextColor(252);
					gotoXY(vitri + 5, 26);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vitri + 5, 26);
					cout << "              ";
					gotoXY(5 + vitri + day1.length(), 16);
					Pos = 1;
					continue;
				}
			}
			else
			{
				TextColor(252);
				gotoXY(vitri + 5, 26);
				cout << "DU LIEU RONG XIN NHAP LAI !!!";
				getChar();
				gotoXY(vitri + 5, 26);
				cout << "                              ";
				if (day1.length() == 0)
				{
					gotoXY(5 + vitri + day1.length(), 16);
					Pos = 1;
					continue;
				}
				else if (month1.length() == 0)
				{
					gotoXY(6 + vitri + month1.length(), 17);
					Pos = 2;
					continue;
				}
				else if (year1.length() == 0)
				{
					gotoXY(4 + vitri + year1.length(), 18);
					Pos = 3;
					continue;
				}

			}
			// ktra ngay ket thuc
			if (day2.length() > 0 && month2.length() > 0 && year2.length() > 0)
			{
				if (end.day < 1 || end.month < 1 || end.year < 1)
				{
					TextColor(252);
					gotoXY(vitri + 5, 26);
					cout << "NHAP NGAY SAI!";
					getChar();
					gotoXY(vitri + 5, 26);
					cout << "              ";
					if (end.day < 1)
					{
						gotoXY(5 + vitri + day2.length(), 21);
						Pos = 4;
						continue;
					}
					else if (end.month < 1)
					{
						gotoXY(6 + vitri + month2.length(), 22);
						Pos = 5;
						continue;
					}
					else if (end.year < 1)
					{
						gotoXY(vitri + 4 + year2.length(), 23);
						Pos = 6;
						continue;
					}
				}
				if (!KiemTraNgayHopLe(end))
				{
					TextColor(252);
					gotoXY(vitri + 5, 26);
					cout << "NHAP NGAY SAI!";
					getChar();
					gotoXY(vitri + 5, 26);
					cout << "              ";
					gotoXY(5 + vitri + day2.length(), 21);
					Pos = 4;
					continue;
				}
			}
			else
			{
				TextColor(252);
				gotoXY(vitri + 5, 26);
				cout << "DU LIEU RONG XIN NHAP LAI !!!";
				getChar();
				gotoXY(vitri + 5, 26);
				cout << "                              ";
				if (day2.length() == 0)
				{
					gotoXY(5 + vitri + day2.length(), 21);
					Pos = 4;
					continue;
				}
				else if (month2.length() == 0)
				{
					gotoXY(6 + vitri + month2.length(), 22);
					Pos = 5;
					continue;
				}
				else if (year2.length() == 0)
				{
					gotoXY(vitri + 4 + year2.length(), 23);
					Pos = 6;
					continue;
				}

			}

			if ((QuyChuanTinhThoiGian(end) < QuyChuanTinhThoiGian(begin)))
			{
				TextColor(252);
				gotoXY(vitri + 5, 26);
				cout << "NHAP NGAY SAI!";
				getChar();
				gotoXY(vitri + 5, 26);
				cout << "              ";
				gotoXY(5 + vitri + day1.length(), 16);
				Pos = 1;
				continue;
			}
			if ((QuyChuanTinhThoiGian(end) > QuyChuanTinhThoiGian(date)))
			{
				TextColor(252);
				gotoXY(vitri + 5, 26);
				cout << "NHAP NGAY SAI!";
				getChar();
				gotoXY(vitri + 5, 26);
				cout << "              ";
				gotoXY(5 + vitri + day1.length(), 16);
				Pos = 1;
				continue;
			}

			// thoa man het cac dieu kien
			return 1;
		}
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(vitri + 5, 26);
			cout << "BAN CO MUON THOAT QUA TRINH NAY KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				XoaKhungThaoTac();
				return 0;
			}
			gotoXY(vitri + 5, 26);
			cout << "                                               ";
			gotoXY(5 + vitri + day1.length(), 16);
		}
		else
		{
			if (Pos == 1)
			{
				if (day1.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(day1, k, kt);
			}
			else if (Pos == 2)
			{
				if (month1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(month1, k, kt);
			}
			else if (Pos == 3)
			{
				if (year1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(year1, k, kt);
			}
			else if (Pos == 4)
			{
				if (day2.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(day2, k, kt);
			}
			else if (Pos == 5)
			{
				if (month2.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(month2, k, kt);
			}
			else if (Pos == 6)
			{
				if (year2.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(year2, k, kt);
			}
		}
	}

}

/* ============================== VAT TU KIEU DU LIEU CAY NHI PHAN ================================*/

void Nhap_Chinh_Sua_Vat_Tu(NodeTree* &node)
{
	TextColor(241);
	bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	bool kt = 1;
	int Pos = 1;
	NodeTree *item = new NodeTree;

	item->data = node->data;
	int i = 0;
	for (; i < strlen(node->itemCode); i++)
	{
		item->itemCode[i] = node->itemCode[i];
	}
	item->itemCode[i] = '\0';
	int size = strlen(item->itemCode);

	int vitri = 120;
	TextColor(252);
	gotoXY(vitri + 10, 14);
	cout << "CHINH SUA VAT TU";
	TextColor(241);

	gotoXY(vitri, 16);
	cout << "MA VAT TU: " << item->itemCode;
	gotoXY(vitri, 18);
	cout << "TEN VAT TU: " << item->data.name;
	gotoXY(vitri, 20);
	cout << "DON VI: " << item->data.unit;
	gotoXY(vitri, 22);
	cout << "SO LUONG TON: " << item->data.inventoryNumber;
	gotoXY(11 + vitri + item->data.name.length() + 1, 18);
	if (item->data.name.length() > 0) space1 = 1;
	if (item->data.unit.length() > 0) space2 = 1;
	if (strlen(item->itemCode) > 0) kt = 0;
	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == 72)
			{
				if (Pos == 1)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
				}
			}
			if (k == 80)
			{
				if (Pos == 1)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// nếu là phím enter
		{
			if (kt == 1 || item->data.name.length() == 0 || item->data.unit.length() == 0 || strlen(item->itemCode) == 0)// kiểm tra xem x có rỗng ko
			{
				gotoXY(125, 24);
				TextColor(252);
				cout << "Du lieu rong! - Moi Nhap Lai. ";
				getChar();
				TextColor(241);
				gotoXY(125, 24);
				cout << "                                ";
				if (item->data.name.length() == 0)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
					continue;
				}
				if (item->data.unit.length() == 0)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
					continue;
				}
			}
			else if (kt == 0 && item->data.name.length() != 0 && item->data.unit.length() != 0 && strlen(item->itemCode) != 0)
			{
				gotoXY(125, 24);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					char d = item->data.name[item->data.name.size() - 1];
					//cout<<d;
					//getChar();
					if (d == 32 || d == 0)
					{
						item->data.name.erase(item->data.name.size() - 1);
					}
					if (item->data.unit[item->data.unit.length() - 1] == 32 || item->data.unit[item->data.unit.length() - 1] == 0)
					{
						item->data.unit.erase(item->data.unit.length() - 1);
					}
					node->data = item->data;
					Nocursortype();
					return;

				}
				else
				{
					TextColor(241);
					gotoXY(125, 24);
					cout << "                                    ";
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(125, 24);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(125, 24);
				cout << "                                                  ";
				gotoXY(11 + vitri + item->data.name.length() + 1, 18);
				Pos = 1;
				continue;
			}
		}
		else
		{
			// nhap ten
			if (Pos == 2) {
				if (k == SPACE)
				{
					if (item->data.unit.length() <= 10 && space2 == 1 && item->data.unit[item->data.unit.length() - 1] != 25 && item->data.unit[item->data.unit.length() - 1] != ' ')
					{
						item->data.unit.push_back(k);
						space2 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}

				kt = 0;
				if (k == 8 && (item->data.unit.length()) == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(item->data.unit, k, kt);
					space2 = 1;
					continue;
				}
				if (item->data.unit.length() <= 10)
				{
					XulyNhap_Dulieu(item->data.unit, k, kt);
					space2 = 1;
				}

			}
			else if (Pos == 1)
			{
				if (k == SPACE)
				{
					if (space1 == 1 && item->data.name.length() <= 25 && item->data.name[item->data.name.length() - 1] != 25 && item->data.name[item->data.name.length() - 1] != ' ')
					{
						item->data.name.push_back(k);
						cout << k;
						space1 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}

				kt = 0;
				if (k == 8 && item->data.name.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(item->data.name, k, kt);
					space1 = 1;
					continue;
				}
				if (item->data.name.length() <= 25)
				{
					XulyNhap_Dulieu(item->data.name, k, kt);
					space1 = 1;
				}

			}
			else if (Pos == 0)
			{
				if (k >= 65 && k <= 92 || k >= 48 && k <= 57 || k == 95)// nếu là số thì
				{
					cout << k;
					item->itemCode[size] = k;
					kt = 0;
					size++;
				}
				else if (k == 8)
				{
					if (kt != 1)
					{
						if (size == 1)
						{
							cout << "\b"; cout << ' ';
							cout << "\b";
							item->itemCode[0] = '\0';
							kt = 1;// cap nhat x dang rong
							size = 0;
						}
						else
						{
							//12345678
							cout << "\b"; cout << ' '; cout << "\b";
							item->itemCode[size--] = '\0';
							//size--;
						}
					}
				}
			}
		}
	}

}

void Them_Vat_Tu(NodeTree* &node)
{
	//bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	bool ktdv = 1, ktten = 1;
	int Pos = 0;
	int size = 0;
	NodeTree *item = new NodeTree;

	item->data.inventoryNumber = 0;

	int vitri = 120;
	TextColor(252);
	gotoXY(vitri + 10, 14);
	cout << "THEM VAT TU";
	TextColor(241);
	gotoXY(vitri, 16);//20
	cout << "MA VAT TU: " << item->itemCode;
	gotoXY(vitri, 18);//18
	cout << "TEN VAT TU: " << item->data.name;
	gotoXY(vitri, 20);//20
	cout << "DON VI: " << item->data.unit;
	gotoXY(vitri, 22);//22
	cout << "SO LUONG TON: ";//<< item->data.inventoryNumber;
	gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 0)
				{
					int w = item->data.inventoryNumber;
					int leg = 0;
					while (w > 0)
					{
						leg++;
						w /= 10;
					}
					gotoXY(13 + vitri + leg + 1, 22);
					Pos = 3;
				}
				else if (Pos == 1)
				{
					gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
					Pos = 0;
				}
				else if (Pos == 2)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
				}
				else if (Pos == 3)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
				}
			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
				}
				else if (Pos == 0)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
				}
				else if (Pos == 2)
				{
					int w = item->data.inventoryNumber;
					int leg = 0;
					while (w > 0)
					{
						leg++;
						w /= 10;
					}
					gotoXY(13 + vitri + leg + 1, 22);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
					Pos = 0;
				}
			}
		}
		else if (k == KEYENTER)// nếu là phím enter
		{
			if (item->data.name.length() == 0 || item->data.unit.length() == 0 || strlen(item->itemCode) == 0)// kiểm tra xem x có rỗng ko
			{
				TextColor(252);
				gotoXY(vitri, 28);
				cout << "Du lieu rong hoac da ton tai!";
				getChar();
				gotoXY(vitri, 28);
				cout << "                                ";
				TextColor(241);
				//system("color f1");
				if (strlen(item->itemCode) == 0)
				{
					gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
					Pos = 0;
				}
				else if (item->data.name.length() == 0)
				{
					gotoXY(11 + vitri + item->data.name.length() + 1, 18);
					Pos = 1;
				}
				else if (item->data.unit.length() == 0)
				{
					gotoXY(7 + vitri + item->data.unit.length() + 1, 20);
					Pos = 2;
				}

			}
			else if (item->data.name.length() != 0 && item->data.unit.length() != 0 && strlen(item->itemCode) != 0)
			{
				TextColor(252);
				gotoXY(vitri, 28);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					//system("color f1");
					char d = item->data.name[item->data.name.size() - 1];
					if (d == 32 || d == 0)
					{
						item->data.name.erase(item->data.name.size() - 1);
					}
					if (item->data.unit[item->data.unit.length() - 1] == 32 || item->data.unit[item->data.unit.length() - 1] == 0)
					{
						item->data.unit.erase(item->data.unit.length() - 1);
					}
					//item->data.name = chuanHoaVatTu(item->data.name);
					int e = ThemNodeItemVaoTree(node, item);
					if (e == 0)
					{
						gotoXY(vitri, 28);
						cout << "                                                  ";
						TextColor(252);
						gotoXY(110, 22);
						cout << "nhap du lieu bi trung!";
						//Sleep(1000);
						_getch();
						gotoXY(110, 22);
						cout << "                         ";
						gotoXY(vitri, 28);
						cout << "                                    ";
						TextColor(241);
						gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
						Pos = 0;
						continue;
					}
					else
					{
						Nocursortype();
						TextColor(252);
						return;
					}

				}
				else
				{
					TextColor(241);
					gotoXY(vitri, 28);
					cout << "                                  ";
					gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
					Pos = 0;
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(vitri, 28);
			cout << "BAN CO MUON THOAT VA KHONG LUU? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				delete item;
				return;
			}
			else
			{
				TextColor(241);
				gotoXY(vitri, 28);
				cout << "                                    ";
				gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
				Pos = 0;
				continue;
			}
		}
		else
		{

			if (Pos == 2) {
				if (k == SPACE)
				{
					if (item->data.unit.length() <= 10 && item->data.unit[item->data.unit.length() - 1] != 32 && item->data.unit.length() > 0 && item->data.unit[item->data.unit.length() - 1] != ' ')
					{
						item->data.unit.push_back(k);
						cout << k;
					}
				}
				else if (k == 8)
					XulyNhap_Dulieu(item->data.unit, k, ktdv);
				else if (item->data.unit.length() <= 10)
					XulyNhap_Dulieu(item->data.unit, k, ktdv);
			}
			else if (Pos == 1)
			{
				if (k == SPACE)
				{
					if (item->data.name.length() <= 25 && item->data.name[item->data.name.length() - 1] != 32 && item->data.name.length() > 0 && item->data.name[item->data.name.length() - 1] != ' ')
					{
						item->data.name.push_back(k);
						cout << k;
					}
				}

				else if (k == 8)
					XulyNhap_Dulieu(item->data.name, k, ktten);
				else if (item->data.name.length() <= 25)
					XulyNhap_Dulieu(item->data.name, k, ktten);
			}
			else if (Pos == 0)
			{
				if ((k >= 65 && k <= 90 || k >= 48 && k <= 57 || k == 95) && size < 10)
				{
					cout << k;
					item->itemCode[size] = k;
					item->itemCode[++size] = '\0';
					//size++;
				}
				else if (k == 8 && size > 0)
				{
					cout << "\b"; cout << ' '; cout << "\b";
					item->itemCode[--size] = '\0';
				}
				if (TimNodeItemTrongTree(node, item->itemCode) != NULL)
				{
					TextColor(252);
					gotoXY(110, 22);
					cout << "MA VAT TU DA TON TAI";
					//Sleep(1000);
					_getch();
					gotoXY(110, 22);
					cout << "                        ";
					gotoXY(10 + vitri + strlen(item->itemCode) + 1, 16);
					TextColor(241);
				}
			}
			else if (Pos == 3)
			{
				if (k >= 48 && k <= 57 && item->data.inventoryNumber < pow(10, 8))
				{
					if (!(item->data.inventoryNumber == 0 && k == 48))
					{
						item->data.inventoryNumber = item->data.inventoryNumber * 10 + (k - 48);
						cout << k - 48;
					}
				}
				else if (k == 8 && item->data.inventoryNumber > 0)
				{
					cout << "\b"; cout << ' ';
					cout << "\b";
					item->data.inventoryNumber /= 10;
				}
			}
		}
	}
}

void XuatThongTinVatTu(LinearItem &item)
{
	system("color f1");
	Nocursortype();
	int page = 1;
	VeKhungThongTinVatTu();
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	TextColor(241);
	gotoXY(140, 40);
	cout << "TRANG 1";
	int qua = 15;
	int y = 15;
	for (int i = 0; i < y && item.arr[i]; i++)
	{
		gotoXY(qua + 24, 9 + 2 * i);
		cout << i + 1;
		gotoXY(qua + 32, 9 + 2 * i);
		cout << item.arr[i]->itemCode;
		gotoXY(qua + 53, 9 + 2 * i);
		cout << item.arr[i]->data.name;
		gotoXY(qua + 100, 9 + 2 * i);
		cout << item.arr[i]->data.unit;
		gotoXY(qua + 120, 9 + 2 * i);
		cout << item.arr[i]->data.inventoryNumber;
	}
	int Pos = 0;
	while (1)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT)
				Pos += y;
			else if (k == KEYLEFT)
				Pos -= y;
		}
		else if (k == KEYESC || k == KEYENTER) return;
		if (Pos >= item.n)
		{
			Pos -= y;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / y;
			gotoXY(140, 40);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhung_ThongTinVatTu();
			VeKhungThongTinVatTu();
			for (int i = Pos, j = 0; i < item.n && j < y; i++, j++)
			{
				gotoXY(qua + 24, 9 + 2 * j);
				cout << i + 1;
				gotoXY(qua + 32, 9 + 2 * j);
				cout << item.arr[i]->itemCode;
				gotoXY(qua + 53, 9 + 2 * j);
				cout << item.arr[i]->data.name;
				gotoXY(qua + 100, 9 + 2 * j);
				cout << item.arr[i]->data.unit;
				gotoXY(qua + 120, 9 + 2 * j);
				cout << item.arr[i]->data.inventoryNumber;
			}
		}
	}

}

LinearItem TraLaiDanhSachCan(LinearItem quanLy, string key, int size)
{
	LinearItem rePonse;
	if (size == 0) return quanLy;
	for (int i = 0; i < quanLy.n; i++)
	{
		int r = quanLy.arr[i]->data.name.find(key);
		if (r >= 0)
			rePonse.arr[rePonse.n++] = quanLy.arr[i];
	}
	return rePonse;
}

NodeTree* QuanLyVatTu(TreeingItem& DangCay, ListEmployees quanLyNV)
{
	system("color f1");
	LinearItem quanLy;
	KhoiTaoDanhSachTuyenTinhTree(quanLy, DangCay);
	InsertionSortTuyenTinhTree(quanLy);
	LinearItem nho = quanLy;
	system("cls");

	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungVatTu();
	gotoXY(35, 2);

	int size = 0;
	string key;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 20;
	int disTance = 10;


	for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
	{

		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << quanLy.arr[i + Pos]->itemCode;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << quanLy.arr[i + Pos]->data.name;
		disTance += doDaiTen + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoLuong; h++)
			cout << " ";
		gotoXY(disTance + 10, i + rong);

		int f = quanLy.arr[i + Pos]->data.inventoryNumber;
		cout << f;
		int e = 0;
		while (f > 0)
		{
			e++;
			f /= 10;
		}
		disTance += doDaiSoLuong + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiDonVi; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		cout << quanLy.arr[i + Pos]->data.unit;
		disTance += doDaiDonVi + 1;
	}

	while (true)
	{
		gotoXY(4, 9);
		cout << "Tim kiem:";
		gotoXY(15 + size, 9);
		Invicursortype();
		char k = getChar();
		Nocursortype();
		if (k == -32)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {

			if (quanLy.arr[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(20, 7);
			cout << "BAN CO MUON CHINH SUA VAT TU KHONG Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(20, 7);
				cout << "                                            ";
				//system("color f1");
				Invicursortype();
				NodeTree* node = TimNodeItemTrongTree(DangCay, quanLy.arr[Sta + Pos]->itemCode);
				Nhap_Chinh_Sua_Vat_Tu(node);
				XoaKhungThaoTac();
				TextColor(241);
				gotoXY(14 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				Nocursortype();

				gotoXY(20, 7);
				cout << "                                                ";

			}

		}
		else if (k == KEYESC) return NULL;
		else if (k == 0)
		{
			k = getChar();
			if (k == KEYF3)
			{
				if (quanLy.arr[Sta + Pos] == NULL) continue;
				if (checkItemIsInBill(quanLyNV, quanLy.arr[Sta + Pos]->itemCode)){
					gotoXY(30, 7);
					TextColor(252);
					cout << "KHONG DUOC PHEP XOA VAT TU NAY";
					
					//TextColor(252);
					Sleep(1000);
					gotoXY(30, 7);
					cout << "                                 ";
					TextColor(241);
					continue;
				} 
				char select;
				gotoXY(30, 7);
				TextColor(252);
				cout << "BAN CO MUON XOA VAT TU NAY KHONG ? Y/N: ";
				select = getChar();
				TextColor(241);
				if (select == 'Y' || select == 'y')
				{
					XoaNodeTrongTree(DangCay, quanLy.arr[Sta + Pos]->itemCode);
					gotoXY(30, 7);
					cout << "                                           ";
					XoaTrongKhungVatTu();
				}
				else
				{
					TextColor(241);
					if (select == -32 || select == 0)
					{
						select = getChar();

					}
					Nocursortype();
					gotoXY(30, 7);
					cout << "                                           ";

				}
			}
			if (k == KEYF4) {
				clrscr();
				LinearItem y;
				KhoiTaoDanhSachTuyenTinhTree(y, DangCay);
				InsertionSortTuyenTinhTree(y);
				XuatThongTinVatTu(y);
				clrscr();
				system("color F1");
				VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhungVatTu();

			}
			else if (k == KEYF5)
			{
				Invicursortype();
				char select;
				gotoXY(30, 7);
				TextColor(252);
				cout << "BAN CO MUON THEM VAT TU NAY KHONG ? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{
					TextColor(241);
					gotoXY(30, 7);
					cout << "                                                  ";
					Them_Vat_Tu(DangCay);
					Nocursortype();
					XoaKhungThaoTac();

					TextColor(241);
					gotoXY(14 + size, 9);
				}
				else
				{
					TextColor(241);
					if (select == -32)
					{
						select = getChar();
					}
					Nocursortype();
					gotoXY(30, 7);
					cout << "                                                  ";
					continue;
				}
			}
			else if (k == 0)
			{
				continue;
			}
			else continue;
		}
		else
		{
			Nocursortype();
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(14 + key.size(), 9);
				if (size == 0) continue;
				--size;
				key.erase(key.size() - 1);
				cout << key;
				for (int k = key.size(); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
			}
			else if (f == KEYESC) return NULL;
			else if ((f < 123 && f>96) || (f > 64 && f < 91) || f == 32) {
				if (size == 26) continue;
				if ((f >= 'a' && f < 'z'))
				{
					f = char(f - 32);
				}
				key.push_back(f);
				size++;
				gotoXY(15, 9);
				cout << key;

				for (int k = key.size(); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();

			}
			gotoXY(0, 0);
		}
		//delete nho.arr;
		LinearItem nho;
		KhoiTaoDanhSachTuyenTinhTree(nho, DangCay);
		InsertionSortTuyenTinhTree(nho);
		quanLy = TraLaiDanhSachCan(nho, key, size);

		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;

		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= quanLy.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}

		if (Pos <= -1) Pos = 0;
		else if (quanLy.n <= y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;

		for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
		{

			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << quanLy.arr[i + Pos]->itemCode;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << quanLy.arr[i + Pos]->data.name;
			disTance += doDaiTen + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoLuong; h++)
				cout << " ";
			gotoXY(disTance + 10, i + rong);

			int f = quanLy.arr[i + Pos]->data.inventoryNumber;
			cout << f;
			int e = 0;
			while (f > 0)
			{
				e++;
				f /= 10;
			}
			disTance += doDaiSoLuong + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiDonVi; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			cout << quanLy.arr[i + Pos]->data.unit;
			disTance += doDaiDonVi + 1;
		}

		TextColor(241);

	}
}

/* ============================== HOA DON DANH SACH LIEN KET DON HOA DON ================================*/

void Xuat_1_HoaDon(BILL bill)
{
	TextColor(241);
	system("cls");
	gotoXY(60, 2);
	cout << "HOA DON " << bill.invoiceCode;
	gotoXY(20, 4);
	cout << "NGAY LAP: ";
	gotoXY(29, 4);
	cout << bill.date.day << "/" << bill.date.month << "/" << bill.date.year;
	gotoXY(123, 4);
	if (bill.type == N) cout << "HOA DON NHAP";
	else cout << "HOA DON XUAT";
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	VeKhung_Xuat_LapHoaDon_TrangThai();
	int kc = 11;
	int qua = 10;
	for (int i = 0; i < bill.numberOfBill; i++)
	{
		gotoXY(23 - qua, kc + i);
		cout << i + 1;
		gotoXY(29 - qua, kc + i);
		cout << bill.cthd[i].itemCode;

		gotoXY(44 - qua, kc + i);
		//cout << bill.invoiceCod;
		cout << *bill.cthd[i].name;
		gotoXY(83 - qua, kc + i);
		cout << bill.cthd[i].Number;
		gotoXY(92 - qua, kc + i);
		cout << bill.cthd[i].VAT;
		gotoXY(110 - qua, kc + i);
		cout << bill.cthd[i].Price;
		gotoXY(125 - qua, kc + i);
		cout << bill.cthd[i].PriceTo;
		gotoXY(150 - qua, kc + i);
		int status = bill.cthd[i].status;
		if (status == 1)
			cout << "DA MUA";
		else
			cout << "DA TRA HANG";
	}
	TextColor(252);
	gotoXY(110, 35);
	cout << "TONG TIEN:    " << (size_t)bill.UnitPrice << " VND";
}

void SortBill(searchBill &quanLy)
{
	for (int i = 1; i < quanLy.n; i++)
	{
		NodeBill * temp = quanLy.arr[i];
		int j = i - 1;
		for (; j >= 0 && QuyChuanTinhThoiGian(temp->data.date) > QuyChuanTinhThoiGian(quanLy.arr[j]->data.date); j--)
		{
			quanLy.arr[j + 1] = quanLy.arr[j];
		}
		quanLy.arr[j + 1] = temp;
	}
}

int ThaoTac_NhapXuat_HoaDon(CT_BILL &bill, NodeTree *tree, TypeOf type, BILL find)
{
	NodeTree* root = tree;
	tree = TimNodeItemTrongTree(tree, bill.itemCode);
	CT_BILL backup = bill;
	bill.VAT *= 100;
	bool isNew = (tree == NULL);
fly:
	int vitri = 130;
	Invicursortype();
	int Pos = 1;
	TextColor(252);
	gotoXY(vitri + 5, 14);
	cout << "CHINH SUA CT_HOA DON";
	TextColor(241);
	gotoXY(vitri, 16);
	cout << "MA VAT TU: " << bill.itemCode;
	gotoXY(vitri, 17);
	cout << "SO LUONG: " << bill.Number;
	gotoXY(vitri, 18);
	cout << "GIA: " << bill.Price;
	gotoXY(vitri, 19);
	cout << "VAT: " << bill.VAT;
	int e = bill.Number;
	int lt1 = 0;
	while (e > 0)
	{
		lt1++;
		e = e / 10;
	}
	if (isNew)
	{
		gotoXY(11 + vitri + strlen(bill.itemCode), 16);
		Pos = 0;
	}
	else
		gotoXY(10 + vitri + lt1, 17);
	e = bill.Price;
	int lt2 = 0;
	while (e > 0)
	{
		lt2++;
		e = e / 10;
	}
	e = bill.VAT;
	int lt3 = 0;
	while (e > 0)
	{
		lt3++;
		e = e / 10;
	}
	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32)
		{
			k = getChar();
			if (k == 72)
			{
				if (Pos == 1)
				{
					if (!isNew)
					{
						gotoXY(5 + vitri + lt3, 19);
						Pos = 3;
					}
					else {
						gotoXY(11 + vitri + strlen(bill.itemCode), 16);
						Pos = 0;
					}
				}
				else if (Pos == 2)
				{
					gotoXY(10 + vitri + lt1, 17);
					Pos = 1;
				}
				else if (Pos == 3)
				{
					gotoXY(5 + vitri + lt2, 18);
					Pos = 2;
				}
				else if (Pos == 0)
				{
					gotoXY(5 + vitri + lt3, 19);
					Pos = 3;
				}
			}
			if (k == 80)
			{
				if (Pos == 1)
				{
					gotoXY(5 + vitri + lt2, 18);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(5 + vitri + lt3, 19);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					if (!isNew) {
						gotoXY(10 + vitri + lt1, 17);
						Pos = 1;
					}
					else {
						gotoXY(11 + vitri + strlen(bill.itemCode), 16);
						Pos = 0;
					}

				}
				else if (Pos == 0)
				{
					gotoXY(10 + vitri + lt1, 17);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)
		{
			if (bill.Number <= 0 || bill.Price < 0 || bill.VAT < 0 || strlen(bill.itemCode) < 1 || strlen(bill.itemCode) < 1 || tree == NULL)// kiá»ƒm tra xem x cÃ³ rá»—ng ko
			{
				TextColor(252);
				gotoXY(vitri, 24);
				cout << "Du lieu LOI! - Moi Nhap Lai. ";
				getChar();
				gotoXY(vitri, 24);
				cout << "                                ";
				TextColor(241);
				if (bill.Number <= 0)
				{
					gotoXY(10 + vitri + lt1, 17);
					Pos = 1;
				}
				else if (bill.Price < 0)
				{
					gotoXY(5 + vitri + lt2, 18);
					Pos = 2;
				}
				else if (bill.VAT < 0)
				{
					gotoXY(5 + vitri + lt3, 19);
					Pos = 3;
				}
				else if (strlen(bill.itemCode) < 1 || TimNodeItemTrongTree(root, bill.itemCode) == NULL || DaTonTaiTrongHoaDon(bill.itemCode, find))
				{
					gotoXY(11 + vitri + strlen(bill.itemCode), 16);
					Pos = 0;
				}
			}
			else
			{
				TextColor(252);
				gotoXY(vitri, 24);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'Y')
				{
					bill.VAT /= 100;
					bill.name = &tree->data.name;
					bill.PriceTo = bill.Number * bill.Price * (1 + bill.VAT);
					Nocursortype();
					return 1;
				}

				else {
					TextColor(241);
					gotoXY(vitri, 24);
					cout << "                                  ";
					gotoXY(10 + vitri + lt1, 17);
					Pos = 1;
				}
			}
		}
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(vitri, 24);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				bill = backup;
				system("cls");
				return 0;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vitri, 24);
				cout << "                                  ";
				gotoXY(10 + vitri + lt1, 17);
				Pos = 1;
				continue;
			}
		}
		else if (k == 0)
		{
			k = getChar();
			if (k == KEYF2)
			{
				system("cls");
				TextColor(241);
				Nocursortype();
				LinearItem y;
				KhoiTaoDanhSachTuyenTinhTree(y, root);
				XuatThongTinVatTu(y);
				system("cls");
				goto fly;
			}
		}
		else
		{
			if (Pos == 2) {
				if (k >= 48 && k <= 57 && bill.Price < pow(10, 7) && bill.Number * bill.Price * (1 + bill.VAT / 100) < INT_MAX / 100)// náº¿u lÃ  sá»‘ thÃ¬
				{
					if ((bill.Price == 0 && k == 48))
					{
						continue;
					}
					bill.Price = bill.Price * 10 + (k - 48);
					gotoXY(5 + vitri + lt2, 18);
					cout << k - 48;
					lt2++;
				}
				else if (k == 8 && bill.Price > 0)
				{
					cout << "\b"; cout << ' ';
					cout << "\b";
					bill.Price /= 10;
					lt2--;
				}
			}
			else if (Pos == 1)
			{

				if (tree != NULL && k >= 48 && k <= 57 && ((type == N && (bill.Number + tree->data.inventoryNumber < 100000000 / 10)) || ((bill.Number * 10 + (k - 48) <= tree->data.inventoryNumber) && type == X)) && bill.Number * bill.Price * (1 + bill.VAT / 100) < INT_MAX / 100)// náº¿u lÃ  sá»‘ thÃ¬
				{
					if ((bill.Number == 0 && k == 48))
					{
						continue;
					}
					bill.Number = bill.Number * 10 + (k - 48);
					gotoXY(10 + vitri + lt1, 17);
					cout << k - 48;
					lt1++;
				}
				else if (k == 8 && bill.Number > 0)
				{
					cout << "\b"; cout << ' ';
					cout << "\b";
					bill.Number /= 10;
					lt1--;
				}
			}
			else if (Pos == 3)
			{
				if (k >= 48 && k <= 57 && bill.VAT < 10 && bill.Number * bill.Price * (1 + bill.VAT / 100) < INT_MAX / 100)// náº¿u lÃ  sá»‘ thÃ¬
				{
					if ((bill.VAT == 0 && k == 48))
					{
						continue;
					}
					bill.VAT = bill.VAT * 10 + (k - 48);
					gotoXY(5 + vitri + lt3, 19);
					lt3++;
					cout << k - 48;
				}
				else if (k == 8 && bill.VAT >= 1)
				{
					cout << "\b"; cout << ' ';
					cout << "\b";
					bill.VAT /= 10;
					if (bill.VAT < 1) bill.VAT = 0;
					lt3--;
				}

			}
			else if (Pos == 0)
			{
				if ((k >= 65 && k <= 92 || k >= 48 && k <= 57 || k == 95) && strlen(bill.itemCode) < 10)
				{
					int leg = strlen(bill.itemCode);
					cout << k;
					bill.itemCode[leg] = k;
					bill.itemCode[leg + 1] = '\0';
					if (!DaTonTaiTrongHoaDon(bill.itemCode, find)) tree = TimNodeItemTrongTree(root, bill.itemCode);
				}
				else  if (k == 8 && strlen(bill.itemCode) > 0)
				{
					cout << "\b"; cout << ' ';
					cout << "\b";
					bill.itemCode[strlen(bill.itemCode) - 1] = '\0';

					//
					bill.Number = 0;
					gotoXY(31, 7);
					cout << "             ";
					lt1 = 0;
					gotoXY(31, 7);
					cout << "0";
					gotoXY(11 + vitri + strlen(bill.itemCode), 16);
					if (!DaTonTaiTrongHoaDon(bill.itemCode, find)) tree = TimNodeItemTrongTree(root, bill.itemCode);
				}
				if (DaTonTaiTrongHoaDon(bill.itemCode, find))
				{
					TextColor(252);
					gotoXY(vitri, 24);
					cout << "MA VAT TU DA TON TAI trong ct_hoadon";
					//Sleep(1000);
					_getch();
					gotoXY(vitri, 24);
					cout << "                                     ";
					gotoXY(11 + vitri + strlen(bill.itemCode), 16);
					TextColor(241);
				}
			}
		}
	}
}

NodeTree* TraVeNodeVaTu(TreeingItem& DangCay, BILL bill)
{
	system("color f1");
	LinearItem quanLy;
	KhoiTaoDanhSachTuyenTinhTree(quanLy, DangCay);
	InsertionSortTuyenTinhTree(quanLy);
	LinearItem nho = quanLy;
	system("cls");

	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	VeKhungTraVeVatTu();
	Ve_HOTKEY_ChonVatTu_HoaDon();
	gotoXY(35, 2);

	int size = 0;
	string key;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 20;
	int disTance = 10;

	int qua = 25;
	for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
	{

		disTance = 2 + qua;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << quanLy.arr[i + Pos]->itemCode;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << quanLy.arr[i + Pos]->data.name;
		disTance += doDaiTen + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoLuong; h++)
			cout << " ";
		gotoXY(disTance + 10, i + rong);

		int f = quanLy.arr[i + Pos]->data.inventoryNumber;
		cout << f;
		int e = 0;
		while (f > 0)
		{
			e++;
			f /= 10;
		}
		disTance += doDaiSoLuong + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiDonVi; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		cout << quanLy.arr[i + Pos]->data.unit;
		disTance += doDaiDonVi + 1;
	}

	while (true)
	{
		gotoXY(qua + 4, 9);
		cout << "Tim kiem:";
		gotoXY(qua + 15 + size, 9);
		Invicursortype();
		char k = getChar();
		Nocursortype();
		if (k == -32)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {

			if (quanLy.arr[Sta + Pos] == NULL) continue;
			if (DaTonTaiTrongHoaDon(quanLy.arr[Sta + Pos]->itemCode, bill)) {
				TextColor(252);
				gotoXY(qua + 30, 7);
				cout << "DA TON TAI VAT TU TRONG HOA DON";
				Sleep(1000);
				gotoXY(qua + 30, 7);
				cout << "                                                  ";
				TextColor(241);
				continue;
			}

			TextColor(252);
			gotoXY(qua + 30, 7);
			cout << "BAN CO MUON CHON VAT TU KHONG Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(qua + 30, 7);
				cout << "                                            ";
				Invicursortype();
				// kieam tra su ton tai

				return quanLy.arr[Sta + Pos];
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				Nocursortype();

				gotoXY(qua + 30, 7);
				cout << "                                                ";

			}

		}
		else if (k == KEYESC) return NULL;
		else
		{
			Nocursortype();
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(qua + 15 + size, 9);
				if (size == 0) continue;
				--size;
				key.erase(key.size() - 1);
				cout << key;
				for (int k = key.size(); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
			}
			else if (f == KEYESC) return NULL;
			else if ((f < 123 && f>96) || (f > 64 && f < 91) || f == 32) {
				if (size == 26) continue;
				if ((f >= 'a' && f < 'z'))
				{
					f = char(f - 32);
				}
				key.push_back(f);
				size++;
				gotoXY(qua + 15, 9);
				cout << key;

				for (int k = key.size(); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTuHoaDon();

			}
			gotoXY(0, 0);
		}
		//delete nho.arr;
		LinearItem nho;
		KhoiTaoDanhSachTuyenTinhTree(nho, DangCay);
		InsertionSortTuyenTinhTree(nho);
		quanLy = TraLaiDanhSachCan(nho, key, size);

		gotoXY(qua + 15, 9);
		cout << "                                                     ";
		gotoXY(qua + 15, 9);
		cout << key;

		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= quanLy.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}

		if (Pos <= -1) Pos = 0;
		else if (quanLy.n <= y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;
		for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
		{

			disTance = 2 + qua;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << quanLy.arr[i + Pos]->itemCode;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << quanLy.arr[i + Pos]->data.name;
			disTance += doDaiTen + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoLuong; h++)
				cout << " ";
			gotoXY(disTance + 10, i + rong);

			int f = quanLy.arr[i + Pos]->data.inventoryNumber;
			cout << f;
			int e = 0;
			while (f > 0)
			{
				e++;
				f /= 10;
			}
			disTance += doDaiSoLuong + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiDonVi; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			cout << quanLy.arr[i + Pos]->data.unit;
			disTance += doDaiDonVi + 1;
		}
		TextColor(241);

	}
}

NodeBill* GioHang_ChonVatTu(NodeBill* bill, TreeingItem root)
{
	Nocursortype();
	int stt = 5;
	int ma = 12;
	int ten = 37;
	int sl = 11;
	int gt = 24;
	int vat = 5;
	int gia = 23;
	int Pos = 0;
	int PosW = 0;
	char key[21];
	NodeTree* temp = NULL;
	bill->data.cthd = new CT_BILL[20];
fly1:
	clrscr();
	system("color F1");
	gotoXY(60, 2);
	cout << "HOA DON " << bill->data.invoiceCode;
	gotoXY(4, 7);
	cout << "NGAY LAP: ";
	gotoXY(14, 7);
	cout << bill->data.date.day << "/" << bill->data.date.month << "/" << bill->data.date.year;
	gotoXY(110, 7);
	if (bill->data.type == N) cout << "HOA DON NHAP";
	else cout << "HOA DON XUAT";
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(125, i);
		cout << "  ";
	}
	Ve_HOTKEY_NhapXuatHoaDon();
	VeKhungLapHoaDon();
	int kc = 11;
	for (int i = 0; i < bill->data.numberOfBill; i++)
	{
		int vt = 2;
		if (i == Pos)
			TextColor(112);
		else
			TextColor(241);


		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + stt; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 2, kc + i);
		cout << i + 1;
		vt += stt + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + ma; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 1, kc + i);
		cout << bill->data.cthd[i].itemCode;
		vt += ma + 1;
		gotoXY(vt, kc + i);

		for (int i = vt; i < vt + ten; i++)
		{
			cout << " ";
		}

		gotoXY(vt + 10, kc + i);
		cout << *bill->data.cthd[i].name;
		vt += ten + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + sl; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 5, kc + i);
		cout << bill->data.cthd[i].Number;
		vt += sl + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + vat; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 1, kc + i);
		cout << bill->data.cthd[i].VAT;
		vt += vat + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + gia; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 5, kc + i);
		cout << bill->data.cthd[i].Price;
		vt += gia + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + gt; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 5, kc + i);
		cout << bill->data.cthd[i].PriceTo;
		int leg = 0, gia = bill->data.cthd[i].PriceTo;
		while (gia > 0) {
			gia /= 10;
			leg++;
		}
	}
	/*	F5 THÊM
		F3 XÓA VẬT TƯ
		F4 XEM DANH SACH VẬT TƯ
		TAB XÓA
		ESC THOÁT
		ENTER LUU DANH SACH
		*/
	while (true)
	{
		Nocursortype();
		TextColor(241);
		bill->data.UnitPrice = TongTien(bill->data);
		gotoXY(103, 35);
		cout << "                 ";
		TextColor(252);
		gotoXY(90, 35);
		cout << "TONG TIEN:    " << (size_t)bill->data.UnitPrice << " VND";
		char k = getChar();
		TextColor(241);
		if (k == KEYENTER && bill->data.numberOfBill > 0)
		{
			TextColor(252);
			gotoXY(30, 7);
			cout << "BAN CO MUON LUU DU LIEU KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				bill->data.UnitPrice = TongTien(bill->data);
				gotoXY(15, 28);
				cout << "                                    ";
				system("cls");
				Xuat_1_HoaDon(bill->data);
				_getch();
				system("cls");
				return bill;
			}
			else {
				TextColor(241);
				gotoXY(30, 7);
				cout << "                                    ";
			}
		}
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(30, 7);
			cout << "THOAT SE MAT HET DU LIEU! BAN CO MUON THOAT KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				system("cls");
				gotoXY(30, 7);
				cout << "                                                           ";
				delete bill;
				bill = NULL;
				return NULL;
			}
			else {
				TextColor(241);
				gotoXY(30, 7);
				cout << "                                                           ";
			}

		}
		else if (k == -32)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (bill->data.numberOfBill == 0)
				{
					continue;
				}
				Pos--;
				if (Pos < 0) Pos = bill->data.numberOfBill - 1;
				else if (Pos >= bill->data.numberOfBill) Pos = 0;

			}
			else if (k == KEYDOWN)
			{
				if (bill->data.numberOfBill == 0)
				{
					continue;
				}
				Pos++;
				if (Pos < 0) Pos == bill->data.numberOfBill - 1;

				else if (Pos >= bill->data.numberOfBill) Pos = 0;
			}
			else
			{
				continue;
			}
		}
		else if (k == 0)
		{
			k = _getch();
			//xoa vat tu trong hoa don
			if (k == KEYF3 && bill->data.numberOfBill > 0)
			{
				TextColor(252);
				gotoXY(30, 7);
				cout << "BAN CO MUON XOA VAT TU NAY KHONG? Y/N: ";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{

					TextColor(241);
					for (int i = Pos; i < bill->data.numberOfBill - 1; i++)
						bill->data.cthd[i] = bill->data.cthd[i + 1];
					bill->data.numberOfBill--;

					TextColor(241);
					Xoa_Khung_Xoa_Vat_Tu_Trong_HoaDon();
					VeKhungLapHoaDon();
					gotoXY(30, 7);
					cout << "                                              ";
					if (Pos == bill->data.numberOfBill) Pos = bill->data.numberOfBill - 1;

				}
				else {
					Nocursortype();
					TextColor(241);
					gotoXY(30, 7);
					cout << "                                              ";
					continue;
				}


			}
			// them vat tu trong hoa don
			else if (k == KEYF5 && bill->data.numberOfBill < 20)
			{

				NodeTree* node = TraVeNodeVaTu(root, bill->data);
				if (node == NULL)
					goto fly1;
				clrscr();
				system("color F1");
				gotoXY(60, 2);
				cout << "HOA DON " << bill->data.invoiceCode;
				gotoXY(4, 7);
				cout << "NGAY LAP: ";
				gotoXY(14, 7);
				cout << bill->data.date.day << "/" << bill->data.date.month << "/" << bill->data.date.year;
				gotoXY(110, 7);
				if (bill->data.type == N) cout << "HOA DON NHAP";
				else cout << "HOA DON XUAT";
				VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(125, i);
					cout << "  ";
				}
				Ve_HOTKEY_NhapXuatHoaDon();
				VeKhungLapHoaDon();
				for (int i = 0; i < bill->data.numberOfBill; i++)
				{
					int vt = 2;
					if (i == Pos)
						TextColor(112);
					else
						TextColor(241);


					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + stt; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 2, kc + i);
					cout << i + 1;
					vt += stt + 1;
					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + ma; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 1, kc + i);
					cout << bill->data.cthd[i].itemCode;
					vt += ma + 1;
					gotoXY(vt, kc + i);

					for (int i = vt; i < vt + ten; i++)
					{
						cout << " ";
					}

					gotoXY(vt + 10, kc + i);
					cout << *bill->data.cthd[i].name;
					vt += ten + 1;
					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + sl; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 5, kc + i);
					cout << bill->data.cthd[i].Number;
					vt += sl + 1;
					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + vat; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 1, kc + i);
					cout << bill->data.cthd[i].VAT;
					vt += vat + 1;
					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + gia; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 5, kc + i);
					cout << bill->data.cthd[i].Price;
					vt += gia + 1;
					gotoXY(vt, kc + i);
					for (int i = vt; i < vt + gt; i++)
					{
						cout << " ";
					}
					gotoXY(vt + 5, kc + i);

					cout << bill->data.cthd[i].PriceTo;
					int leg = 0, gia = bill->data.cthd[i].PriceTo;
					while (gia > 0) {
						gia /= 10;
						leg++;
					}
				}
				Invicursortype();

				strcpy(bill->data.cthd[bill->data.numberOfBill].itemCode, node->itemCode);
				bill->data.cthd[bill->data.numberOfBill].Number = 0;
				bill->data.cthd[bill->data.numberOfBill].Price = 0;
				bill->data.cthd[bill->data.numberOfBill].VAT = 0.1;


				if (ThaoTac_NhapXuat_HoaDon(bill->data.cthd[bill->data.numberOfBill], root, bill->data.type, bill->data) == 0) {
					TextColor(241);
					XoaKhungThaoTacHoaDon();
					continue;
				}
				bill->data.numberOfBill++;
				TextColor(241);
				XoaKhungThaoTacHoaDon();
			}
			else
			{
				continue;
			}
		}
		//tab chinh sua
		else if (k == 9 && bill->data.numberOfBill > 0)
		{
			TextColor(252);
			gotoXY(30, 7);
			cout << "BAN CO MUON CHINH SUA VAT TU NAY KHONG? Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				gotoXY(30, 7);
				cout << "                                                   ";
				TextColor(241);
				Invicursortype();
				ThaoTac_NhapXuat_HoaDon(bill->data.cthd[Pos], root, bill->data.type, bill->data);
				XoaKhungThaoTacHoaDon();
				Nocursortype();
				TextColor(241);
			}
			else {
				Nocursortype();
				TextColor(241);
				gotoXY(30, 7);
				cout << "                                                          ";
				continue;
			}
		}
		else
		{
			continue;
		}
		kc = 11;
		int vt = 2;
		for (int i = 0; i < bill->data.numberOfBill; i++)
		{
			vt = 2;
			if (i == Pos)
				TextColor(112);
			else
				TextColor(241);


			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + stt; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 2, kc + i);
			cout << i + 1;
			vt += stt + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + ma; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 1, kc + i);
			cout << bill->data.cthd[i].itemCode;
			vt += ma + 1;
			gotoXY(vt, kc + i);

			for (int i = vt; i < vt + ten; i++)
			{
				cout << " ";
			}

			gotoXY(vt + 10, kc + i);
			cout << *bill->data.cthd[i].name;
			vt += ten + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + sl; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 5, kc + i);
			cout << bill->data.cthd[i].Number;
			vt += sl + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + vat; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 1, kc + i);
			cout << bill->data.cthd[i].VAT;
			vt += vat + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + gia; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 5, kc + i);
			cout << bill->data.cthd[i].Price;
			vt += gia + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + gt; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 5, kc + i);

			cout << bill->data.cthd[i].PriceTo;
			int leg = 0, gia = bill->data.cthd[i].PriceTo;
			while (gia > 0) {
				gia /= 10;
				leg++;
			}
		}
		TextColor(241);
	}
}

NodeBill* NhapTao_HoaDon(NodeBill * bill, ListEmployees & l, TreeingItem root)
{
	TextColor(241);
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	bool ktma = 1, ktday = 0, ktmonth = 0, ktyear = 0;// trang thai 1 la dang rong
	char loai = '\0';
	int Pos = 1;
	int size = 0;
	string day, month, year;
	C_DATE date;
	NodeBill* hoadon = new NodeBill;
	int vitri = 120;

	hoadon->data.numberOfBill = 0;
	// lấy thời gian hiện tại đi so sánh
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;
	// thoi gian nhập vào
	hoadon->data.date.day = date.day;
	hoadon->data.date.month = date.month;
	hoadon->data.date.year = date.year;
	hoadon->data.invoiceCode[0] = '\0';
	TextColor(252);
	gotoXY(vitri + 10, 14);
	cout << "THUC HIEN TAO HOA DON";
	TextColor(241);
	gotoXY(vitri, 16);
	cout << "MA HOA DON: " << hoadon->data.invoiceCode[0];
	gotoXY(vitri, 17);
	cout << "NGAY: " << hoadon->data.date.day;
	gotoXY(vitri, 18);
	cout << "THANG: " << hoadon->data.date.month;
	gotoXY(vitri, 19);
	cout << "NAM: " << hoadon->data.date.year;
	gotoXY(vitri, 20);
	cout << "LOAI(N\X): " << loai;
	gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
	day = chuyenSoThanhChuoi(hoadon->data.date.day);
	month = chuyenSoThanhChuoi(hoadon->data.date.month);
	year = chuyenSoThanhChuoi(hoadon->data.date.year);
	while (true)
	{
		TextColor(241);
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
					if (loai == '\0')
						gotoXY(10 + vitri, 20);
					else
						gotoXY(11 + vitri, 20);
					Pos = 5;
				}
				else if (Pos == 2)
				{
					gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
					Pos = 1;
				}
				else if (Pos == 3)
				{
					gotoXY(5 + vitri + day.length() + 1, 17);
					Pos = 2;
				}
				else if (Pos == 4)
				{
					gotoXY(6 + vitri + month.length() + 1, 18);
					Pos = 3;
				}
				else if (Pos == 5)
				{
					gotoXY(4 + vitri + year.length() + 1, 19);
					Pos = 4;
				}
			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
					gotoXY(5 + vitri + day.length() + 1, 17);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(6 + vitri + month.length() + 1, 18);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					gotoXY(4 + vitri + year.length() + 1, 19);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					if (loai == '\0')
						gotoXY(10 + vitri, 20);
					else
						gotoXY(11 + vitri, 20);
					Pos = 5;
				}
				else if (Pos == 5)
				{
					gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// náº¿u lÃ  phÃ­m enter
		{
			TextColor(252);
			gotoXY(125, 24);
			cout << "BAN CO MUON LUU LAI HAY KHONG Y/N: ";
			char x = getChar();
			gotoXY(125, 24);
			cout << "                                    ";
			if (x == 'y' || x == 'Y')
			{
				hoadon->data.date.day = atoi(day.c_str());
				hoadon->data.date.month = atoi(month.c_str());
				hoadon->data.date.year = atoi(year.c_str());
				if (strlen(hoadon->data.invoiceCode) == 0 || HoaDonDaTonTai(hoadon->data.invoiceCode, l))
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "DU LIEU LOI XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                             ";
					gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
					Pos = 1;
					//system("color f1");
					continue;
				}
				if ((day).length() == 0)
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "DU LIEU RONG XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                             ";
					gotoXY(5 + vitri + day.length() + 1, 17);
					Pos = 2;
					TextColor(241);
					continue;
				}
				if (month.length() == 0)
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "DU LIEU RONG XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                             ";
					gotoXY(6 + vitri + month.length() + 1, 18);
					Pos = 3;
					TextColor(241);
					continue;
				}
				if ((year).length() == 0)
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "DU LIEU RONG XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                             ";
					gotoXY(4 + vitri + (year).length() + 1, 19);
					Pos = 4;
					TextColor(241);
					continue;
				}
				if ((loai != 'N' && loai != 'X' && loai != 'n' && loai != 'x'))
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "DU LIEU SAI XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                             ";
					TextColor(241);
					if (loai == '\0')
						gotoXY(10 + vitri, 20);
					else
						gotoXY(11 + vitri, 20);
					Pos = 5;
					continue;
				}

				// chinh xác
				if (strlen(hoadon->data.invoiceCode) > 0 && (loai == 'N' || loai == 'X' || loai == 'n' || loai == 'x') && KiemTraNgayHopLe(hoadon->data.date) && (QuyChuanTinhThoiGian(date) - QuyChuanTinhThoiGian(hoadon->data.date) <= 7) && (QuyChuanTinhThoiGian(date) >= QuyChuanTinhThoiGian(hoadon->data.date)))
				{
					if (loai == 'n' || loai == 'N')
					{
						hoadon->data.type = N;
					}
					else
					{
						hoadon->data.type = X;
					}

					bill = hoadon;
					TextColor(252);
					gotoXY(125, 24);
					TextColor(241);
					clrscr();
					bill->data.numberOfBill = 0;
					if (GioHang_ChonVatTu(bill, root) == NULL)
						return NULL;
					else
						return bill;
				}
				else
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "NGAY KHONG HOP LE XIN NHAP LAI?";
					getChar();
					gotoXY(125, 24);
					cout << "                                ";
					TextColor(241);
					gotoXY(5 + vitri + day.length() + 1, 17);
					Pos = 2;
				}

			}
			else
			{
				TextColor(241);
				gotoXY(125, 24);
				cout << "                                         ";
				gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
				Pos = 1;
			}
		}
		// phim esc
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(125, 24);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				gotoXY(125, 24);
				cout << "                                ";
				TextColor(241);
				return NULL;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(125, 24);
				cout << "                                  ";
				gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
				Pos = 1;
				continue;
			}
		}
		else
		{
			/* =================== XU LY NHAP ====================== */
			if (Pos == 1)
			{
				if (strlen(hoadon->data.invoiceCode) < 20 || k == 8)
				{
					XuLyNhap_HoaDon(hoadon->data.invoiceCode, k, ktma);
				}
				if (HoaDonDaTonTai(hoadon->data.invoiceCode, l))
				{
					TextColor(252);
					gotoXY(125, 24);
					cout << "Ma hoa don da ton tai!";
					Sleep(1000);
					TextColor(241);
					gotoXY(125, 24);
					cout << "                                  ";
					gotoXY(11 + vitri + strlen(hoadon->data.invoiceCode) + 1, 16);
				}
			}
			else if (Pos == 2) {
				if (day.length() < 2 || k == 8)
					xulynhap_ngay(day, k, ktday);
			}
			else if (Pos == 3)
			{
				if (month.length() < 2 || k == 8)
					xulynhap_ngay(month, k, ktmonth);
			}
			else if (Pos == 4)
			{
				if (year.length() < 4 || k == 8)
					xulynhap_ngay(year, k, ktyear);
			}
			else if (Pos == 5) {
				if (k == 8 && (loai == 'X' || loai == 'N'))
				{
					cout << "\b"; cout << ' '; cout << "\b";
					loai = '\0';
				}
				else if (loai == '\0' && (k == 'X' || k == 'N'))
				{
					cout << k;
					loai = k;
				}
			}
		}
	}

}

void QuanLyHoaDon(ListEmployees& nhanVien, TreeingItem root)
{
	char key[21] = "";
	int size = 0;
	ListEmployees quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 14;
	int disTance = 10;
fly:
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungNhanVien();
	Ve_HOTKEY_HoaDon();


	for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << quanLy.arr[i + Pos]->employeeID;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << quanLy.arr[i + Pos]->lastName;
		disTance += doDaiTen + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoLuong; h++)
			cout << " ";
		gotoXY(disTance + 10, i + rong);
		cout << quanLy.arr[i + Pos]->firstName;

		disTance += doDaiSoLuong + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiDonVi; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		if (quanLy.arr[i + Pos]->sex == NAM) {
			cout << "NAM";
			for (h = 3; h < doDaiDonVi; h++)
				cout << " ";
		}
		else {
			cout << "NU";
			for (h = 2; h < doDaiDonVi; h++)
				cout << " ";
		}
		disTance += doDaiDonVi + 1;
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "Tim kiem:";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 40; k++)
			cout << " ";

		gotoXY(15 + size, 9);
		Invicursortype();
		char k = getChar();
		if (k == -32)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYESC) return;
		else if (k == KEYENTER) {
			if (quanLy.arr[Pos + Sta] == NULL) continue;
			TextColor(252);
			gotoXY(20, 7);
			cout << "BAN CO MUON TAO HOA DON CHO NHAN VIEN NAY KHONG Y/N: ";
			char select = getChar();
			if (select == -32 || select == 0)
			{
				select = _getch();
			}
			Nocursortype();
			if (select == 89 || select == 121)
			{
				/* ================= TAO HOA DON CHO NHAN VIEN ================= */
				gotoXY(20, 7);
				cout << "                                                     ";
				Invicursortype();
				NodeBill* bill = new NodeBill;
				bill = NhapTao_HoaDon(bill, nhanVien, root);
				if (bill != NULL)
				{
					bill->next = NULL;
					Them_HoaDon_Vao_Cuoi_NhanVien(quanLy.arr[Pos + Sta]->dshd, bill);
					ThayDoiDuLieu(root, bill->data);
					quanLy.arr[Pos + Sta]->invoiceNumber++;
					TextColor(241);
					Nocursortype();
					XoaKhungThaoTac();
					Ve_HOTKEY_HoaDon();
					goto fly;
				}
				else
				{
					Nocursortype();
					TextColor(241);
					gotoXY(20, 7);
					cout << "                                                     ";
					XoaKhungThaoTac();
					Ve_HOTKEY_HoaDon();
					gotoXY(16 + size, 4);
					goto fly;
					continue;
				}
			}
			else
			{
				Nocursortype();
				TextColor(241);
				gotoXY(20, 7);
				cout << "                                                     ";
				gotoXY(16 + size, 4);
				continue;
			}
		}
		else if (k == 0)
		{
			continue;
		}
		else
		{
			char f = k;
			Nocursortype();
			if (f == KEYBACK)
			{
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 10; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();
			}
			else if (f == KEYESC) return;
			else if ((f < 58 && f>47)) {
				if (size == 20) continue;
				if (f >= 'a' && f < 'z')
				{
					f = char(f - 32);
				}
				key[size++] = f;
				key[size] = '\0';
				gotoXY(15, 9);
				cout << key;
				for (int k = strlen(key); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();
			}
		}
		quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
		InsertionSortNhanVien(quanLy);
		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 10; k++)
			cout << " ";
		if (Sta == -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta == quanLy.n)
		{
			Sta -= 1;
		}
		else if (Sta == y) {
			Sta = y - 1;
			Pos++;
		}
		if (Pos == -1) Pos = 0;
		else if (quanLy.n < y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;

		for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << quanLy.arr[i + Pos]->employeeID;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << quanLy.arr[i + Pos]->lastName;
			disTance += doDaiTen + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoLuong; h++)
				cout << " ";
			gotoXY(disTance + 10, i + rong);
			cout << quanLy.arr[i + Pos]->firstName;

			disTance += doDaiSoLuong + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiDonVi; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			if (quanLy.arr[i + Pos]->sex == NAM) {
				cout << "NAM";
				for (h = 3; h < doDaiDonVi; h++)
					cout << " ";
			}
			else {
				cout << "NU";
				for (h = 2; h < doDaiDonVi; h++)
					cout << " ";
			}
			disTance += doDaiDonVi + 1;
		}
		TextColor(241);
	}
}

/* ============================== NHAN VIEN DANH SACH TUYEN TINH CON TRO ================================*/

void InHoaDon_1_NhanVien(Employee *nhanvien)
{
	int page = 0;
	C_DATE begin, end;
	Invicursortype();
	TextColor(241);
	int r = NhapNgayThang(begin, end);
	Nocursortype();
	if (r == 0) return;
	int Pos = 0;
	BillOfEm billofEm = LietKeHoaDon(nhanvien->dshd, begin, end);
	system("cls");
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	VeKhung_CacHoaDon_NhanVien(begin, end);
	gotoXY(155, 40);
	cout << "TRANG 1";
	//Số HĐ	Ngày lập     Loại HĐ	 Mã VT    Tên VT   Số lượng  Đơn giá  Vat	Trị giá
	int i = 0, j = Pos;
	int vtY = 9;
	int vtX = 8;
	int SL_HD = billofEm.length;
	TextColor(241);
	for (; j < SL_HD && i < 15; i++, j++)
	{
		gotoXY(vtX + 2, vtY + j * 2);
		cout << billofEm.data[j + Pos].billPro->invoiceCode;
		gotoXY(vtX + 26, vtY + j * 2);
		cout << billofEm.data[j + Pos].billPro->date.day << "/" << billofEm.data[j + Pos].billPro->date.month << "/" << billofEm.data[j + Pos].billPro->date.year;
		gotoXY(vtX + 40, vtY + j * 2);
		if (billofEm.data[j + Pos].billPro->type == N) cout << "NHAP";
		else cout << "XUAT";
		gotoXY(vtX + 50, vtY + j * 2);
		cout << billofEm.data[j + Pos].billSpe->itemCode;
		gotoXY(vtX + 72, vtY + j * 2);
		cout << *billofEm.data[j + Pos].billSpe->name;
		gotoXY(vtX + 106, vtY + j * 2);
		cout << billofEm.data[j + Pos].billSpe->Number;
		gotoXY(vtX + 120, vtY + j * 2);
		cout << billofEm.data[j + Pos].billSpe->Price;
		gotoXY(vtX + 135, vtY + j * 2);
		cout << billofEm.data[j + Pos].billSpe->VAT;
		gotoXY(vtX + 150, vtY + j * 2);
		cout << (size_t)(billofEm.data[j + Pos].billSpe->PriceTo);
	}

	while (1)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}
		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= SL_HD)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}


		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(155, 40);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT) {
			XoaKhung_CacHoaDon_NhanVien();
			VeKhung_CacHoaDon_NhanVien(begin, end);
			int j = 0;
			int i = 0;
			int k = Pos;
			TextColor(241);
			for (; k < SL_HD && i < 15;j++, i++, k++)
			{
				gotoXY(vtX + 2, vtY + j * 2);
				cout << billofEm.data[j + Pos].billPro->invoiceCode;
				gotoXY(vtX + 26, vtY + j * 2);
				cout << billofEm.data[j + Pos].billPro->date.day << "/" << billofEm.data[j + Pos].billPro->date.month << "/" << billofEm.data[j + Pos].billPro->date.year;
				gotoXY(vtX + 40, vtY + j * 2);
				if (billofEm.data[j + Pos].billPro->type == N) cout << "NHAP";
				else cout << "XUAT";
				gotoXY(vtX + 50, vtY + j * 2);
				cout << billofEm.data[j + Pos].billSpe->itemCode;
				gotoXY(vtX + 72, vtY + j * 2);
				cout << *(billofEm.data[j + Pos].billSpe->name);
				gotoXY(vtX + 106, vtY + j * 2);
				cout << billofEm.data[j + Pos].billSpe->Number;
				gotoXY(vtX + 120, vtY + j * 2);
				cout << billofEm.data[j + Pos].billSpe->Price;
				gotoXY(vtX + 135, vtY + j * 2);
				cout << billofEm.data[j + Pos].billSpe->VAT;
				gotoXY(vtX + 150, vtY + j * 2);
				cout << (size_t)(billofEm.data[j + Pos].billSpe->PriceTo);
			}
			cout << endl;
		}

	}

	system("color F1");
	clrscr();
}

void XuatThongTinNhanVien(ListEmployees quanLy)
{
	Nocursortype();
	int page = 0;
	int Pos = 0;
	int cachTren = 9, cachNgang = 2;
	VeKhungThongTinNhanVien();
	gotoXY(145, 41);
	cout << "TRANG 1";
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	TextColor(241);
	int qua = 26;
	for (int i = Pos, rong = 0, j = 0; i < quanLy.n&&quanLy.arr[i] != NULL && j < 15; i++, j++)
	{
		gotoXY(qua + 11 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(qua + 20 + cachNgang, cachTren + 2 * j + rong);
		cout << quanLy.arr[i]->employeeID;
		gotoXY(qua + 40 + cachNgang, cachTren + 2 * j + rong);
		cout << quanLy.arr[i]->lastName + " " + quanLy.arr[i]->firstName;
		gotoXY(qua + 78 + cachNgang, cachTren + 2 * j + rong);
		cout << quanLy.arr[i]->identity_card;
		gotoXY(qua + 95 + cachNgang, cachTren + 2 * j + rong);
		if (quanLy.arr[i]->sex == NAM) cout << "NAM";
		else cout << "NU";
		gotoXY(qua + 113 + cachNgang, cachTren + 2 * j + rong);
		cout << quanLy.arr[i]->invoiceNumber;

	}
	while (1)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}
		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= quanLy.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(145, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungNhanVien();
			VeKhungThongTinNhanVien();
			for (int i = Pos, rong = 0, j = 0; i < quanLy.n&&quanLy.arr[i] != NULL && j < 15; i++, j++)
			{
				gotoXY(qua + 11 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(qua + 20 + cachNgang, cachTren + 2 * j + rong);
				cout << quanLy.arr[i]->employeeID;
				gotoXY(qua + 40 + cachNgang, cachTren + 2 * j + rong);
				cout << quanLy.arr[i]->lastName + " " + quanLy.arr[i]->firstName;
				gotoXY(qua + 78 + cachNgang, cachTren + 2 * j + rong);
				cout << quanLy.arr[i]->identity_card;
				gotoXY(qua + 95 + cachNgang, cachTren + 2 * j + rong);
				if (quanLy.arr[i]->sex == NAM) cout << "NAM";
				else cout << "NU";
				gotoXY(qua + 113 + cachNgang, cachTren + 2 * j + rong);
				cout << quanLy.arr[i]->invoiceNumber;

			}
		}

	}
}

void Chinh_Sua_Nhan_Vien(ListEmployees list, Employee *&nhanvien)
{
	TextColor(241);
	bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	bool kt = 0;
	bool ktgt = 0;
	bool ktten = 0;
	int Pos = 1;
	int vitri = 120;
	string cmnn = chuyenSoThanhChuoi(nhanvien->identity_card);
	Employee *nv = new Employee;
	int i;

	nv->employeeID = nhanvien->employeeID;
	nv->firstName = nhanvien->firstName;
	nv->lastName = nhanvien->lastName;
	nv->sex = nhanvien->sex;
	nv->invoiceNumber = nhanvien->invoiceNumber;
	gotoXY(vitri, 15);
	cout << "MA NHAN VIEN: " << nv->employeeID;
	gotoXY(vitri, 16);
	cout << "CMNN: " << cmnn;
	gotoXY(vitri, 17);
	cout << "HO: " << nv->lastName;
	gotoXY(vitri, 18);
	cout << "TEN: " << nv->firstName;
	gotoXY(vitri, 19);
	cout << "GIOI TINH: ";
	string gt;
	if (nv->sex == 0)
		gt = "NAM";
	else gt = "NU";
	cout << gt;
	gotoXY(vitri, 20);
	cout << "SO HOA DON: " << nv->invoiceNumber;

	if (nv->firstName.length() > 0) space1 = 1;
	if (nv->lastName.length() > 0) space2 = 1;

	gotoXY(5 + vitri + cmnn.length() + 1, 16);

	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == 72)
			{
				if (Pos == 1)
				{
					gotoXY(10 + vitri + gt.length() + 1, 19);
					Pos = 4;
				}
				else if (Pos == 2)
				{
					gotoXY(5 + vitri + cmnn.length() + 1, 16);

					Pos = 1;
				}
				else if (Pos == 3)
				{
					gotoXY(3 + vitri + nv->lastName.length() + 1, 17);
					Pos = 2;
				}
				else if (Pos == 4)
				{
					gotoXY(4 + vitri + nv->firstName.length() + 1, 18);
					Pos = 3;
				}
			}
			if (k == 80)
			{
				if (Pos == 1)
				{
					gotoXY(3 + vitri + nv->lastName.length() + 1, 17);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(4 + vitri + nv->firstName.length() + 1, 18);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					gotoXY(10 + vitri + gt.length() + 1, 19);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					gotoXY(5 + vitri + cmnn.length() + 1, 16);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// nếu là phím enter
		{
			if (nv->firstName.length() == 0 || nv->lastName.length() == 0 || cmnn.length() == 0 || (gt != "NAM" && gt != "NU") || checkCMDN(list, cmnn))
			{
				TextColor(252);
				gotoXY(125, 24);
				cout << "Du lieu LOI! - Moi Nhap Lai. ";
				getChar();
				gotoXY(125, 24);
				cout << "                                ";
				TextColor(241);
				if (nv->lastName.length() == 0)
				{
					gotoXY(3 + vitri + nv->lastName.length() + 1, 17);
					Pos = 2;
					continue;
				}
				if (nv->firstName.length() == 0)
				{
					gotoXY(4 + vitri + nv->firstName.length() + 1, 18);
					Pos = 3;
					continue;
				}
				if (gt != "NAM" && gt != "NU")
				{
					gotoXY(10 + vitri + gt.length() + 1, 19);
					Pos = 4;
					continue;
				}
				else {
					gotoXY(5 + vitri + cmnn.length() + 1, 16);
					Pos = 1;
					continue;
				}
			}
			else if (kt == 0 && nv->firstName.length() != 0 && nv->lastName.length() != 0 && cmnn.length() != 0 && (gt == "NAM" || gt == "NU"))
			{
				TextColor(252);
				gotoXY(125, 24);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					if (nv->firstName[nv->firstName.length() - 1] == ' ' || nv->firstName[nv->firstName.length() - 1] == '\0')
					{
						nv->firstName.erase(nv->firstName.length() - 1);
					}
					if (nv->lastName[nv->lastName.length() - 1] == ' ' || nv->lastName[nv->lastName.length() - 1] == '\0')
					{
						nv->lastName.erase(nv->lastName.length() - 1);
					}

					nhanvien->firstName = (nv->firstName);
					nhanvien->lastName = (nv->lastName);

					if (gt == "NAM")
						nv->sex = NAM;
					else nv->sex = NU;
					nhanvien->sex = nv->sex;
					nhanvien->identity_card = atoi(cmnn.c_str());
					Nocursortype();
					XoaKhungThaoTac();
					return;
				}
				else
				{
					//Nocursortype();
					TextColor(241);
					gotoXY(125, 24);
					cout << "                                  ";
					gotoXY(3 + vitri + nv->lastName.length() + 1, 17);
					Pos = 1;
					continue;
				}
			}

		}
		else if (k == KEYESC)
		{
			TextColor(252);
			gotoXY(125, 24);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return;
				//break;
			}
			else
			{
				//Nocursortype();
				TextColor(241);
				gotoXY(125, 24);
				cout << "                                  ";
				gotoXY(3 + vitri + nv->lastName.length() + 1, 17);
				Pos = 1;
				continue;
			}
		}
		else
		{
			// nhap ten
			if (Pos == 3) {
				if (k == SPACE)
				{
					if (nv->firstName.length() < 12 && space2 == 1 && nv->firstName[nv->firstName.size() - 1] != ' ')
					{
						nv->firstName.push_back(k);
						space2 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}

				kt = 0;
				if (k == 8 && (nv->firstName.length()) == 0) ktten = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(nv->firstName, k, ktten);
					space2 = 1;
					continue;
				}
				if (nv->firstName.length() < 12)
					XulyNhap_Dulieu(nv->firstName, k, ktten);
				space2 = 1;
			}
			else if (Pos == 2)
			{
				if (k == SPACE)
				{
					if (space1 == 1 && nv->lastName.length() < 20 && nv->lastName[nv->lastName.size() - 1] != ' ')
					{
						nv->lastName.push_back(k);
						cout << k;
						space1 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}

				kt = 0;
				if (k == 8 && nv->lastName.length() == 0)
				{
					kt = 1;
				}
				else if (k == 8) {
					XulyNhap_Dulieu(nv->lastName, k, kt);
					space1 = 1;
					continue;
				}
				if (nv->lastName.size() < 20)
					XulyNhap_Dulieu(nv->lastName, k, kt);
				space1 = 1;
			}
			else if (Pos == 4)
			{
				if (k == 8 && gt.length() == 0) ktgt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(gt, k, ktgt);
					continue;
				}
				if (gt.length() <= 10)
				{
					XulyNhap_Dulieu(gt, k, ktgt);
				}
			}
			else if (Pos == 1)
			{
				if (k == SPACE)
				{
					if (cmnn.length() == 0)
					{
						continue;
					}
					else if (cmnn.length() < 9 && space1 == 1 && cmnn[cmnn.length() - 1] != 9 && cmnn[cmnn.length() - 1] != ' ')
					{
						cmnn.push_back(k);
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && (cmnn.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XuLyNhap_So(cmnn, k, kt);
					continue;
				}
				if (cmnn.length() < 12)
				{
					XuLyNhap_So(cmnn, k, kt);
				}
			}

		}
	}

}

void Them_Nhan_Vien(ListEmployees &nhanvien)
{
	Employee *nv = new Employee;
	nv->employeeID = nhanvien.n + 1;
	nv->identity_card = 0;
	nv->firstName = "";
	nv->lastName = "";
	nv->dshd = NULL;
	nv->invoiceNumber = 0;
	nv->sex = NAM;
	Chinh_Sua_Nhan_Vien(nhanvien, nv);
	if (nv->firstName != "") {
		ThemNhanVienMoi(nhanvien, nv);
	}
	return;
}

Employee* QuanLyNhanVien(ListEmployees& nhanVien, TreeingItem root)
{
	char key[21] = "";
	int size = 0;
	//TAO DANH SACH NHAN VIEN TAM 
	ListEmployees quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 14;
	int disTance = 10;
fly:
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungNhanVien();
	Ve_HOTKEY_NhanVien();


	for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << quanLy.arr[i + Pos]->employeeID;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << quanLy.arr[i + Pos]->lastName + " " + quanLy.arr[i + Pos]->firstName;
		disTance += doDaiTen + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoLuong; h++)
			cout << " ";
		gotoXY(disTance + 10, i + rong);
		cout << quanLy.arr[i + Pos]->identity_card;

		disTance += doDaiSoLuong + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiDonVi; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		if (quanLy.arr[i + Pos]->sex == NAM) {
			cout << "NAM";
			for (h = 3; h < doDaiDonVi; h++)
				cout << " ";
		}
		else {
			cout << "NU";
			for (h = 2; h < doDaiDonVi; h++)
				cout << " ";
		}
		disTance += doDaiDonVi + 1;
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "Tim kiem:";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 40; k++)
			cout << " ";

		gotoXY(15 + size, 9);
		Invicursortype();
		char k = getChar();
		if (k == -32)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (quanLy.arr[Pos + Sta] == NULL) continue;
			TextColor(252);
			gotoXY(20, 7);
			cout << "BAN CO MUON CHINH SUA NHAN VIEN KHONG Y/N: ";
			char x = getChar();
			
			if (x == 'Y' || x == 'y')
			{
				TextColor(241);
				gotoXY(20, 7);
				cout << "                                              ";
				Invicursortype();
				Chinh_Sua_Nhan_Vien(nhanVien, quanLy.arr[Pos + Sta]);
				Nocursortype();
				XoaKhungThaoTac();
			}
			else
			{
				Nocursortype();
				TextColor(241);
				gotoXY(20, 7);
				cout << "                                              ";
				if (x == -32 || x == 0)
				{
					k = _getch();
				}
			}
		}
		else if (k == KEYESC) return NULL;
		else if (k == 0)
		{
			k = getChar();
			// XOA NHAN VIEN
			if (k == KEYF3)
			{
				if (quanLy.arr[Pos + Sta] == NULL) continue;
				if ( quanLy.arr[Pos + Sta]->dshd != NULL){
					gotoXY(20, 7);
					TextColor(252);
					cout << "KHONG DUOC PHEP XOA NHAN VIEN NAY";
					Sleep(1000);
					gotoXY(20, 7);
					cout << "                                    ";
					TextColor(241);
					continue;
				}
				char select;
				gotoXY(20, 7);
				TextColor(252);
				cout << "BAN CO MUON XOA NHAN VIEN NAY KHONG ? Y/N";
				select = getChar();
				if (select == -32 || select == 0)
				{
					select = _getch();
				}
				if (select == 'Y' || select == 'y')
				{
					Nocursortype();
					gotoXY(20, 7);
					cout << "                                                ";
					XoaNhanVien(nhanVien, quanLy.arr[Pos + Sta]->employeeID);
					TextColor(241);
					XoaTrongKhungVatTu();
				}
				else
				{

					Nocursortype();
					TextColor(241);
					gotoXY(20, 7);
					cout << "                                                ";
					continue;
				}
			}
			//THONG TIN NHAN VIEN
			if (k == KEYF4) {
				clrscr();
				system("color F1");
				InsertionSortNhanVien(nhanVien);
				XuatThongTinNhanVien(nhanVien);
				clrscr();
				system("color F1");
				VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}
				Ve_HOTKEY_NhanVien();
				VeKhungNhanVien();
			}
			// THEM NHAN VIEN
			else if (k == KEYF5)
			{
				Invicursortype();
				TextColor(252);
				gotoXY(20, 7);
				cout << "BAN CO MUON THEM NHAN VIEN NAY KHONG ? Y/N: ";
				int select = getChar();
				if (select == -32 || select == 0)
				{
					select = _getch();
				}
				if (select == 'Y' || select == 'y')
				{
					gotoXY(20, 7);
					cout << "                                            ";
					Them_Nhan_Vien(nhanVien);
					Nocursortype();
					XoaKhungThaoTac();
					TextColor(241);
				}
				else
				{

					TextColor(241);
					Nocursortype();
					gotoXY(20, 7);
					cout << "                                            ";
					continue;
				}

			}
			else
				continue;
		}
		else
		{
			char f = k;
			Nocursortype();
			if (f == KEYBACK)
			{
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 10; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();

			}
			else if (f == KEYESC) return NULL;
			else if ((f < 58 && f>47)) {
				if (size == 20) continue;
				if (f >= 'a' && f < 'z')
				{
					f = char(f - 32);
				}
				key[size++] = f;
				key[size] = '\0';
				gotoXY(15, 9);
				cout << key;
				for (int k = strlen(key); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();

			}
		}
		quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
		InsertionSortNhanVien(quanLy);
		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 10; k++)
			cout << " ";
		if (Sta == -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta == quanLy.n)
		{
			Sta -= 1;
		}
		else if (Sta == y) {
			Sta = y - 1;
			Pos++;
		}
		if (Pos == -1) Pos = 0;
		else if (quanLy.n < y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;

		for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << quanLy.arr[i + Pos]->employeeID;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << quanLy.arr[i + Pos]->lastName + " " + quanLy.arr[i + Pos]->firstName;
			disTance += doDaiTen + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoLuong; h++)
				cout << " ";
			gotoXY(disTance + 10, i + rong);
			cout << quanLy.arr[i + Pos]->identity_card;

			disTance += doDaiSoLuong + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiDonVi; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			if (quanLy.arr[i + Pos]->sex == NAM) {
				cout << "NAM";
				for (h = 3; h < doDaiDonVi; h++)
					cout << " ";
			}
			else {
				cout << "NU";
				for (h = 2; h < doDaiDonVi; h++)
					cout << " ";
			}
			disTance += doDaiDonVi + 1;
		}

		TextColor(241);
	}
}

void LietKeHoaDon_1_NhanVien(ListEmployees& nhanVien, TreeingItem root) {
	char key[21] = "";
	int size = 0;
	ListEmployees quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiTen = 44;
	int doDaiSoLuong = 27;
	int doDaiDonVi = 20;
	int disTance = 10;
fly:
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhung_LietKeHoaDon_NhanVien();

	for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << quanLy.arr[i + Pos]->employeeID;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << quanLy.arr[i + Pos]->lastName + " " + quanLy.arr[i + Pos]->firstName;
		disTance += doDaiTen + 1;
		// phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoLuong; h++)
			cout << " ";
		gotoXY(disTance + 10, i + rong);

		if (quanLy.arr[i + Pos]->sex == NAM) {
			cout << "NAM";
		}
		else {
			cout << "NU";
		}

		disTance += doDaiSoLuong + 1;
		//sl hoa don
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiDonVi; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		cout << quanLy.arr[i + Pos]->invoiceNumber;
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "Tim kiem:";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 40; k++)
			cout << " ";

		gotoXY(15 + size, 9);
		Invicursortype();
		char k = getChar();
		if (k == -32)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (quanLy.arr[Sta + Pos]->dshd == NULL) continue;
			TextColor(252);
			gotoXY(20, 7);
			cout << "BAN CO MUON IN HOA DON NHAN VIEN NAY KHONG Y/N: ";
			char select = getChar();
			if (select == 89 || select == 121)
			{
				InHoaDon_1_NhanVien(quanLy.arr[Sta + Pos]);
				VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhung_LietKeHoaDon_NhanVien();
			}

		}
		else if (k == KEYESC) return;
		else if (k == 0)
		{
			k = getChar();
			// TAO HOA DON
			if (k == KEYF5)
			{
				if (quanLy.arr[Pos + Sta] == NULL) continue;
				TextColor(252);
				gotoXY(20, 7);
				cout << "BAN CO MUON TAO HOA DON CHO NHAN VIEN NAY KHONG Y/N: ";
				char select = getChar();
				if (select == -32 || select == 0)
				{
					select = _getch();
				}
				Nocursortype();
				if (select == 89 || select == 121)
				{
					/* ================= TAO HOA DON CHO NHAN VIEN ================= */
					gotoXY(20, 7);
					cout << "                                                     ";
					Invicursortype();
					NodeBill* bill = new NodeBill;
					bill = NhapTao_HoaDon(bill, nhanVien, root);
					if (bill != NULL)
					{
						Them_HoaDon_Vao_Cuoi_NhanVien(quanLy.arr[Pos + Sta]->dshd, bill);
						ThayDoiDuLieu(root, bill->data);
						quanLy.arr[Pos + Sta]->invoiceNumber++;
						TextColor(241);
						Nocursortype();
						goto fly;
					}
					else
					{
						Nocursortype();
						TextColor(241);
						gotoXY(20, 7);
						cout << "                                                     ";
						XoaKhungThaoTac();
						gotoXY(16 + size, 4);
						goto fly;
						continue;
					}
				}
				else
				{
					Nocursortype();
					TextColor(241);
					gotoXY(20, 7);
					cout << "                                                     ";
					gotoXY(16 + size, 4);
					continue;
				}


			}
			else
				continue;
		}
		else
		{
			char f = k;
			Nocursortype();
			if (f == KEYBACK)
			{
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 10; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();

			}
			else if (f == KEYESC) return;
			else if ((f < 58 && f>47) || (f > 64 && f < 91) || (f > 96 && f < 123)) {
				if (size == 20) continue;
				if (f >= 'a' && f < 'z')
				{
					f = char(f - 32);
				}
				key[size++] = f;
				key[size] = '\0';
				gotoXY(15, 9);
				cout << key;
				for (int k = strlen(key); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungVatTu();

			}
		}
		quanLy = DanhSachNhanVienTimTheoMa(nhanVien, key, size);
		InsertionSortNhanVien(quanLy);
		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 10; k++)
			cout << " ";
		if (Sta == -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta == quanLy.n)
		{
			Sta -= 1;
		}
		else if (Sta == y) {
			Sta = y - 1;
			Pos++;
		}
		if (Pos == -1) Pos = 0;
		else if (quanLy.n < y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;


		for (int i = 0, rong = 13; i < y && i < quanLy.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << quanLy.arr[i + Pos]->employeeID;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << quanLy.arr[i + Pos]->lastName + " " + quanLy.arr[i + Pos]->firstName;
			disTance += doDaiTen + 1;
			// phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoLuong; h++)
				cout << " ";
			gotoXY(disTance + 10, i + rong);

			if (quanLy.arr[i + Pos]->sex == NAM) {
				cout << "NAM";
			}
			else {
				cout << "NU";
			}

			disTance += doDaiSoLuong + 1;
			//sl hoa don
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiDonVi; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			cout << quanLy.arr[i + Pos]->invoiceNumber;
		}

		TextColor(241);
	}
}

/* ============================== DOANH THU HANG THANG ================================*/

void DoanhThuHangThang_1_Nam(ListEmployees quanLy) {
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	VeKhungCH(30, 5, 110, 30, TRUE, BLUE);
	TextColor(25);
	for (int i = 30; i < 140; i++)
	{
		gotoXY(i, 9);
		cout << " ";
	}
	//6 thanh doc
	TextColor(25);
	for (int i = 6; i < 35; i++)
	{
		gotoXY(60, i);
		cout << "  ";
	}
	TextColor(241);
	gotoXY(40, 7);
	cout << "THANG";
	gotoXY(100, 7);
	cout << "DOANH THU";
	gotoXY(60, 3);
	cout << " BANG THONG KE DOANH THU NAM ";
	int year_Int;
	string key = "";
	int size = 0;
	Invicursortype();
	while (true)
	{
		gotoXY(89 + key.size(), 3);
		char k = getChar();
		if (k == -32 || k == 0)
			continue;
		else if (k == KEYENTER) {
			if (size == 4)break;
		}
		else if (k == KEYESC) return;
		else
		{
			char f = k;
			if (f == KEYBACK)
			{
				if (size == 0) continue;
				--size;
				key.erase(key.size() - 1);
				gotoXY(89, 3);
				cout << key;
				for (int k = key.size(); k < 5; k++)
					cout << " ";
				gotoXY(89 + key.size(), 3);
			}
			else if (f == KEYESC) return;
			else if ((f < 59 && f>47)) {
				if (size == 4) break;
				key.push_back(f);
				size++;
				gotoXY(89, 3);
				cout << key;
				for (int k = key.size(); k < 5; k++)
					cout << " ";
				gotoXY(89 + key.size(), 3);
			}
		}
	}
	Nocursortype();
	year_Int = atoi(key.c_str());
	// Chon nam de in doanh thu
	int *doanhthu = DoanhThu(quanLy, year_Int);
	for (int i = 0; i < 12; i++)
	{
		gotoXY(40, 11 + i * 2);
		cout << "THANG " << i + 1;
		gotoXY(100, 11 + i * 2);
		cout << doanhthu[i];
	}
	_getch();
	delete doanhthu;
}

/* ============================== TRA HANG ================================*/

ReturnedItem return_item(NodeBill* bill)
{
	//==============================================================================================================================//
	system("cls");
	system("color f1");
	Nocursortype();
	int stt = 5;
	int ma = 12;
	int ten = 37;
	int sl = 11;
	int gt = 24;
	int vat = 5;
	int gia = 23;
	int Pos = 0;
	int PosW = 0;
	char key[21];
	ReturnedItem item;
	NodeTree* temp = NULL;
	CT_BILL *ct_bi[20] = { NULL };
	int length = 0;
	for (int i = 0;i < bill->data.numberOfBill;i++) {
		if (bill->data.cthd[i].status == 0)
			continue;
		ct_bi[length++] = &bill->data.cthd[i];
	}
fly1:
	gotoXY(60, 2);
	cout << "HOA DON " << bill->data.invoiceCode;
	gotoXY(4, 7);
	cout << "NGAY LAP: ";
	gotoXY(14, 7);
	cout << bill->data.date.day << "/" << bill->data.date.month << "/" << bill->data.date.year;
	gotoXY(110, 7);
	if (bill->data.type == N) cout << "HOA DON NHAP";
	else cout << "HOA DON XUAT";
	gotoXY(20, 3);
	cout << "SO LUONG VAT TU: " << length;
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(125, i);
		cout << "  ";
	}

	VeKhungLapHoaDon();
	Ve_HOTKEY_ThucHienTraHang();
	int kc = 11;
	for (int i = 0; i < length; i++)
	{
		int vt = 2;
		if (i == Pos)
			TextColor(112);
		else
			TextColor(241);


		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + stt; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 2, kc + i);
		cout << i + 1;
		vt += stt + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + ma; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 1, kc + i);
		cout << bill->data.cthd[i].itemCode;
		vt += ma + 1;
		gotoXY(vt, kc + i);

		for (int i = vt; i < vt + ten; i++)
		{
			cout << " ";
		}

		gotoXY(vt + 10, kc + i);
		cout << *bill->data.cthd[i].name;
		vt += ten + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + sl; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 5, kc + i);
		cout << bill->data.cthd[i].Number;
		vt += sl + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + vat; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 1, kc + i);
		cout << bill->data.cthd[i].VAT;
		vt += vat + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + gia; i++)
		{
			cout << " ";
		}
		gotoXY(vt, kc + i);
		cout << bill->data.cthd[i].Price;
		vt += gia + 1;
		gotoXY(vt, kc + i);
		for (int i = vt; i < vt + gt; i++)
		{
			cout << " ";
		}
		gotoXY(vt + 2, kc + i);
		cout << bill->data.cthd[i].PriceTo;
		int leg = 0, gia = bill->data.cthd[i].PriceTo;
		while (gia > 0) {
			gia /= 10;
			leg++;
		}
	}
	while (true)
	{
		TextColor(241);
		gotoXY(103, 35);
		cout << "                 ";
		TextColor(252);
		gotoXY(90, 35);
		cout << "TONG TIEN:    " << (size_t)bill->data.UnitPrice << " VND";
		char k = getChar();
		TextColor(241);
		if (k == KEYENTER)
		{
			TextColor(252);
			gotoXY(30, 7);
			cout << "BAN CO MUON LUU DU LIEU KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				//bill->data.UnitPrice = TongTien(bill->data);
				gotoXY(15, 28);
				cout << "                                    ";
				system("cls");
				//Xuat_1_HoaDon(bill->data);
				return item;
			}
			else {
				TextColor(241);
				gotoXY(30, 7);
				cout << "                                    ";
			}
		}
		else if (k == KEYESC)
		{
			TextColor(252);

			gotoXY(30, 7);
			cout << "THOAT SE MAT HET DU LIEU! BAN CO MUON THOAT KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				system("cls");
				gotoXY(30, 7);
				cout << "                                                           ";
				item.length = 0;
				return item;
			}
			else {
				TextColor(241);
				gotoXY(30, 7);
				cout << "                                                           ";
			}

		}
		else if (k == -32)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (length == 0)
				{
					continue;
				}
				Pos--;
				if (Pos < 0) Pos = length - 1;
				else if (Pos >= length) Pos = 0;

			}
			else if (k == KEYDOWN)
			{
				if (length == 0)
				{
					continue;
				}
				Pos++;
				if (Pos < 0) Pos == length - 1;

				else if (Pos >= length) Pos = 0;
			}
			else
			{
				continue;
			}
		}
		else if (k == 0)
		{
			k = _getch();
			//xoa vat tu trong hoa don
			if (k == KEYF3 && length > 0)
			{
				TextColor(252);
				gotoXY(30, 7);
				cout << "BAN CO MUON TRA VAT TU NAY KHONG? Y/N: ";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{

					TextColor(241);
					item.cthd[item.length++] = ct_bi[Pos];
					for (int i = Pos; i < length - 1; i++)
						ct_bi[i] = ct_bi[i + 1];
					length--;

					TextColor(241);
					Xoa_Khung_Xoa_Vat_Tu_Trong_HoaDon();
					VeKhungLapHoaDon();
					gotoXY(30, 7);
					cout << "                                              ";
					if (Pos == length) Pos = length - 1;
				}
				else {
					Nocursortype();
					TextColor(241);
					gotoXY(30, 7);
					cout << "                                              ";
					continue;
				}


			}
			else
			{
				continue;
			}
		}
		else
		{
			continue;
		}
		kc = 11;
		int vt = 2;
		for (int i = 0; i < length; i++)
		{
			vt = 2;
			if (i == Pos)
				TextColor(112);
			else
				TextColor(241);


			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + stt; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 2, kc + i);
			cout << i + 1;
			vt += stt + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + ma; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 1, kc + i);
			cout << ct_bi[i]->itemCode;
			vt += ma + 1;
			gotoXY(vt, kc + i);

			for (int i = vt; i < vt + ten; i++)
			{
				cout << " ";
			}

			gotoXY(vt + 10, kc + i);
			cout << *ct_bi[i]->name;
			vt += ten + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + sl; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 5, kc + i);
			cout << ct_bi[i]->Number;
			vt += sl + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + vat; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 1, kc + i);
			cout << ct_bi[i]->VAT;
			vt += vat + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + gia; i++)
			{
				cout << " ";
			}
			gotoXY(vt, kc + i);
			cout << ct_bi[i]->Price;
			vt += gia + 1;
			gotoXY(vt, kc + i);
			for (int i = vt; i < vt + gt; i++)
			{
				cout << " ";
			}
			gotoXY(vt + 2, kc + i);
			cout << ct_bi[i]->PriceTo;
			int leg = 0, gia = ct_bi[i]->PriceTo;
			while (gia > 0) {
				gia /= 10;
				leg++;
			}
		}
		TextColor(241);
	}
}
//Cac don duoc tra la khong qua 3 ngay va thuoc hoa don xuat.
NodeBill* TraHang(TreeingItem root, ListEmployees l)
{
	char key[21] = "";
	int size = 0;
	searchBill quanLy = KhoiTaoDanhSachTuyenTinhListBill(l, key, size);
	SortBill(quanLy);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 23;
	int doDaiNgay = 39;
	int doDaiLoai = 28;
	int doDaiTongTien = 20;
	int disTance = 32;
	clrscr();
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	VeKhungDS_HoaDon();
	Ve_HOTKEY_TraHang();
	for (int i = 0, rong = 7; i < y&&i < quanLy.n; i++)
	{
		disTance = 32;
		if (Sta == i) TextColor(112);
		else TextColor(241);
		gotoXY(disTance, 6 + i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 2, 6 + i + rong);
		cout << quanLy.arr[i + Pos]->data.invoiceCode;

		disTance += doDaiMa + 1;
		gotoXY(disTance, 6 + i + rong);
		h = 0;
		for (; h < doDaiNgay; h++)
			cout << " ";
		gotoXY(disTance + 10, 6 + i + rong);
		Out_Date(quanLy.arr[i + Pos]->data.date);

		disTance += doDaiNgay + 1;
		gotoXY(disTance, 6 + i + rong);
		for (h = 1; h < doDaiLoai; h++)
			cout << " ";
		gotoXY(disTance + 10, 6 + i + rong);
		if (quanLy.arr[i + Pos]->data.type == X)
			cout << "XUAT";
		else
			cout << "NHAP";

		disTance += doDaiLoai;
		gotoXY(disTance, 6 + i + rong);
		for (int h = 0; h < doDaiTongTien; h++)
			cout << " ";
		gotoXY(disTance + 3, 6 + i + rong);
		unsigned int f = quanLy.arr[i + Pos]->data.UnitPrice;
		cout << f;
		int e = 0;
		while (f > 0)
		{
			e++;
			f /= 10;
		}

	}
	TextColor(241);
	while (true)
	{
		gotoXY(33, 9);
		cout << "Tim kiem:";
		gotoXY(42, 9);
		cout << key;
		for (int k = strlen(key); k < 40; k++)
			cout << " ";
		Invicursortype();
		gotoXY(42 + size, 9);
		char k = getChar();
		if (k == -32 || k == 0)
		{
			Nocursortype();
			k = getChar();
			if (k == KEYUP)
			{
				Nocursortype();
				Sta--;
			}
			else if (k == KEYDOWN) {
				Nocursortype();
				Sta++;
			}
			// THONG TIN HOA DON
			else if (k == KEYF2) {
				Xuat_1_HoaDon(quanLy.arr[Pos + Sta]->data);
				_getch();
				clrscr();
				system("color F1");
				VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
				VeKhungDS_HoaDon();
				Ve_HOTKEY_TraHang();
			}
		}
		else if (k == KEYENTER) {
			time_t baygio = time(0);
			tm* ltm = localtime(&baygio);
			C_DATE date;
			date.day = ltm->tm_mday;
			date.month = 1 + ltm->tm_mon;
			date.year = 1900 + ltm->tm_year;
			
			if (QuyChuanTinhThoiGian(date) - QuyChuanTinhThoiGian(quanLy.arr[Pos + Sta]->data.date) > 3 || quanLy.arr[Pos + Sta]->data.type == N) { 
				TextColor(252);
				gotoXY(55, 7);
				cout << "KHONG DUOC PHEP TRA HANG";
				Sleep(1000);
				gotoXY(55, 7);
				cout << "                                     ";
				TextColor(241);
				continue; 
			}
			
			TextColor(252);
			gotoXY(55, 7);
			cout << "BAN CO MUON TRA HANG HAY KHONG? Y/N: ";
			char chon = getChar();
			if(chon != 'Y'){
				gotoXY(55, 7);
				cout << "                                     ";
				TextColor(241);	
				continue;
			}
			TextColor(241);	
			

			//Cac don duoc tra la khong qua 3 ngay va thuoc hoa don xuat.
			if (quanLy.arr[Pos + Sta] != NULL) {
				ReturnedItem item = return_item(quanLy.arr[Pos + Sta]);
				if (item.length != 0)
					returnItem(root, item);
			}
			Xuat_1_HoaDon(quanLy.arr[Pos + Sta]->data);
			_getch();
			clrscr();
			system("color F1");
			VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
			VeKhungDS_HoaDon();
			Ve_HOTKEY_TraHang();
		}
		else if (k == KEYESC) return NULL;
		else
		{
			Nocursortype();
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(42, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				cout << key;
				for (int k = strlen(key); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungDS_HoaDon();
				VeKhungDS_HoaDon();
			}
			else if (f == KEYESC) return NULL;
			else if ((f < 59 && f>47) || (f > 64 && f < 91) || (f >= 'a' && f < 'z')) {
				if (size == 20) continue;
				if ((f >= 'a' && f < 'z'))
				{
					f = char(f - 32);
				}
				key[size++] = f;
				key[size] = '\0';
				gotoXY(42, 9);
				cout << key;
				//TextColor(13);
				for (int k = strlen(key); k < 40; k++)
					cout << " ";
				Sta = 0;
				Pos = 0;
				XoaTrongKhungDS_HoaDon();
				VeKhungDS_HoaDon();
			}
		}
		quanLy = KhoiTaoDanhSachTuyenTinhListBill(l, key, size);
		SortBill(quanLy);
		if (Sta == -1) {
			Sta = 0;
			Pos--;
			//continue;
		}
		else if (Sta == quanLy.n)
		{
			Sta -= 1;
			continue;
		}
		else if (Sta == y) {
			Sta = y - 1;
			Pos++;
		}
		if (Pos == -1) Pos = 0;
		else if (quanLy.n < y) Pos = 0;
		else if (Pos + y >= quanLy.n) Pos = quanLy.n - y;
		for (int i = 0, rong = 7; i < y&&i < quanLy.n; i++)
		{
			disTance = 32;
			if (Sta == i) TextColor(112);
			else TextColor(241);
			gotoXY(disTance, 6 + i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 2, 6 + i + rong);
			cout << quanLy.arr[i + Pos]->data.invoiceCode;

			disTance += doDaiMa + 1;
			gotoXY(disTance, 6 + i + rong);
			h = 0;
			for (; h < doDaiNgay; h++)
				cout << " ";
			gotoXY(disTance + 10, 6 + i + rong);
			Out_Date(quanLy.arr[i + Pos]->data.date);

			disTance += doDaiNgay + 1;
			gotoXY(disTance, 6 + i + rong);
			for (h = 1; h < doDaiLoai; h++)
				cout << " ";
			gotoXY(disTance + 10, 6 + i + rong);
			if (quanLy.arr[i + Pos]->data.type == X)
				cout << "XUAT";
			else
				cout << "NHAP";

			disTance += doDaiLoai;
			gotoXY(disTance, 6 + i + rong);
			for (int h = 0; h < doDaiTongTien; h++)
				cout << " ";
			gotoXY(disTance + 3, 6 + i + rong);
			unsigned int f = quanLy.arr[i + Pos]->data.UnitPrice;
			cout << f;
			int e = 0;
			while (f > 0)
			{
				e++;
				f /= 10;
			}

		}
		TextColor(241);
	}

}

/* ============================== MENU LUA CHON ================================*/

int MenuChonLua(int a)
{
	clrscr();
	TextColor(252);
	gotoXY(70, 2);
	cout << "DE TAI QUAN LY VAT TU 2020";
	VeKhungCH(0, 0, 170, 44, TRUE, BLUE);
	TextColor(241);
	int vtX = 60, vtY = 5;
	int vtTitle = 75;
	int Pos = a, width = 50;
	int kc = 3;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY VAT TU";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}

	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY NHAN VIEN";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "NHAP XUAT HOA DON";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY HOA DON";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle - 1, vtY + 1);
	cout << "LIET KE HOA DON NHAN VIEN";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "DOANH THU HANG NAM";
	vtY += 5;
	for (int i = 0; i < kc; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "THOAT";

	// to dau tien
	vtY = 5;
	if (Pos == 1)
	{
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY VAT TU";
	}
	else if (Pos == 2)
	{
		vtY = 10;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY NHAN VIEN";

	}
	else if (Pos == 3)
	{
		vtY = 15;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "NHAP XUAT HOA DON";
	}
	else if (Pos == 4)
	{
		vtY = 20;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "TRA HANG";
	}
	else if (Pos == 5)
	{
		vtY = 25;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";

		}
		gotoXY(vtTitle, vtY + 1);
		cout << "LIET KE HOA DON NHAN VIEN";
	}
	else if (Pos == 6)
	{
		vtY = 30;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "DOANH THU HANG NAM";
	}
	else if (Pos == 7)
	{
		vtY = 35;
		TextColor(143);
		for (int i = 0; i < kc; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                                  ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "THOAT";
	}

	while (true)
	{
		Invicursortype();
		char temp = _getch();
		if (temp == -32)
		{
			temp = _getch();
			TextColor(241);
			if (temp == KEYUP)
			{
				if (Pos == 1)
				{
					vtY = 5;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY VAT TU";
					Pos = 7;
				}
				else if (Pos == 2)
				{
					vtY = 10;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY NHAN VIEN";
					Pos = 1;
				}
				else if (Pos == 3)
				{
					vtY = 15;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "NHAP XUAT HOA DON";
					Pos = 2;
				}
				else if (Pos == 4)
				{
					vtY = 20;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "TRA HANG";
					Pos = 3;
				}
				else if (Pos == 5)
				{
					vtY = 25;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";

					}
					gotoXY(vtTitle, vtY + 1);
					cout << "LIET KE HOA DON NHAN VIEN";
					Pos = 4;
				}
				else if (Pos == 6)
				{
					vtY = 30;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "DOANH THU HANG NAM";
					Pos = 5;
				}
				else if (Pos == 7)
				{
					vtY = 35;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "THOAT";
					Pos = 6;
				}
			}
			else if (temp == KEYDOWN)
			{
				if (Pos == 1)
				{
					vtY = 5;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY VAT TU";
					Pos = 2;
				}
				else if (Pos == 2)
				{
					vtY = 10;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY NHAN VIEN";
					Pos = 3;
				}
				else if (Pos == 3)
				{
					vtY = 15;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "NHAP XUAT HOA DON";
					Pos = 4;
				}
				else if (Pos == 4)
				{
					vtY = 20;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "TRA HANG";
					Pos = 5;
				}
				else if (Pos == 5)
				{
					vtY = 25;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";

					}
					gotoXY(vtTitle, vtY + 1);
					cout << "LIET KE HOA DON NHAN VIEN";
					Pos = 6;
				}
				else if (Pos == 6)
				{
					vtY = 30;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "DOANH THU HANG NAM";
					Pos = 7;
				}
				else if (Pos == 7)
				{
					vtY = 35;
					TextColor(113);
					for (int i = 0; i < kc; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                                  ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "THOAT";
					Pos = 1;
				}
			}

			if (Pos == 1)
			{
				vtY = 5;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY VAT TU";
			}
			else if (Pos == 2)
			{
				vtY = 10;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY NHAN VIEN";

			}
			else if (Pos == 3)
			{
				vtY = 15;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "NHAP XUAT HOA DON";
			}
			else if (Pos == 4)
			{
				vtY = 20;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "TRA HANG";
			}
			else if (Pos == 5)
			{
				vtY = 25;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";

				}
				gotoXY(vtTitle, vtY + 1);
				cout << "LIET KE HOA DON NHAN VIEN";
			}
			else if (Pos == 6)
			{
				vtY = 30;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "DOANH THU HANG NAM";
			}
			else if (Pos == 7)
			{
				vtY = 35;
				TextColor(143);
				for (int i = 0; i < kc; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                                  ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "THOAT";
			}
		}
		if (temp == KEYENTER)
		{
			//			Beep(600, 60);
			TextColor(241);
			return Pos;
		}
	}

	//XoaLogo1(90, 10);
}

void menuDoHoa(TreeingItem &vatTuDangCay, ListEmployees &nhanVien)
{
	system("color F1");
	int a = 1;
	while (1)
	{

		Nocursortype();
		int i = MenuChonLua(a);
		if (i == 1)
		{
			clrscr();
			NodeTree* node = QuanLyVatTu(vatTuDangCay, nhanVien);
			system("color F1");
			clrscr();
			a = i;
		}
		else if (i == 2)
		{
			clrscr();
			system("color F1");
			SortNhanVien(nhanVien);
			QuanLyNhanVien(nhanVien, vatTuDangCay);
			system("color F1");
			clrscr();
			a = i;
		}
		else if (i == 3)
		{
			clrscr();
			system("color F1");
			QuanLyHoaDon(nhanVien, vatTuDangCay);
			//InHoaDon_1_NhanVien(nhanVien, list);
			clrscr();
			system("color F1");
			a = i;
		}
		else if (i == 4)
		{
			clrscr();
			system("color F1");
			TraHang(vatTuDangCay, nhanVien);
			clrscr();
			system("color F1");
			a = i;
		}
		else if (i == 5)
		{
			clrscr();
			system("color F1");
			LietKeHoaDon_1_NhanVien(nhanVien, vatTuDangCay);
			clrscr();
			system("color F1");
			a = i;

		}
		else if (i == 6)
		{
			clrscr();
			system("color F1");
			DoanhThuHangThang_1_Nam(nhanVien);
			a = i;
			clrscr();
			system("color F1");
		}
		else if (i == 7)
		{

			break;
		}

	}
}

