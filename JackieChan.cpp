#include <SFML/Graphics.hpp>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::vector;
using std::to_string;
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
using namespace std;





int main() {
	string times;
    string tempsr;
    string tempsb;
    string tempspr;
    string tempspb;
    int min=5;
    int sec=60;
    int extrat;
    int posx;
    int posy;
    int ttime;
    int timerbutton = -1;
    string timestr;
    string p1name;
    string p2name;

    int player1point;
    int player2point;
    int player1advantage;
    int player1disadvantage;
    int player1KO;
    int player2advantage;
    int player2disadvantage;
    int player2KO;
    vector<char> blue_point;
    vector<char> red_point;
    vector<char> adv_blue;
    vector<char> adv_red;
    vector<char> disadv_red;
    vector<char> disadv_blue;
    vector<char> knock_blue;
    vector<char> knock_red;
    vector<char> blue_point_neg;
    vector<char> red_point_neg;
    vector<char> adv_blue_neg;
    vector<char> adv_red_neg;
    vector<char> disadv_red_neg;
    vector<char> disadv_blue_neg;

    bool bluewin=0;
    bool redwin=0;
    int point_red=0;
    int sum_red=0;
    int point_blue=0;
    int sum_blue=0;
    int sum_adv_red=0;
    int sum_disadv_red=0;
    int sum_adv_blue=0;
    int sum_disadv_blue=0;
    int point_adv_red=0;
    int point_disadv_red=0;
    int point_adv_blue=0;
    int point_disadv_blue=0;
    int point_adv_red_neg=0;
    int sum_adv_red_neg=0;
    int sum_adv_red_total=0;
    int sum_disadv_red_neg=0;
    int point_disadv_red_neg=0;
    int sum_disadv_red_total=0;
    int sum_red_neg=0;
    int point_red_neg=0;
    int sum_red_total=0;
    int point_adv_blue_neg=0;
    int sum_adv_blue_neg=0;
    int sum_adv_blue_total=0;
    int sum_disadv_blue_neg=0;
    int point_disadv_blue_neg=0;
    int sum_disadv_blue_total=0;
    int sum_blue_neg=0;
    int point_blue_neg=0;
    int sum_blue_total=0;
    int i=0;

    cout << "Enter player 1 name: ";
    cin >> p1name;
    cout << "Enter player 2 name: ";
    cin >> p2name;
    cout << "Note that Jijitsu fights last for at leat 5 minutes" << "\n";
    cout << "Please enter the extra ammount of time in minutes for the fight: ";
    cin >> extrat;
   

    sf::RenderWindow window(sf::VideoMode(600, 800), "crm04140@bu.edu ananths@bu.edu sjalbloo@bu.edu akalo@bu.edu");

    sf::RectangleShape timer(sf::Vector2f(200,70));
    sf::Text time;

    //p1 text
    sf::Text tp1name;
    sf::Text tp1points;
    sf::Text tp1point2;
    sf::Text tp1point3;
    sf::Text tp1point4;
    sf::Text tp1point2m;
    sf::Text tp1point3m;
    sf::Text tp1point4m;
    sf::Text tp1advantage;
    sf::Text tp1advantagem;
    sf::Text tp1penalty;
    sf::Text tp1penaltym;
    sf::Text tp1KO;
    
    //p2 text
    sf::Text tp2name;
    sf::Text tp2points;
    sf::Text tp2point2;
    sf::Text tp2point3;
    sf::Text tp2point4;
    sf::Text tp2point2m;
    sf::Text tp2point3m;
    sf::Text tp2point4m;
    sf::Text tp2advantage;
    sf::Text tp2advantagem;
    sf::Text tp2penalty;
    sf::Text tp2penaltym;
    sf::Text tp2KO;

    // Window size for player 1
    sf::RectangleShape player1(sf::Vector2f(200,40));
    sf::RectangleShape p1points(sf::Vector2f(200,60));
    sf::RectangleShape p1point2(sf::Vector2f(100,100));
    sf::RectangleShape p1point2minus(sf::Vector2f(50,50));
    sf::RectangleShape p1point3(sf::Vector2f(100,100));
    sf::RectangleShape p1point3minus(sf::Vector2f(50,50));
    sf::RectangleShape p1point4(sf::Vector2f(100,100));
    sf::RectangleShape p1point4minus(sf::Vector2f(50,50));
    sf::RectangleShape p1advantage (sf::Vector2f(80,80));
    sf::RectangleShape p1advantageminus(sf::Vector2f(25,70));
    sf::RectangleShape p1penalty (sf::Vector2f(80,80));
    sf::RectangleShape p1penaltyminus(sf::Vector2f(25,70));
    sf::RectangleShape p1KO(sf::Vector2f(250,80));

    // Window size for player 2
    sf::RectangleShape player2(sf::Vector2f(200,40));
    sf::RectangleShape p2points(sf::Vector2f(200,60));
    sf::RectangleShape p2point2(sf::Vector2f(100,100));
    sf::RectangleShape p2point2minus(sf::Vector2f(50,50));
    sf::RectangleShape p2point3(sf::Vector2f(100,100));
    sf::RectangleShape p2point3minus(sf::Vector2f(50,50));
    sf::RectangleShape p2point4(sf::Vector2f(100,100));
    sf::RectangleShape p2point4minus(sf::Vector2f(50,50));
    sf::RectangleShape p2advantage (sf::Vector2f(80,80));
    sf::RectangleShape p2advantageminus(sf::Vector2f(25,70));
    sf::RectangleShape p2penalty (sf::Vector2f(80,80));
    sf::RectangleShape p2penaltyminus(sf::Vector2f(25,70));
    sf::RectangleShape p2KO(sf::Vector2f(250,80));
    

    sf::Text words;
    timer.setFillColor(sf::Color::Red);

    // Player 1 Window Color
    player1.setFillColor(sf::Color::Blue);
    p1points.setFillColor(sf::Color::White);
    p1point2.setFillColor(sf::Color::Blue);
    p1point3.setFillColor(sf::Color::Blue);
    p1point4.setFillColor(sf::Color::Blue);
    p1point2minus.setFillColor(sf::Color::Red);
    p1point3minus.setFillColor(sf::Color::Red);
    p1point4minus.setFillColor(sf::Color::Red);
    p1advantage.setFillColor(sf::Color::Blue);
    p1advantageminus.setFillColor(sf::Color::Red);
    p1penalty.setFillColor(sf::Color::Blue);
    p1penaltyminus.setFillColor(sf::Color::Red);
    p1KO.setFillColor(sf::Color::Green);


    // Player 2 Window Color
    player2.setFillColor(sf::Color::Green);
    p2points.setFillColor(sf::Color::White);
    p2point2.setFillColor(sf::Color::Blue);
    p2point3.setFillColor(sf::Color::Blue);
    p2point4.setFillColor(sf::Color::Blue);
    p2point2minus.setFillColor(sf::Color::Red);
    p2point3minus.setFillColor(sf::Color::Red);
    p2point4minus.setFillColor(sf::Color::Red);
    p2advantage.setFillColor(sf::Color::Blue);
    p2advantageminus.setFillColor(sf::Color::Red);
    p2penalty.setFillColor(sf::Color::Blue);
    p2penaltyminus.setFillColor(sf::Color::Red);
    p2KO.setFillColor(sf::Color::Green);
    


    sf::Font font;
    font.loadFromFile("/usr/share/fonts/truetype/ubuntu/Ubuntu-BI.ttf");
    time.setFont(font);
    time.setString(timestr);
    time.setFillColor(sf::Color::White);
    time.setOutlineColor(sf::Color::Blue);
    time.setOutlineThickness(2);


    // player 1 text
    tp1name.setFont(font);
    tp1name.setString(p1name);
    tp1name.setFillColor(sf::Color::White);
    tp1name.setOutlineColor(sf::Color::Blue);
    tp1name.setOutlineThickness(2);

    tp1points.setFont(font);
    tp1points.setString(to_string(sum_red_total));
    tp1points.setFillColor(sf::Color::White);
    tp1points.setOutlineColor(sf::Color::Blue);
    tp1points.setOutlineThickness(2);

    tp1point2.setFont(font);
    tp1point2.setString("2");
    tp1point2.setFillColor(sf::Color::White);
    tp1point2.setOutlineColor(sf::Color::Blue);
    tp1point2.setOutlineThickness(2);

    tp1point2m.setFont(font);
    tp1point2m.setString("-");
    tp1point2m.setFillColor(sf::Color::White);
    tp1point2m.setOutlineColor(sf::Color::Blue);
    tp1point2m.setOutlineThickness(2);

    tp1point3.setFont(font);
    tp1point3.setString("3");
    tp1point3.setFillColor(sf::Color::White);
    tp1point3.setOutlineColor(sf::Color::Blue);
    tp1point3.setOutlineThickness(2);

    tp1point3m.setFont(font);
    tp1point3m.setString("-");
    tp1point3m.setFillColor(sf::Color::White);
    tp1point3m.setOutlineColor(sf::Color::Blue);
    tp1point3m.setOutlineThickness(2);

    tp1point4.setFont(font);
    tp1point4.setString("4");
    tp1point4.setFillColor(sf::Color::White);
    tp1point4.setOutlineColor(sf::Color::Blue);
    tp1point4.setOutlineThickness(2);

    tp1point4m.setFont(font);
    tp1point4m.setString("-");
    tp1point4m.setFillColor(sf::Color::White);
    tp1point4m.setOutlineColor(sf::Color::Blue);
    tp1point4m.setOutlineThickness(2);

    tp1advantage.setFont(font);
    tp1advantage.setString("AV:0");
    tp1advantage.setFillColor(sf::Color::White);
    tp1advantage.setOutlineColor(sf::Color::Blue);
    tp1advantage.setOutlineThickness(1);

    tp1advantagem.setFont(font);
    tp1advantagem.setString("-");
    tp1advantagem.setFillColor(sf::Color::White);
    tp1advantagem.setOutlineColor(sf::Color::Blue);
    tp1advantagem.setOutlineThickness(2);

    tp1penalty.setFont(font);
    tp1penalty.setString("PN:0");
    tp1penalty.setFillColor(sf::Color::White);
    tp1penalty.setOutlineColor(sf::Color::Blue);
    tp1penalty.setOutlineThickness(1);

    tp1penaltym.setFont(font);
    tp1penaltym.setString("-");
    tp1penaltym.setFillColor(sf::Color::White);
    tp1penaltym.setOutlineColor(sf::Color::Blue);
    tp1penaltym.setOutlineThickness(2);

    tp1KO.setFont(font);
    tp1KO.setString("Knock Out");
    tp1KO.setFillColor(sf::Color::White);
    tp1KO.setOutlineColor(sf::Color::Blue);
    tp1KO.setOutlineThickness(2);

   

    // player 2 text
    tp2name.setFont(font);
    tp2name.setString(p2name);
    tp2name.setFillColor(sf::Color::White);
    tp2name.setOutlineColor(sf::Color::Blue);
    tp2name.setOutlineThickness(2);

    tp2points.setFont(font);
    tp2points.setString(to_string(sum_blue_total));
    tp2points.setFillColor(sf::Color::White);
    tp2points.setOutlineColor(sf::Color::Blue);
    tp2points.setOutlineThickness(2);

    tp2point2.setFont(font);
    tp2point2.setString("2");
    tp2point2.setFillColor(sf::Color::White);
    tp2point2.setOutlineColor(sf::Color::Blue);
    tp2point2.setOutlineThickness(2);

    tp2point2m.setFont(font);
    tp2point2m.setString("-");
    tp2point2m.setFillColor(sf::Color::White);
    tp2point2m.setOutlineColor(sf::Color::Blue);
    tp2point2m.setOutlineThickness(2);

    tp2point3.setFont(font);
    tp2point3.setString("3");
    tp2point3.setFillColor(sf::Color::White);
    tp2point3.setOutlineColor(sf::Color::Blue);
    tp2point3.setOutlineThickness(2);

    tp2point3m.setFont(font);
    tp2point3m.setString("-");
    tp2point3m.setFillColor(sf::Color::White);
    tp2point3m.setOutlineColor(sf::Color::Blue);
    tp2point3m.setOutlineThickness(2);

    tp2point4.setFont(font);
    tp2point4.setString("4");
    tp2point4.setFillColor(sf::Color::White);
    tp2point4.setOutlineColor(sf::Color::Blue);
    tp2point4.setOutlineThickness(2);

    tp2point4m.setFont(font);
    tp2point4m.setString("-");
    tp2point4m.setFillColor(sf::Color::White);
    tp2point4m.setOutlineColor(sf::Color::Blue);
    tp2point4m.setOutlineThickness(2);

    tp2advantage.setFont(font);
    tp2advantage.setString("AV:0");
    tp2advantage.setFillColor(sf::Color::White);
    tp2advantage.setOutlineColor(sf::Color::Blue);
    tp2advantage.setOutlineThickness(2);

    tp2advantagem.setFont(font);
    tp2advantagem.setString("-");
    tp2advantagem.setFillColor(sf::Color::White);
    tp2advantagem.setOutlineColor(sf::Color::Blue);
    tp2advantagem.setOutlineThickness(2);

    tp2penalty.setFont(font);
    tp2penalty.setString("PN:0");
    tp2penalty.setFillColor(sf::Color::White);
    tp2penalty.setOutlineColor(sf::Color::Blue);
    tp2penalty.setOutlineThickness(2);

    tp2penaltym.setFont(font);
    tp2penaltym.setString("-");
    tp2penaltym.setFillColor(sf::Color::White);
    tp2penaltym.setOutlineColor(sf::Color::Blue);
    tp2penaltym.setOutlineThickness(2);

    tp2KO.setFont(font);
    tp2KO.setString("Knock Out");
    tp2KO.setFillColor(sf::Color::White);
    tp2KO.setOutlineColor(sf::Color::Blue);
    tp2KO.setOutlineThickness(2);


    ttime = min + extrat -1;
    	
    window.setFramerateLimit(1);
    while (window.isOpen())
    {
    	if(timerbutton >0){
    		sec = sec - 1;
        	if(ttime == 0 && sec == 0)
        		break;
       		if (sec==0){
       			ttime = ttime-1;
        		sec = 59;	
       		}
    	}

    	
        		
        timestr = to_string(ttime) + "min " + to_string(sec) + "sec";

    	time.setString(timestr);

        window.clear();
        timer.setPosition(200,0);
        time.setPosition(210,10);
        // player 1 windows position
        player1.setPosition(0,0);
        p1points.setPosition(0,40);
        p1point2.setPosition(10,150);
        p1point2minus.setPosition(220,180);
        p1point3.setPosition(10,300);
        p1point3minus.setPosition(220,330);
        p1point4.setPosition(10,450);
        p1point4minus.setPosition(220,480);
        p1advantage.setPosition(10,580);
        p1advantageminus.setPosition(95,590);
        p1penalty.setPosition(150,580);
        p1penaltyminus.setPosition(235,590);
        p1KO.setPosition(10,700);

        //player1 text position
        tp1name.setPosition(10,0);
        tp1points.setPosition(10,50);
        tp1point2.setPosition(45,175);
        tp1point2m.setPosition(235,180);
        tp1point3.setPosition(45,325);
        tp1point3m.setPosition(235,330);
        tp1point4.setPosition(45,480);
        tp1point4m.setPosition(235,480);
        tp1advantage.setPosition(20,600);
        tp1advantagem.setPosition(100,600);
        tp1penalty.setPosition(160,600);
        tp1penaltym.setPosition(240,600);
        tp1KO.setPosition(60,715);
        




        // Player 2 Windows Position
        player2.setPosition(400,0);
        p2points.setPosition(400,40);
        p2point2.setPosition(310,150);
        p2point2minus.setPosition(520,180);
        p2point3.setPosition(310,300);
        p2point3minus.setPosition(520,330);
        p2point4.setPosition(310,450);
        p2point4minus.setPosition(520,480);
        p2advantage.setPosition(310,580);
        p2advantageminus.setPosition(395,590);
        p2penalty.setPosition(450,580);
        p2penaltyminus.setPosition(535,590);
        p2KO.setPosition(310,700);
        

        // Player 2 Text Position
        tp2name.setPosition(410,0);
        tp2points.setPosition(410,50);
        tp2point2.setPosition(345,175);
        tp2point2m.setPosition(535,180);
        tp2point3.setPosition(345,325);
        tp2point3m.setPosition(535,330);
        tp2point4.setPosition(345,480);
        tp2point4m.setPosition(535,480);
        tp2advantage.setPosition(320,600);
        tp2advantagem.setPosition(400,600);
        tp2penalty.setPosition(460,600);
        tp2penaltym.setPosition(540,600);
        tp2KO.setPosition(360,715);

        //Draw Timer
        window.draw(timer);
        window.draw(time);

        //Draw P1 Windows
        window.draw(player1);
        window.draw(p1points);
        window.draw(p1point2);
        window.draw(p1point2minus);
        window.draw(p1point3);
        window.draw(p1point3minus);
        window.draw(p1point4);
        window.draw(p1point4minus);
        window.draw(p1advantage);
        window.draw(p1advantageminus);
        window.draw(p1penalty);
        window.draw(p1penaltyminus);
        window.draw(p1KO);
        // Draw P1 Text 
        window.draw(tp1name);
        window.draw(tp1points);
        window.draw(tp1point2);
        window.draw(tp1point2m);
        window.draw(tp1point3);
        window.draw(tp1point3m);
        window.draw(tp1point4);
        window.draw(tp1point4m);
        window.draw(tp1advantage);
        window.draw(tp1advantagem);
        window.draw(tp1penalty);
        window.draw(tp1penaltym);
        window.draw(tp1KO);


        // Draw P2 Windows
        window.draw(player2);
        window.draw(p2points);
        window.draw(p2point2);
        window.draw(p2point2minus);
        window.draw(p2point3);
        window.draw(p2point3minus);
        window.draw(p2point4);
        window.draw(p2point4minus);
        window.draw(p2advantage);
        window.draw(p2advantageminus);
        window.draw(p2penalty);
        window.draw(p2penaltyminus);
        window.draw(p2KO);

        // Draw P2 Text 
        window.draw(tp2name);
        window.draw(tp2points);
        window.draw(tp2point2);
        window.draw(tp2point2m);
        window.draw(tp2point3);
        window.draw(tp2point3m);
        window.draw(tp2point4);
        window.draw(tp2point4m);
        window.draw(tp2advantage);
        window.draw(tp2advantagem);
        window.draw(tp2penalty);
        window.draw(tp2penaltym);
        window.draw(tp2KO);


        sf::Event event;
        while (window.pollEvent(event))
        {
        	
            if (event.type == sf::Event::Closed)
                window.close();
 
            if (event.type == sf::Event::MouseButtonPressed){   
                posx = event.mouseButton.x;
                posy = event.mouseButton.y;

                blue_point.clear();
                red_point.clear();
                adv_blue.clear();
                adv_red.clear();
                disadv_red.clear();
                disadv_blue.clear();
                knock_blue.clear();
                knock_red.clear();
                blue_point_neg.clear();
                red_point_neg.clear();
                adv_blue_neg.clear();
                adv_red_neg.clear();
                disadv_red_neg.clear();
                disadv_blue_neg.clear();
                //// Timer Button GUI
                if(posx >= 200 && posx <= 400 &&posy >= 0 && posy <= 70)
                	timerbutton = timerbutton*-1;

                //// Player 1(Red) GUI
                if(posx >= 10 && posx <= 110 && posy >= 150 && posy <= 250) // for player 1 point 2 
                    red_point.push_back('2');
                if(posx >= 220 && posx <= 270 && posy >= 180 && posy <= 230) // for player 1 point -2
                    red_point_neg.push_back('2');
                if(posx >= 10 && posx <= 110 && posy >= 300 && posy <= 400) // for player 1 point 3
                    red_point.push_back('3');
                if(posx >= 220 && posx <= 270 && posy >= 330 && posy <= 380) // for player 1 point -3
                    red_point_neg.push_back('3');
                if(posx >= 10 && posx <= 110 && posy >= 450 && posy <= 550) // for player 1 point 4
                    red_point.push_back('4');
                if(posx >= 220 && posx <= 270 && posy >= 480 && posy <= 530) // for player 1 point -4
                    red_point_neg.push_back('4');
                if(posx >= 10 && posx <= 90 && posy >= 580 && posy <= 660) // for player 1 advantage
                    adv_red.push_back('1');
                if(posx >= 95 && posx <= 120 && posy >= 590 && posy <= 660) // for player 1 -advantage
                    adv_red_neg.push_back('1');
                if(posx >= 150 && posx <= 230 && posy >= 580 && posy <= 660) // for player 1 disadvantage
                    disadv_red.push_back('1');
                if(posx >= 235 && posx <= 260 && posy >= 590 && posy <= 660) // for player 1 -disadvantage
                    disadv_red_neg.push_back('1');
                if(posx >= 10 && posx <= 260 && posy >= 700 && posy <= 780){ // for player 1 KO
                    knock_red.push_back('k');
                    redwin =1 ;
                    window.close();
                }
                   

                //// Player 2(Blue) GUI
                if(posx >= 310 && posx <= 410 && posy >= 150 && posy <= 250) // for player 2 point 2 
                    blue_point.push_back('2');
                if(posx >= 520 && posx <= 570 && posy >= 180 && posy <= 230) // for player 2 point -2
                    blue_point_neg.push_back('2');
                if(posx >= 310 && posx <= 410 && posy >= 300 && posy <= 400) // for player 2 point 3
                    blue_point.push_back('3');
                if(posx >= 520 && posx <= 570 && posy >= 330 && posy <= 380) // for player 2 point -3
                    blue_point_neg.push_back('3');
                if(posx >= 310 && posx <= 410 && posy >= 450 && posy <= 550) // for player 2 point 4
                    blue_point.push_back('4');
                if(posx >= 520 && posx <= 570 && posy >= 480 && posy <= 530) // for player 2 point -4
                    blue_point_neg.push_back('4');
                if(posx >= 310 && posx <= 390 && posy >= 580 && posy <= 660) // for player 2 advantage
                    adv_blue.push_back('1');
                if(posx >= 395 && posx <= 420 && posy >= 590 && posy <= 660) // for player 2 -advantage
                    adv_blue_neg.push_back('1');
                if(posx >= 450 && posx <= 530 && posy >= 580 && posy <= 660) // for player 2 disadvantage
                    disadv_blue.push_back('1');
                if(posx >= 535 && posx <= 560 && posy >= 590 && posy <= 660) // for player 2 -disadvantage
                    disadv_blue_neg.push_back('1');
                if(posx >= 310 && posx <= 560 && posy >= 700 && posy <= 780){ // for player 2 KO
                    knock_blue.push_back('k');
                    bluewin=1;
                    window.close();
                } 
                for(i=0;i<adv_red.size();i++){
                    point_adv_red=adv_red.at(i)-'0';
                    sum_adv_red = sum_adv_red + point_adv_red;
                }
                for (i=0;i<adv_red_neg.size();i++){// count advantage red subtract{
                    point_adv_red_neg=adv_red_neg.at(i)-'0';
                    sum_adv_red_neg = sum_adv_red_neg + point_adv_red_neg;
                }
                sum_adv_red_total = ((sum_adv_red) - (sum_adv_red_neg)); /// count total advantage red 
                for(i=0;i<disadv_red.size();i++){ //count disadvantage red{
                    point_disadv_red=disadv_red.at(i)-'0';
                    sum_disadv_red = sum_disadv_red + point_disadv_red;
                }
                	
                for(i=0;i<disadv_red_neg.size();i++){ //count disadvantage red subtract{
                    point_disadv_red_neg=disadv_red_neg.at(i)-'0';
                    sum_disadv_red_neg = sum_disadv_red_neg + point_disadv_red_neg;
                }
                sum_disadv_red_total=((sum_disadv_red) - (sum_disadv_red_neg)); //count total disadvantage red


                for(i=0;i<red_point.size();i++) //count point for red 
                {
                point_red=red_point.at(i)-'0';
                sum_red = sum_red + point_red;
                }
                for(i=0;i<red_point_neg.size();i++) //count point for red subtract
                {
                point_red_neg=red_point_neg.at(i)-'0';
                sum_red_neg = sum_red_neg + point_red_neg;
                }
                sum_red_total= ((sum_red) -(sum_red_neg)); //count total point for red 

                tempsr = "AV:" + to_string(sum_adv_red_total);

                tempspr = "PN:" + to_string(sum_disadv_red_total);
                tp1points.setString(to_string(sum_red_total));
                tp1advantage.setString(tempsr);
                tp1penalty.setString(tempspr);

                
            
                for(i=0;i<adv_blue.size();i++) //count advantage blue 
                {
                point_adv_blue=adv_blue.at(i)-'0';
                sum_adv_blue = sum_adv_blue + point_adv_blue;
                }
                for (i=0;i<adv_blue_neg.size();i++) //count advantage blue subtract
                {
                    point_adv_blue_neg=adv_blue_neg.at(i)-'0';
                    sum_adv_blue_neg = sum_adv_blue_neg + point_adv_blue_neg;
                }
                sum_adv_blue_total = ((sum_adv_blue) - (sum_adv_blue_neg)); //total advantage blue
                for(i=0;i<disadv_blue.size();i++) //total disadvantage blue
                {
                point_disadv_blue=disadv_blue.at(i)-'0';
                sum_disadv_blue = sum_disadv_blue + point_disadv_blue;
                }
                for(i=0;i<disadv_blue_neg.size();i++) //total disadvantage subtract blue
                {
                point_disadv_blue_neg=disadv_blue_neg.at(i)-'0';
                sum_disadv_blue_neg = sum_disadv_blue_neg + point_disadv_blue_neg;
                }
                sum_disadv_blue_total=((sum_disadv_blue) - (sum_disadv_blue_neg));// total disadvantage blue
                
                for(i=0;i<blue_point.size();i++) //total points blue
                {
                point_blue=blue_point.at(i)-'0';
                sum_blue = sum_blue + point_blue;
                }
                for(i=0;i<blue_point_neg.size();i++)//total points blue subtract
                {
                point_blue_neg=blue_point_neg.at(i)-'0';
                sum_blue_neg = sum_blue_neg + point_blue_neg;
                }
                sum_blue_total= ((sum_blue) - (sum_blue_neg)); //total points blue 
               
                tempsb = "AV:" + to_string(sum_adv_blue_total);
                tempspb = "PN:" + to_string(sum_disadv_blue_total);
                tp2points.setString(to_string(sum_blue_total));
                tp2advantage.setString(tempsb);
                tp2penalty.setString(tempspb);

                if (sum_disadv_red_total>3)
                {
                bluewin=1; 
                window.close();
                }
                if (sum_disadv_blue_total > 3)
                {
                redwin=1; 
                window.close();
                }
                
            }        
           
        }
        window.display();
    }
    cout << "\n";
    cout << p1name << " score\n";
    cout << "Points: "<< sum_red_total<< "\n";
    cout << "Advantage: " << sum_adv_red_total<< "\n";
    cout << "Disadvantage: " << sum_disadv_red_total << "\n";
    cout << "\n";
     cout << p2name << " score\n";
    cout << "Points: "<< sum_blue_total<< "\n";
    cout << "Advantage: " << sum_adv_blue_total<< "\n";
    cout << "Disadvantage: " << sum_disadv_blue_total << "\n";
    if(bluewin == 1){
    	cout << p2name << " Wins!\n";
    	return 0;
    }
    if(redwin == 1){
    	cout << p1name << " Wins!\n";
    	return 0;
    }

 	if (sum_blue_total>sum_red_total){
                    bluewin=1;
    }

    else if (sum_blue_total<sum_red_total){
        redwin=1;
    }
    else if(sum_blue_total==sum_red_total){
        if (sum_adv_blue_total>sum_adv_red_total)
            bluewin=1;
        else if(sum_adv_red_total>sum_adv_blue_total)
            redwin=1;
        else if (sum_adv_red_total == sum_adv_blue_total){
            if (sum_disadv_red_total>sum_disadv_blue_total)
                bluewin=1;
        	else if (sum_disadv_red_total<sum_disadv_blue_total)
                redwin=1;
            else if (sum_disadv_red_total==sum_disadv_blue_total)
                cout << "Judge Decision"<<"\n";
        }
    }
    if (redwin==1){
        cout << p1name << " Wins!" << "\n";
        return 0;
    }
    if (bluewin==1){
        cout << p2name << " Wins!"<< "\n";
        return 0;
    }
    if (redwin==1&&bluewin==1){
        cout << "invalid" << "\n"; 
        return 0;
    }
}


