#include "CauTruc.h"
#pragma warning(disable : 4996)

/* ============================== CHUAN HOA DU LIEU ================================*/

string chuyenSoThanhChuoi(int a)
{
	if (a == 0)
	{
		return "";
	}
	string res = "";
	while (a > 0)
	{
		res.insert(res.begin(), a % 10 + '0');
		a /= 10;
	}
	return res;
}

bool checkCMDN(ListEmployees& nhanvien, string cmnd) {
	int c = atoi(cmnd.c_str());
	for (int i = 0; i < nhanvien.n; i++) {
		if (c == nhanvien.arr[i]->identity_card)
			return true;
	}
	return false;
}

char getChar()
{
	char k = getch();
	if (k <= 'z' && k >= 'a') k -= ('a' - 'A');
	return k;
}

bool IsInNumber(int number1, string num2) {
	string num1 = chuyenSoThanhChuoi(number1);
	//string num2 = to_string(number2);
	return num1.find(num2) != -1 ? TRUE : FALSE;
}

string convertToString(char* a, int size)
{
	int i;
	string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}

/* ============================== THAO TAC THEM SUA XOA CAY ================================*/

NodeTree* TimNodeItemTrongTree(TreeingItem& root, char n[])
{
	NodeTree* p = root;
	if (root == NULL) return NULL;
	else {
		if (strcmp(root->itemCode, n) == 1)
			TimNodeItemTrongTree(root->pLeft, n);
		else if (strcmp(root->itemCode, n) == -1)
			TimNodeItemTrongTree(root->pRight, n);
		else if (strcmp(root->itemCode, n) == 0)
			return p;
	}
}

int ThemNodeItemVaoTree(TreeingItem &root, NodeTree* vattu)
{
	if (root == NULL) {
		root = vattu;
		return 1;
	}
	if (strcmp(vattu->itemCode, root->itemCode) == 1)
		ThemNodeItemVaoTree(root->pRight, vattu);
	else if (strcmp(vattu->itemCode, root->itemCode) == -1)
		ThemNodeItemVaoTree(root->pLeft, vattu);
	else
		return 0;
}

void DeleteTree(TreeingItem &root)
{
	if (root == NULL) return;
	else {
		DeleteTree(root->pLeft);
		DeleteTree(root->pRight);
		delete root;
		root = NULL;
	}
}

void InsertionSortTuyenTinhTree(LinearItem &quanLyTuyenTinh)
{
	NodeTree * a = NULL;
	for (int i = 1; i < quanLyTuyenTinh.n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (quanLyTuyenTinh.arr[j - 1]->data.name > quanLyTuyenTinh.arr[j]->data.name)
			{
				a = quanLyTuyenTinh.arr[j - 1];
				quanLyTuyenTinh.arr[j - 1] = quanLyTuyenTinh.arr[j];
				quanLyTuyenTinh.arr[j] = a;
			}
			else break;
		}
	}
}

void XoaCase3(TreeingItem &r, TreeingItem &root)
{
	if (r->pLeft != NULL) XoaCase3(r->pLeft, root);
	else {
		root->data = r->data;
		int i = 0;
		for (; i < strlen(r->itemCode); i++)
			root->itemCode[i] = r->itemCode[i];
		root->itemCode[i] = '\0';
		root = r;
		r = r->pRight;
	}
}

void XoaNodeTrongTree(TreeingItem &root, char key[])
{
	if (root == NULL) return;
	else {
		if (strcmp(root->itemCode, key) == 1)
			XoaNodeTrongTree(root->pLeft, key);
		else if (strcmp(root->itemCode, key) == -1)
			XoaNodeTrongTree(root->pRight, key);
		else if (strcmp(root->itemCode, key) == 0)
		{
			NodeTree *k = root;
			if (root->pLeft == NULL && root->pRight == NULL)
			{
				delete root;
				root = NULL;
				return;
			}
			else if (root->pLeft == NULL && root->pRight != NULL)
			{
				root = k->pRight;
			}
			else if (root->pLeft != NULL && root->pRight == NULL)
			{
				root = k->pLeft;
			}
			else {
				XoaCase3(k->pRight, k);
			}
			delete k;
			k = NULL;
		}
	}
}

