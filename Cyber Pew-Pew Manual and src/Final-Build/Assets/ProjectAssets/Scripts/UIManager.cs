using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour 
{
	public static int lives;
    public AISpawner aiSpawner;
    private int score;
	Text text;
    Text tScore;
    GameObject[] pauseObjectArr;

	// Use this for initialization
	void Start () 
	{
        aiSpawner = FindObjectOfType<AISpawner>();

        Time.timeScale = 1;
        pauseObjectArr = GameObject.FindGameObjectsWithTag("OnPause");
        HidePausedScreen();

		text = GetComponent<Text> ();
		lives = 3;
        score = 0;
	}
	
	// Update is called once per frame
	void Update () 
	{
        text.text = "" + lives;

        if (Input.GetKeyDown(KeyCode.P))
        {
            if (Time.timeScale == 0)
            {
                Time.timeScale = 1;
                HidePausedScreen();
            }
            else if (Time.timeScale == 1)
            {
                Time.timeScale = 0;
                ShowPausedScreen();
            }
        }

        if (lives < 0)
        {
            Time.timeScale = 1;
            SceneManager.LoadSceneAsync("GameOver", LoadSceneMode.Single);
        }
	}

	public void UpdateLives(int changeToLives)
	{
		lives += changeToLives;
	}

	public void Reset()
    {
        SceneManager.LoadSceneAsync("Main", LoadSceneMode.Single);
        aiSpawner.ResetEnemyCount();
		lives = 3;
	}

    public void PauseController()
    {
        if (Time.timeScale == 0)
        {
            Time.timeScale = 1;
            HidePausedScreen();
        }
        else if (Time.timeScale == 1)
        {
            Time.timeScale = 0;
            ShowPausedScreen();
        }
    }

    // NullReferenceException when using PauseController()

    public void ShowPausedScreen()
    {
        foreach (GameObject o in pauseObjectArr)
        {
            o.SetActive(true);
        }
    }

    public void HidePausedScreen()
    {
        foreach (GameObject o in pauseObjectArr)
        {
            o.SetActive(false);
        }
    }

    public void LoadLevel(string level)
    {
        SceneManager.LoadSceneAsync(level, LoadSceneMode.Single);
    }

    public void IncreaseScore()
    {
        score++;
    }
}
