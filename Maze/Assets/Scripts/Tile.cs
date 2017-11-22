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

	int z;

	public int Z {
		get {
			return z;
		}
	}

	// We should know if it has been visited
	bool hasBeenVisited = false;

	public bool HasBeenVisited {
		get {
			return hasBeenVisited;
		}
	}

	// We should know if it is the starting tile or ending tile
	bool isStartingTile = false;
	bool isEndingTile = false;

	// We should know if it is the current tile
	bool isCurrentTile = false;

	// We should know if it has any walls surrounding it
	public bool hasNorthWall = true;
	public bool hasEastWall = true;
	public bool hasSouthWall = true;
	public bool hasWestWall = true;

	// Reference to neighbours
	public Tile northTile;
	public Tile westTile;
	public Tile southTile;
	public Tile eastTile;

	public Tile(int x, int z) {
		this.x = x;
		this.z = z;
	}

	public void setAsStartTile(bool start) {
		isStartingTile = start;
		hasSouthWall = false;
	}

	public void setAsEndTile(bool end) {
		isEndingTile = end;
	}

	public void setCurrentTile(bool current) {
		isCurrentTile = current;
	}

	public void setVisitedTile(bool visit) {
		hasBeenVisited = visit;
	}

	public void resetTile() {
		hasBeenVisited = false;
		isCurrentTile = false;
		isEndingTile = false;
		isStartingTile = false;
		hasNorthWall = true;
		hasSouthWall = true;
		hasEastWall = true;
		hasWestWall = true;
	}
}
