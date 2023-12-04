
#include "fuzzy.h"




volatile float MaxValC[6] = { 0 };
volatile float MaxValS[7] = { 0 };
volatile float SumA = 0;
volatile float SumC = 0;


void initCom(struct CommonValues* com) {

	for (int i = 0; i < 5; i++)
	{
		com->nb_nm[i] = 0;
		com->nm_ns[i] = 0;

	}
	com->nm_ns[5] = 0;
	for (int i = 0; i < 7; i++)
	{
		com->z_ps[i] = 0;
		com->pm_pb[i] = 0;
	}
	for (int i = 0; i < 9; i++) {
		com->ns_z[i] = 0;
		com->ps_pm[i] = 0;
	}




}
void initVal(struct Values* val) {



	for (int i = 0; i < 5; i++)
	{
		val->nb_val[i] = 0;
		val->pb_val[i] = 0;
	}
	for (int i = 0; i < 7; i++)
	{
		val->nm_val[i] = 0;
		val->pm_val[i] = 0;
		val->z_val[i] = 0;
	}
	for (int i = 0; i < 9; i++)
	{
		val->ps_val[i] = 0;
		val->ns_val[i] = 0;
	}
}




/********************** Calculate err Value **************************/
float nb_err(float error) {


	float err = 0;
	if (error > -15.33 && error < -12)
	{
		err = (float)((error - (-15.33)) / (-12 - (-15.33)));
	}
	else if (error > -12 && error < -8.66) {

		err = (float)(((-8.66) - error) / (-8.66 - (-12)));
	}
	else if (error == -12)
	{
		err = 1;
	}
	else
		err = 0;

	return err;

}
float nm_err(float error) {

	float err = 0;

	if (error > -11.33 && error < -8) {

		err = (float)((error - (-11.33)) / (-8 - (-11.33)));
	}

	else if (error > -8 && error < -4.67) {

		err = (float)((-4.67 - error) / (-4.67 - (-8)));
	}

	else if (error == -8) {

		err = 1;
		
	}
	else
		err = 0;

	return err;

}
float ns_err(float error) {

	float err = 0;

	if (error > -7.33 && error < -4) {

		err = (float)((error - (-7.33)) / (-4 - (-7.33)));
	}

	else if (error > -4 && error < -0.66) {

		err = (float)((-0.66 - error) / (-0.66 - (-4)));
	}

	else if (error == -4) {

		err = 1;
	}
	else
		err = 0;


	return err;

}
float z_err(float  error) {

	float err = 0;

	if (error > -3.33 && error < 0) {

		err = (float)((error - (-3.33)) / (0 - (-3.33)));
	}

	else if (error > 0 && error < 3.33) {

		err = (float)((3.33 - error) / (3.33 - 0));
	}

	else if (error == 0) {

		err = 1;
	}
	else
		err = 0;

	return err;

}
float ps_err(float error) {


	float err = 0;
	if (error > 0.66 && error < 4)
	{
		err = (float)((error - 0.66) / (4 - 0.66));
	}
	else if (error > 4 && error < 7.33) {

		err = (float)((7.33 - error) / (7.33 - 4));
	}
	else if (error == 4)
	{
		err = 1;
	}
	else
		err = 0;

	return err;

}
float pm_err(float error) {


	float err = 0;
	if (error > 4.66 && error < 8)
	{
		err = (float)((error - 4.66) / (8 - 4.66));
	}
	else if (error > 8 && error < 11.33) {

		err = (float)((11.33 - error) / (11.33 - 8));
	}
	else if (error == 8)
	{
		err = 1;
	}
	else
		err = 0;

	return err;

}
float pb_err(float error) {


	float err = 0;
	if (error > 8.66 && error < 12)
	{
		err = (float)((error - 8.66) / (12 - 8.66));
	}
	else if (error > 12 && error < 15.33) {

		err = (float)((15.33 - error) / (15.33 - 12));
	}
	else if (error == 12)
	{
		err = 1;

	}
	else
		err = 0;

	return err;

}

/********************** Calculate derr Value **************************/

