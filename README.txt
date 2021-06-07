XuLyDuLieu.h

line 351: int* DoanhThu(ListEmployees quanLy, int year)
	Điều kiện để được thống kê vào doanh thu là thuộc hóa đơn xuất và hàng đấy chưa bị trả lại(status == 1)


DoHoa.h

line 5905: NodeBill* TraHang(TreeingItem root, ListEmployees l)
	Điều kiện là đơn hàng được tạo không quá 3 ngày và thuộc hóa đơn xuất.
	------Các bước thực hiện:
	- Đầu tiên tạo ra 1 danh sách ảo. (mảng con trỏ trỏ đến dữ liệu các CT_BILL của hóa đơn)
	- Thực hiện xóa trong này thì ta thêm dữ liệu mặt hàng bị trả vào ReturnedItem
	- Sau khi xác nhận thì ta đưa dữ liệu trả hàng vào lại kho(Cộng số lượng tồn). Đồng thời đổi trạng thái status = 0