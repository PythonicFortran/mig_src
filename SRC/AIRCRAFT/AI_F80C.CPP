/*
	 MiG Alley
	 Copyright (C) 1998, 1999, 2000, 2001 Empire Interactive (Europe) Ltd,
	 677 High Road, North Finchley, London N12 0DA

	 Please see the document licence.doc for the full licence agreement

2. LICENCE
 2.1 	
 	Subject to the provisions of this Agreement we now grant to you the 
 	following rights in respect of the Source Code:
  2.1.1 
  	the non-exclusive right to Exploit  the Source Code and Executable 
  	Code on any medium; and 
  2.1.2 
  	the non-exclusive right to create and distribute Derivative Works.
 2.2 	
 	Subject to the provisions of this Agreement we now grant you the
	following rights in respect of the Object Code:
  2.2.1 
	the non-exclusive right to Exploit the Object Code on the same
	terms and conditions set out in clause 3, provided that any
	distribution is done so on the terms of this Agreement and is
	accompanied by the Source Code and Executable Code (as
	applicable).

3. GENERAL OBLIGATIONS
 3.1 
 	In consideration of the licence granted in clause 2.1 you now agree:
  3.1.1 
	that when you distribute the Source Code or Executable Code or
	any Derivative Works to Recipients you will also include the
	terms of this Agreement;
  3.1.2 
	that when you make the Source Code, Executable Code or any
	Derivative Works ("Materials") available to download, you will
	ensure that Recipients must accept the terms of this Agreement
	before being allowed to download such Materials;
  3.1.3 
	that by Exploiting the Source Code or Executable Code you may
	not impose any further restrictions on a Recipient's subsequent
	Exploitation of the Source Code or Executable Code other than
	those contained in the terms and conditions of this Agreement;
  3.1.4 
	not (and not to allow any third party) to profit or make any
	charge for the Source Code, or Executable Code, any
	Exploitation of the Source Code or Executable Code, or for any
	Derivative Works;
  3.1.5 
	not to place any restrictions on the operability of the Source 
	Code;
  3.1.6 
	to attach prominent notices to any Derivative Works stating
	that you have changed the Source Code or Executable Code and to
	include the details anddate of such change; and
  3.1.7 
  	not to Exploit the Source Code or Executable Code otherwise than
	as expressly permitted by  this Agreement.

questions about this file may be asked at http://www.simhq.com/
*/

//------------------------------------------------------------------------------
//Filename       AI_f80c.cpp
//System         
//Author         Split from DT_f80c.cpp
//Date           Thu 10 Dec 1998
//Description    F80C AI settings
//------------------------------------------------------------------------------

#include "dosdefs.h"
#include "worldinc.h"
#include "modvec.h"
#include "model.h"
//DeadCode RJS 02Dec97 #include "3dcom.h"

void F80C_SetupAI (AirStrucPtr const ControlledAC, ULong Version)
{
	ACMMODEL& ACM = ControlledAC->fly.pModel->ACMModel;

	
	ACM.BrakePower = 14;
	ACM.SteerRatio = 8e-6;

	ACM.MaxAileron = 32767;
	ACM.MaxElevatorForTightTurn	= 32767;

//	ACM.DiffPitchForMaxElevator	= 0.1745;

	ACM.aoamodifier = 2000;//1200;
	ACM.DeltaPitchForMaxElevator = 0.5;//	= 1.0472;

	ACM.pitchmodifier = 0.25;
//DeadCode CSB 08/03/99		ACM.pitchratemodifier = 0;//100000;
	ACM.pitchintmodifier = 0;//1.5;
	ACM.IntPitchForMaxElevator	= 0.1;//1000;

	ACM.rollmodifier = 2.0;//0.5;	
	ACM.rollintmodifier = 0;//2;
	ACM.IntRollForMaxAileron = 100;//80;

	ACM.yawmodifier = 5;//6;
	ACM.yawintmodifier = 0;//3;	

	ACM.turnmodifier = 1;//1.2;
	ACM.turnintmodifier = 0.01;//12;
	ACM.liftmodifier = 1000;//1200;



	ACM.maxdeltaforclosework = 0.1;
	ACM.lastdeltapitch = 0;

	ACM.deltapitchsum = 0;
	ACM.deltarollsum = 0;
	ACM.deltayawsum = 0;

}
/*
{
	ACMMODEL& ACM = ControlledAC->fly.pModel->ACMModel;

//	ACM.pModel = pModel;
	
	ACM.BrakePower = 14;
	ACM.SteerRatio = 8e-6;

//	ACM.ClimbRate_Elevator_Damping_Power = 5000;
//	ACM.ClimbRate_Elevator_Offset_Power = 50;

//	ACM.Height_Elevator_Offset_Power = 0.1;
//	ACM.Height_Elevator_Limit = 500;

//	ACM.RollRate_Aileron_Offset_Power = 12500;	// 25000 5/9/97
	
//	ACM.Roll_Aileron_Offset_Power = 5000;
//	ACM.Roll_Aileron_MaxBankOffset_Power = 25000;
	ACM.MaxAileron = 32767;
//	ACM.lastdeltaroll = 0;
	
//	ACM.Heading_Aileron_Limit = DEGS2RADS(45);
//	ACM.Heading_Aileron_Offset_Power = 5000;

//	ACM.PitchRate_Elevator_Offset_Power = 2048;
//	ACM.PitchRate_Elevator_Damping_Power = 262144;

//DeadCode RDH 17Apr98 	ACM.Pitch_Elevator_Offset_Power = 2048;
//DeadCode RDH 17Apr98 	ACM.Pitch_Elevator_Damping_Power = 262144;

	ACM.DeltaPitchForMaxElevator	= 1.0472;
	ACM.MaxElevatorForTightTurn	= 25000;
//	ACM.DiffPitchForMaxElevator	= 0.1745;
	ACM.lastdeltapitch = 0;

//	ACM.Speed_Throttle_Offset_Power = 0.5;
//	ACM.Speed_Throttle_Damping_Power = 64;
}
*/














































