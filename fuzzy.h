#pragma once

#include <stdio.h>
#include <stdlib.h>



#define NB_MIN     -0.1389
#define NB_AVG     -0
#define NB_MAX     -0.1389

#define NM_MIN     0.02778
#define NM_AVG     0.1667
#define NM_MAX     0.3056

#define NS_MIN     0.1944
#define NS_AVG     0.3333
#define NS_MAX     0.4722

#define Z_MIN      0.3611
#define Z_AVG      0.5
#define Z_MAX      0.6389

#define PB_MIN     0.8611
#define PB_AVG     1
#define PB_MAX     1.139

#define PM_MIN     0.6944
#define PM_AVG     0.8333
#define PM_MAX     0.9722

#define PS_MIN     0.528
#define PS_AVG     0.667
#define PS_MAX     0.806



#define NBCoG      (NB_MAX+NB_MIN)/2
#define NMCoG      (NM_MAX+NM_MIN)/2
#define NSCoG      (NS_MAX+NS_MIN)/2
#define PBCoG      (PB_MAX+PB_MIN)/2
#define PMCoG      (PM_MAX+PM_MIN)/2
#define PSCoG      (PS_MAX+PS_MIN)/2
#define ZCoG       ( Z_MAX+Z_MIN )/2


#define NBMCoG      (NB_MAX+NM_MIN)/2
#define NMSCoG      (NM_MAX+NS_MIN)/2
#define NSZCoG      (NS_MAX+Z_MIN )/2
#define ZPSCoG      (Z_MAX+PS_MIN )/2
#define PSMCoG      (PS_MAX+PM_MIN)/2
#define PMBCoG      (PM_MAX+PB_MIN)/2

typedef struct Values {


	float ps_val[9];
	float ns_val[9];
	float pm_val[7];
	float z_val[7];
	float nm_val[7];
	float nb_val[5];
	float pb_val[5];




}Values;
typedef struct CommonValues {


	float ps_pm[9];
	float ns_z[9];
	float z_ps[7];
	float pm_pb[7];
	float nm_ns[6];
	float nb_nm[5];

	

}CommonValues;






void initCom(struct CommonValues* com);
void initVal(struct Values* val);


float nb_err(float error);
float ns_err(float error);
float nm_err(float error);
float z_err(float  error);
float pb_err(float error);
float pm_err(float error);
float ps_err(float error);

float nb_derr(float derror);
float ns_derr(float derror);
float nm_derr(float derror);
float z_derr(float  derror);
float pb_derr(float derror);
float pm_derr(float derror);
float ps_derr(float derror);

float rules(float error, float derror);

float outputNB(float err, float derr);
float outputNM(float err, float derr);
float outputNS(float err, float derr);
float outputZ(float err, float derr);
float outputPB(float err, float derr);
float outputPM(float err, float derr);
float outputPS(float err, float derr);
float outputNB_NM(float err, float derr);
float outputNM_NS(float err, float derr);
float outputNS_Z(float err, float derr);
float outputZ_PS(float err, float derr);
float outputPS_PM(float err, float derr);
float outputPM_PB(float err, float derr);

void sumarea(struct Values* val, float error, float derror);
void commonarea(float* MaxValS, float error, float derror);
float deffuzfication(float* MaxValS, float* MaxValC);
void sumcommon(struct CommonValues* common);

