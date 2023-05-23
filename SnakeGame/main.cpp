#include <SFML/Graphics.hpp>

int main() {
	
	using namespace sf;

	RenderWindow window(VideoMode(640, 480), "Snake Game");
	// 1초에 60번의 작업이 이루어 지도록 frame 조절
	// 컴퓨터 사양이 달라도 똑같은 속도로 처리함
	window.setFramerateLimit(60);
	
	RectangleShape snake;
	snake.setPosition(200, 300);
	snake.setSize(Vector2f(30, 30));
	snake.setFillColor(Color::Green);

	RectangleShape apple;
	apple.setPosition(300, 400);
	apple.setSize(Vector2f(30, 30));
	apple.setFillColor(Color::Red);

	while (window.isOpen()) { // window창 계속 유지
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}

		// else if를 하면 키 동시클릭이 안됨.
		if (Keyboard::isKeyPressed(Keyboard::Up))
			snake.move(0, -5); // 컴퓨터에선 y값이 위로 갈수록 감소임
		else if (Keyboard::isKeyPressed(Keyboard::Down))
			snake.move(0, 5);
		else if (Keyboard::isKeyPressed(Keyboard::Right))
			snake.move(5, 0); // x축은 실제와 같음
		else if (Keyboard::isKeyPressed(Keyboard::Left))
			snake.move(-5, 0);

		window.clear();

		window.draw(snake);
		window.draw(apple); // 뱀과 사과가 겹칠 경우 사과가 위에 나옴(순서 때문에)

		window.display();
	}


	return 0;
}