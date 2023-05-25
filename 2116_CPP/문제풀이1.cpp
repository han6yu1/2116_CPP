class IntArray {

public:
	IntArray(int* arr, int size) {
		arr_ = new int[size];
		size_ = size;
		for(int i = 0; i < size; i++)
			arr_[i] = arr[i];
	}
		// 얕은복사 생성자
	IntArray(const IntArray& rhs) 
		: size_(rhs.size_), arr_(rhs.arr_){
	}

private:
	int* arr_;
	int size_; // arr의 크기
};

int main(void) {
	int arr[] = { 1, 2, 3 };
	IntArray ia = IntArray(arr, sizeof(arr)/sizeof(*arr));
	IntArray ca = ia;

	return 0;
}