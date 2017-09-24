using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	public static float totalVelocity = 8f;
	private float ballYVelocity = totalVelocity/Mathf.Sqrt(2);
	private Paddle paddle;
	private Vector3 paddleToBallDistance;
	public bool gameNotStarted = true;
	// Use this for initialization
	void Start () {
		paddle = GameObject.FindObjectOfType<Paddle>();
		paddleToBallDistance = this.transform.position - paddle.transform.position;
	}
	
	// Update is called once per frame
	void Update ()
	{
		if (gameNotStarted) {
			//Locking the ball relative to the paddle
			this.transform.position = paddle.transform.position + paddleToBallDistance;
		}
		//Once the mouse has been clicked, launch the ball
		if (Input.GetMouseButtonDown (0)) {
			gameNotStarted = false;
			print("Mouse button clicked");
			this.GetComponent<Rigidbody2D>().velocity = new Vector2(ballYVelocity, ballYVelocity);
		}
	}

	void OnCollisionEnter2D (Collision2D collision)
	{
		Vector2 tweak = new Vector2(Random.Range(0f, 0.2f), Random.Range(0f, 0.2f));
		if (!gameNotStarted) {
			this.GetComponent<AudioSource> ().Play ();
			this.GetComponent<Rigidbody2D>().velocity += tweak;
		}
	}
}
