/*1) ������� �������� ���� ���������� ������. ���������� ��������� 
���� ��������� (�����������, ���������� ����� �������� 
������� �� ��� ���������� ��������), �� �������
���������� ������ ������; � ���� �������� ������������ 
����������, �� ����� �������� �����-�� �������
(������������ ��������� �������).*/


//#include <iostream>
//#include <random>
//#include <ctime>
//#include <windows.h>
//
//using namespace std;
//
//const char symbols[] = { char(0xb2), char(0xdb), char(0x40),
//                         char(0xfe), char(0xc5), char(0xce) };
//
//size_t  dim = sizeof(symbols) / sizeof(symbols[0]);
//
//size_t make_move(const size_t& big_prize = 1000,          // ���� �� 3 ����������
//    const size_t& prize = 100,                           // ���� �� 2 ����������
//    const size_t& a_waste = -50)                           // �������� �� ���
//
//{
//    char s_1 = symbols[rand() % dim];
//    char s_2 = symbols[rand() % dim];
//    char s_3 = symbols[rand() % dim];
//
//    cout << "\n\t" << s_1 << "\t \b\b";
//    cout << "\t" << s_2 << "\t \b\b";
//    cout << "\t" << s_3 << "\t \n\n";
//    
//    if ((s_1 == s_2) && (s_2 == s_3))
//        return big_prize - a_waste;
//    
//    if ((s_1 == s_2) || (s_2 == s_3) || (s_1 == s_3))
//        return prize - a_waste;
//    return a_waste;
//}
//
//int main()
//{
//    srand(time(NULL));
//    unsigned long  cash = 300;      // ��������� �����
//    cout << " For start the game press <Enter>, for exit press <z>" << endl;
//    while (cin.get() != 'z')
//    {
//        cash += make_move();
//        cout << "Prize: " << cash << "\n\n";
//        if (cash <= 0)
//            break;
//    }
//    cout << "\nGame is over. Your total prize  " << cash << "$\n";
//    cin.get();
//}




/*2) ������� ����� �������.
�� ������ ������ ��������, ����� ���:
���������
���
�����
���-������
�������
����������
������ ������ ����������� ��������� �������. ������� �������, ��������� ��������� � ����������.*/


//#include <iostream>
//using namespace std;
//
//class Mouse
//{
//public:
//	string GetColor()
//	{
//		return color;
//	}
//private:
//	string color = "Black";
//};
//
//class Camera
//{
//public:
//	void WorkCamera()
//	{
//		cout << "� ������! ������" << endl;
//	}
//};
//
//class Printer
//{
//public:
//	void WorkPrinter()
//	{
//		cout << "� �������! ������� " << endl;
//	}
//};
//
//class NoteBook 
//{
//public:
//	void Work()
//	{
//		processor.Work();
//		ozu.Work2();
//		video.Show();
//		camera.WorkCamera();
//		printer.WorkPrinter();
//	}
//	void WorkMouse()
//	{
//		cout << "��� ����� " << mouse.GetColor() << " �����" << endl;
//	}
//	
//private:
//	class Processor
//	{
//	public:
//		void Work()
//		{
//			cout << "� �������. ��������� " << endl;
//		}
//	};
//	class OZU
//	{
//	public:
//		void Work2()
//		{
//			cout << "� ���� �������. ���" << endl;
//		}
//	};
//	class Video
//	{
//	public:
//		void Show()
//		{
//			cout << "� � ���������. ���������� " << endl;
//		}
//	};
//	Processor processor;
//	OZU ozu;
//	Video video;
//	Mouse mouse;
//	Camera camera;
//	Printer printer;
//};
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//
//	NoteBook notebook;
//	notebook.Work();
//	notebook.WorkMouse();
//	
//}
