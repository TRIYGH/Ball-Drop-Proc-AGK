// Includes, namespace and prototypes
#include "template.h"
using namespace AGK;
app App;

//constants for the screen resolution
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int BALL = 1;
int x, y, FallRate;

// Begin app, called once at the start
void app::Begin( void )
{
	//set the virtual resolution
	agk::SetVirtualResolution(SCREEN_WIDTH, SCREEN_HEIGHT);
	agk::CreateSprite(BALL,"ball.png");
	y = 0;
	FallRate = 1;
	x = agk::Random(0,620);
}

// Main loop, called every frame
void app::Loop ( void )
{
	do{
	agk::SetSpritePosition(BALL,x,y);
	y = y + FallRate;
	agk::Sync();
	}while ( y < 430 );
	
	FallRate = FallRate + 1;
	y=0;
	x = agk::Random(0,600);
}

// Called when the app ends
void app::End ( void )
{
}