float nb_derr(float derror) {

	float derr;

	if (derror > -30.67 && derror < -24)
	{
		derr = (float)((derror - (-30.67)) / (-24 - (-30.67)));
	}
	else if (derror > -24 && derror < -17.33) {

		derr = (float)((-17.33 - derror) / (-17.33 - (-24)));
	}

	else if (derror == -24)
		derr = 1;
	else
		derr = 0;


	return derr;

}
float nm_derr(float derror) {

	float derr = 0;

	if (derror > -22.67 && derror < -16) {

		derr = (float)((derror - (-22.67)) / (-16 - (-22.67)));
	}

	else if (derror > -16 && derror < -9.33) {

		derr = (float)((-9.33 - derror) / (-9.33 - (-16)));
	}

	else if (derror == -16) {

		derr = 1;
	}
	else
		derr = 0;

	return derr;

}
float ns_derr(float derror) {

	float derr = 0;

	if (derror > -14.67 && derror < -8) {

		derr = (float)((derror - (-14.67)) / (-8 - (-14.67)));
	}

	else if (derror > -8 && derror < -1.33) {

		derr = (float)((-1.33 - derror) / (-1.33 - (-8)));
	}

	else if (derror == -8) {

		derr = 1;
	}
	else
		derr = 0;


	return derr;

}
float z_derr(float  derror) {

	float derr = 0;

	if (derror > -6.66 && derror < 0) {

		derr = (float)((derror - (-6.66)) / (0 - (-6.66)));
	}

	else if (derror > 0 && derror < 6.66) {

		derr = (float)((6.66 - derror) / (6.66 - 0));
	}

	else if (derror == 0) {

		derr = 1;
	}
	else
		derr = 0;


	return derr;

}
float ps_derr(float derror) {


	float derr = 0;
	if (derror > 1.33 && derror < 8)
	{
		derr = (float)((derror - 1.33) / (8 - 1.33));
	}
	else if (derror > 8 && derror < 14.67) {

		derr = (float)((14.67 - derror) / (14.67 - 8));
	}
	else if (derror == 8)
	{
		derr = 1;
	}
	else
		derr = 0;

	return derr;

}
float pm_derr(float derror) {


	float derr = 0;
	if (derror > 9.33 && derror < 16)
	{
		derr = (float)((derror - 9.33) / (16 - 9.33));
	}
	else if (derror > 16 && derror < 22.67) {

		derr = (float)((22.67 - derror) / (22.67 - 16));
	}
	else if (derror == 16)
	{
		derr = 1;
	}
	else
		derr = 0;

	return derr;

}
float pb_derr(float derror) {


	float derr = 0;
	if (derror > 17.33 && derror < 24)
	{
		derr = (float)((derror - 17.33) / (24 - 17.33));
	}
	else if (derror > 24 && derror < 30.67) {

		derr = (float)((30.67 - derror) / (30.67 - 24));
	}
	else if (derror == 24)
	{
		derr = 1;
	}
	else
		derr = 0;

	return derr;

}

/********************** Calculate Output Area *************************/

float outputNB(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;


	if (err > derr) {
		firstval = (float)((derr * (NB_AVG - NB_MIN)) + NB_MIN);
		lastval = (float)(-(derr * (NB_MAX - NB_AVG)) + NB_MAX);
		retval = (float)(derr * (((NB_MAX - NB_MIN) + (lastval - firstval)) / 2));

	}

	else
	{
		firstval = (float)((err * (NB_AVG - NB_MIN)) + NB_MIN); //-23.33
		lastval = (float)(-(err * (NB_MAX - NB_AVG)) + NB_MAX); // -17.99
		retval = (float)(err * (((NB_MAX - NB_MIN) + (lastval - firstval)) / 2));
	}



	return retval;



}
float outputNM(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;


	if (err > derr) {

		firstval = (float)((derr * (NM_AVG - NM_MIN)) + NM_MIN);
		lastval = (float)(-(derr * (NM_MAX - NM_AVG)) + NM_MAX);
		retval = (float)(derr * (((NM_MAX - NM_MIN) + (lastval - firstval)) / 2));


	}

	else
	{
		firstval = (float)((err * (NM_AVG - NM_MIN)) + NM_MIN); //-15,34
		lastval = (float)(-(err * (NM_MAX - NM_AVG)) + NM_MAX); // -10
		retval = (float)(err * (((NM_MAX - NM_MIN) + (lastval - firstval)) / 2));
	}



	return retval;
}
float outputNS(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;


	if (err > derr) {


		firstval = (float)((derr * (NS_AVG - NS_MIN)) + NS_MIN);
		lastval = (float)(-(derr * (NS_MAX - NS_AVG)) + NS_MAX);
		retval = (float)(derr * (((NS_MAX - NS_MIN) + (lastval - firstval)) / 2));


	}

	else
	{

		firstval = (float)((err * (NS_AVG - NS_MIN)) + NS_MIN);
		lastval = (float)(-(err * (NS_MAX - NS_AVG)) + NS_MAX);
		retval = (float)(err * (((NS_MAX - NS_MIN) + (lastval - firstval)) / 2));

	}



	return retval;
}
float outputZ(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;


	if (err > derr) {
		firstval = (float)((derr * (Z_AVG - Z_MIN)) + Z_MIN);
		lastval = (float)(-(derr * (Z_MAX - Z_AVG)) + Z_MAX);
		retval = (float)(derr * (((Z_MAX - Z_MIN) + (lastval - firstval)) / 2));

	}

	else
	{
		firstval = (float)((err * (Z_AVG - Z_MIN)) + Z_MIN);
		lastval = (float)(-(err * (Z_MAX - Z_AVG)) + Z_MAX);
		retval = (float)(err * (((Z_MAX - Z_MIN) + (lastval - firstval)) / 2));
	}



	return retval;
}
float outputPS(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;



	if (err > derr) {

		firstval = (float)((derr * (PS_AVG - PS_MIN)) + PS_MIN);
		lastval = (float)(-(derr * (PS_MAX - PS_AVG)) + PS_MAX);
		retval = (float)(derr * (((PS_MAX - PS_MIN) + (lastval - firstval)) / 2));

	}

	else
	{
		firstval = (float)((err * (PS_AVG - PS_MIN)) + PS_MIN);
		lastval = (float)(-(err * (PS_MAX - PS_AVG)) + PS_MAX);
		retval = (float)(err * (((PS_MAX - PS_MIN) + (lastval - firstval)) / 2));
	}



	return retval;
}
float outputPM(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;


	if (err > derr) {

		firstval = (float)((derr * (PM_AVG - PM_MIN)) + PM_MIN);
		lastval = (float)(-(derr * (PM_MAX - PM_AVG)) + PM_MAX);
		retval = (float)(derr * (((PM_MAX - PM_MIN) + (lastval - firstval)) / 2));

	}

	else
	{
		firstval = (float)((err * (PM_AVG - PM_MIN)) + PM_MIN);
		lastval = (float)(-(err * (PM_MAX - PM_AVG)) + PM_MAX);
		retval = (float)(err * (((PM_MAX - PM_MIN) + (lastval - firstval)) / 2));
	}



	return retval;
}
float outputPB(float err, float derr) {

	float lastval = 0;
	float firstval = 0;
	float retval = 0;



	if (err > derr) {

		firstval = (float)((derr * (PB_AVG - PB_MIN)) + PB_MIN);
		lastval = (float)(-(derr * (PB_MAX - PB_AVG)) + PB_MAX);
		retval = (float)(derr * (((PB_MAX - PB_MIN) + (lastval - firstval)) / 2));

	}

	else
	{
		firstval = (float)((err * (PB_AVG - PB_MIN)) + PB_MIN);
		lastval = (float)(-(err * (PB_MAX - PB_AVG)) + PB_MAX);
		retval = (float)(err * (((PB_MAX - PB_MIN) + (lastval - firstval)) / 2));
	}



	return retval;
}

