#include <iostream>
#include <SDL.h>



int main(int argc, char *args[]) {
    bool quit = false;

    SDL_Window* gWindow = SDL_CreateWindow("Event handle", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    SDL_Surface* gScreenSurface = SDL_GetWindowSurface(gWindow);
    SDL_Surface* gXOut = SDL_LoadBMP("images/x.bmp");

    if(gXOut == nullptr){
        printf( "Unable to load image %s! SDL Error: %s\n", "images/x.bmp", SDL_GetError() );
    }

    SDL_Event event;

    while (!quit) {
        while (SDL_PollEvent(&event) != 0) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }

        SDL_BlitSurface(gXOut, nullptr, gScreenSurface, nullptr);

        SDL_UpdateWindowSurface(gWindow);
    }
    return 0;
}
