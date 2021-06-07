#include "XuLyDuLieu.h"
int DocFileVatTu(TreeingItem &root)
{
	int sL = 0;
	ifstream inputFile("VatTuBackup.IN");
	if (inputFile.fail())
	{
		cout << "Fail";
		return 0;
	}
	Item a;
	while (!inputFile.eof())
	{
		char key[11];
		inputFile.getline(key, 11, ',');
		if (strlen(key) == 0) continue;
		getline(inputFile, a.name, ',');
		getline(inputFile, a.unit, ',');
		inputFile >> a.inventoryNumber;
		inputFile.ignore(1);
		NodeTree * b = KhoiTaoNodeTree(a, key);
		sL++;
		ThemNodeItemVaoTree(root, b);
	}
	inputFile.close();
	return sL;
}

void Doc_Date(ifstream &filein, C_DATE &date)
{
	filein >> date.day;
	filein.ignore(1);
	filein >> date.month;
	filein.ignore(1);
	filein >> date.year;
}

void Doc_1_Hoa_Don(ifstream &filein, BILL &hoadon, NodeTree* root)
{
	filein.getline(hoadon.invoiceCode, 21, ',');
	Doc_Date(filein, hoadon.date);
	filein.ignore(1);
	char hd;
	filein >> hd;
	filein.ignore(1);
	if (hd == 'N')
	{
		hoadon.type = N;
	}
	else if (hd == 'X')
	{
		hoadon.type = X;
	}
	filein >> hoadon.UnitPrice;
	filein.ignore(1);
	filein >> hoadon.numberOfBill;
	filein.ignore(1);
	CT_BILL *ct_hoadon = new CT_BILL[20];
	for (int i = 0; i < hoadon.numberOfBill; i++)
	{
		filein.getline(ct_hoadon[i].itemCode, 20, ',');
		string temmm = "";
		getline(filein, temmm, ',');
		NodeTree* nodetree = TimNodeItemTrongTree(root, ct_hoadon[i].itemCode);
		ct_hoadon[i].name = &nodetree->data.name;
		filein >> ct_hoadon[i].Number;
		filein.ignore(1);
		filein >> ct_hoadon[i].Price;
		filein.ignore(1);
		filein >> ct_hoadon[i].PriceTo;
		filein.ignore(1);
		filein >> ct_hoadon[i].VAT;
		filein.ignore(1);
		filein >> ct_hoadon[i].status;
		filein.ignore(1);
		//ct_hoadon[i].Price = ct_hoadon[i].PriceTo / (ct_hoadon[i].Number * (1 + ct_hoadon[i].VAT));
	}
	hoadon.cthd = &ct_hoadon[0];
	filein.ignore(1);
}

void DocHoaDon(ListBill &list_hd, NodeTree* root)
{
	ifstream filein;
	filein.open("XuatNhapBackup.IN", ios_base::in);
	if (filein.fail())
	{
		return;
	}
	BILL hoaDon;
	while (!filein.eof())
	{
		Doc_1_Hoa_Don(filein, hoaDon, root);
		if (strlen(hoaDon.invoiceCode) == 0) continue;
		NodeBill *hoadon = KhoiTaoNodeHoaDon(hoaDon);
		ThemVaoCuoiDanhSach(list_hd, hoadon);
	}

}

void DocFileNhanVien(ListEmployees &quanLy, ListBill &l)
{
	ifstream inFile("NhanVienBackup.IN");
	if (inFile.fail())
	{
		cout << "Fail";
		return;
	}
	int sl = 0;
	inFile >> sl;
	for (int i = 0; i < sl; i++)
	{
		employee *a = new employee;
		inFile >> a->employeeID;
		inFile.ignore(1);
		inFile >> a->identity_card;
		inFile.ignore(1);
		getline(inFile, a->lastName, ',');
		getline(inFile, a->firstName, ',');
		string gioitinh;
		getline(inFile, gioitinh, ',');
		if (gioitinh == "NAM")
			a->sex = NAM;
		else if (gioitinh == "NU")
			a->sex = NU;
		inFile >> a->invoiceNumber;
		inFile.ignore(1);
		char mang[21];
		ListBill dstam;
		KhoiTaoList(dstam);
		for (int i = 0; i < a->invoiceNumber; i++)
		{
			inFile.getline(mang, 21, ',');
			TaoLienKetChoNhanVien(dstam, l, mang);
		}
		a->dshd = dstam.pHead;
		if (a->invoiceNumber != 0)
			inFile.ignore(1);
		quanLy.arr[quanLy.n++] = a;
	}
	inFile.close();
}

void DuyetCayDeInFile(TreeingItem vatTu, ofstream &fileOut)
{
	if (vatTu == NULL) return;
	else {
		fileOut << vatTu->itemCode << "," << vatTu->data.name << "," << vatTu->data.unit << "," << vatTu->data.inventoryNumber << endl;
		DuyetCayDeInFile(vatTu->pLeft, fileOut);
		DuyetCayDeInFile(vatTu->pRight, fileOut);
	}
}

void GhiFileVatTu(TreeingItem vatTu)
{
	ofstream outFile("VatTuBackup.IN");
	DuyetCayDeInFile(vatTu, outFile);
	outFile.close();
}

void GhiFileXuatNhap(ListEmployees quanLy)
{
	ofstream outFile("XuatNhapBackup.IN");
	for (int i = 0; i < quanLy.n; i++)
	{
		if (quanLy.arr[i] == NULL) break;
		for (NodeBill *k = quanLy.arr[i]->dshd; k != NULL; k = k->next)
		{
			outFile << k->data.invoiceCode << "," << k->data.date.day << "/" << k->data.date.month << "/" << k->data.date.year << ",";
			if (k->data.type == N) outFile << "N";
			else outFile << "X";
			outFile << "," << k->data.UnitPrice;
			outFile << "," << k->data.numberOfBill << endl;
			for (int j = 0; j < k->data.numberOfBill; j++)
			{
				outFile << k->data.cthd[j].itemCode << "," << *k->data.cthd[j].name << "," << k->data.cthd[j].Number << "," << k->data.cthd[j].Price << ",";
				outFile << k->data.cthd[j].PriceTo << "," << k->data.cthd[j].VAT << "," << k->data.cthd[j].status << endl;
			}
			outFile << endl;
		}
	}
	outFile.close();
}

void GhiFileNhanVien(ListEmployees quanLy)
{
	ofstream outFile("NhanVienBackup.IN");
	outFile << quanLy.n << endl;
	for (int i = 0; i < quanLy.n; i++)
	{
		if (quanLy.arr[i] == NULL) break;
		outFile << quanLy.arr[i]->employeeID << "," << quanLy.arr[i]->identity_card << "," << quanLy.arr[i]->lastName << "," << quanLy.arr[i]->firstName << ",";
		if (quanLy.arr[i]->sex == NAM) outFile << "NAM";
		else outFile << "NU";
		outFile << "," << quanLy.arr[i]->invoiceNumber << ",";
		for (NodeBill *k = quanLy.arr[i]->dshd; k != NULL; k = k->next)
			outFile << k->data.invoiceCode << ",";
		outFile << endl;
	}
	outFile.close();
}
