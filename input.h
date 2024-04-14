#ifndef _INPUT__H
#define _INPUT__H

struct Input {
    int keyboard[MAX_KEYBOARD_KEYS] = {0};

	void init()
    {
        for (int i = 0; i < MAX_KEYBOARD_KEYS; i++) keyboard[i] = 0;
    }

    void get() {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_QUIT:
                    exit(0);
                    break;

                case SDL_KEYDOWN:
                    if (event.key.repeat == 0
                        && event.key.keysym.scancode < MAX_KEYBOARD_KEYS) {
                        keyboard[event.key.keysym.scancode] = 1;
                    }
                    break;

                case SDL_KEYUP:
                    if (event.key.repeat == 0
                        && event.key.keysym.scancode < MAX_KEYBOARD_KEYS) {
                        keyboard[event.key.keysym.scancode] = 0;
                    }
                    break;

                default:
                    break;
            }
        }
    }
};

void doKeyUp(SDL_KeyboardEvent *event, App& app)
{
	if (event->repeat == 0 && event->keysym.scancode < MAX_KEYBOARD_KEYS)
	{
		app.keyboard[event->keysym.scancode] = 0;
	}
}

void doKeyDown(SDL_KeyboardEvent *event, App& app)
{
	if (event->repeat == 0 && event->keysym.scancode < MAX_KEYBOARD_KEYS)
	{
		app.keyboard[event->keysym.scancode] = 1;
	}
}

void doInput(App& app)
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
		{
			case SDL_QUIT:
				exit(0);
				break;

            case SDL_KEYDOWN:
				doKeyDown(&event.key, app);
				break;

			case SDL_KEYUP:
				doKeyUp(&event.key, app);
				break;

			default:
				break;
		}
    }
}



#endif // _INPUT__H
