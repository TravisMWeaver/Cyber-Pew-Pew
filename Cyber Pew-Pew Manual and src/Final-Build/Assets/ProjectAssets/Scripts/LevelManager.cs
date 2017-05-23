// Travis Weaver
// Level management scripting functions including...
// Respawn system

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour {

	public GameObject checkpoint;
	private MovementBehavior player;

	// Use this for initialization
	void Start () 
	{
		player = FindObjectOfType<MovementBehavior> ();
	}
	
	// Update is called once per frame
	void Update ()
	{
		
	}

	public void RespawnPlayer()
	{
		Debug.Log ("Debug: Respawn Player");

		player.transform.position = checkpoint.transform.position;
	}
}
