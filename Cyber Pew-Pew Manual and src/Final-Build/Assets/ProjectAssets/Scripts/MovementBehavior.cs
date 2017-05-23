// Travis Weaver
// Thanks to Unity's 2D Rogue Like Tutorial and Unity forum for the tips
// Provides movement functionality for the player

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MovementBehavior : MonoBehaviour 
{
	public LayerMask blockingLayer;		// Layer to check collisions
	public float moveTime = 0.1f;

	private BoxCollider2D boxCollider;
	private Rigidbody2D	rigidBody2D;
	private float inverseMoveTime;
	private Animator animator;

	// Use this for initialization
	void Start () 	// Protected and virtual in case we want an inherited class to have a different Start() function
	{
		boxCollider = GetComponent<BoxCollider2D>();
		rigidBody2D = GetComponent<Rigidbody2D>();
		animator = this.GetComponent<Animator> ();

		inverseMoveTime = 1f / moveTime;
	}
	
	// Update is called once per frame
	void Update () 
	{
		var horizontal = Input.GetAxis("Horizontal");
		var vertical = Input.GetAxis("Vertical");
		var move = new Vector3 (horizontal, vertical, 0);

		if (horizontal > 0 || horizontal < 0 || vertical > 0 || vertical < 0) 
		{
			animator.SetInteger ("Direction", 1);
		} 

		else 
		{
			animator.SetInteger ("Direction", 0);
		}

		transform.position += move * inverseMoveTime * Time.deltaTime;
	}
}
