using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileDestroyOnHit : MonoBehaviour {

	// Use this for initialization
	void Start () 
    {
		
	}
	
	// Update is called once per frame
	void Update () 
    {
		
	}

    void OnCollisionEnter(Collision colObject)
    {
        Debug.Log ("Debug: OnCollisionEnter");
        Destroy(colObject.gameObject);
    }
}
