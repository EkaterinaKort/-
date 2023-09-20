/*1) Создать имитацию игры «однорукий бандит». Происходит «вращение» 
трех барабанов (естественно, количество шагов вращений 
каждого из них выбирается случайно), на которых
изображены разные значки; и если выпадает определенная 
комбинация, то игрок получает какой-то выигрыш
(использовать кольцевую очередь).*/


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
//size_t make_move(const size_t& big_prize = 1000,          // приз за 3 совпадения
//    const size_t& prize = 100,                           // приз за 2 совпадения
//    const size_t& a_waste = -50)                           // списание за ход
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
//    unsigned long  cash = 300;      // начальная сумма
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




/*2) Создать класс ноутбук.
На основе других объектов, таких как:
Процессор
ОЗУ
Мышка
Веб-камера
Принтер
Видеокарта
Каждый объект представлен отдельным классом. Собрать ноутбук, используя агрегацию и композицию.*/


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
//		cout << "Я снимаю! Камера" << endl;
//	}
//};
//
//class Printer
//{
//public:
//	void WorkPrinter()
//	{
//		cout << "Я печатаю! Принтер " << endl;
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
//		cout << "Моя мышка " << mouse.GetColor() << " цвета" << endl;
//	}
//	
//private:
//	class Processor
//	{
//	public:
//		void Work()
//		{
//			cout << "Я работаю. Процессор " << endl;
//		}
//	};
//	class OZU
//	{
//	public:
//		void Work2()
//		{
//			cout << "Я тоже работаю. ОЗУ" << endl;
//		}
//	};
//	class Video
//	{
//	public:
//		void Show()
//		{
//			cout << "А я показываю. Видеокарта " << endl;
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
