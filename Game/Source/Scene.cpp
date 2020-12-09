#include "App.h"
#include "Input.h"
#include "Textures.h"
#include "Audio.h"
#include "Render.h"
#include "Window.h"
#include "Scene.h"
#include "Body.h"
#include "PhysicsEngine.h"


#include "Defs.h"
#include "Log.h"

Scene::Scene() : Module()
{
	name.Create("scene");
}

// Destructor
Scene::~Scene()
{}

// Called before render is available
bool Scene::Awake()
{
	LOG("Loading Scene");
	bool ret = true;

	return ret;
}

// Called before the first frame
bool Scene::Start()
{
	img = app->tex->Load("Assets/Textures/test.png");
	app->audio->PlayMusic("Assets/Audio/Music/music_spy.ogg");
	
	rocket = app->physicsEngine->createRocket(20, 20, 5, 10.0f, 10, 50.0f);

	return true;
}

// Called each loop iteration
bool Scene::PreUpdate()
{
	return true;
}

// Called each loop iteration
bool Scene::Update(float dt)
{

	/*if(app->input->GetKey(SDL_SCANCODE_UP) == KEY_REPEAT)
		app->render->camera.y -= 1;

	if(app->input->GetKey(SDL_SCANCODE_DOWN) == KEY_REPEAT)
		app->render->camera.y += 1;

	if(app->input->GetKey(SDL_SCANCODE_LEFT) == KEY_REPEAT)
		app->render->camera.x -= 1;

	if(app->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_REPEAT)
		app->render->camera.x += 1;*/


	if (app->input->GetKey(SDL_SCANCODE_UP) == KEY_REPEAT)
		rocket->AddMomentum(0.0f, -0.5f);

	if (app->input->GetKey(SDL_SCANCODE_DOWN) == KEY_REPEAT)
		rocket->AddMomentum(0.0f, 0.5f);

	if (app->input->GetKey(SDL_SCANCODE_LEFT) == KEY_REPEAT)
		rocket->AddMomentum(-0.5f, 0.0f);

	if (app->input->GetKey(SDL_SCANCODE_RIGHT) == KEY_REPEAT)
		rocket->AddMomentum(0.5f, 0.0f);

	


	

	return true;
}

// Called each loop iteration
bool Scene::PostUpdate()
{
	bool ret = true;

	if(app->input->GetKey(SDL_SCANCODE_ESCAPE) == KEY_DOWN)
		ret = false;

	
	app->render->DrawCircle(rocket->x, rocket->y, 20, 255, 0, 0);

	return ret;
}

// Called before quitting
bool Scene::CleanUp()
{
	LOG("Freeing scene");

	delete rocket;

	return true;
}
