// Travis Weaver
// Scripting for player projectiles
// Will spawn projectile, but projectile will not move yet

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour 
{
	public GameObject projectile;
	public float speed = 300f;
	public Camera camera;
	public AudioClip projectileSound;

	private Transform projectileObject;
	private Vector2 lookDirection;

    // Rigidbody rigid;

	// Use this for initialization
	void Start () 
	{
        // rigid = GetComponent<Rigidbody>();
		projectileObject = transform;
	}
	
	// Update is called once per frame
	void Update () 
	{
		//lookDirection = mousePosition - screenPosition2D;
		//lookDirection.Normalize ();

		if (Input.GetButtonDown ("Fire2")) 
		{
			var projectileInstance = Instantiate (projectile, projectileObject.position, projectileObject.rotation) as GameObject;
			Physics2D.IgnoreCollision (projectileInstance.GetComponent<Collider2D> (), GetComponent<Collider2D> ());
			var rigidBodyProjectile = projectileInstance.GetComponent<Rigidbody2D> ();

            Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
            Vector3 direction = (Input.mousePosition - screenPosition).normalized;
            projectileInstance.GetComponent<Rigidbody2D>().velocity = direction * speed;

			SoundManager.smInstance.Play (projectileSound);

			Destroy (projectileInstance, 1.0f);
		}
	}

    void OnCollisionEnter(Collision colObject)
    {
        Destroy(gameObject);
    }
}