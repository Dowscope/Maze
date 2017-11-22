using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardController : MonoBehaviour {

	// Get reference to the gameboard
	Board board;

	// Get reference to the tile prefab
	public GameObject tileGO;

	// Array of gameobjects for each tile
	GameObject[,] goContainer;
	Tile[,] tileData;

	// Use this for initialization
	void Start () {
		board = new Board ();
		goContainer = new GameObject[board.Width, board.Height];
		tileData = new Tile[board.Width, board.Height];

		for (int z = 0; z < board.Height; z++) {
			for (int x = 0; x < board.Width; x++) {
				goContainer[x,z] = Instantiate (tileGO,
												new Vector3 (x, 0, z),
												Quaternion.identity,
												this.transform) 
												as GameObject;
				goContainer [x, z].name = "Tile_" + x + "_" + z;

				tileData [x, z] = board.getTileAt (x, z);
			}
		}

		board.newBoard ();
	}
	
	// Update is called once per frame
	void Update () {
		for (int z = 0; z < board.Height; z++) {
			for (int x = 0; x < board.Width; x++) {
				Tile tile = tileData [x, z];
				GameObject go = goContainer [x, z];

				go.transform.Find ("NorthWall").gameObject.SetActive (tile.hasNorthWall);
				go.transform.Find ("EastWall").gameObject.SetActive (tile.hasEastWall);
				go.transform.Find ("SouthWall").gameObject.SetActive (tile.hasSouthWall);
				go.transform.Find ("WestWall").gameObject.SetActive (tile.hasWestWall);
			}
		}
	}
}
