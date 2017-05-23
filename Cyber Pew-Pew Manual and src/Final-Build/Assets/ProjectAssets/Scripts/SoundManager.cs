using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour 
{
	public static SoundManager smInstance = null;
	public AudioSource fxSource;
	public AudioSource musicSource;

	private bool isPlaying = false;

	// Use this for initialization
	void Awake () 
	{
		if (smInstance == null) 
		{
			smInstance = this;
		} 

		else if (smInstance != this) 
		{
			Destroy (gameObject);
		}

		DontDestroyOnLoad (gameObject);
	}

	public void Play(AudioClip clip)
	{
		fxSource.clip = clip;
		fxSource.Play ();
	}
	
	// Update is called once per frame
	void Update () 
	{
		if (Input.GetKey (KeyCode.M)) 
		{
			isPlaying = !isPlaying;

			if (isPlaying) 
			{
				musicSource.Stop ();
			} 

			else 
			{
				musicSource.Play ();
			}
		}
	}
}
