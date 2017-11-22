using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Board {

	// We should know how big the board is.
	int width;

	public int Width {
		get {
			return width;
		}
	}

	int height;

	public int Height {
		get {
			return height;
		}
	}

	Tile startingTile;
	Tile currentTile;
	Tile previousTile;

	// We should have a container for all the tiles.
	Tile[,] tileContainer;

	// We need an array to hold the visited tiles.
	Stack visitedTiles = new Stack();

	// Flags
	bool isMapCreated = false;

	public Board(int width = 20, int height = 20) {
		this.width = width;
		this.height = height;

		tileContainer = new Tile[width, height];

		for (int z = 0; z < height; z++) {
			for (int x = 0; x < width; x++) {
				tileContainer[x, z] = new Tile (x, z);
			}
		}
	}

	public Tile getTileAt(int x, int z) {
		return tileContainer [x, z];
	}

	public void newBoard() {
		foreach (Tile t in tileContainer) {
			t.resetTile ();
		}

		startingTile = getTileAt (0, 0);
		startingTile.setAsStartTile (true);

		currentTile = startingTile;
		currentTile.setCurrentTile (true);

		previousTile = startingTile;

		setTileNeighbours ();
		createBoard ();
	}

	void createBoard() {
		while (isMapCreated == false) {

			Tile nextTile = findNeighbour ();

			if (nextTile != null) {
				currentTile.setVisitedTile (true);
				visitedTiles.Push (nextTile);

				int x = currentTile.X - nextTile.X;
				int z = currentTile.Z - nextTile.Z;

				string s = x + " " + z;

				Debug.Log (s);

				if (x > 0) {
					currentTile.hasWestWall = false;
					nextTile.hasEastWall = false;
				}
				else if (x < 0) {
					currentTile.hasEastWall = false;
					nextTile.hasWestWall = false;
				}
				else if (z < 0) {
					currentTile.hasNorthWall = false;
					nextTile.hasSouthWall = false;
				}
				else {
					currentTile.hasSouthWall = false;
					nextTile.hasNorthWall = false;
				}

				currentTile = nextTile;
				currentTile.setCurrentTile (true);

			}
			else {
				currentTile.setVisitedTile (true);
				if (visitedTiles.Count == 0) {
					isMapCreated = true;
					return;
				}

				currentTile = visitedTiles.Pop() as Tile;
				currentTile.setCurrentTile (true);
			}

		}
	}

	Tile findNeighbour() {
		
		List<Tile> tmpAry = new List<Tile> ();

		if (currentTile.northTile != null && currentTile.northTile.HasBeenVisited == false) {
			tmpAry.Add (currentTile.northTile);
		}
		if (currentTile.eastTile != null && currentTile.eastTile.HasBeenVisited == false) {
			tmpAry.Add (currentTile.eastTile);
		}
		if (currentTile.southTile != null && currentTile.southTile.HasBeenVisited == false) {
			tmpAry.Add (currentTile.southTile);
		}
		if (currentTile.westTile != null && currentTile.westTile.HasBeenVisited == false) {
			tmpAry.Add (currentTile.westTile);
		}

		if (tmpAry.Count == 0) {
			return null;
		}

		int randomIndex = Random.Range (0, tmpAry.Count);

		return tmpAry [randomIndex];

	}

	void setTileNeighbours() {

		foreach (Tile t in tileContainer) {

			if (t.X < width - 1) {
				t.eastTile = getTileAt (t.X + 1, t.Z);
			}

			if (t.X > 0) {
				t.westTile = getTileAt (t.X - 1, t.Z);
			}

			if (t.Z < height - 1) {
				t.northTile = getTileAt (t.X, t.Z + 1);
			}

			if (t.Z > 0) {
				t.southTile = getTileAt (t.X, t.Z - 1);
			}

		}

	}
}
