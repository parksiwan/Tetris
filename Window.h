//
//Header file : Window.h
//Purpose     : Declaration of Window class 
//Features    : Creates & closes main window, gets user key input and updates window screen
//
#ifndef WINDOW_H
#define WINDOW_H

#include <string>
#include <SDL.h>

//type of user's input message
enum INPUT_MESSAGE { NOTHING = 0, START = 1, EXIT = 2, RESTART = 3 };
//size of window (w x h : 800 x 600)
const int W_WIDTH = 800;
const int W_HEIGHT = 600;

//title_        : title of window 
//width_        : width of window
//height_       : height of window
//closed_       : flag indicating window's close
//inputMessage_ : input message sent by user 
//window_       : SDL_Window struct pointer holding Window information 
//renderer_     : SDL_Render struct pointer handling all rendering
class Window {
public:
	Window(const std::string& title, int width, int height);
	~Window();
	
	void pollEvents(SDL_Event& event);
	void clear() const;
	inline bool isClosed() const { return closed_; }
	int getInputMessage();

private:
	std::string title_;
	int width_ = W_WIDTH;
	int height_ = W_HEIGHT;
	bool closed_ = false;
	int inputMessage_ = 0;
	SDL_Window* window_ = nullptr;

protected:
	SDL_Renderer* renderer_ = nullptr;
};

#endif
