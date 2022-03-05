// C++ 11 에서 추가된 enum class 기존 enum에 네임스페이스를 정의해주기 위해 사용.
// C 의 enum 차이점 주시
#include <iostream>
// C 계열 열거형은 enum 안에 들어간 네임을 변수로서 정의함. 즉 동일한 네이밍이 중복 발생하면 재정의됨.
//enum EMnoitor
//{
//	LG=0,
//	SAMSUNG,
//	ALPHASCAN,
//	PHILIPS,
//	HANSUNG,
//	ASUS
//};
//
//enum EKoreaMonitor
//{
//	LG=1,
//	SAMSUNG,
//	ALPHASCAN,
//	HANSUNG
//};
// --> LG, SAMSUNG 등 동일한 네이밍으로 인한 재정의 발생. 컴파일러가 보통 막지만, 안막아 주는 곳도 있음.

// enum 에 EMnoitor라는 네임스페이스를 추가해준다.
enum class EMonitor:std::uint8_t
{
	LG =0,
	SAMSUNG,
	ALPHASCAN,
	PHILIPS,
	HANSUNG,
	ASUS,
};

// enum 에 EKoreaMonitor 라는 네임스페이스를 추가해준다.
enum class EKoreaMonitor:std::uint8_t
{
	LG=1,
	SAMSUNG,
	ALPHASCAN,
	HANSUNG
};


int main(void)
{
	EMonitor monitor = EMonitor::LG;
	EKoreaMonitor koreaMonitor = EKoreaMonitor::LG;
	std::cout << "===================== 클래스 열거형 ======================" << std::endl;
	std::cout << int(monitor) << int(koreaMonitor) << std::endl; // 무조건 명시적 캐스팅 수행


	std::cout << "===================== 명시적 형변환 ======================" << std::endl;
	// C++ 계열의 명시적 형변환 기본형에 대한 형변환은 C 와 차이가 없음
	constexpr int num = 10;
	std::cout << (char)num << " " << (double)num << " " << (short)num << " " << (float)num << std::endl;
	std::cout << static_cast<char>(num) << " " << static_cast<double>(num) << " " << static_cast<short>(num) << " " << static_cast<float>(num) << std::endl;
	// "포인터" 형변환을 좀 더 안정적으로 수행하도록 함


	std::cout << "===================== 명시적 형변환 (static_cast) ======================" << std::endl;
	const char* str = "MONITOR"; // const 컴파일러에러발생... constexpr 도 안됨 보통 이렇게 하는지 궁금
	std::cout << (int)str << std::endl; // 포인터 변수 널 int 형으로 형변환 하겠다!! 
	//static_cast<int>(str); 상수 char 포인터 변수를 int로 형변환 못함.

	std::cout << "===================== 명시적 형변환 (const_cast) ======================" << std::endl;
	// 상수에서 일반 변수로 변경하기 위해서는 const_cast를 사용해야 한다.
	const char* productStr = "MONITOR";
	//str = "BCD"; 에러
	char* productName = const_cast<char*>(str); // 상수화 해제
	std::cout << productName << std::endl;
	char* color = const_cast<char*>("Red"); // 원래 Red는 상수기 때문에 const char* 타입에 값으로 사용 가능
	std::cout << color << std::endl;
	return 0;
}