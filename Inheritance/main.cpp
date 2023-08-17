#include <SFML/Graphics.hpp>

using namespace sf;

class Entity {
	// 거의 99.99%이상 클래스를 매개변수로 할 때는 주소값으로 받자
	// 메모리 용량 및 call by value 이슈때문.
	Entity(int life, RectangleShape* sprite)
		: life_(life), sprite_(sprite) {
		
	}
	~Entity(){}
	
	// getter
	int get_life() { return life_; }
	RectangleShape* get_sprite() { return *sprite_; }

	// setter
	void set_life(int val) { life_ = val; }
	void set_sprite(RectangleShape* val) { sprite_ = val; }

private:
	int life_;
	RectangleShape* sprite_;

};

int main(void) {

	RenderWindow window(VideoMode(1000, 800), "Sangsok");
	

	RectangleShape sp1;
	sp1.setPosition(400, 300);
	sp1.setSize(Vector2f(300, 300));
	sp1.setFillColor(Color::Blue);

	Entity* player = new Entity(3, &sp1);

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(player -> )
		window.display();
	}
	return 0;
}