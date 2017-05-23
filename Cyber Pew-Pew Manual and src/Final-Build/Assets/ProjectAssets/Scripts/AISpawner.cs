// Basic AI spawner, additional functionality to be added in the future

using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class AISpawner : MonoBehaviour 
{
    public GameObject enemyType1;
    public GameObject enemyType2;
    public GameObject enemyType3;

    public int totalEnemies = 5;
    public bool spawn = true;
    public Transform[] spawnPointsArr;
    public float spawnTime = 1f;
    private static int numEnemies = 0;

    private Transform currentTransform;



	// Use this for initialization
	void Start () 
    {
        numEnemies = 0;
        InvokeRepeating("SpawnEnemy", spawnTime, spawnTime);
	}
	
	// Update is called once per frame
	void Update () 
    {
        /*
         * Decided to use InvokeRepeating as this wasn't completely working for some reason
         * 
        if (spawn)
        {
            if (numEnemies < totalEnemies)
            {
                SpawnEnemy();
                Thread.Sleep(spawnTime);
            }
        }
        */
	}

    public void SpawnEnemy()
    {
        int spIndex = Random.Range(0, spawnPointsArr.Length);
        int enIndex = Random.Range(0, 3);

        if (numEnemies < totalEnemies)
        {
            if (enIndex == 0)
            {
                GameObject currentEnemy = (GameObject)Instantiate(enemyType1, spawnPointsArr[spIndex].position, Quaternion.Euler(45, 0, 0)); // GameObject currentEnemy = (GameObject) ... gameObject.transform.position
                totalEnemies++;
            }
            else if (enIndex == 1)
            {
                GameObject currentEnemy = (GameObject)Instantiate(enemyType2, spawnPointsArr[spIndex].position, Quaternion.Euler(45, 0, 0)); 
            }
            else if (enIndex == 2)
            {
                GameObject currentEnemy = (GameObject)Instantiate(enemyType3, spawnPointsArr[spIndex].position, Quaternion.Euler(45, 0, 0));
            }

            numEnemies++;
        }
        Debug.Log ("Debug: numEnemies = " + numEnemies);
    }

    public void KillEnemy()
    {
        numEnemies--;
        Debug.Log ("Debug: numEnemies = " + numEnemies);
    }

    public void ResetEnemyCount()
    {
        numEnemies = 0;
    }
}