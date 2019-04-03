#ifndef IRI2CONTROLLER_H_
#define IRI2CONTROLLER_H_


/******************************************************************************/
/******************************************************************************/

#include "controller.h"

/******************************************************************************/
/******************************************************************************/

class CIri2Controller : public CController
{
public:

    CIri2Controller (const char* pch_name, CEpuck* pc_epuck, int n_write_to_file);
    ~CIri2Controller();
    void SimulationStep(unsigned n_step_number, double f_time, double f_step_interval);

private:
    CEpuck* m_pcEpuck;
    
		CWheelsActuator* m_acWheels;
    CEpuckProximitySensor* m_seProx;
		CRealLightSensor* m_seLight;
		CRealBlueLightSensor* m_seBlueLight;
		CRealRedLightSensor* m_seRedLight;
		CContactSensor* m_seContact;
		CGroundSensor* m_seGround;
		CGroundMemorySensor* m_seGroundMemory;
		CBatterySensor* m_seBattery;  
		CBlueBatterySensor* m_seBlueBattery;  
		CRedBatterySensor* m_seRedBattery;  
		CEncoderSensor* m_seEncoder;  
		CCompassSensor* m_seCompass;  

    float m_fOrientation; 
    dVector2 m_vPosition;

		int m_nWriteToFile;
		int caso;
		int numAm;
		int numBl;
		int m_nLightObjectNumber; //Idealmente se sacaría del archivo de parámetros
		int m_nBlueLightObjectNumber;
		double redSpeed[2];
		double totalLight;
		double totalBlueLight;
		double conPared;
};

#endif