/********************** Calculate Output Common Area *************************/

float outputNB_NM(float err, float derr) {

	float nb_nm = 0;
	if (err > derr)
		nb_nm = (float)(derr * (((NB_MAX - NM_MIN) + (((-derr * (NB_MAX - NB_AVG)) + NB_MAX) - ((derr * (NM_AVG - NM_MIN)) + NM_MIN))) / 2));
	else
		nb_nm = (float)(err * (((NB_MAX - NM_MIN) + (((-err * (NB_MAX - NB_AVG)) + NB_MAX) - ((err * (NM_AVG - NM_MIN)) + NM_MIN))) / 2));

	return (float)nb_nm;
}
float outputNM_NS(float err, float derr) {

	float nm_ns = 0;

	if (err > derr) {

		nm_ns = (float)(derr * (((NM_MAX - NS_MIN) + (((-derr * (NM_MAX - NM_AVG)) + NM_MAX) - ((derr * (NS_AVG - NS_MIN)) + NS_MIN))) / 2));

	}
	else {

		nm_ns = (float)(err * (((NM_MAX - NS_MIN) + (((-err * (NM_MAX - NM_AVG)) + NM_MAX) - ((err * (NS_AVG - NS_MIN)) + NS_MIN))) / 2));

	}


	return nm_ns;
}
float outputNS_Z(float err, float derr)
{
	float ns_z = 0;
	if (err > derr)
		ns_z = (float)(derr * (((NS_MAX - Z_MIN) + (((-derr * (NS_MAX - NS_AVG)) + NS_MAX) - ((derr * (Z_AVG - Z_MIN)) + Z_MIN))) / 2));

	else
		ns_z = (float)(err * (((NS_MAX - Z_MIN) + (((-err * (NS_MAX - NS_AVG)) + NS_MAX) - ((err * (Z_AVG - Z_MIN)) + Z_MIN))) / 2));
	return ns_z;
}
float outputZ_PS(float err, float derr) {

	float z_ps = 0;

	if (err > derr)
		z_ps = (float)(derr * (((Z_MAX - PS_MIN) + (((-derr * (Z_MAX - Z_AVG)) + Z_MAX) - ((derr * (PS_AVG - PS_MIN)) + PS_MIN))) / 2));
	else
		z_ps = (float)(err * (((Z_MAX - PS_MIN) + (((-err * (Z_MAX - Z_AVG)) + Z_MAX) - ((err * (PS_AVG - PS_MIN)) + PS_MIN))) / 2));

	return z_ps;
}
float outputPS_PM(float err, float derr) {

	float ps_pm = 0;

	if (err > derr)
		ps_pm = (float)(derr * (((PS_MAX - PM_MIN) + (((-derr * (PS_MAX - PS_AVG)) + PS_MAX) - ((derr * (PM_AVG - PM_MIN)) + PM_MIN))) / 2));
	else
		ps_pm = (float)(err * (((PS_MAX - PM_MIN) + (((-err * (PS_MAX - PS_AVG)) + PS_MAX) - ((err * (PM_AVG - PM_MIN)) + PM_MIN))) / 2));


	return ps_pm;

}
float outputPM_PB(float err, float derr) {

	float pm_pb = 0;

	if (err > derr)
		pm_pb = (float)(derr * (((PM_MAX - PB_MIN) + (((-derr * (PM_MAX - PM_AVG)) + PM_MAX) - ((derr * (PB_AVG - PB_MIN)) + PB_MIN))) / 2));
	else
		pm_pb = (float)(err * (((PM_MAX - PB_MIN) + (((-err * (PM_MAX - PM_AVG)) + PM_MAX) - ((err * (PB_AVG - PB_MIN)) + PB_MIN))) / 2));

	return pm_pb;

}

