using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour 
{
    public Transform target;
    public int velocity;
    public int rotationSpeed;
    public AISpawner aiSpawner;
    public ScoreManager scManager;

    private Transform currentTransform;

    void Awake()
    {
        currentTransform = transform;
    }

	// Use this for initialization
	void Start () 
    {
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        target = player.transform;

        aiSpawner = FindObjectOfType<AISpawner>();
        scManager = FindObjectOfType<ScoreManager>();
	}
	
	// Update is called once per frame
	void Update () 
    {
        Vector3 direction = target.position - currentTransform.position;
        direction.z = 0.0f;

        if (direction != Vector3.zero)
        {
            currentTransform.rotation = Quaternion.Slerp(currentTransform.rotation, Quaternion.FromToRotation(Vector3.left, direction), rotationSpeed * Time.deltaTime);
        }

        currentTransform.position += (target.position - currentTransform.position).normalized * velocity * Time.deltaTime;
	}

    void OnTriggerEnter2D(Collider2D colObject)
    {
        if (colObject.name == "ProjectileLaser(Clone)")
        {
            Destroy(gameObject);
            aiSpawner.KillEnemy();
            scManager.IncreaseScore();
            Destroy(colObject.gameObject);
        }
    }
}
