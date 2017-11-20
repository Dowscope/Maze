using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile {

	// We should know the position on the game board this tile is located
	int x;

	public int X {
		get {
			return x;
		}
	}

	int y;

	public int Y {
		get {
			return y;
		}
	}

	// We should know if it has been visited
	bool hasBeenVisited = false;

	// We should know if it is the starting tile or ending tile
	bool isStartingTile = false;
	bool isEndingTile = false;

	// We should know if it is the current tile
	bool isCurrentTile = false;

	// We should know if it has any walls surrounding it
	bool hasNorthWall = true;
	bool hasEastWall = true;
	bool hasSouthWall = true;
	bool hasWestWall = true;

	public Tile(int x, int y) {
		this.x = x;
		this.y = y;
	}
}
