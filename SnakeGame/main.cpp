#include <SFML/Graphics.hpp>
#include <stdlib.h> // srand(), rand() 쓰기 위함
#include <time.h> // time() 쓰기 위함

int main() {
	
	using namespace sf;

	const int WIDTH = 1000;
	const int HEIGHT = 800;

	int block = 40; // 한 칸을 40으로
	const int w = WIDTH / block;
	const int h = HEIGHT / block;

	RenderWindow window(VideoMode(640, 480), "Snake Game");
	// 1초에 60번의 작업이 이루어 지도록 frame 조절
	// 컴퓨터 사양이 달라도 똑같은 속도로 처리함
	window.setFramerateLimit(30);

	srand(time(NULL));
	
	RectangleShape snake;
	int snake_x = 3;
	int snake_y = 3;
	snake.setPosition(snake_x * block, snake_y * block);
	snake.setSize(Vector2f(block, block));
	snake.setFillColor(Color::Green);

	RectangleShape apple;
	int apple_x = rand() % w;
	int apple_y = rand() % h;
	apple.setPosition(apple_x * block, apple_y * block);
	apple.setSize(Vector2f(block, block));
	apple.setFillColor(Color::Red);

	while (window.isOpen()) { // window창 계속 유지
		Event e;
		while (window.pollEvent(e)) {
			// 윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}

		// 게임의 3가지 요소
		// 1. input
		// else if를 하면 키 동시클릭이 안됨.
		if (Keyboard::isKeyPressed(Keyboard::Up)) {
			snake_y--;
			snake.move(0, -block);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Down)) {
			snake_y++;
			snake.move(0, block);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Right)) {
			snake_x++;
			snake.move(block, 0);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Left)) {
			snake_x--;
			snake.move(-block, 0);
		}
		
		
		// 2. update : 실시간으로 바뀌는 상태를 갱신해주는 것
		// 보통 input, update 묶어서 update라고 함

		// 뱀이 사과를 먹으면 - 즉 겹치면, 충돌하면 (intersects : 교집합)
		if (snake.getGlobalBounds().intersects(apple.getGlobalBounds())) {
			apple_x = rand() % w;
			apple_y = rand() % h;
			apple.setPosition(apple_x * block, apple_y * block);
		}
		
		
		// 3. render : update된 상태를 그려주는 것
		window.clear();

		window.draw(snake);
		window.draw(apple); // 뱀과 사과가 겹칠 경우 사과가 위에 나옴(순서 때문에)

		window.display();
	}


	return 0;
}