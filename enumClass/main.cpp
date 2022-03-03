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
enum class EMonitor:std::uint8_t
{
	LG =0,
	SAMSUNG,
	ALPHASCAN,
	PHILIPS,
	HANSUNG,
	ASUS,
};

// enum �� EKoreaMonitor ��� ���ӽ����̽��� �߰����ش�.
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
	std::cout << "===================== Ŭ���� ������ ======================" << std::endl;
	std::cout << int(monitor) << int(koreaMonitor) << std::endl; // ������ ����� ĳ���� ����


	std::cout << "===================== ����� ����ȯ ======================" << std::endl;
	// C++ �迭�� ����� ����ȯ �⺻���� ���� ����ȯ�� C �� ���̰� ����
	constexpr int num = 10;
	std::cout << (char)num << " " << (double)num << " " << (short)num << " " << (float)num << std::endl;
	std::cout << static_cast<char>(num) << " " << static_cast<double>(num) << " " << static_cast<short>(num) << " " << static_cast<float>(num) << std::endl;
	// "������" ����ȯ�� �� �� ���������� �����ϵ��� ��


	std::cout << "===================== ����� ����ȯ (static_cast) ======================" << std::endl;
	const char* str = "MONITOR"; // const �����Ϸ������߻�... constexpr �� �ȵ� ���� �̷��� �ϴ��� �ñ�
	std::cout << (int)str << std::endl; // ������ ���� �� int ������ ����ȯ �ϰڴ�!! 
	//static_cast<int>(str); ��� char ������ ������ int�� ����ȯ ����.

	std::cout << "===================== ����� ����ȯ (const_cast) ======================" << std::endl;
	// ������� �Ϲ� ������ �����ϱ� ���ؼ��� const_cast�� ����ؾ� �Ѵ�.
	const char* productStr = "MONITOR";
	//str = "BCD"; ����
	char* productName = const_cast<char*>(str); // ���ȭ ����
	std::cout << productName << std::endl;
	char* color = const_cast<char*>("Red"); // ���� Red�� ����� ������ const char* Ÿ�Կ� ������ ��� ����
	std::cout << color << std::endl;
	return 0;
}