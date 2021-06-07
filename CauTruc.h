#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <string.h>
#include <fstream>
#include <iostream>
#include <conio.h>
#include "console.h"
#include <ctime>
#include <cmath>
using namespace std;
#define MaxMoi 500

struct vattu {
	int inventoryNumber;// SO LUONG TON
	string name;// TEN VAT TU
	string unit;// DON VI
};
typedef struct vattu Item;

struct NodeTree1 {
	char itemCode[11] = ""; // MA VAT TU
	Item data;
	struct NodeTree1 *pLeft = NULL;
	struct NodeTree1 *pRight = NULL;
};
typedef struct NodeTree1 NodeTree;
typedef NodeTree* TreeingItem;

// MANG CON TRO DUNG DE IN VAT TU RA MAN HINH THUAN LOI
struct linear {
	int n = 0;
	NodeTree *arr[300] = { NULL };
};
typedef struct linear LinearItem;

// LOAI HOA DON N,X
enum TypeOf {
	N, X
};

struct ct_hoadon {
	char itemCode[11]; // MA VAT TU
	int Number = 0; // SO LUONG XUAT, NHAP
	int Price = 0; // GIA
	float VAT = 0.1; 
	int PriceTo = 0; // TONG DON GIA VAT TU
	string *name = NULL; //TEN VAT TU//
	int status = 1;// TRANG THAI
};
typedef struct ct_hoadon CT_BILL;

struct c_date {
	int day;
	int month;
	int year;
};
typedef struct c_date C_DATE;

struct bill {
	char invoiceCode[21]; // MA HOA DON
	C_DATE date;
	TypeOf type;// LOAI
	int numberOfBill;// SO LUONG VAT TU TRONG HOA DON
	CT_BILL *cthd;// CON TRO CHI TIET HOA DON
	double UnitPrice = 0;// TONG TIEN HOA DON
};
typedef struct bill BILL;

struct node {
	BILL data;
	struct node *next;
};
typedef struct node NodeBill;

struct list_hd {
	NodeBill *pHead;
	NodeBill *pTail;
};
typedef struct list_hd ListBill;

// MANG CON TRO DE XU LY IN MAN HINH HOA DON
struct searchBill {
	int n = 0;
	NodeBill *arr[300] = { NULL };
};
typedef struct searchBill SearchBill;


enum Sex {
	NAM, NU
};

struct employee {
	int employeeID; // MA NHAN VIEN
	string lastName; // TEN
	string firstName; // HO
	NodeBill* dshd = NULL; // CON TRO HOA DON
	Sex sex;// gioi tinh
	int invoiceNumber;// SO LUONG HOA DON 1 NHAN VIEN
	int identity_card; // CMNN
};
typedef struct employee Employee;

// MANG CON TRO NHAN VIEN
struct Employees {
	int n = 0;
	Employee *arr[MaxMoi] = { NULL };
};
typedef struct Employees ListEmployees;

// CAU TRUC DE TRA VE DOANH THU HANG THANG
struct returnItem {
	CT_BILL *cthd[20];
	int length = 0;
};
typedef struct returnItem ReturnedItem;

// CAU TRUC DE XU LY IN CAC HOA DON CUA 1 NHAN VIEN TRONG KHOANG THOI GIAN
struct billarr {
	BILL *billPro;// IN THUOC TIN TRONG HOA DON
	CT_BILL *billSpe; // IN THUOC TIN TRONG CHI TIET HOA DON
};
typedef struct billarr BillArr;

// MANG TUYEN TINH XU LY CHUA 1 RECORD TRONG 1 HOA DON
struct billOfEm {
	BillArr data[100];
	int length = 0;
};
typedef struct billOfEm BillOfEm;

NodeBill * KhoiTaoNodeHoaDon(BILL hoadon)
{
	NodeBill *tam = new NodeBill;
	tam->data = hoadon;
	tam->next = NULL;
	return tam;
}

void KhoiTaoList(ListBill &l)
{
	l.pHead = NULL;
	l.pTail = NULL;
}

NodeTree* KhoiTaoNodeTree(Item n, char key[])
{
	NodeTree *g = new NodeTree;
	int i = 0;
	for (; i < strlen(key); i++)
		g->itemCode[i] = key[i];
	g->itemCode[i] = '\0';
	g->data = n;
	g->pLeft = NULL;
	g->pRight = NULL;
	return g;
}

void KhoiTaoDanhSachTuyenTinhTree(LinearItem &quanLyTuyenTinh, TreeingItem root)
{
	if (root == NULL) return;
	else {
		quanLyTuyenTinh.arr[quanLyTuyenTinh.n++] = root;
		KhoiTaoDanhSachTuyenTinhTree(quanLyTuyenTinh, root->pLeft);
		KhoiTaoDanhSachTuyenTinhTree(quanLyTuyenTinh, root->pRight);
	}
}

void KhoiTaoCay(TreeingItem &t)
{
	t = NULL;
}