float rules(float error, float derror) {

	struct Values* val;
	val = (struct Values*)malloc(sizeof(Values));
	initVal(val);
	/********************** IF error NB and derror NB  *************************/
	if (error > -15.33 && error < -8.66 && derror > -30.66 && derror < -17.33) {


		/******************** THEN output NB ***************************/

		val->nb_val[0] = outputNB(nb_err(error), nb_derr(derror));
		


	}

	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/

		val->nb_val[1] = outputNB(nb_err(error), nm_derr(derror));
	

	}

	/********************** IF error NB and derror NS  *************************/
	if (error > -15.33 && error < -8.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NB ***************************/
		val->nb_val[2] = outputNB(nb_err(error), ns_derr(derror));
	
	}

	/********************** IF error NB and derror Z  *************************/
	if (error > -15.33 && error < -8.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NM ***************************/
		val->nm_val[0] = outputNM(nb_err(error), z_derr(derror));
		
	}

	/********************** IF error NB and derror PS  *************************/
	if (error > -15.33 && error < -8.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output NM ***************************/
		val->nm_val[1] = outputNM(nb_err(error), ps_derr(derror));
	
	}

	/********************** IF error NB and derror PM  *************************/
	if (error > -15.33 && error < -8.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output NS ***************************/
		val->ns_val[0] = outputNS(nb_err(error), pm_derr(derror));

	}

	/********************** IF error NB and derror PB  *************************/
	if (error > -15.33 && error < -8.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output Z ***************************/
		val->z_val[1] = outputZ(nb_err(error), pb_derr(derror));
	
	}

	/********************** IF error NM and derror NB  *************************/
	if (error > -11.33 && error < -4.66 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NB ***************************/
		val->nb_val[3] = outputNB(nm_err(error), nb_derr(derror));

	}

	/********************** IF error NM and derror NM  *************************/
	if (error > -11.33 && error < -4.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NM ***************************/
		val->nm_val[2] = outputNM(nm_err(error), nm_derr(derror));

	}

	/********************** IF error NM and derror NS  *************************/
	if (error > -11.33 && error < -4.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NM ***************************/
		val->nm_val[3] = outputNM(nm_err(error), ns_derr(derror));

	}

	/********************** IF error NM and derror  Z  *************************/
	if (error > -11.33 && error < -4.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NS ***************************/
		val->ns_val[1] = outputNS(nm_err(error), z_derr(derror));
		


	}

	/********************** IF error NM and derror PS  *************************/
	if (error > -11.33 && error < -4.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output NS ***************************/
		val->ns_val[2] = outputNS(nm_err(error), ps_derr(derror));
	
	}

	/********************** IF error NM and derror PM  *************************/
	if (error > -11.33 && error < -4.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output Z ***************************/
		val->z_val[0] = outputZ(nm_err(error), pm_derr(derror));

	}

	/********************** IF error NM and derror PB  *************************/
	if (error > -11.33 && error < -4.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[0] = outputPS(nm_err(error), pb_derr(derror));
	
	}

	/********************** IF error NS and derror NB  *************************/
	if (error > -7.33 && error < -0.66 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NB ***************************/
		val->nb_val[4] = outputNB(ns_err(error), nb_derr(derror));
	
	}

	/********************** IF error NS and derror NM  *************************/
	if (error > -7.33 && error < -0.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NM ***************************/
		val->nm_val[4] = outputNM(ns_err(error), nm_derr(derror));
	
	}

	/********************** IF error NS and derror NS  *************************/
	if (error > -7.33 && error < -0.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NS ***************************/
		val->ns_val[3] = outputNS(ns_err(error), ns_derr(derror));
		

	}

	/********************** IF error NS and derror Z  *************************/
	if (error > -7.33 && error < -0.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NS ***************************/
		val->ns_val[4] = outputNS(ns_err(error), z_derr(derror));
	

	}

	/********************** IF error NS and derror PS  *************************/
	if (error > -7.33 && error < -0.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output Z ***************************/
		val->z_val[2] = outputZ(ns_err(error), ps_derr(derror));
		
	}

	/********************** IF error NS and derror PM  *************************/
	if (error > -7.33 && error < -0.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[1] = outputPS(ns_err(error), pm_derr(derror));
	
	}

	/********************** IF error NS and derror PB  *************************/
	if (error > -7.33 && error < -0.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[6] = outputPM(ns_err(error), pb_derr(derror));

	}

	/********************** IF error Z and derror NB  *************************/
	if (error > -3.33 && error < 3.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NM ***************************/
		val->nm_val[5] = outputNM(z_err(error), nb_derr(derror));

	}

	/********************** IF error Z and derror NM  *************************/
	if (error > -3.33 && error < 3.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NS ***************************/
		val->ns_val[5] = outputNS(z_err(error), nm_derr(derror));
	
	}

	/********************** IF error Z and derror NS  *************************/
	if (error > -3.33 && error < 3.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NS ***************************/
		val->ns_val[6] = outputNS(z_err(error), ns_derr(derror));
	
	}

	/********************** IF error Z and derror Z  *************************/
	if (error > -3.33 && error < 3.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output Z ***************************/
		val->z_val[3] = outputZ(z_err(error), z_derr(derror));
	
	}

	/********************** IF error Z and derror PS  *************************/
	if (error > -3.33 && error < 3.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[2] = outputPS(z_err(error), ps_derr(derror));
	
	}

	/********************** IF error Z and derror PM  *************************/
	if (error > -3.33 && error < 3.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[8] = outputPS(z_err(error), pm_derr(derror));
		
	}

	/********************** IF error Z and derror PB  *************************/
	if (error > -3.33 && error < 3.33 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[5] = outputPM(z_err(error), pb_derr(derror));
	
	}

	/********************** IF error PS and derror NB  *************************/
	if (error > 0.66 && error < 7.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NM ***************************/
		val->nm_val[6] = outputNM(ps_err(error), nb_derr(derror));
		
	}

	/********************** IF error PS and derror NM  *************************/
	if (error > 0.66 && error < 7.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NS ***************************/
		val->ns_val[7] = outputNS(ps_err(error), nm_derr(derror));
	
	}

	/********************** IF error PS and derror NS  *************************/
	if (error > 0.66 && error < 7.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output Z ***************************/
		val->z_val[4] = outputZ(ps_err(error), ns_derr(derror));
		
		
	}

	/********************** IF error PS and derror Z  *************************/
	if (error > 0.66 && error < 7.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[3] = outputPS(ps_err(error), z_derr(derror));
	
	}

	/********************** IF error PS and derror PS  *************************/
	if (error > 0.66 && error < 7.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[4] = outputPS(ps_err(error), ps_derr(derror));

	}

	/********************** IF error PS and derror PM  *************************/
	if (error > 0.66 && error < 7.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[4] = outputPM(ps_err(error), pm_derr(derror));
	
		
	}

	/********************** IF error PS and derror PB  *************************/
	if (error > 0.66 && error < 7.33 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PB ***************************/
		val->pb_val[4] = outputPB(ps_err(error), pb_derr(derror));

	}

	/********************** IF error PM and derror NB  *************************/
	if (error > 4.66 && error < 11.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NS ***************************/
		val->ns_val[8] = outputNS(pm_err(error), nb_derr(derror));
	
	}

	/********************** IF error PM and derror NM  *************************/
	if (error > 4.66 && error < 11.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output Z ***************************/
		val->z_val[5] = outputZ(pm_err(error), nm_derr(derror));
		
	}

	/********************** IF error PM and derror NS  *************************/
	if (error > 4.66 && error < 11.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output PS ***************************/
		val->ps_val[5] = outputPS(pm_err(error), ns_derr(derror));
	
	
	}

	/********************** IF error PM and derror Z  *************************/
	if (error > 4.66 && error < 11.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PS ***************************/
		val->ps_val[6] = outputPS(pm_err(error), z_derr(derror));
	
		
	}

	/********************** IF error PM and derror PS  *************************/
	if (error > 4.66 && error < 11.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[2] = outputPM(pm_err(error), ps_derr(derror));
	

	}

	/********************** IF error PM and derror PM  *************************/
	if (error > 4.66 && error < 11.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[3] = outputPM(pm_err(error), pm_derr(derror));
	
	}

	/********************** IF error PM and derror PB  *************************/
	if (error > 4.66 && error < 11.33 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PB ***************************/
		val->pb_val[3] = outputPB(pm_err(error), pb_derr(derror));
		
	}

	/********************** IF error PB and derror NB  *************************/
	if (error > 8.66 && error < 15.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output Z ***************************/
		val->z_val[6] = outputZ(pb_err(error), nb_derr(derror));

	}

	/********************** IF error PB and derror NM  *************************/
	if (error > 8.66 && error < 15.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output PS ***************************/
		val->ps_val[7] = outputPS(pb_err(error), nm_derr(derror));

	}

	/********************** IF error PB and derror NS  *************************/
	if (error > 8.66 && error < 15.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output PM ***************************/
		val->pm_val[0] = outputPM(pb_err(error), ns_derr(derror));
	
	}

	/********************** IF error PB and derror Z  *************************/
	if (error > 8.66 && error < 15.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PM ***************************/
		val->pm_val[1] = outputPM(pb_err(error), z_derr(derror));
	
	}

	/********************** IF error PB and derror PS  *************************/
	if (error > 8.66 && error < 15.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PB ***************************/
		val->pb_val[0] = outputPB(pb_err(error), ps_derr(derror));
		
	
	}

	/********************** IF error PB and derror PM  *************************/
	if (error > 8.66 && error < 15.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PB ***************************/
		val->pb_val[1] = outputPB(pb_err(error), pm_derr(derror));
		
	}

	/********************** IF error PB and derror PB  *************************/
	if (error > 8.66 && error < 15.33 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PB ***************************/
		val->pb_val[2] = outputPB(pb_err(error), pb_derr(derror));

	}


	sumarea(val, error, derror);
	return deffuzfication(MaxValS, MaxValC);



}

