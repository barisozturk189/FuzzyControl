/*




void output(float err,float derr,float error,float derror) {
	float min_limit =0;
	float max_limit = 0;
	float avg_limit = 0;
	int i = 0;
	int lastelement = 0;
	float lastval = 0;
	float firstval = 0;
	/********************** IF error NB and derror NB  *************************
if (error > -15.33 && error < -8.66 && derror > -30.66 && derror < -17.33) {

	/******************** THEN output NB ***************************
	min_limit = -30.66;
	max_limit = -17.33;
	avg_limit = -24;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/


}
/********************** IF error NB and derror NM  *************************
if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

	/******************** THEN output NB ***************************
	min_limit = -30.66;
	max_limit = -17.33;
	avg_limit = -24;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror NS  *************************/
if (error > -15.33 && error < -8.66 && derror > -14.66 && derror < -1.33) {

	/******************** THEN output NB ***************************/
	min_limit = -30.66;
	max_limit = -17.33;
	avg_limit = -24;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror Z  *************************/
if (error > -15.33 && error < -8.66 && derror > -6.66 && derror < 6.66) {

	/******************** THEN output NB ***************************/
	min_limit = -30.66;
	max_limit = -17.33;
	avg_limit = -24;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror PS  *************************/
if (error > -15.33 && error < -8.66 && derror > 1.33 && derror < 14.66) {

	/******************** THEN output NM ***************************/
	min_limit = -22.66;
	max_limit = -9.33;
	avg_limit = -16;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror PM  *************************/
if (error > -15.33 && error < -8.66 && derror > 9.33 && derror < 22.66) {

	/******************** THEN output NS ***************************/
	min_limit = -14.66;
	max_limit = -1.33;
	avg_limit = -8;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror PB  *************************/
if (error > -15.33 && error < -8.66 && derror > 17.33 && derror < 30.66) {

	/******************** THEN output Z ***************************/
	min_limit = -6.66;
	max_limit = 6.66;
	avg_limit = -0;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NB and derror PB  *************************/
if (error > -15.33 && error < -8.66 && derror > 17.33 && derror < 30.66) {

	/******************** THEN output Z ***************************/
	min_limit = -6.66;
	max_limit = 6.66;
	avg_limit = -0;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror NB  *************************/
if (error > -11.33 && error < -4.66 && derror > -30.66 && derror < -17.33) {

	/******************** THEN output NB ***************************/
	min_limit = -30.66;
	max_limit = -17.33;
	avg_limit = -24;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror NM  *************************/
if (error > -11.33 && error < -4.66 && derror > -22.66 && derror < -9.33) {

	/******************** THEN output NM ***************************/
	min_limit = -22.66;
	max_limit = -9.33;
	avg_limit = -16;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror NS  *************************/
if (error > -11.33 && error < -4.66 && derror > -14.66 && derror < -1.33) {

	/******************** THEN output NM ***************************/
	min_limit = -22.66;
	max_limit = -9.33;
	avg_limit = -16;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror  Z  *************************/
if (error > -11.33 && error < -4.66 && derror > -6.66 && derror < 6.66) {

	/******************** THEN output NS ***************************/
	min_limit = -14.66;
	max_limit = -1.33;
	avg_limit = -8;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror PS  *************************/
if (error > -11.33 && error < -4.66 && derror > 1.33 && derror < 14.66) {

	/******************** THEN output NS ***************************/
	min_limit = -14.66;
	max_limit = -1.33;
	avg_limit = -8;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror PM  *************************/
if (error > -11.33 && error < -4.66 && derror > 9.33 && derror < 22.66) {

	/******************** THEN output Z ***************************/
	min_limit = -6.66;
	max_limit = 6.66;
	avg_limit = 0;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}
/********************** IF error NM and derror PB  *************************/
if (error > -11.33 && error < -4.66 && derror > 17.33 && derror < 30.66) {

	/******************** THEN output Z ***************************/
	min_limit = -6.66;
	max_limit = 6.66;
	avg_limit = 0;
	lastelement = 0;
	printf("**************sart bloguna girdi ***************\n");
	/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
	for (float x = 0; x < err; x += 0.01) {
		if (i == 0)
			printf("*****ilk elemanlar yerlestiriliyor*****\n");

		arr[i] = x * (avg_limit - min_limit) + avg_limit;

		i++;

	}
	/****** lastval is equal to err value' s first trim ******/
	lastelement = i;
	lastval = arr[lastelement - 1];
	i = 0;

	printf("last element arr=%d\n", lastelement);
	printf("last element value =%f\n", lastval);
	/****** firstval is equal to err value' s last trim ******/
	float x = err;
	firstval = -(x * (max_limit - avg_limit)) + max_limit;
	/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
	for (float x = lastval; x < firstval; x += 0.01)
	{
		arr[lastelement + i] = x;
		++i;
	}
	lastelement = lastelement + i;
	printf("lastelement arr=%d\n", lastelement);
	printf("first element value =%f\n", firstval);
	i = 0;
	/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
	for (float x = err; x > 0; x -= 0.01) {

		if (i == 0)
			printf("*****ikinci elemanlar yerlestiriliyor*****\n");
		arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
		i++;

	}
	lastelement = lastelement + i;
	i = 0;
	/*for (int i = 0; i < lastelement; i++)
	{

		printf("arr[%d]=%f \n", i, arr[i]);
	}
	*/



	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		min_limit = -30.66;
		max_limit = -17.33;
		avg_limit = -24;
		lastelement = 0;
		printf("**************sart bloguna girdi ***************\n");
		/****** every member of membership func value between -30 to lastval is calculated (resolution=0.01) ******/
		for (float x = 0; x < err; x += 0.01) {
			if (i == 0)
				printf("*****ilk elemanlar yerlestiriliyor*****\n");

			arr[i] = x * (avg_limit - min_limit) + avg_limit;

			i++;

		}
		/****** lastval is equal to err value' s first trim ******/
		lastelement = i;
		lastval = arr[lastelement - 1];
		i = 0;

		printf("last element arr=%d\n", lastelement);
		printf("last element value =%f\n", lastval);
		/****** firstval is equal to err value' s last trim ******/
		float x = err;
		firstval = -(x * (max_limit - avg_limit)) + max_limit;
		/****** every member of membership func value between lastval to firstval is calculated (resolution=0.01) ******/
		for (float x = lastval; x < firstval; x += 0.01)
		{
			arr[lastelement + i] = x;
			++i;
		}
		lastelement = lastelement + i;
		printf("lastelement arr=%d\n", lastelement);
		printf("first element value =%f\n", firstval);
		i = 0;
		/****** every member of membership func value between first to -17.33 is calculated (resolution=0.01) ******/
		for (float x = err; x > 0; x -= 0.01) {

			if (i == 0)
				printf("*****ikinci elemanlar yerlestiriliyor*****\n");
			arr[lastelement + i] = -(x * (max_limit - avg_limit)) + max_limit;
			i++;

		}
		lastelement = lastelement + i;
		i = 0;
		/*for (int i = 0; i < lastelement; i++)
		{

			printf("arr[%d]=%f \n", i, arr[i]);
		}
		*/


	}








}

}










*/