// C++ 11 ���� �߰��� enum class ���� enum�� ���ӽ����̽��� �������ֱ� ���� ���.
// C �� enum ������ �ֽ�
#include <iostream>

// C �迭 �������� enum �ȿ� �� ������ �����μ� ������. �� ������ ���̹��� �ߺ� �߻��ϸ� �����ǵ�.
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
// --> LG, SAMSUNG �� ������ ���̹����� ���� ������ �߻�. �����Ϸ��� ���� ������, �ȸ��� �ִ� ���� ����.

// enum �� EMnoitor��� ���ӽ����̽��� �߰����ش�.
enum class EMonitor
{
	LG = 0,
	SAMSUNG,
	ALPHASCAN,
	PHILIPS,
	HANSUNG,
	ASUS,
};

// enum �� EKoreaMonitor ��� ���ӽ����̽��� �߰����ش�.
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

	std::cout << int(monitor) << int(koreaMonitor) << std::endl; // ������ ����� ĳ���� ����
}