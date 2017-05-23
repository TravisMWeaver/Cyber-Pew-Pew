// Travis Weaver
// Kill box script
// Thanks to gamesplusjames on YouTube

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KillBox : MonoBehaviour {

	public LevelManager levelManager;
	public UIManager uiManager;

	public int livesLost;

	// Use this for initialization
	void Start () 
	{
		levelManager = FindObjectOfType<LevelManager>();
		uiManager = FindObjectOfType<UIManager> ();

		livesLost = -1;
	}
	
	// Update is called once per frame
	void Update () 
    {
		
	}

	void OnTriggerEnter2D(Collider2D colObject)
	{
		if (colObject.name == "Player") 
		{
			levelManager.RespawnPlayer ();
			uiManager.UpdateLives (livesLost);
		}
	}
}