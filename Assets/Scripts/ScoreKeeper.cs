using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour {
	static ScoreKeeper instance = null;
	public int score = 0;

	Text scoreUI;

	// Use this for initialization
	void Awake ()
	{
		if (instance != null) {
			Destroy(gameObject);
		} else {
			instance = this;
			GameObject.DontDestroyOnLoad (gameObject);
		}
	}

	void Start () {
		Reset();
		scoreUI = gameObject.GetComponent<Text>(); 
		scoreUI.text= score.ToString();
	}

	public void Reset(){
		score = 0;
	}

	public void Score (int points)
	{
		score += points;
		scoreUI.text= score.ToString();
	}
}
