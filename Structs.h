// Structs.h
// Guy Simmons, 17th October 1997.

#ifndef	STRUCTS_H
#define	STRUCTS_H

//@CosmicDevGuy (2018/05/23): Updated references, so that header files could be located properly (by source and/or header files)
#include	"..\Editor\Headers\Anim.h"

//---------------------------------------------------------------

struct GameCoord
{
	SLONG		X,
				Y,
				Z;
};

struct SVector
{
	SLONG	X,Y,Z;
};

struct SmallSVector
{
	SWORD	X,Y,Z;
};

#ifndef	PSX
struct	SVECTOR
{
	SLONG	X,Y,Z;
};

#endif

struct	TinyXZ
{
	SBYTE	Dx,Dz;
	SWORD	Angle;
};

struct	MiniTextureBits
{
	UWORD 	X:3;
	UWORD 	Y:3;
	UWORD	Page:4;
	UWORD	Rot:2;
	UWORD	Flip:2;
	UWORD	Size:2;
};

typedef struct
{
	UBYTE action;
	UBYTE dir;
	UBYTE dest_x;
	UBYTE dest_z;
	
} MAV_Action;


//---------------------------------------------------------------

struct Thing;			//	Prototype the 'Thing' structure.
struct CommandList;		//	Prototype 'CommandList' structure.

#define	COMMON(TYPE)	UBYTE			TYPE;			\
						UBYTE			padding;		\
						THING_INDEX		Thing;			\
						ULONG			Flags;			

/*
#define	COMMON(TYPE)	UBYTE			TYPE,			\
										State;			\
						UWORD			CommandRef,		\
										Command;		\
						SWORD			Velocity;		\
						ULONG			Flags;			\
						SLONG			Timer;			\
						CommandList		*ComList;		\
						THING_INDEX		Thing,padding;
*/

//---------------------------------------------------------------


#define	FLAGS_DRAW_SHADOW	(1<<0)


//---------------------------------------------------------------

#endif
