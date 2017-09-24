using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FinalScore : MonoBehaviour {
	private ScoreKeeper scoreKeeper;
	private int scoreFinal;

	Text scoreFinalUI;
	// Use this for initialization
	void Start () {
		scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
		scoreFinal = scoreKeeper.score;
		scoreFinalUI = gameObject.GetComponent<Text>(); 
		scoreFinalUI.text += scoreFinal.ToString();
	}

}
