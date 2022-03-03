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
enum class EMonitor
{
	LG = 0,
	SAMSUNG,
	ALPHASCAN,
	PHILIPS,
	HANSUNG,
	ASUS,
};

// enum 에 EKoreaMonitor 라는 네임스페이스를 추가해준다.
enum class EKoreaMonitor
{
	LG,
	SAMSUNG,
	ALPHASCAN,
	HANSUNG
};

int main(void)
{
	EMonitor monitor = EMonitor::LG;
	EKoreaMonitor koreaMonitor = EKoreaMonitor::LG;

	std::cout << int(monitor) << int(koreaMonitor) << std::endl; // 무조건 명시적 캐스팅 수행
}