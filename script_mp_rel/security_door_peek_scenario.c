#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	vector3 vLocal_62[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_72 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == ambient_fishing_scenario.__EntryFunction__

void func_6()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (func_12(1))
	{
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_FOCUS_CAM")))
		{
			if (!func_12(3))
			{
				func_13(1);
				func_14();
				aggregate.fme_animal_tagging.func_176(3);
			}
		}
	}
	switch (iLocal_19)
	{
		case 0:
			*(vLocal_62[0 /*3*/]) = { func_16() };
			*(vLocal_62[1 /*3*/]) = { func_17() };
			*(vLocal_62[2 /*3*/]) = { func_18() };
			func_19(Global_35, &vLocal_62, &iVar0);
			iLocal_72 = func_20(iVar0);
			aggregate.fme_animal_tagging.func_176(1);
			break;
		case 1:
			if (!aggregate.barcustomer_interaction.func_42(&uLocal_20))
			{
				OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 1);
				aggregate.barcustomer_interaction.func_25(&uLocal_20, 0);
			}
			else if (aggregate.broom_scenario.func_18(&uLocal_20, 3f))
			{
				MAP::LOCK_MINIMAP_ANGLE(0);
				aggregate.barcustomer_interaction.func_43(&uLocal_20);
				func_25(1);
				aggregate.fme_animal_tagging.func_176(2);
			}
			break;
		case 2:
			if (!func_26())
			{
				return;
			}
			func_27(&uLocal_23, 1, 1, 0, 0, 1);
			if (aggregate.broom_scenario.func_18(&uLocal_20, 3.5f))
			{
				func_14();
				func_13(1);
				aggregate.fme_animal_tagging.func_176(3);
			}
			break;
		case 3:
			break;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 0);
		iLocal_13 = 0;
	}
}

bool func_12(int iParam0)
{
	return (uLocal_18 && iParam0) != 0;
}

void func_13(int iParam0)
{
	if (!func_12(iParam0))
	{
		return;
	}
	iParam0 = (iParam0 - (iParam0 && iParam0));
}

void func_14()
{
	func_31(&uLocal_23);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	OBJECT::_0x276AAF0F1C7F2494(iLocal_72, 0);
	func_25(3);
}

Vector3 func_16()
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_17()
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_18()
{
	return -281.07f, 815.24f, 118.42f;
}

Vector3 func_19(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	iVar5 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		*uParam2 = iVar0;
		fVar6 = aggregate.fishing_core.func_39(iParam0, *((*uParam1)[iVar0 /*3*/]), 1);
		if (aggregate.annesburg.func_121(*((*uParam1)[iVar0 /*3*/])))
		{
		}
		else if (iVar0 == 0)
		{
			fVar4 = fVar6;
			vVar1 = { *((*uParam1)[iVar0 /*3*/]) };
		}
		else if (fVar4 > fVar6)
		{
			vVar1 = { *((*uParam1)[iVar0 /*3*/]) };
		}
		iVar0++;
	}
	return vVar1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 841127028;
		case 1:
			return 925575409;
		case 2:
			return -855228377;
		default:
			break;
	}
	return 0;
}

void func_25(int iParam0)
{
	if (func_12(iParam0))
	{
		return;
	}
	uLocal_18 = (uLocal_18 || iParam0);
}

bool func_26()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	if (!aggregate.aberdeenpigfarm.func_165(iLocal_72))
	{
		return false;
	}
	iVar0 = func_38(iLocal_72, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_39()) };
	if (aggregate.annesburg.func_121(vVar1))
	{
		return false;
	}
	vVar4 = { func_40() };
	switch (iLocal_72)
	{
		case 841127028:
			fVar7 = 115f;
			break;
		case 925575409:
			fVar7 = 10f;
			break;
		case -855228377:
			fVar7 = 100f;
			break;
	}
	fVar7 = (fVar7 + vVar4.z);
	func_41(&uLocal_23, vVar1, vVar4.x, vVar4.y, fVar7, 35f, 20, 10, 1077936128 /* Float: 3f */, 1101004800 /* Float: 20f */, 1, 0, 0.24f, 0, 0, 1044549468 /* Float: 0.19f */);
	func_25(2);
	return true;
}

void func_27(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f));
	}
	if (&uParam0->f_29[2] != 0 || &uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == &uParam0->f_29[2] && uParam0->f_35 == &uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = &uParam0->f_29[2];
		uParam0->f_35 = &uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[2])) / 127f) * IntToFloat(uParam0->f_25));
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / IntToFloat(uParam0->f_25));
		if (PAD::IS_LOOK_INVERTED())
		{
			uParam0->f_13 = ((BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
		else
		{
			uParam0->f_13 = (-(BUILTIN::TO_FLOAT(&(uParam0->f_29[3])) / 127f) * IntToFloat(uParam0->f_26));
		}
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30f * BUILTIN::TIMESTEP());
	if (!aggregate.flow_controller.func_195(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = (uParam0->f_12 + MISC::GET_FRAME_TIME());
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { aggregate.fm_deathmatch_controller.func_2079(uParam0->f_1, uParam0->f_8, fVar1) };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = (uParam0->f_19 + aggregate.coffee_drinking.func_45((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_1 = (uParam0->f_19.f_1 + aggregate.coffee_drinking.func_45((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3f, 3f));
	uParam0->f_19.f_2 = (uParam0->f_19.f_2 + aggregate.coffee_drinking.func_45((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3f, 3f));
	if (uParam0->f_36)
	{
		uParam0->f_19 = aggregate.coffee_drinking.func_45(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = aggregate.coffee_drinking.func_45(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = aggregate.coffee_drinking.func_45(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(&(uParam0->f_29[1])) < 0f)
			{
				uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
			}
		}
		else
		{
			uParam0->f_22 = (uParam0->f_22 + IntToFloat(BUILTIN::ROUND(((BUILTIN::TO_FLOAT(&(uParam0->f_29[1])) / 128f) * uParam0->f_24))));
		}
	}
	uParam0->f_23 = (uParam0->f_23 + (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f)));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, iParam5, 0);
}

void func_31(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
}

int func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = aggregate.net_fetch.func_1217(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

Vector3 func_39()
{
	return 0.537029f, 0.426005f, 1.6552f;
}

Vector3 func_40()
{
	return -7.766f, 0f, 175.2488f;
}

void func_41(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { vParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

