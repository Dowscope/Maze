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

	// We should have a container for all the tiles.
	Tile[,] tileContainer;

	public Board(int width = 10, int height = 10) {
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
}