/********************** Deffuzufication ******************************/


void sumarea(struct Values* val, float error, float derror) {

	float sum = 0;
	/****************** NB ***********************/

	MaxValS[0] = val->nb_val[0];
	for (int i = 0; i < 5; i++)
	{
		if (MaxValS[0] < val->nb_val[i])
		{
			MaxValS[0] = val->nb_val[i];
		}
	
	}


	/****************** NM ***********************/

	MaxValS[1] = val->nm_val[0];
	for (int i = 0; i < 7; i++)
	{
		if (MaxValS[1] < val->nm_val[i])
		{
			MaxValS[1] = val->nm_val[i];
		}
	
	}

	/****************** NS ***********************/

	MaxValS[2] = val->ns_val[0];
	for (int i = 0; i < 9; i++)
	{
		if (MaxValS[2] < val->ns_val[i])
		{
			MaxValS[2] = val->ns_val[i];

		}
	
	}


	/****************** Z ***********************/

	MaxValS[3] = val->z_val[0];
	for (int i = 0; i < 7; i++)
	{
		if (MaxValS[3] < val->z_val[i])
		{
			MaxValS[3] = val->z_val[i];
		}

	}


	/****************** PB ***********************/

	MaxValS[4] = val->pb_val[0];
	for (int i = 0; i < 5; i++)
	{
		if (MaxValS[4] < val->pb_val[i])
		{
			MaxValS[4] = val->pb_val[i];
		}
	
	}

	/****************** PM ***********************/

	MaxValS[5] = val->pm_val[0];
	for (int i = 0; i < 7; i++)
	{
		if (MaxValS[5] < val->pm_val[i])
		{
			MaxValS[5] = val->pm_val[i];
		}
	
	}
	/****************** PS ***********************/

	MaxValS[6] = val->ps_val[0];
	for (int i = 0; i < 9; i++)
	{
		if (MaxValS[6] < val->ps_val[i])
		{
			MaxValS[6] = val->ps_val[i];
		}
	
	}

	for (int i = 0; i < 7; i++)
	{
		sum += MaxValS[i];
	}

	SumA = sum;

	commonarea(MaxValS, error, derror);
}

