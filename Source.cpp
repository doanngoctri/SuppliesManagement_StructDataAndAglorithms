#include "DoHoa.h"
using namespace std;
void DonDuLieuRam(TreeingItem &root, ListEmployees &quanLy,ListBill &l)
{
	DeleteTree(root);
	XoaNhanVien(quanLy);
	XoaDanhSachLienKet(l);
}
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
	system("color f1");
	resizeConsole(1290, 768);
	//SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), 3, 0);
	
	//SMALL_RECT windowSize = {0, 0, 100, 100};
    //SetConsoleWindowInfo(hConsole, FALSE, &windowSize);
    //SetConsoleTitle("Quan Ly Vat Tu");
    DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_MAXIMIZE, MF_BYCOMMAND);
	DrawMenuBar(GetConsoleWindow());
	TreeingItem dsvt;
	LinearItem TT_Tree;
	ListEmployees quanLy;
	ListBill dslk;
	// KHOI TAO
	KhoiTaoCay(dsvt);
	KhoiTaoList(dslk);
	KhoiTaoDanhSachTuyenTinhTree(TT_Tree, dsvt);
	// DOC FILE
	DocFileVatTu(dsvt);
	DocHoaDon(dslk,dsvt);
	DocFileNhanVien(quanLy, dslk);
	// SAP XEP 
	SortNhanVien(quanLy);
	InsertionSortTuyenTinhTree(TT_Tree);
	Nocursortype();
	// THUC THI
	menuDoHoa(dsvt, quanLy);
	// GHI FILE
	GhiFileNhanVien(quanLy);
	GhiFileXuatNhap(quanLy);
	GhiFileVatTu(dsvt);
	// DON RAM
	DonDuLieuRam(dsvt, quanLy, dslk);
	gotoXY(50,26);
	return 0;
}

