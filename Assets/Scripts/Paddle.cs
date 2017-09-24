using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paddle : MonoBehaviour {

	public bool autoPlay = false;
	public Ball ball;

	private float halfPaddleSize;
	private float xDirectionFactor;

	// Use this for initialization
	void Start () {
		ball = GameObject.FindObjectOfType<Ball>();
		halfPaddleSize = 0.625f;
		xDirectionFactor= Ball.totalVelocity/halfPaddleSize;
	}


	
	// Update is called once per frame
	void Update ()
	{
		
		if (autoPlay) {
			AutoPlay();
		} else {
			MoveWithMouse();
		}

	}

	void OnCollisionEnter2D (Collision2D collision)
	{
		if (!ball.gameNotStarted) {
			CalculateNewYVelocity (collision);
			print ("x-velocity: " + ball.GetComponent<Rigidbody2D> ().velocity.x);
			print ("y-velocity: " + ball.GetComponent<Rigidbody2D> ().velocity.y);
		}
	}

	void AutoPlay() {
		this.transform.position = new Vector3 (Mathf.Clamp(ball.transform.position.x + Random.Range(0f,0.5f),halfPaddleSize, 16f-halfPaddleSize), this.transform.position.y, 0f);
	}

	void MoveWithMouse ()
	{
		
		float mousePosInBlocks = Input.mousePosition.x / Screen.width * 16;
		this.transform.position = new Vector3 (Mathf.Clamp (mousePosInBlocks, halfPaddleSize, 16f-halfPaddleSize), this.transform.position.y, 0f);
	}

	void CalculateNewYVelocity (Collision2D collision)
	{
		// Wherever the ball is hit on the paddle, changes the x velocity. Since I want the overall velocity (sqrt(x^2 + y^2))
		// To be approximately equal before and after it hits, i also have to alter the y velocity based on how much
		// The x-velocity is changed 
		float displacementFromCenter = xDirectionFactor*(collision.transform.position.x - this.transform.position.x);
		print(displacementFromCenter);
		float newYVelocity = Mathf.Sqrt(Mathf.Pow(Ball.totalVelocity,2) - Mathf.Pow(displacementFromCenter,2));
		ball.GetComponent<Rigidbody2D>().velocity = new Vector2(displacementFromCenter, newYVelocity);
	}

}