void commonarea(float* MaxValS, float error, float derror) {

	struct CommonValues* common;
	common = (struct CommonValues*)malloc(sizeof(CommonValues));
	initCom(common);

	/********************** IF error NB and derror NB  *************************/
	if (error > -15.33 && error < -8.66 && derror > -30.66 && derror < -17.33) {


		/******************** THEN output NB ***************************/

		if (MaxValS[0] != 0 && MaxValS[1] != 0)
			common->nb_nm[0] = outputNB_NM(nb_err(error), nb_derr(derror));

	}

	/********************** IF error NB and derror NM  *************************/
	if (error > -15.33 && error < -8.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NB ***************************/
		if (MaxValS[0] != 0 && MaxValS[1] != 0)
			common->nb_nm[1] = outputNB_NM(nb_err(error), nm_derr(derror));

	}

	/********************** IF error NB and derror NS  *************************/
	if (error > -15.33 && error < -8.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NB ***************************/
		if (MaxValS[0] != 0 && MaxValS[1] != 0)
			common->nb_nm[2] = outputNB_NM(nb_err(error), ns_derr(derror));
	}

	/********************** IF error NB and derror Z  *************************/
	if (error > -15.33 && error < -8.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[3] = outputNM_NS(nb_err(error), z_derr(derror));
	}

	/********************** IF error NB and derror PS  *************************/
	if (error > -15.33 && error < -8.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[0] = outputNM_NS(nb_err(error), ps_derr(derror));
	}

	/********************** IF error NB and derror PM  *************************/
	if (error > -15.33 && error < -8.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[0] = outputNS_Z(nb_err(error), pm_derr(derror));
	}

	/********************** IF error NB and derror PB  *************************/
	if (error > -15.33 && error < -8.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[0] = outputZ_PS(nb_err(error), pb_derr(derror));
	}

	/********************** IF error NM and derror NB  *************************/
	if (error > -11.33 && error < -4.66 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NB ***************************/
		if (MaxValS[0] != 0 && MaxValS[1] != 0)
			common->nb_nm[3] = outputNB_NM(nm_err(error), nb_derr(derror));
	}

	/********************** IF error NM and derror NM  *************************/
	if (error > -11.33 && error < -4.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[1] = outputNM_NS(nm_err(error), nm_derr(derror));
	}

	/********************** IF error NM and derror NS  *************************/
	if (error > -11.33 && error < -4.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[2] = outputNM_NS(nm_err(error), ns_derr(derror));

	}
	/********************** IF error NM and derror Z  *************************/
	if (error > -11.33 && error < -4.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NS ***************************/

		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[1] = outputNS_Z(nm_err(error), z_derr(derror));


	}
	/********************** IF error NM and derror PS  *************************/
	if (error > -11.33 && error < -4.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[2] = outputNS_Z(nm_err(error), ps_derr(derror));
	}

	/********************** IF error NM and derror PM  *************************/
	if (error > -11.33 && error < -4.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[1] = outputZ_PS(nm_err(error), pm_derr(derror));
	}
	/********************** IF error NM and derror PB  *************************/
	if (error > -11.33 && error < -4.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[0] = outputPS_PM(nm_err(error), pb_derr(derror));

	}

	/********************** IF error NS and derror NB  *************************/
	if (error > -7.33 && error < -0.66 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NB ***************************/
		if (MaxValS[0] != 0 && MaxValS[1] != 0)
			common->nb_nm[4] = outputNB_NM(ns_err(error), nb_derr(derror));
	}

	/********************** IF error NS and derror NM  *************************/
	if (error > -7.33 && error < -0.66 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[3] = outputNM_NS(ns_err(error), nm_derr(derror));
	}

	/********************** IF error NS and derror NS  *************************/
	if (error > -7.33 && error < -0.66 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[3] = outputNS_Z(ns_err(error), ns_derr(derror));
	}

	/********************** IF error NS and derror Z  *************************/
	if (error > -7.33 && error < -0.66 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[4] = outputNS_Z(ns_err(error), z_derr(derror));
	}


	/********************** IF error NS and derror PS  *************************/
	if (error > -7.33 && error < -0.66 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[2] = outputZ_PS(ns_err(error), ps_derr(derror));
	}

	/********************** IF error NS and derror PM  *************************/
	if (error > -7.33 && error < -0.66 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[1] = outputPS_PM(ns_err(error), pm_derr(derror));
	}

	/********************** IF error NS and derror PB  *************************/
	if (error > -7.33 && error < -0.66 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[2] = outputPM_PB(ns_err(error), pb_derr(derror));
	}

	/********************** IF error Z and derror NB  *************************/
	if (error > -3.33 && error < 3.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[4] = outputNM_NS(z_err(error), nb_derr(derror));
	}

	/********************** IF error Z and derror NM  *************************/
	if (error > -3.33 && error < 3.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[5] = outputNS_Z(z_err(error), nm_derr(derror));
	}

	/********************** IF error Z and derror NS  *************************/
	if (error > -3.33 && error < 3.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[6] = outputNS_Z(z_err(error), ns_derr(derror));
	}

	/********************** IF error Z and derror Z  *************************/
	if (error > -3.33 && error < 3.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[3] = outputZ_PS(z_err(error), z_derr(derror));
	}

	/********************** IF error Z and derror PS  *************************/
	if (error > -3.33 && error < 3.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[2] = outputPS_PM(z_err(error), ps_derr(derror));
	}

	/********************** IF error Z and derror PM  *************************/
	if (error > -3.33 && error < 3.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[3] = outputPS_PM(z_err(error), pm_derr(derror));
	}

	/********************** IF error Z and derror PB  *************************/
	if (error > -3.33 && error < 3.33 && derror > 17.33 && derror < 30.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[1] = outputPM_PB(z_err(error), pb_derr(derror));
	}

	/********************** IF error PS and derror NB  *************************/
	if (error > 0.66 && error < 7.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NM ***************************/
		if (MaxValS[1] != 0 && MaxValS[2] != 0)
			common->nm_ns[5] = outputNM_NS(ps_err(error), nb_derr(derror));
	}

	/********************** IF error PS and derror NM  *************************/
	if (error > 0.66 && error < 7.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[7] = outputNS_Z(ps_err(error), nm_derr(derror));
	}

	/********************** IF error PS and derror NS  *************************/
	if (error > 0.66 && error < 7.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[4] = outputZ_PS(ps_err(error), ns_derr(derror));
	
	}

	/********************** IF error PS and derror Z  *************************/
	if (error > 0.66 && error < 7.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[4] = outputPS_PM(ps_err(error), z_derr(derror));

	}

	/********************** IF error PS and derror PS  *************************/
	if (error > 0.66 && error < 7.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[5] = outputPS_PM(ps_err(error), ps_derr(derror));
		
	}

	/********************** IF error PS and derror PM  *************************/
	if (error > 0.66 && error < 7.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[2] = outputPM_PB(ps_err(error), pm_derr(derror));
	
	}


	/********************** IF error PM and derror NB  *************************/
	if (error > 4.66 && error < 11.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output NS ***************************/
		if (MaxValS[2] != 0 && MaxValS[3] != 0)
			common->ns_z[8] = outputNS_Z(pm_err(error), nb_derr(derror));
	}

	/********************** IF error PM and derror NM  *************************/
	if (error > 4.66 && error < 11.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[5] = outputZ_PS(pm_err(error), nm_derr(derror));
	}

	/********************** IF error PM and derror NS  *************************/
	if (error > 4.66 && error < 11.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[6] = outputPS_PM(pm_err(error), ns_derr(derror));
	
	}

	/********************** IF error PM and derror Z  *************************/
	if (error > 4.66 && error < 11.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[7] = outputPS_PM(pm_err(error), z_derr(derror));

	}

	/********************** IF error PM and derror PS  *************************/
	if (error > 4.66 && error < 11.33 && derror > 1.33 && derror < 14.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[3] = outputPM_PB(pm_err(error), ps_derr(derror));

	}

	/********************** IF error PM and derror PM  *************************/
	if (error > 4.66 && error < 11.33 && derror > 9.33 && derror < 22.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[4] = outputPM_PB(pm_err(error), pm_derr(derror));
	}


	/********************** IF error PB and derror NB  *************************/
	if (error > 8.66 && error < 15.33 && derror > -30.66 && derror < -17.33) {

		/******************** THEN output Z ***************************/
		if (MaxValS[3] != 0 && MaxValS[6] != 0)
			common->z_ps[6] = outputZ_PS(pb_err(error), nb_derr(derror));
	}

	/********************** IF error PB and derror NM  *************************/
	if (error > 8.66 && error < 15.33 && derror > -22.66 && derror < -9.33) {

		/******************** THEN output PS ***************************/
		if (MaxValS[6] != 0 && MaxValS[5] != 0)
			common->ps_pm[8] = outputPS_PM(pb_err(error), nm_derr(derror));
	}

	/********************** IF error PB and derror NS  *************************/
	if (error > 8.66 && error < 15.33 && derror > -14.66 && derror < -1.33) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[5] = outputPM_PB(pb_err(error), ns_derr(derror));
	}

	/********************** IF error PB and derror Z  *************************/
	if (error > 8.66 && error < 15.33 && derror > -6.66 && derror < 6.66) {

		/******************** THEN output PM ***************************/
		if (MaxValS[5] != 0 && MaxValS[4] != 0)
			common->pm_pb[6] = outputPM_PB(pb_err(error), z_derr(derror));
	}


	sumcommon(common);


}

