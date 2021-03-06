/**
* @mainpage ophSig
* @brief Abstract class for core processing classes
*/

#ifndef __OphCoreProcessing_h
#define __OphCoreProcessing_h

#include "Openholo.h"

#ifdef COREPROCSS_EXPORT
#define COREPROCSS_DLL __declspec(dllexport)
#else
#define COREPROCSS_DLL __declspec(dllimport)
#endif

class COREPROCSS_DLL ophSig : public Openholo
{
public:
	/**
	* @brief Constructor
	*/
	ophSig(void);

protected:
	/**
	* @brief Destructor
	*/
	virtual ~ophSig(void);

protected:
	/**
	* @brief Pure virtual function for override in child classes
	*/
	virtual void ophFree(void) = 0;
};

#endif // !__OphCoreProcessing_h