void returnItem(TreeingItem root, ReturnedItem item) {
	for (int i = 0; i < item.length;i++) {
		NodeTree* nodeTree = TimNodeItemTrongTree(root, item.cthd[i]->itemCode);
		nodeTree->data.inventoryNumber += item.cthd[i]->Number;
		item.cthd[i]->status = 0;
	}
}

/* ============================== THAO TAC THEM SUA XOA CAY ================================*/

void ThemVaoCuoiDanhSach(ListBill &l, NodeBill *x)
{
	if (l.pHead == NULL) l.pHead = l.pTail = x;
	else {
		l.pTail->next = x;
		l.pTail = x;
	}
}

void TaoLienKetChoNhanVien(ListBill &arr, ListBill &l, char n[])
{
	if (l.pHead == NULL) return;
	NodeBill* pre = l.pHead;
	if (strcmp(l.pHead->data.invoiceCode, n) == 0)
	{
		NodeBill *k = l.pHead;
		l.pHead = l.pHead->next;
		k->next = NULL;
		ThemVaoCuoiDanhSach(arr, k);
		return;
	}
	for (NodeBill *g = l.pHead; g != NULL;)
	{
		if (strcmp(g->data.invoiceCode, n) == 0)
		{
			NodeBill *k = g;
			pre->next = g->next;
			g = g->next;
			k->next = NULL;
			ThemVaoCuoiDanhSach(arr, k);
			return;
		}
		else {
			pre = g;
			g = g->next;
		}
	}
}

void SortNhanVien(ListEmployees &quanLy)
{
	employee *a = NULL;
	for (int i = 1; i < quanLy.n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (quanLy.arr[j - 1]->firstName + " " + quanLy.arr[j - 1]->lastName > quanLy.arr[j]->firstName + " " + quanLy.arr[j]->lastName)
			{
				a = quanLy.arr[j - 1];
				quanLy.arr[j - 1] = quanLy.arr[j];
				quanLy.arr[j] = a;
			}
			else break;
		}
	}
}

void XoaNhanVien(ListEmployees &quanLy)
{
	for (int i = 0; i < quanLy.n; i++)
	{
		if (quanLy.arr[i] == NULL)
			break;
		while (quanLy.arr[i]->dshd != NULL)
		{
			NodeBill *k = quanLy.arr[i]->dshd;
			quanLy.arr[i]->dshd = quanLy.arr[i]->dshd->next;
			delete[] k->data.cthd;
			delete k;
			k = NULL;
		}
		delete quanLy.arr[i];
		quanLy.arr[i] = NULL;
	}
}

