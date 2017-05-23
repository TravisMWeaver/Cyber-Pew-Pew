// Travis Weaver
// Thanks to the Unity forum for the help
// Script that allows the main camera to follow the player on the x and y axis

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBehavior : MonoBehaviour 
{
	public Transform player;
	public Vector3 cameraOffset;

	// Use this for initialization
	void Start () 
	{
		cameraOffset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	void Update () 
	{
		transform.position = new Vector3 (player.position.x + cameraOffset.x, player.position.y + cameraOffset.y, cameraOffset.z);
	}
}
