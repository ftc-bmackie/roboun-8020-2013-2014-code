#define SHOULDER_OFFSET 13

void ArmGrabber() {
	{
		if (joy1Btn(SHOULDER_UP))
		{

			servo[left_shoulder] = 0 + SHOULDER_OFFSET;
			servo[right_shoulder] = 255;

		}
				if (joy1Btn(SHOULDER_DOWN))
		{

			servo[left_shoulder] = 255 - SHOULDER_OFFSET;
			servo[right_shoulder] = 0;

		}
	}
}