int QuyChuanTinhThoiGian(C_DATE date)
{
	int year = date.year, month = date.month, day = date.day;
	int arr[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	return 365 * year + year / 4 - year / 100 + year / 400 + day + arr[month - 1] - 365;
}

void Out_Date(C_DATE &date)
{
	cout << date.day << "/" << date.month << "/" << date.year;
}

int XoaNhanVien(ListEmployees &quanLy, int key)
{
	int i = 0;
	for (; i < quanLy.n; i++)
	{
		if (quanLy.arr[i]->employeeID == key) break;
	}
	if (i < quanLy.n)
	{
		for (NodeBill* k = quanLy.arr[i]->dshd; k != NULL;)
		{
			NodeBill* bill = k;
			k = k->next;
			//delete[] bill->data.cthd;
			//delete bill;
			bill->next = NULL;
			//ThemVaoCuoiDanhSach(list, bill);
		}
		delete quanLy.arr[i];
		for (int j = i; j < quanLy.n; j++)
		{
			quanLy.arr[j] = quanLy.arr[j + 1];
		}
		quanLy.n--;
		return 1;
	}
	return 0;
}

int ThemNhanVienMoi(ListEmployees &quanLy, Employee* nhanVien)
{
	for (int i = 0; i < quanLy.n; i++)
	{
		if (quanLy.arr[i]->employeeID == nhanVien->employeeID) return 0;
	}
	quanLy.arr[quanLy.n++] = nhanVien;
	return 1;
}

int Ktra_Ma_NhanVien(ListEmployees l, int manv)
{
	for (int i = 0; i < l.n; i++)
	{
		if (l.arr[i]->employeeID == manv)
		{
			return 1;
		}
	}

	return 0;

}

bool checkItemIsInBill(ListEmployees quanLy, char itemCode[]) {
	for (int i = 0;i < quanLy.n;i++) {
		NodeBill *h = quanLy.arr[i]->dshd;
		for (; h != NULL; h = h->next)
		{
			for (int j = 0;j < h->data.numberOfBill;j++) {
				if (strstr(itemCode, h->data.cthd[j].itemCode) != NULL) {
					return true;
				}
			}
		}
	}
	return false;
}

void XoaDanhSachLienKet(ListBill &l)
{
	while (l.pHead != NULL)
	{
		NodeBill *h = l.pHead;
		l.pHead = l.pHead->next;
		//delete h->data.cthd;
		delete h;
	}
}

BillOfEm LietKeHoaDon(NodeBill *h, C_DATE begin, C_DATE end)
{
	BillOfEm billofEm;
	for (; h != NULL; h = h->next) {
		if (QuyChuanTinhThoiGian(h->data.date) >= QuyChuanTinhThoiGian(begin) && QuyChuanTinhThoiGian(h->data.date) <= QuyChuanTinhThoiGian(end)) {
			for (int i = 0;i < h->data.numberOfBill;i++) {
				billofEm.data[billofEm.length].billPro = &h->data;
				billofEm.data[billofEm.length++].billSpe = &h->data.cthd[i];
			}
		}
	}
	return billofEm;
}
// dieu kien de tinh la thuoc hoa don xuat(type == X) va mat hang khong bi tra lai(status == 1)
int* DoanhThu(ListEmployees quanLy, int year)
{
	int *arr = new int[12];// tao ra mang 12 so
	for (int i = 0; i < 12; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < quanLy.n; i++) {
		NodeBill *h = quanLy.arr[i]->dshd;
		for (; h != NULL; h = h->next)
		{
			int month = h->data.date.month - 1;
			if (h->data.type == X && h->data.date.year == year) {
				for (int j = 0;j < h->data.numberOfBill;j++) {
					if (h->data.cthd[j].status == 1) {
						arr[month] += h->data.cthd[j].PriceTo;
					}
				}
			}
		}
	}
	return &arr[0];// return ve cai mang vua tinh toan
}

long TongTien(BILL bill)
{
	long sum = 0;
	for (int i = 0; i < bill.numberOfBill; i++)
	{
		sum += bill.cthd[i].PriceTo;
	}
	return sum;
}

void XuLyNhap_So(string& Name, char& k, bool& kt) {
	if ((k >= 48 && k <= 58) && Name.size() < 9)
	{
		cout << k;
		Name.push_back(k);
		kt = 0;
	}
	else if (k == 8)
	{
		if (kt != 1)
		{
			if (Name.length() == 1)
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

void XulyNhap_Dulieu(string& Name, char &k, bool &kt)
{
	if ((k >= 65 && k <= 90 || k >= 97 && k <= 122) && Name.size() < 35)// náº¿u lÃ  sá»‘ thÃ¬
	{
		cout << k;// hiá»‡n lÃªn mÃ n hÃ¬nh
		Name.push_back(k);// Ä‘á»“ng thá»i lÆ°u vÃ o biáº¿n string x: dá»¯ liá»‡u
		kt = 0;// cáº­p nháº­t x Ä‘Ã£ cÃ³ pháº§n tá»­
	}
	else if (k == 8)
	{
		if (kt != 1)//Dá»¯ liá»‡u khÃ¡c rá»—ng thÃ¬ cho phÃ©p thá»±c hiá»‡n xÃ³a
		{
			if (Name.length() == 1)// Ä‘á»™ dÃ i lÃ  1: => sau khi xÃ³a thÃ¬ dá»¯ liá»‡u rá»—ng cáº§n cáº­p nháº­t kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

void ThayDoiDuLieu(TreeingItem& root, BILL bill)
{
	if (bill.type == N)
		for (int i = 0; i < bill.numberOfBill; i++)
		{
			NodeTree* h = TimNodeItemTrongTree(root, bill.cthd[i].itemCode);
			h->data.inventoryNumber += bill.cthd[i].Number;
		}
	else
		for (int i = 0; i < bill.numberOfBill; i++)
		{
			NodeTree* h = TimNodeItemTrongTree(root, bill.cthd[i].itemCode);
			h->data.inventoryNumber -= bill.cthd[i].Number;
		}

}

void Them_HoaDon_Vao_Cuoi_NhanVien(NodeBill* &bill, NodeBill* node)
{
	if (bill == NULL) {
		bill = node;
	}
	else
	{
		NodeBill *k = bill;
		while (k->next != NULL) k = k->next;
		k->next = node;
		node->next = NULL;
	}
}

void XuLyNhap_HoaDon(char a[], char k, bool& kt)
{
	int size = strlen(a);
	if (k >= 65 && k <= 90 || k >= 48 && k <= 57)// náº¿u lÃ  sá»‘ thÃ¬
	{
		cout << k;// hiá»‡n lÃªn mÃ n hÃ¬nh
		a[size++] = k;// Ä‘á»“ng thá»i lÆ°u vÃ o biáº¿n string x: dá»¯ liá»‡u
		kt = 0;// cáº­p nháº­t x Ä‘Ã£ cÃ³ pháº§n tá»­
		a[size] = '\0';
	}
	else if (k == 8)
	{
		if (kt != 1)//Dá»¯ liá»‡u khÃ¡c rá»—ng thÃ¬ cho phÃ©p thá»±c hiá»‡n xÃ³a
		{
			if (strlen(a) == 1)// Ä‘á»™ dÃ i lÃ  1: => sau khi xÃ³a thÃ¬ dá»¯ liá»‡u rá»—ng cáº§n cáº­p nháº­t kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				//Name.erase(Name.begin() + (Name.length() - 1));
				a[0] = '\0';
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				a[--size] = '\0';
			}
		}
	}
}

bool DaTonTaiTrongHoaDon(char key[], BILL bill)
{
	for (int i = 0; i < bill.numberOfBill; i++)
	{
		if (strcmp(key, bill.cthd[i].itemCode) == 0) return true;
	}
	return false;
}

bool KiemTraNgayHopLe(C_DATE h)
{
	int ngaymax, nam = h.year, thang = h.month, ngay = h.day;
	if (nam < 0 || thang < 0 || thang> 12 || ngay < 0 || ngay> 31)
	{
		return false;
	}
	else
	{
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngaymax = 31;
			break;
		case 2:
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				ngaymax = 29;
			else
				ngaymax = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngaymax = 30;
			break;
		}
		if (ngay <= ngaymax)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

void xulynhap_ngay(string &x, char c, bool &kt)
{
	if (c >= 48 && c <= 57 && x.size() < 4)
	{
		cout << c;
		x.push_back(c);
		kt = 0;
	}
	else if (c == 8)
	{
		if (kt != 1)
		{
			if (x.length() == 1)
			{
				cout << "\b"; cout << ' '; cout << "\b";
				x.erase(x.begin() + (x.length() - 1));
				kt = 1;
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				x.erase(x.begin() + (x.length() - 1));
			}
		}
	}
}

ListEmployees DanhSachNhanVienTimTheoMa(ListEmployees nhanVien, char* key, int size)
{
	if (size == 0) return nhanVien;
	ListEmployees quanLy;
	string newKey = convertToString(key, size);
	for (int i = 0; i < nhanVien.n; i++)
	{
		//string manv = );

		if (IsInNumber(nhanVien.arr[i]->employeeID, newKey))
			quanLy.arr[quanLy.n++] = nhanVien.arr[i];
	}
	return quanLy;
}

bool HoaDonDaTonTai(char key[], ListEmployees l)
{
	for (int i = 0; i < l.n; i++)
	{
		NodeBill* k = l.arr[i]->dshd;
		for (; k != NULL; k = k->next)
		{
			if (strcmp(key, k->data.invoiceCode) == 0) return true;
		}
	}
	return false;
}

searchBill KhoiTaoDanhSachTuyenTinhListBill(ListEmployees quanLy, char key[], int size)
{
	searchBill h;
	for (int i = 0; i < quanLy.n; i++) {
		for (NodeBill* k = quanLy.arr[i]->dshd; k != NULL; k = k->next)
		{
			if (strstr(k->data.invoiceCode, key))
			{
				h.arr[h.n++] = k;
			}
		}
	}
	return h;
}
