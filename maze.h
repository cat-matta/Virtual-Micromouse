int maze[16][16]={ // might move to a separate file to make code clean
	{14,13,12,11,10,9,8,7,7,8,9,10,11,12,13,14},
	{13,12,11,10,9,8,7,6,6,7,8,9,10,11,12,13},
	{12,11,10,9,8,7,6,5,5,6,7,8,9,10,11,12},
	{11,10,9,8,7,6,5,4,4,5,6,7,8,9,10,11},
	{10,9,8,7,6,5,4,3,3,4,5,6,7,8,9,10},
	{9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9},
	{8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8},
	{7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7},  //row 7, where our center is
	{7,6,5,4,3,2,1,0,0,1,2,3,4,5,6,7},  //row 8, where our center is
	{8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8},
	{9,8,7,6,5,4,3,2,2,3,4,5,6,7,8,9},
	{10,9,8,7,6,5,4,3,3,4,5,6,7,8,9,10},
	{11,10,9,8,7,6,5,4,4,5,6,7,8,9,10,11},
	{12,11,10,9,8,7,6,5,5,6,7,8,9,10,11,12},
	{13,12,11,10,9,8,7,6,6,7,8,9,10,11,12,13},
	{14,13,12,11,10,9,8,7,7,8,9,10,11,12,13,14},
	};