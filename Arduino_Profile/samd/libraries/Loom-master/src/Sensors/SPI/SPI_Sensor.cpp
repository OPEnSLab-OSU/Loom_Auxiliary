///////////////////////////////////////////////////////////////////////////////
///
/// @file		Loom_SPI_Sensor.cpp
/// @brief		File for LoomSPISensor implementation.
/// @author		Luke Goertzen
/// @date		2019
/// @copyright	GNU General Public License v3.0
///
///////////////////////////////////////////////////////////////////////////////


#include "SPI_Sensor.h"


///////////////////////////////////////////////////////////////////////////////
LoomSPISensor::LoomSPISensor(
		LoomManager* manager,
		const char* module_name,
		const LoomModule::Type		module_type,
		const uint8_t				num_samples 
	) 
	: LoomSensor(manager, module_name, module_type, num_samples ) {}

///////////////////////////////////////////////////////////////////////////////
