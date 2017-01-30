#ifndef TETRADS_H
#define TETRADS_H

#include <iostream>
#include "SDL.h"

enum MOVING_DIRECTION { DOWN = 1, LEFT = 2, RIGHT = 3, DDOWN = 4 };

const short TYPE = 7;
const short ROTATION = 4;
const short HORIZONTAL = 5;
const short VERTICAL = 5;

// Type : Square = 0, I = 1, L = 2, L-mirr = 3, N = 4, N-mirr = 5, T = 6
// Rotation : clockwise (0->1->2->3) / anti-clockwise(0->3->2->1)
// When a tetrad moves, the whole 5x5 array moves together
const short tetrads[TYPE][ROTATION][HORIZONTAL][VERTICAL] =
{
	// Square block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// I block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 1 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 1, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// L block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 1, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// L-mirrored block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 0, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// N block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 1, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// N-mirrored block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 0, 1, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 0, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	},
	// T block
	{
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 1, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		},
		{
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 1, 0, 0 },
			{ 0, 1, 1, 1, 0 },
			{ 0, 0, 0, 0, 0 },
			{ 0, 0, 0, 0, 0 }
		}
	}
};

//start row of 5x5 array when it is firstly displayed at the top field.
const short startingRow[TYPE][ROTATION][1] =
{
	// Square block
	{
		{ 3 },{ 3 },{ 3 },{ 3 }
	},
	// I block
	{
		{ 2 },{ 4 },{ 2 },{ 3 }
	},
	// L block
	{
		{ 3 },{ 3 },{ 3 },{ 2 }
	},
	// L-mirrored block
	{
		{ 3 },{ 2 },{ 3 },{ 3 }
	},
	// N block
	{
		{ 3 },{ 3 },{ 3 },{ 2 }
	},
	// N-mirrored block
	{
		{ 3 },{ 3 },{ 3 },{ 2 }
	},
	// T block
	{
		{ 3 },{ 3 },{ 3 },{ 2 }
	}
};

//Most outer row or column of each tetrad in 5x5 array. It includes down, left, right and up side of each tetrad
const short edgeLine[TYPE][ROTATION][4] =
{
	// Square block
	{
		{ 3, 2, 3, 2 },{ 3, 2, 3, 2 },{ 3, 2, 3, 2 },{ 3, 2, 3, 2 }
	},
	// I block
	{
		{ 2, 1, 4, 2 },{ 4, 2, 2, 1 },{ 2, 0, 3, 2 },{ 3, 2, 2, 0 }
	},
	// L block
	{
		{ 3, 2, 3, 1 },{ 3, 1, 3, 2 },{ 3, 1, 2, 1 },{ 2, 1, 3, 1 }
	},
	// L-mirrored block
	{
		{ 3, 1, 2, 1 },{ 2, 1, 3, 1 },{ 3, 2, 3, 1 },{ 3, 1, 3, 2 }
	},
	// N block
	{
		{ 3, 2, 3, 1 },{ 3, 1, 3, 2 },{ 3, 1, 2, 1 },{ 2, 1, 3, 1 }
	},
	// N-mirrored block
	{
		{ 3, 2, 3, 1 },{ 3, 1, 3, 2 },{ 3, 1, 2, 1 },{ 2, 1, 3, 1 }
	},
	// T block
	{
		{ 3, 2, 3, 1 },{ 3, 1, 3, 2 },{ 3, 1, 2, 1 },{ 2, 1, 3, 1 }
	}
};

class Tetrads {
	friend class Game;
public:
	Tetrads(int type, int rotation);
	~Tetrads();

	void pollEvents(SDL_Event& event);
	void movedownTedrads();
	void updateTedrads();
	bool isEnded();
	int getCurrentX();
	int getCurrentY();
private:
	int curX_, curY_;
	int direction_ = 0;         //1:down, 2:left, 3:right
	int type_, rotation_;       //type_ : type of tetrads, rotation_ : value of 4 different rotation
	int downEdge_, leftEdge_, rightEdge_, upEdge_;
	short tetrad_[HORIZONTAL][VERTICAL] = { { 0 } };
	bool ended_ = false;

};

#endif
