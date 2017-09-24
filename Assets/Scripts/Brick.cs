using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Brick : MonoBehaviour {

	public GameObject smoke;
	private LevelManager levelManager;
	public Sprite[] hitSprites;
	private ScoreKeeper scoreKeeper;

	public AudioClip crack;
	public static int breakableCount = 0;
	bool isBreakable;
	private int timesHit;


	// Use this for initialization
	void Start ()
	{
		scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
		isBreakable = this.tag == "Breakable";
		levelManager = GameObject.FindObjectOfType<LevelManager> ();
		timesHit = 0;
		if (isBreakable) {
			breakableCount++;
		}
	}
	
	void OnCollisionEnter2D (Collision2D collision)
	{
		AudioSource.PlayClipAtPoint(crack, transform.position);
		if (isBreakable) {
			HandleHit ();
		}
	}

	void HandleHit ()
	{
		timesHit++;
		int maxHits = hitSprites.Length + 1;
		if (timesHit >= maxHits) {
			breakableCount--;
			PuffSmoke();
			scoreKeeper.Score(100);
			levelManager.BricksDestroyed();
			Destroy (gameObject);

		} else {
			LoadSprites();
		}
	}

	void PuffSmoke() {
		GameObject smokePuff = Instantiate(smoke, gameObject.transform.position, Quaternion.identity);
		smokePuff.GetComponent<ParticleSystem>().startColor = this.GetComponent<SpriteRenderer>().color;
	}

	void LoadSprites ()
	{
		if (hitSprites [timesHit - 1]) {
			this.GetComponent<SpriteRenderer> ().sprite = hitSprites [timesHit - 1];
		} else {
			Debug.LogError("Bricks.cs attempted to load sprite and it is unavailable");
		}
	}
}
