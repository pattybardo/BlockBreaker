﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour {

	public void LoadLevel(string name) {
		Brick.breakableCount = 0;
		SceneManager.LoadScene(name);
	}

	public void QuitRequest () {
		Debug.Log ("Quit game requested.");
	}

	public void LoadNextLevel () {
		Brick.breakableCount = 0;
		SceneManager.LoadScene(Application.loadedLevel +1);
	} 

	public void BricksDestroyed ()
	{
		if (Brick.breakableCount <= 0) {
			LoadNextLevel();
		}
	}
}
