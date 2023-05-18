#include <SFML/Graphics.hpp>

int main() {
	
	using namespace sf;

	RenderWindow window(VideoMode(640, 480), "Snake Game");
	
	while (window.isOpen()) { // window창 계속 유지
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.display();
	}


	return 0;
}