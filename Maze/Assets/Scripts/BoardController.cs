using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoardController : MonoBehaviour {

	// Get reference to the gameboard
	Board board;

	// Get reference to the tile prefab
	public GameObject tileGO;

	// Use this for initialization
	void Start () {
		board = new Board ();

		for (int z = 0; z < board.Height; z++) {
			for (int x = 0; x < board.Width; x++) {
				Instantiate (tileGO,
							new Vector3 (x, 0, z),
							Quaternion.identity,
							this.transform);
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
