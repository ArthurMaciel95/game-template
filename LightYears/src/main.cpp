#include <SFML/Graphics.hpp>

int main()
{

    // Criando a janela do jogo
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rogue Knight");

    // Carregando a imagem sprite sheet
    sf::Texture textureIdle;
    sf::Texture textureAttack;
    sf::Texture textureWalk;

    if (!textureIdle.loadFromFile("./assets/knight-idle.png") ||
        !textureAttack.loadFromFile("./assets/knight-attack.png") ||
        !textureWalk.loadFromFile("./assets/knight-walk.png"))
    {
        return EXIT_FAILURE;
    }

    // Definindo o retângulo que representa o primeiro quadro do sprite
    sf::IntRect frameRectIdle(0, 0, 42, 105);
    sf::IntRect frameRectAttack(0, 0, 60, 200);

    // Criando o sprite animado
    sf::Sprite sprite(textureIdle, frameRectIdle);
    sprite.setPosition(40, 40);

    sf::Sprite spriteAttack(textureAttack, frameRectAttack);
    spriteAttack.setPosition(40, 40);

    sf::Sprite spriteWalk(textureAttack, frameRectAttack);
    spriteWalk.setPosition(40, 40);

    sf::Clock clock;
    float frameTime = 0.180f; // Tempo entre cada quadro da animação
    float elapsedTime = 0.0f;

    bool isIdle = true;
    bool isWalk = false;
    bool isAttack = false;
    int durationAnimation = 1;
    // Loop principal do jogo
    while (window.isOpen())
    {
        // Verificando os eventos
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Se o evento for fechar a janela, fecha o jogo
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::KeyPressed)
            {

                if (isIdle)
                {
                    sprite.setTexture(textureIdle);
                    isWalk = false;
                    isAttack = false;
                }
                if (isWalk)
                {
                    sprite.setTexture(textureWalk);
                    isIdle = false;
                    isAttack = false;
                }
            }
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Space)
            {
                sprite.setTexture(textureAttack);
                isAttack = true;
                isIdle = false;
                isWalk = false;
            }
        }

        // Movimentando o bloco
        if (isIdle)
        {

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            {
                sprite.move(-0.01, 0);
                isWalk = true;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                sprite.move(0.01, 0);
                isWalk = true;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            {
                sprite.move(0, -0.01);
                isWalk = true;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                sprite.move(0, 0.01);
                isWalk = true;
            }
        }

        // Atualizando a animação

        elapsedTime += clock.restart().asSeconds();
        if (elapsedTime >= frameTime)
        {
            // Avança para o próximo quadro da animação
            if (isIdle)
            {
                frameRectIdle.left += frameRectIdle.width;
                if (frameRectIdle.left >= textureIdle.getSize().x)
                {
                    frameRectIdle.left = 0;
                }
                sprite.setTextureRect(frameRectIdle);
                elapsedTime = 0.0f;
            }
            if (isAttack)
            {
                frameRectAttack.left += frameRectAttack.width;
                if (frameRectAttack.left >= textureAttack.getSize().x)
                {
                    frameRectAttack.left = 0;
                }
                spriteAttack.setTextureRect(frameRectAttack);
                elapsedTime = 0.0f;
            }
            if (isWalk)
            {
                frameRectAttack.left += frameRectAttack.width;
                if (frameRectAttack.left >= textureWalk.getSize().x)
                {
                    frameRectAttack.left = 0;
                }

                elapsedTime = 0.0f;
            }
        }

        // Limpa a janela
        window.clear();

        // Desenha o bloco
        window.draw(sprite);

        // Mostra o que foi desenhado na janela
        window.display();
    }

    return 0;
}