void Crank()
{
int crankPower = 0;



	if (joy1Btn(CRANK_LEFT))
	{
		crankPower = CRANK_POWER_LEFT;
	}

	if (joy1Btn(CRANK_RIGHT))
	{
		 crankPower = CRANK_POWER_RIGHT;
	}
	motor[crank_motor] = crankPower;
}