void sumcommon(struct CommonValues* common) {


	float sum = 0;

	MaxValC[0] = common->nb_nm[0];
	for (int i = 0; i < 5; i++)
	{
		if (common->nb_nm[i] > MaxValC[0])
			MaxValC[0] = common->nb_nm[i];

	}


	MaxValC[1] = common->nm_ns[0];
	for (int i = 0; i < 6; i++)
	{
		if (common->nm_ns[i] > MaxValC[1])
			MaxValC[1] = common->nm_ns[i];

	}

	MaxValC[2] = common->ns_z[0];
	for (int i = 0; i < 9; i++)
	{
		if (common->ns_z[i] > MaxValC[2])
			MaxValC[2] = common->ns_z[i];
	
	}

	MaxValC[3] = common->z_ps[0];
	for (int i = 0; i < 7; i++)
	{
		if (common->z_ps[i] > MaxValC[3])
			MaxValC[3] = common->z_ps[i];
	
	}

	MaxValC[4] = common->ps_pm[0];
	for (int i = 0; i < 9; i++)
	{
		if (common->ps_pm[i] > MaxValC[4])
			MaxValC[4] = common->ps_pm[i];

	}

	MaxValC[5] = common->pm_pb[0];
	for (int i = 0; i < 7; i++)
	{
		if (common->pm_pb[i] > MaxValC[5])
			MaxValC[5] = common->pm_pb[i];
	

	}

	for (int i = 0; i < 6; i++)
	{
		sum += MaxValC[i];
	}
	SumC = sum;
	
	deffuzfication(MaxValS, MaxValC);
}

float deffuzfication(float* MaxValS, float* MaxValC) {


	float result = 0;
	result = ((((MaxValS[0] * NBCoG) + (MaxValS[1] * NMCoG) + (MaxValS[2] * NSCoG) + (MaxValS[3] * ZCoG) + (MaxValS[4] * PBCoG) + (MaxValS[5] * PMCoG) + (MaxValS[6] * PSCoG)) - ((MaxValC[0] * NBMCoG) + (MaxValC[1] * NMSCoG) + (MaxValC[2] * NSZCoG) + (MaxValC[3] * ZPSCoG) + (MaxValC[4] * PSMCoG) + (MaxValC[5] * PMBCoG))) / (SumA - SumC));

	
	return result;


}