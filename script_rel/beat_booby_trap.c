#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	struct<174> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	vector3 vLocal_225 = { 0f, 0f, 0f };
	vector3 vLocal_228 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	vector3 vLocal_248 = { 0f, 0f, 0f };
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 1097859072;
	var uLocal_285 = 1000;
	var uLocal_286 = 1067450368;
	var uLocal_287 = 5000;
	var uLocal_288 = 42;
	var uLocal_289 = 1103626240;
	var uLocal_290 = 1077936128;
	var uLocal_291 = 1106247680;
	var uLocal_292 = 1103101952;
	var uLocal_293 = 1097859072;
	var uLocal_294 = 1103626240;
	vector3 vLocal_295 = { 0f, 0f, 0f };
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 2;
	var uLocal_311 = 1;
	var uLocal_312 = 1;
	var uLocal_313 = 1;
	var uLocal_314 = 0;
	var uLocal_315 = 1;
	var uLocal_316 = 2;
	var uLocal_317 = 2;
	var uLocal_318 = 3;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 3;
	var uLocal_322 = 1;
	var uLocal_323 = 3;
	var uLocal_324 = 3;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<2> Local_327 = { -1, -1 } ;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 100;
	var uLocal_337 = -1082130432;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<2> Local_348 = { -1, -1 } ;
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 100;
	var uLocal_358 = -1082130432;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 5;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	struct<2> Local_369 = { -1, -1 } ;
	var uLocal_371 = -1;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 100;
	var uLocal_379 = -1082130432;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 5;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1176256512;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	struct<2> Local_399 = { 0, 0 } ;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	int iLocal_416[4] = { 0, 0, 0, 0 };
	int iLocal_421[4] = { 0, 0, 0, 0 };
	int iLocal_426[4] = { 0, 0, 0, 0 };
	int iLocal_431[2] = { 0, 0 };
	var uLocal_434[4] = { 0, 0, 0, 0 };
	var uLocal_439[2] = { 0, 0 };
	struct<32> Local_442[4];
	struct<32> Local_571[2];
	struct<36> Local_636[2];
	struct<75> Local_709[2];
	int iLocal_860[2] = { 0, 0 };
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	bool bLocal_869 = false;
	bool bLocal_870 = false;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 4;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	struct<75> Local_882[4];
	int iLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	int iLocal_1193 = 0;
	int iLocal_1194 = 0;
	int iLocal_1195 = 0;
	int iLocal_1196 = 0;
	int iLocal_1197[2] = { 0, 0 };
	int iLocal_1200[4] = { 0, 0, 0, 0 };
	int iLocal_1205[2] = { 0, 0 };
	var uLocal_1208[4] = { 0, 0, 0, 0 };
	var uLocal_1213[2] = { 0, 0 };
	vector3 vLocal_1216 = { 0f, 0f, 0f };
	var uLocal_1219[2] = { 0, 0 };
	var uLocal_1222[2] = { 0, 0 };
	int iLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	int iLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	int iLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	int iLocal_1240 = 0;
	int iLocal_1241 = 0;
	int iLocal_1242 = 0;
	int iLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	int iLocal_1250 = 0;
	bool bLocal_1251 = false;
	bool bLocal_1252 = false;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	bool bLocal_1258 = false;
	bool bLocal_1259 = false;
	int iLocal_1260 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	bool bVar4;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_407 = 1;
	iLocal_408 = -1;
	iLocal_410 = -1;
	iLocal_411 = -1;
	vLocal_1216 = { 0f, 0f, 0f };
	bVar4 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar4 = true;
	}
	else
	{
		func_1(&Local_14, 1);
		func_2(&Local_14, &uScriptParam_0);
		func_3(&uLocal_267);
	}
	while (true)
	{
		if (bVar4)
		{
			func_5(bVar4, 1077/*func_4*/, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_407)
			{
				case 1:
					if (func_6(&Local_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_8(func_7(&Local_14), 10f, 2);
						func_9(&Local_14, &Local_399, &(Local_399.f_1));
						if (Local_399 == 10)
						{
							func_10(&Local_14, 1);
						}
						func_11(&Local_14, &Local_399, &(Local_399.f_1));
						func_12(&iLocal_390, Local_399);
						func_13(&Local_399, &vLocal_295);
						if (iLocal_390 != 1)
						{
						}
						else if (!func_14(&Local_399, &Var0))
						{
							func_4();
						}
						if (!func_15(&Local_399, &iLocal_391, &iLocal_395))
						{
							func_4();
						}
						iLocal_402 = VOLUME::_CREATE_VOLUME_CYLINDER(func_7(&Local_14), 0f, 0f, 0f, 2f, 2f, 10f);
						iLocal_403 = VOLUME::_CREATE_VOLUME_CYLINDER(func_7(&Local_14), 0f, 0f, 0f, 1.5f, 1.5f, 10f);
						if (Local_399 != 8)
						{
							vLocal_248 = { 2621.375f, 641.7349f, 69.56432f };
						}
						else
						{
							vLocal_248 = { func_16(iLocal_395, 0) };
							if (func_17(0))
							{
								func_18(0);
								func_19(&(Local_14.f_5), 0);
							}
						}
						func_20();
						func_21();
						func_22(&Local_399, iLocal_390, &Local_571, &Local_442, iLocal_391);
						if (Local_399 != 8 && !VOLUME::_0x92A78D0BEDB332A3(Local_14.f_173))
						{
							Local_14.f_173 = VOLUME::_CREATE_VOLUME_CYLINDER(func_7(&Local_14), 0f, 0f, 0f, 25f, 25f, 25f);
						}
						func_23();
						func_24(vLocal_295.z);
						func_24(vLocal_295.x);
						func_25(&vLocal_295, 1);
						func_26();
						func_27(0);
					}
					else if (Local_14.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_28())
					{
						if (func_29(&vLocal_295))
						{
							if (func_32(&iLocal_406, &uLocal_415, func_30(&Local_399), 7f, func_31(&Local_399)))
							{
								if (func_33(&Local_399))
								{
									iLocal_405 = func_35(3, func_34(&Local_399));
									func_38(iLocal_405, func_36(), func_37(0), 1148846080, -1065353216, 0, 0);
									func_39(iLocal_405, 1970477904, 1, 0);
									ENTITY::_0x18FF3110CF47115D(iLocal_405, 2, 0);
									ENTITY::_0x18FF3110CF47115D(iLocal_405, 7, 0);
								}
								if (!func_40(0))
								{
									func_27(3);
								}
								else
								{
									func_27(4);
								}
							}
						}
					}
					break;
				case 3:
					if (func_41())
					{
						func_42(&Local_327, 4214.345f, -3737.596f, 167.5375f, 0f, 0f, -188.6f, 2);
						func_42(&Local_348, 4214.345f, -3737.596f, 167.5375f, 0f, 0f, -188.6f, 2);
						func_43(&Local_327, "player", Global_35, 0);
						func_43(&Local_348, "player", Global_35, 0);
						if (iLocal_390 != 1)
						{
						}
						else
						{
							ENTITY::_0x203BEFFDBE12E96A(&(iLocal_431[0]), Var0, Var0.f_3, 1, 0, 1);
						}
						func_44();
						func_45(&Local_399, &iLocal_421);
						func_27(4);
					}
					break;
				case 4:
					if (!func_46(&Local_14, &iLocal_426, iLocal_390, Local_399 == 8, 1, 0, 1, 0))
					{
						func_4();
					}
					if (func_47())
					{
						if (func_48(vLocal_225) || !func_49(Global_35, vLocal_225, 35f, 1, 1))
						{
							func_4();
						}
					}
					func_50();
					if (func_51())
					{
						func_4();
					}
					func_52(&Local_369, 1);
					func_52(&Local_327, 1);
					func_52(&Local_348, 1);
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	func_53(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_54("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_3 = func_55(uParam1);
	uParam0->f_161 = func_56(uParam1->f_2, 2);
}

void func_3(var uParam0)
{
	func_57(uParam0, 1);
	func_58(uParam0, 1);
	func_59(uParam0, 1);
}

void func_4()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	if (iLocal_398 == 8)
	{
		Local_14.f_44 = 1;
		Local_14.f_48 = 1;
	}
	if (Local_399 != 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (((Local_14.f_44 || Local_14.f_46) || iLocal_1243) || func_40(2))
			{
				COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_60(1));
			}
		}
	}
	func_61();
	func_62(&iLocal_408, 1);
	func_63(iLocal_241);
	if (Local_14.f_48)
	{
		func_64(Local_399, iLocal_390);
	}
	func_65(&Local_327);
	func_65(&Local_348);
	TASK::_0x4F57397388E1DFF8();
	func_63(iLocal_244);
	func_63(iLocal_245);
	func_66();
	func_67(&iLocal_421);
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_406))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_406, 9);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
	if (func_40(46))
	{
		func_25(&vLocal_295, 2);
	}
	func_68(&iLocal_431, 1, 0, 1);
	func_69(60);
	func_70(&Local_14, &iLocal_426, &uLocal_434, iLocal_390, Local_399, Local_399.f_1, 0, 1, 0, 1);
	func_71();
}

void func_5(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_72(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

int func_6(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	float fVar0;

	if (iParam6 || func_73(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, bParam3, bParam4))
	{
		if (iParam6 || func_74(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_75(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_76(uParam0, -1, 0, bParam7);
			}
			_NAMESPACE49::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_77(uParam0->f_51);
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_7(var uParam0)
{
	return uParam0->f_51;
}

void func_8(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_9(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 10:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(uParam0->f_173, 2581.539f, 617.0823f, 74.4368f, 0f, 0f, 8.3334f, 10.8f, 23.95f, 8.95f);
					VOLUME::_0xBCE668AAF83608BE(uParam0->f_173, 2581.116f, 624.2293f, 74.5734f, 0f, 0f, 0f, 10f, 10f, 4f);
					break;
			}
			break;
	}
}

void func_12(var uParam0, int iParam1)
{
	if (iParam1 == 8)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = func_78(iParam1);
	}
}

void func_13(int iParam0, var uParam1)
{
	switch (*iParam0)
	{
		case 8:
			uParam1->f_1 = 765343099;
			*uParam1 = -879315604;
			uParam1->f_2 = -909306169;
			uParam1->f_3 = -350863510;
			uParam1->f_4 = 1557082963;
			uParam1->f_5 = "DES_trap_gua01x";
			uParam1->f_6 = 1;
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = -890900091;
					uParam1->f_1 = -1758697759;
					uParam1->f_2 = 591001924;
					uParam1->f_3 = 249726958;
					uParam1->f_4 = -1952856164;
					uParam1->f_5 = "DES_trap_roa0B01x";
					uParam1->f_6 = 1;
					break;
				case 1:
					uParam1->f_1 = -2092712551;
					uParam1->f_2 = -1307469679;
					uParam1->f_3 = 1433244935;
					uParam1->f_4 = -99303535;
					uParam1->f_5 = "DES_trap_roa02x";
					break;
			}
			break;
	}
}

bool func_14(int iParam0, var uParam1)
{
	*uParam1 = { 0f, 0f, 0f };
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = { 2624.685f, 643.4315f, 73.5474f };
					uParam1->f_3 = 138.5076f;
					break;
				case 1:
					*uParam1 = { 2389.007f, 1052.843f, 85.6323f };
					uParam1->f_3 = 306.6378f;
					break;
			}
			break;
	}
	return !func_48(*uParam1);
}

int func_15(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = 0;
					*uParam2 = 0;
					break;
				case 1:
					*uParam1 = 1;
					*uParam2 = 2;
					break;
			}
			break;
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = 2;
					*uParam2 = 3;
					break;
			}
			break;
	}
	if (*uParam1 != -1)
	{
		if (*uParam2 != -1)
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_16(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2586.735f, 617.4406f, 74.6399f };
					Var0.f_3 = -82.08f;
					break;
				case 1:
					Var0 = { 2596.203f, 619.8823f, 75.3299f };
					Var0.f_3 = 105.12f;
					break;
				case 2:
					Var0 = { 2600.608f, 621.6025f, 75.8978f };
					Var0.f_3 = 84.24f;
					break;
				case 3:
					Var0 = { 2605.699f, 624.7128f, 76.1324f };
					Var0.f_3 = 221.04f;
					break;
				case 4:
					Var0 = { 2611.041f, 628.8464f, 74.7972f };
					Var0.f_3 = 38.88f;
					break;
				case 5:
					Var0 = { 2619.828f, 634.8766f, 72.7787f };
					Var0.f_3 = 150.275f;
					break;
				case 6:
					Var0 = { 2626.142f, 638.5869f, 72.9086f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2630.055f, 643.2579f, 72.7811f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2636.169f, 647.9924f, 72.8323f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2637.779f, 650.5483f, 72.8791f };
					Var0.f_3 = -225.36f;
					break;
				case 10:
					Var0 = { 2642.899f, 658.6467f, 74.1972f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2649.134f, 666.0908f, 76.3328f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2655.031f, 672.7023f, 77.9523f };
					Var0.f_3 = -7.92f;
					break;
				case 13:
					Var0 = { 2654.474f, 674.5356f, 78.1413f };
					Var0.f_3 = 138.96f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2615.015f, 626.7673f, 73.8191f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2630.915f, 663.6337f, 72.5417f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2632.508f, 623.1313f, 78.8116f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2606.249f, 629.1194f, 75.9507f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2599.878f, 638.2327f, 78.714f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2599.766f, 649.328f, 79.499f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2602.538f, 655.5307f, 78.7464f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2609.606f, 673.1621f, 81.8273f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2625.286f, 664.242f, 72.9997f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2638.265f, 660.8614f, 73.4116f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2647.416f, 653.0973f, 74.7707f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2644.952f, 638.9842f, 76.8377f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2642.224f, 627.7772f, 80.6329f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2625.751f, 617.8865f, 77.8699f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2407.042f, 1071.098f, 86.1408f };
					Var0.f_3 = -49.68f;
					break;
				case 1:
					Var0 = { 2403.727f, 1068.9f, 85.5532f };
					Var0.f_3 = -73.44f;
					break;
				case 2:
					Var0 = { 2399.619f, 1061.415f, 84.0292f };
					Var0.f_3 = -54.72f;
					break;
				case 3:
					Var0 = { 2399.104f, 1055.586f, 84.7857f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2397.554f, 1052.159f, 85.6961f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2388.54f, 1043.737f, 85.3725f };
					Var0.f_3 = 164.814f;
					break;
				case 6:
					Var0 = { 2382.66f, 1037.209f, 87.7684f };
					Var0.f_3 = -34.56f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					Var0 = { 4202.292f, -3736.699f, 167.9393f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2616.352f, 637.9186f, 72.5476f };
					Var0.f_3 = -49.68f;
					break;
				case 1:
					Var0 = { 2617.767f, 636.4833f, 72.5448f };
					Var0.f_3 = -37.44f;
					break;
				case 2:
					Var0 = { 2619.088f, 635.8431f, 72.5485f };
					Var0.f_3 = -14.4f;
					break;
				case 3:
					Var0 = { 2620.614f, 635.9105f, 72.5357f };
					Var0.f_3 = 30.24f;
					break;
				case 4:
					Var0 = { 2621.242f, 636.9713f, 72.4873f };
					Var0.f_3 = 59.04f;
					break;
				case 5:
					Var0 = { 2621.612f, 638.0692f, 72.5215f };
					Var0.f_3 = 100.08f;
					break;
				case 6:
					Var0 = { 2621.081f, 638.8146f, 72.584f };
					Var0.f_3 = 123.84f;
					break;
				case 7:
					Var0 = { 2620.061f, 640.0323f, 72.5569f };
					Var0.f_3 = 142.56f;
					break;
				case 8:
					Var0 = { 2618.991f, 640.9267f, 72.5341f };
					Var0.f_3 = 144.72f;
					break;
				case 9:
					Var0 = { 2618.229f, 641.802f, 72.5458f };
					Var0.f_3 = 179.28f;
					break;
				case 10:
					Var0 = { 2616.835f, 641.5596f, 72.5398f };
					Var0.f_3 = -152.64f;
					break;
				case 11:
					Var0 = { 2615.712f, 641.0846f, 72.4178f };
					Var0.f_3 = -131.04f;
					break;
				case 12:
					Var0 = { 2615.542f, 639.8909f, 72.4594f };
					Var0.f_3 = 257.04f;
					break;
				case 13:
					Var0 = { 2615.951f, 638.7368f, 72.5477f };
					Var0.f_3 = -90f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1573.548f, -7255.91f, 68.7791f };
					Var0.f_3 = 234.72f;
					break;
				case 1:
					Var0 = { 1573.346f, -7257.251f, 69.0928f };
					Var0.f_3 = -64.8f;
					break;
				case 2:
					Var0 = { 1575.19f, -7258.813f, 69.1305f };
					Var0.f_3 = 321.35f;
					break;
				case 3:
					Var0 = { 1576.444f, -7258.701f, 69.1321f };
					Var0.f_3 = 34.185f;
					break;
				case 4:
					Var0 = { 1577.666f, -7257.242f, 68.9485f };
					Var0.f_3 = 55.44f;
					break;
				case 5:
					Var0 = { 1577.688f, -7255.947f, 68.8239f };
					Var0.f_3 = 123.12f;
					break;
				case 6:
					Var0 = { 1576.106f, -7254.452f, 68.7868f };
					Var0.f_3 = 153.36f;
					break;
				case 7:
					Var0 = { 1574.765f, -7254.889f, 68.9838f };
					Var0.f_3 = 223.92f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2410.208f, 1079.648f, 88.0996f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2402.145f, 1086.945f, 89.3157f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2393.499f, 1089.558f, 89.1377f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2386.055f, 1094.219f, 88.4182f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2359.725f, 1055.496f, 84.5451f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2359.536f, 1044.884f, 85.0826f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2365.225f, 1036.194f, 86.9162f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2374.279f, 1028.123f, 89.0517f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2385.336f, 1026.882f, 89.5849f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2395.26f, 1027.885f, 89.1314f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2407.001f, 1031.577f, 88.6485f };
					Var0.f_3 = 0f;
					break;
				case 11:
					Var0 = { 2413.03f, 1043.407f, 89.5882f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2417.793f, 1052.005f, 89.9445f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2419.441f, 1063.209f, 86.3127f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2396.024f, 1058.028f, 83.7061f };
					Var0.f_3 = 108.72f;
					break;
				case 1:
					Var0 = { 2395.082f, 1058.82f, 83.7971f };
					Var0.f_3 = 160.56f;
					break;
				case 2:
					Var0 = { 2393.129f, 1059.159f, 83.4364f };
					Var0.f_3 = 190.08f;
					break;
				case 3:
					Var0 = { 2392.219f, 1057.935f, 83.7749f };
					Var0.f_3 = 246.96f;
					break;
				case 4:
					Var0 = { 2392.198f, 1056.166f, 83.7657f };
					Var0.f_3 = 280.08f;
					break;
				case 5:
					Var0 = { 2392.8f, 1055.188f, 83.8446f };
					Var0.f_3 = -25.2f;
					break;
				case 6:
					Var0 = { 2394.925f, 1055.099f, 83.7857f };
					Var0.f_3 = 14.4f;
					break;
				case 7:
					Var0 = { 2395.877f, 1055.777f, 83.744f };
					Var0.f_3 = 59.76f;
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2595.285f, 622.6592f, 75.347f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2602.124f, 624.0291f, 76.0802f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2608.335f, 628.3577f, 75.7731f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2611.636f, 631.9971f, 74.4702f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2614.449f, 638.5141f, 72.5726f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2615.452f, 644.025f, 72.8983f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2617.17f, 647.5792f, 72.9845f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2618.82f, 651.3568f, 73.0774f };
					Var0.f_3 = 0f;
					break;
				case 8:
					Var0 = { 2619.98f, 654.4078f, 73.1717f };
					Var0.f_3 = 0f;
					break;
				case 9:
					Var0 = { 2621.902f, 657.0274f, 72.8711f };
					Var0.f_3 = 0f;
					break;
				case 10:
					Var0 = { 2624.009f, 659.6808f, 72.5155f };
					Var0.f_3 = 169.2f;
					break;
				case 11:
					Var0 = { 2627.581f, 664.3073f, 72.6414f };
					Var0.f_3 = 0f;
					break;
				case 12:
					Var0 = { 2632.431f, 666.4427f, 73.1376f };
					Var0.f_3 = 0f;
					break;
				case 13:
					Var0 = { 2637.009f, 669.3921f, 74.4187f };
					Var0.f_3 = 0f;
					break;
				case 14:
					Var0 = { 2641.892f, 675.6752f, 76.4711f };
					Var0.f_3 = 0f;
					break;
				case 15:
					Var0 = { 2647.382f, 677.6343f, 77.6194f };
					Var0.f_3 = 158.4f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2618.817f, 638.3134f, 69.7718f };
					Var0.f_3 = 140.854f;
					break;
				case 1:
					Var0 = { 2618.928f, 641.5409f, 72.5471f };
					Var0.f_3 = 154.8f;
					break;
				case 2:
					Var0 = { 2620.851f, 639.9678f, 72.5471f };
					Var0.f_3 = -225.36f;
					break;
				case 3:
					Var0 = { 2394.678f, 1057.208f, 81.077f };
					Var0.f_3 = 137.864f;
					break;
				case 4:
					Var0 = { 2392.567f, 1059.698f, 83.7832f };
					Var0.f_3 = 192.24f;
					break;
				case 5:
					Var0 = { 2395.801f, 1059.344f, 83.8175f };
					Var0.f_3 = -193.68f;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2617.576f, 643.037f, 72.5478f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2622.594f, 638.7287f, 72.5478f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2398.032f, 1057.473f, 83.9033f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2393.453f, 1061.196f, 84.0263f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2402.396f, 1073.558f, 86.5286f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2396.352f, 1065.296f, 84.6819f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2394.385f, 1063.196f, 84.3828f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2389.755f, 1058.965f, 84.1392f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2385.277f, 1054.132f, 84.8011f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2382.449f, 1050.575f, 85.3463f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2379.803f, 1047.877f, 85.8123f };
					Var0.f_3 = 0f;
					break;
				case 7:
					Var0 = { 2376.352f, 1045.46f, 86.1738f };
					Var0.f_3 = 299.52f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2391.07f, 1060.221f, 84.0628f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2390.006f, 1058.561f, 84.0477f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2390.068f, 1057.23f, 84.0006f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2391.975f, 1055.304f, 84.0145f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2394.604f, 1053.607f, 84.0723f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2396.073f, 1053.357f, 84.5304f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2398.15f, 1057.73f, 83.938f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2616.908f, 642.1093f, 72.5479f };
					Var0.f_3 = 0f;
					break;
				case 1:
					Var0 = { 2615.17f, 640.7055f, 72.577f };
					Var0.f_3 = 0f;
					break;
				case 2:
					Var0 = { 2615.417f, 639.0948f, 72.5488f };
					Var0.f_3 = 0f;
					break;
				case 3:
					Var0 = { 2616.748f, 636.798f, 72.5487f };
					Var0.f_3 = 0f;
					break;
				case 4:
					Var0 = { 2619.313f, 635.5421f, 72.5488f };
					Var0.f_3 = 0f;
					break;
				case 5:
					Var0 = { 2621.1f, 636.1342f, 72.5463f };
					Var0.f_3 = 0f;
					break;
				case 6:
					Var0 = { 2621.718f, 637.6596f, 73.1958f };
					Var0.f_3 = 0f;
					break;
			}
			break;
	}
	return Var0;
}

bool func_17(int iParam0)
{
	return iLocal_390 == iParam0;
}

void func_18(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::SET_BIT(&iLocal_209, (iParam0 - 32));
	}
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 16);
	}
	else
	{
		func_80(uParam0, 67108864);
		func_80(uParam0, 16);
	}
}

void func_20()
{
}

void func_21()
{
	switch (Local_399)
	{
		case 8:
			iLocal_410 = 5;
			iLocal_218 = 8;
			break;
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					iLocal_410 = 4;
					iLocal_218 = 14;
					break;
				case 1:
					iLocal_410 = 7;
					iLocal_218 = 8;
					break;
			}
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (*iParam0)
	{
		case 3:
		case 10:
			switch (iParam1)
			{
				case 0:
					((*uParam2)[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam2)[0 /*32*/] = 22;
					((*uParam2)[0 /*32*/])->f_6 = { func_81(iParam4, 0) };
					StringCopy(&(((*uParam2)[0 /*32*/])->f_23), "0201_G_M_M_UniInbred_02_WHITE_01", 64);
					func_82(&(((*uParam2)[0 /*32*/])->f_22));
					((*uParam2)[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam2)[1 /*32*/] = 22;
					((*uParam2)[1 /*32*/])->f_6 = { func_81(iParam4, 1) };
					StringCopy(&(((*uParam2)[1 /*32*/])->f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
					func_82(&(((*uParam2)[1 /*32*/])->f_22));
					((*uParam3)[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					((*uParam3)[0 /*32*/])->f_3 = -2140306968;
					(*uParam3)[0 /*32*/] = 22;
					StringCopy(&(((*uParam3)[0 /*32*/])->f_23), "0200_G_M_M_UniInbred_01_WHITE_02", 64);
					((*uParam3)[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					((*uParam3)[1 /*32*/])->f_3 = -367995603;
					(*uParam3)[1 /*32*/] = 22;
					StringCopy(&(((*uParam3)[1 /*32*/])->f_23), "0199_G_M_M_UniInbred_01_WHITE_01", 64);
					break;
				case 1:
					((*uParam2)[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					((*uParam2)[0 /*32*/])->f_3 = -71632767;
					(*uParam2)[0 /*32*/] = 22;
					StringCopy(&(((*uParam2)[0 /*32*/])->f_23), "0204_G_M_M_UniInbred_03_WHITE_02", 64);
					((*uParam2)[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					((*uParam2)[1 /*32*/])->f_3 = -1246892952;
					(*uParam2)[1 /*32*/] = 22;
					StringCopy(&(((*uParam2)[1 /*32*/])->f_23), "0202_G_M_M_UniInbred_02_WHITE_02", 64);
					((*uParam3)[0 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam3)[0 /*32*/] = 22;
					StringCopy(&(((*uParam3)[0 /*32*/])->f_23), "0203_G_M_M_UniInbred_03_WHITE_01", 64);
					((*uParam3)[1 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam3)[1 /*32*/] = 22;
					StringCopy(&(((*uParam3)[1 /*32*/])->f_23), "0201_G_M_M_UniInbred_02_WHITE_01", 64);
					((*uParam3)[2 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam3)[2 /*32*/] = 22;
					StringCopy(&(((*uParam3)[2 /*32*/])->f_23), "0199_G_M_M_UniInbred_01_WHITE_01", 64);
					((*uParam3)[3 /*32*/])->f_1 = joaat("g_m_m_uniinbred_01");
					(*uParam3)[3 /*32*/] = 22;
					StringCopy(&(((*uParam3)[3 /*32*/])->f_23), "0200_G_M_M_UniInbred_01_WHITE_02", 64);
					break;
			}
			break;
		case 8:
			((*uParam3)[0 /*32*/])->f_1 = joaat("s_m_m_fussarhenchman_01");
			((*uParam3)[0 /*32*/])->f_3 = 985642159;
			(*uParam3)[0 /*32*/] = 6;
			StringCopy(&(((*uParam3)[0 /*32*/])->f_23), "0761_S_M_M_FussarHenchman_01_HISPANIC_02", 64);
			((*uParam3)[0 /*32*/])->f_6 = { func_81(iParam4, 0) };
			func_82(&(((*uParam3)[0 /*32*/])->f_22));
			((*uParam3)[1 /*32*/])->f_1 = joaat("s_m_m_fussarhenchman_01");
			((*uParam3)[1 /*32*/])->f_3 = 754555171;
			(*uParam3)[1 /*32*/] = 6;
			StringCopy(&(((*uParam3)[1 /*32*/])->f_23), "0760_S_M_M_FussarHenchman_01_HISPANIC_01", 64);
			((*uParam3)[1 /*32*/])->f_6 = { func_81(iParam4, 1) };
			func_82(&(((*uParam3)[1 /*32*/])->f_22));
			break;
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar6;
	float fVar9;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar2 = { func_16(iLocal_410, iVar0) };
		if (!func_48(vVar2))
		{
			iVar1++;
			vVar6 = { vVar6 + vVar2 };
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	fVar9 = (1f / BUILTIN::TO_FLOAT(iVar1));
	vLocal_225 = { vVar6 * Vector(fVar9, fVar9, fVar9) };
}

void func_24(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

void func_25(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_83(iParam0->f_3);
			func_84(iParam0->f_4);
			func_83(iParam0->f_4);
			break;
		case 1:
			func_85(iParam0->f_3);
			func_84(iParam0->f_4);
			func_83(iParam0->f_4);
			if (iParam0->f_6)
			{
				func_24(*iParam0);
			}
			break;
		case 2:
			func_83(iParam0->f_3);
			func_85(iParam0->f_4);
			func_86(iParam0->f_4, 0, 0, 3, 0);
			func_24(iParam0->f_1);
			if (iParam0->f_6)
			{
				func_24(*iParam0);
			}
			func_87(iParam0->f_2);
			break;
	}
}

void func_26()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	func_63(iLocal_242);
	switch (Local_399)
	{
		case 8:
			iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1575.651f, -7256.715f, 67.1781f, 0f, 0f, 52.60049f, 3.488908f, 3.590751f, 6.974801f, "Hole Final");
			break;
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2618.099f, 638.6492f, 70.39433f, 0f, 0f, -36.92979f, 6.481314f, 9.388302f, 4.046504f, "Hole Final");
					iLocal_404 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("REBOT Failsafe");
					VOLUME::_0x39816F6F94F385AD(iLocal_404, 2618.801f, 638.7524f, 71.26722f, 0f, 0f, -44.30514f, 5.378187f, 2.417387f, 8.548813f);
					VOLUME::_0xBCE668AAF83608BE(iLocal_404, 2618.01f, 638.7421f, 72.62446f, 0f, 0f, -44.33657f, 2.761381f, 1.420066f, 1f);
					break;
				case 1:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2393.854f, 1057.106f, 81.62882f, 0f, 0f, 57.04266f, 5.895999f, 9.398265f, 4.078178f, "Hole Final");
					break;
			}
			break;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iLocal_242) };
	vVar3 = { VOLUME::_0x18675BC914891122(iLocal_242) };
	vVar6 = { VOLUME::_0x3E2A25B2416DD67E(iLocal_242) };
	iLocal_243 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(10f, 5f, 5f), "Horse Volume");
	vLocal_1216 = { VOLUME::_0x3E2A25B2416DD67E(iLocal_243) };
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_404))
	{
		iLocal_404 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(3f, -0.75f, -0.75f), "REBOT Failsafe");
	}
}

void func_27(int iParam0)
{
	iLocal_407 = iParam0;
}

int func_28()
{
	if (iLocal_1194)
	{
		return 1;
	}
	switch (iLocal_396)
	{
		case 0:
			if (func_88(&Local_14))
			{
				func_89(iLocal_391);
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@BOOBY_TRAP@CHASE");
				STREAMING::REQUEST_ANIM_DICT("AI_GESTURES@GEN_MALE@STANDING@SPEAKER");
				func_90();
				if (func_33(&Local_399))
				{
					STREAMING::REQUEST_MODEL(func_91(3, func_34(&Local_399)), false);
				}
				if (!func_92())
				{
					func_4();
				}
				func_93(&Local_571);
				func_93(&Local_442);
				func_94(1);
			}
			break;
		case 1:
			if (!func_95(iLocal_391))
			{
				return 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@BOOBY_TRAP@CHASE") || !STREAMING::HAS_ANIM_DICT_LOADED("AI_GESTURES@GEN_MALE@STANDING@SPEAKER"))
			{
				return 0;
			}
			if ((!func_96(&Local_327) || !func_96(&Local_348)) || !func_96(&Local_369))
			{
				return 0;
			}
			if (!func_97(&Local_348, 3) || !func_97(&Local_348, 7))
			{
				return 0;
			}
			if (!func_98(&Local_571))
			{
				return 0;
			}
			if (!func_98(&Local_442))
			{
				return 0;
			}
			if (func_33(&Local_399))
			{
				if (!STREAMING::HAS_MODEL_LOADED(func_91(3, func_34(&Local_399))))
				{
					return 0;
				}
				if (!func_99())
				{
					return 0;
				}
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REBOT_START"))
			{
				return 0;
			}
			if (!AUDIO::_0xD9130842D7226045("REBOT_Sounds", 0))
			{
				return 0;
			}
			iLocal_1194 = 1;
			return 1;
	}
	return 0;
}

int func_29(int iParam0)
{
	func_24(iParam0->f_2);
	if (iParam0->f_6)
	{
		func_24(*iParam0);
	}
	if (func_100(iParam0->f_3))
	{
	}
	if (func_100(iParam0->f_4))
	{
		func_83(iParam0->f_4);
		if (func_101(iParam0->f_4))
		{
			func_84(iParam0->f_4);
		}
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0->f_1))
	{
		return 0;
	}
	return 1;
}

Vector3 func_30(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return 1575.37f, -7256.625f, 69f;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 2619.116f, 639.025f, 72.88657f;
				case 1:
					return 2394.258f, 1057.631f, 83.874f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_31(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return "DES_trap_gua01x";
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return "DES_trap_roa0B01x";
				case 1:
					return "DES_trap_roa02x";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_32(int iParam0, var uParam1, vector3 vParam2, float fParam5, char* sParam6)
{
	int iVar0;

	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
		switch (iVar0)
		{
			case 15:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 3);
				break;
			case 5:
				*uParam1 = 3;
				return 1;
			case 4:
			case 14:
				break;
			default:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				break;
		}
	}
	return 0;
	switch (*uParam1)
	{
		case 0:
			*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) != 5)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				}
				*uParam1 = 1;
			}
			break;
		case 1:
			iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
			switch (iVar0)
			{
				case 4:
				case 5:
				case 14:
					*uParam1 = 2;
					break;
				case 11:
					break;
				default:
					break;
			}
			break;
		case 2:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) == 5)
			{
				*uParam1 = 3;
				return 1;
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_34(iParam0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	iVar0 = 0;
	if (func_91(iParam0, iParam1) != 0)
	{
		iVar1 = func_102(iParam0, iParam1);
		vVar2 = { func_81(iParam0, iParam1) };
		vVar5 = { func_103(iParam0, iParam1) };
		iVar8 = func_91(iParam0, iParam1);
		iVar0 = func_104(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

char* func_36()
{
	return "SCRIPT_RE@SAVAGE_AFTERMATH@DEAD";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DEAD_POSE_01";
		case 1:
			return "DEAD_POSE_02";
		case 2:
			return "DEAD_POSE_03";
		case 3:
			return "DEAD_POSE_04";
		case 4:
			return "DEAD_POSE_05";
		case 5:
			return "DEAD_POSE_06";
		default:
			break;
	}
	return func_105("[BEAT]", "BEAT_GET_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

void func_38(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_106(iParam0, 1f, 0);
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, iParam3, iParam4, -1, 679940 | iParam5, 0, 0, iParam6, 0, 0, 0);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_107(iParam0);
		func_108(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_40(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(iLocal_208, iParam0);
	}
	else
	{
		return MISC::IS_BIT_SET(iLocal_209, (iParam0 - 32));
	}
	return 0;
}

int func_41()
{
	switch (iLocal_397)
	{
		case 0:
			switch (iLocal_390)
			{
				case 0:
					if (func_110(func_7(&Local_14), func_109(&Local_14), &Local_571, &iLocal_431, 0, 0, -1, 1))
					{
						func_111();
						func_112(&iLocal_431);
						func_113(1);
					}
					break;
				case 1:
					if (func_114(Local_571[0 /*32*/], iLocal_431[0], func_7(&Local_14), func_109(&Local_14), 0, 1))
					{
						func_115(&(iLocal_431[0]));
						func_113(1);
					}
					break;
			}
			break;
		case 1:
			if (func_97(&Local_348, 7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_42(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

void func_43(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_44()
{
	vector3 vVar0;

	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					(Local_636[0 /*36*/])->f_6 = 0;
					(Local_636[1 /*36*/])->f_6 = 8;
					break;
				case 1:
					(Local_636[0 /*36*/])->f_6 = 2;
					(Local_636[1 /*36*/])->f_6 = 11;
					break;
			}
			break;
	}
	(Local_636[0 /*36*/])->f_9 = 0;
	(Local_636[1 /*36*/])->f_9 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
	{
		iLocal_244 = VOLUME::_CREATE_VOLUME_BOX(vVar0, 0f, 0f, 0f, 3f, 3f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_244, &(iLocal_431[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		TASK::_0x2A10538D0A005E81(iLocal_244, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
	{
		iLocal_245 = VOLUME::_CREATE_VOLUME_BOX(vVar0, 0f, 0f, 0f, 3f, 3f, 3f);
		PED::_0x7C00CFC48A782DC0(iLocal_245, &(iLocal_431[1]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		TASK::_0x2A10538D0A005E81(iLocal_245, 1);
	}
}

void func_45(int iParam0, var uParam1)
{
	int iVar0;

	switch (*iParam0)
	{
		case 8:
			(*uParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(1575.64f, -7256.629f, 68.85276f, 0f, 0f, 48.98185f, 3.830818f, 4.016119f, 1.959466f);
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					(*uParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(2619.242f, 638.7248f, 72.29485f, 0f, 0f, -45.56617f, 5.667787f, 2.617765f, 1.773518f);
					(*uParam1)[1] = VOLUME::_CREATE_VOLUME_BOX(2618.507f, 638.6099f, 72.68327f, 0f, 0f, -45.39423f, 6.666659f, 2.130628f, 1f);
					(*uParam1)[2] = VOLUME::_CREATE_VOLUME_BOX(2617.644f, 637.6544f, 72.62564f, 0f, 0f, 45.02389f, 0.599446f, 5.483649f, 1f);
					(*uParam1)[3] = VOLUME::_CREATE_VOLUME_BOX(2617.263f, 637.6937f, 72.62564f, 0f, 0f, 45.02389f, 1.252389f, 3.982504f, 1f);
					break;
				case 1:
					(*uParam1)[0] = VOLUME::_CREATE_VOLUME_BOX(2395.139f, 1057.096f, 83.99776f, 0f, 0f, -38.41385f, 5.346074f, 3.003638f, 1f);
					(*uParam1)[1] = VOLUME::_CREATE_VOLUME_BOX(2393.754f, 1056.402f, 83.81212f, 0f, 0f, -35.48756f, 7.099788f, 2.49697f, 1f);
					(*uParam1)[2] = VOLUME::_CREATE_VOLUME_BOX(2392.959f, 1059.686f, 83.439f, 0f, 0f, -35.49883f, 2.01019f, 2.183676f, 1f);
					break;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam1[iVar0]))
		{
			PATHFIND::_0x19C7567D2F2287D6(uParam1[iVar0], 7);
		}
		iVar0++;
	}
}

int func_46(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_118(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_119(&(uParam0->f_5));
			}
			func_79(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_123(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_124(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_75(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam1[0]) && !PED::IS_PED_INJURED(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82(uParam1[0])))
			{
				func_125(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_0x3AA24CCC0D451379(iVar2) || ((iParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_47()
{
	if (func_126(&uLocal_1247))
	{
		if (!func_127(&uLocal_1247, 30f))
		{
			return 0;
		}
	}
	if (Local_399 == 8)
	{
		return func_129(&Local_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	if (func_130(&iLocal_426, 0))
	{
		return func_129(&Local_14, &iLocal_431, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	return func_129(&Local_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
}

int func_48(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_131(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_50()
{
	int iVar0;

	if (Local_399 == 8)
	{
		return;
	}
	if (iLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_860[iVar0] = func_133(iLocal_431[iVar0], Local_709[iVar0 /*75*/], func_132(3, 0, 0) | 2048, 1, 0, 0, 0);
			iVar0++;
		}
	}
}

int func_51()
{
	func_134();
	func_135();
	func_136();
	func_137();
	func_138();
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_242))
	{
		if (func_139(Global_35, iLocal_242, 1, 0))
		{
			CAM::_0xC252C0CC969AF79A(1);
			CAM::_0xE2BB2D6A9FE2ECDE(1);
		}
	}
	if (func_40(47))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_327.f_1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_348.f_1))
			{
				func_140(47);
			}
		}
	}
	else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_327.f_1) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_348.f_1))
	{
		func_18(47);
	}
	if (func_40(47))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	switch (iLocal_390)
	{
		case 0:
			return func_141();
		case 1:
			return func_142();
		default:
			break;
	}
	return 1;
}

void func_52(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_143(uParam0, iVar0, 1))
			{
				if (!func_144(uParam0, iVar0))
				{
					func_145(uParam0, &(uParam0->f_15[iVar0]));
					if (!func_146(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (func_143(uParam0, 1, 1))
	{
		if (func_147(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || func_144(uParam0, 1))
			{
				func_148(uParam0, 1);
			}
		}
	}
	if (func_143(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || func_144(uParam0, 0))
			{
				func_148(uParam0, 0);
			}
		}
	}
	if (func_143(uParam0, 2, 1))
	{
		if (func_149(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || func_144(uParam0, 2))
			{
				func_148(uParam0, 2);
			}
		}
	}
	if (func_143(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || func_144(uParam0, 3))
			{
				func_148(uParam0, 3);
			}
		}
	}
	if (func_143(uParam0, 4, 1))
	{
		if (func_144(uParam0, 4))
		{
			func_148(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1) && ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1, 0))
		{
			func_65(uParam0);
		}
	}
}

void func_53(var uParam0)
{
	func_150(uParam0, 0);
	func_151(uParam0, 0);
	func_152(uParam0, 1);
	func_19(uParam0, 1);
	func_153(uParam0, 0);
	func_154(uParam0, 1);
	func_155(uParam0, 1, 1, 1);
}

var func_54(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_156(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_157(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_156(sVar0, iParam1, 0, 0, 1, 1);
}

var func_55(var uParam0)
{
	return *uParam0;
}

bool func_56(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 512);
	}
	else
	{
		func_80(uParam0, 512);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 2);
	}
	else
	{
		func_80(uParam0, 2);
	}
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 8);
	}
	else
	{
		func_80(uParam0, 8);
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_61()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_240))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_240);
	}
	func_63(iLocal_240);
}

void func_62(int iParam0, int iParam1)
{
	if (func_158(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_63(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_64(int iParam0, int iParam1)
{
	if (iParam0 != 8)
	{
		if (iParam1 == 0)
		{
			func_159(6, 0, 1);
		}
		else
		{
			func_159(6, 0, 0);
		}
	}
}

void func_65(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_66()
{
	int iVar0;

	if (iLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_160(Local_709[iVar0 /*75*/]);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iVar0])))
			{
				func_161(iLocal_431[iVar0], Local_709[iVar0 /*75*/], &((Local_709[iVar0 /*75*/])->f_21), 1, 1);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_431[iVar0]), 301, true);
			}
			iVar0++;
		}
		iLocal_401 = 0;
	}
}

void func_67(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0[iVar0]))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(uParam0[iVar0]);
			VOLUME::_0x43F867EF5C463A53(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_68(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = PED::GET_MOUNT(Global_35);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_162(uParam0[iVar0], 0, 1))
		{
			if (!bParam1 || !DECORATOR::DECOR_EXIST_ON(uParam0[iVar0], "pedRoam_bInPedRoam"))
			{
				if (!bParam2)
				{
					func_163(uParam0[iVar0], 1073741824, -1082130432, iVar1, 0);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD(uParam0[iVar0], 40000f, 0);
				}
				if (bParam3)
				{
					if (PED::GET_PED_STEALTH_MOVEMENT(uParam0[iVar0]))
					{
						PED::SET_PED_STEALTH_MOVEMENT(uParam0[iVar0], false, 0, 0);
					}
					else if (PED::_0xD5FE956C70FF370B(uParam0[iVar0]))
					{
						PED::_0x7DE9692C6F64CFE8(uParam0[iVar0], false, 0, 0);
					}
				}
				func_164(uParam0[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	Global_1415398->f_3 = (MISC::GET_GAME_TIMER() + iParam0 * 1000);
}

void func_70(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_166(uParam0->f_3, 524288);
		}
	}
	if (func_162(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (iParam8 && DECORATOR::DECOR_EXIST_ON(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_162(uParam1[iVar0], 0, 0))
			{
				func_164(uParam1[iVar0], bVar3);
				if (func_167(uParam0, (*uParam1)[iVar0]))
				{
					func_168((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_162(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT(uParam1[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT(uParam1[iVar0], false, 0, 0);
						}
						else if (PED::_0xD5FE956C70FF370B(uParam1[iVar0]))
						{
							PED::_0x7DE9692C6F64CFE8(uParam1[iVar0], false, 0, 0);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_163(uParam1[iVar0], 1073741824, func_169(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_170(uParam0);
	}
	func_171(uParam0);
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_172(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_173(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_71()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_72(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_174(iVar0))
	{
		return 0;
	}
	if (func_175(iVar0, 1) || func_175(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_176(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_177(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_120(iParam0, 128))
			{
				if (!func_178(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &fVar1, &fVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_180(&bVar4, iParam0, fVar2, fVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_48(*uParam1))
				{
					return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_182(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_56(Param4.f_2, 8))
				{
					func_177(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_183(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_184(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_185(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_120(iParam0, 128))
			{
				if (!func_186(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &fVar1, &fVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_183(uParam1))
					{
						return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_187(iParam0, Param4.f_1, uParam1, Param4, bParam14))
			{
				func_177(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_54("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_54("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

int func_74(var uParam0, int iParam1)
{
	if (func_75(iParam1, 256))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_172) || func_189(iParam1, func_188(uParam0), &(uParam0->f_172)))
		{
			if (func_162(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return 1;
}

bool func_75(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_76(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_75(uParam0->f_3, 1) && !func_75(uParam0->f_3, 32))
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_75(uParam0->f_3, 2) && !func_75(uParam0->f_3, 32))
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_192(uParam0->f_171, 1);
	}
	if (func_75(uParam0->f_3, 1))
	{
		func_191(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_0x3E2A25B2416DD67E(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_193(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_77(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_78(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 != 8)
	{
		iVar0 = func_194(6, 0);
	}
	if (iVar0 < 0 || iVar0 > (2 - 1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2588.853f, 617.8844f, 74.7204f;
				case 1:
					return 2588.99f, 623.9705f, 74.5359f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2406.779f, 1070.112f, 85.9727f;
				case 1:
					return 2401.868f, 1077.862f, 87.4815f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1555.165f, -7274.888f, 71.6718f;
				case 1:
					return 1552.618f, -7279.881f, 72.1041f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 4214.511f, -3737.849f, 167.0622f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_82(var uParam0)
{
	func_195(uParam0, 32);
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_196(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_197(iVar0);
		if (iVar1 == -1)
		{
			Jump @75; //curOff = 38
		}
		else if (iVar1 == iParam0)
		{
			if (func_198(iVar1))
			{
				func_83(iVar1);
				func_199(iVar0);
			}
		}
		else
		{
			iVar0++;
		}
	}
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_196(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = func_200();
	func_201(&iVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (func_202(iParam0, &iVar1))
	{
		if (func_197(iVar1) == iParam0)
		{
			func_203(iVar1, iParam0);
			func_204(iVar1, iVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		func_203(iVar1, iParam0);
		func_204(iVar1, iVar0);
		return;
	}
}

void func_87(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

int func_88(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_205(uParam0->f_3);
	iVar1 = func_206(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return 1;
	}
	return 0;
}

void func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_91(iParam0, iVar0), false);
		iVar0++;
	}
}

int func_90()
{
	if (func_210(&Local_327, "scenario@randomEvent@BOOBY_TRAP@run", 40170/*func_208*/, 40303/*func_209*/, 0, 0, 0, 0, 0))
	{
		if (func_210(&Local_348, "scenario@randomEvent@BOOBY_TRAP@walk", 40170/*func_208*/, 40303/*func_209*/, 3, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("g_m_m_uniinbred_01");
				case 1:
					return joaat("g_m_m_uniinbred_01");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("g_m_m_uniinbred_01");
				case 1:
					return joaat("g_m_m_uniinbred_01");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("s_m_m_fussarhenchman_01");
				case 1:
					return joaat("s_m_m_fussarhenchman_01");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("a_m_m_guatownfolk_01");
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_92()
{
	switch (Local_399)
	{
		case 8:
			return func_210(&Local_369, "script@beat@wilderness@boobyTrap@fussar", 40170/*func_208*/, 40303/*func_209*/, 4, 0, 0, 0, 0);
		default:
			break;
	}
	return func_210(&Local_369, "script@beat@wilderness@boobyTrap@murfree", 40170/*func_208*/, 40303/*func_209*/, 4, 0, 0, 0, 0);
	return 0;
}

void func_93(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_211(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_211(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_94(int iParam0)
{
	iLocal_396 = iParam0;
}

int func_95(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_91(iParam0, iVar0)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_96(var uParam0)
{
	if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0) && ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1, 1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_1, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
	}
	return 0;
}

int func_97(var uParam0, int iParam1)
{
	char* sVar0;

	if (func_116(uParam0, 0, 0, 0))
	{
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_6);
		sVar0 = StackVal;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0))
			{
				return 1;
			}
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
			}
		}
	}
	return 0;
}

bool func_98(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_212((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_99()
{
	STREAMING::REQUEST_ANIM_DICT(func_36());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_36()))
	{
		return 0;
	}
	return 1;
}

bool func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_196(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_101(int iParam0)
{
	int iVar0;

	return func_202(iParam0, &iVar0);
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 66.24f;
				case 1:
					return 0f, 0f, 61.2f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -54f;
				case 1:
					return 0f, 0f, -55.44f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -62.64f;
				case 1:
					return 0f, 0f, -41.76f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 84.24f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_104(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_213(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

char* func_105(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_106(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_214(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, iParam2))));
		ENTITY::_SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_107(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_108(int iParam0, var uParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = uParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

float func_109(var uParam0)
{
	return uParam0->f_51.f_3;
}

int func_110(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return 0;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_215() || !func_114((*iParam4)[iVar0 /*32*/], (*iParam5)[iVar0], vParam0, fParam3, iParam6, bParam9))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_111()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[iVar0])))
		{
			func_216(&(iLocal_426[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_112(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_115(iParam0[iVar0]);
		iVar0++;
	}
}

void func_113(int iParam0)
{
	iLocal_397 = iParam0;
}

int func_114(var uParam0, var uParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_217(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_218(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_219(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_220(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_216(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return 0;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_217(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_218(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (iParam6 || func_221(&(uParam0->f_22)));
					Var2 = { func_217(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_218(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_219(uParam0->f_1, uParam0, Var2, Var2.f_3, bParam7, PED::_0x772A1969F649E902(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_222(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_223(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return 0;
		}
	}
	return 1;
}

void func_115(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (Local_399)
		{
			case 3:
			case 10:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1078461828);
				break;
			case 8:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 106566339);
				break;
		}
	}
}

int func_116(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (iParam1 && !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_1, 0))
		{
			return 0;
		}
		if (iParam2 && !ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_1, 0))
		{
			return 0;
		}
		if (iParam3 && !ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1, 0))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_117(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_7(uParam0) };
	iVar3 = func_172(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_118(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_119(var uParam0)
{
	func_152(uParam0, 1);
	func_224(uParam0, 20);
}

bool func_120(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1) != 0;
}

void func_121(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_190(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_225())
	{
		func_226(1);
	}
	func_227(iParam2, uParam0->f_43);
	func_228(iParam2, 0, 0, 0, 0);
	if (func_229(iParam2) != -1)
	{
		MISC::_0xD74ACDF7DB8114AF(1);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_230(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		((*uParam0)[iVar0 /*9*/])->f_7 = 0f;
		((*uParam0)[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_123(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_231())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (!func_139(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_232(uParam0, bVar0);
		func_233(uParam0->f_121[iParam1 /*9*/], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_234(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
}

int func_124(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_75(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_235())
			{
				fVar0 = 15f;
			}
		}
		if (func_236(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_237(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (!func_236(uParam2, fVar1))
		{
			if (!func_238(((*Global_1310750)[uParam2->f_3 /*111*/])->f_38))
			{
				return 0;
			}
		}
		if (!func_239(uParam2->f_3, 2) && func_240(2))
		{
			return 0;
		}
		if (func_75(iParam0, 4194304) || func_75(iParam0, 33554432))
		{
			if (func_241(1))
			{
				return 0;
			}
		}
	}
	if (func_242(Global_35))
	{
		return 0;
	}
	if (func_243(0, 1, 1) && !func_244(iParam0))
	{
		return 0;
	}
	if (!*uParam1 && func_75(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_245(Global_35, 0))
		{
			return 0;
		}
		if (Global_16)
		{
			return 0;
		}
		if (func_237(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return 0;
		}
		if (func_246())
		{
			return 0;
		}
		iVar2 = func_248(func_247());
		if (func_249(iVar2))
		{
			if (func_250(Global_36, iVar2))
			{
				return 0;
			}
		}
		if (func_251(Global_36) && !uParam2->f_161)
		{
			return 0;
		}
		if (!uParam2->f_48)
		{
			if (func_252(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_125(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (func_253(uParam0->f_51))
	{
		func_254(uParam0->f_51, 0);
		fVar0 = func_255(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_256());
		fVar1 = func_169(!func_75(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_258(iVar2, func_257(uParam0->f_3), 1, iParam1, 8, 0, fVar1);
	}
}

bool func_126(var uParam0)
{
	return func_259(*uParam0, 1);
}

int func_127(var uParam0, float fParam1)
{
	if (!func_126(uParam0))
	{
		return 0;
	}
	if (func_260(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_128()
{
	return func_40(6);
}

int func_129(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_261())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_262(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_75(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_75(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_75(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_131(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_131(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

int func_130(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return 1;
}

float func_131(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_133(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	return func_263(uParam0, iParam1, iParam1->f_74, &(iParam1->f_21), 0f, iParam3, iParam4, iParam1->f_73, iParam2, iParam5, iParam6, 2, -1082130432);
}

void func_134()
{
	if (!func_40(36))
	{
		if (func_40(35))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1426724047) || (iLocal_411 == 0 && func_264(&Local_327, Global_35, "player", 1))) || (iLocal_411 == 1 && func_264(&Local_348, Global_35, "player", 1)))
			{
				func_18(36);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_140(43);
				iLocal_1260 = 1;
			}
		}
	}
	else if (iLocal_1260)
	{
		if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
		{
			if (func_265(Global_35, 0, 1, 0) == joaat("weapon_unarmed"))
			{
				func_266();
			}
			iLocal_1260 = 0;
		}
	}
}

void func_135()
{
	int iVar0;
	int iVar1;

	if (iLocal_1195)
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			if (!func_267())
			{
				if (func_268())
				{
					if (!func_126(&uLocal_1190))
					{
						func_269(&uLocal_1190);
					}
					else if (func_127(&uLocal_1190, 3f))
					{
						func_270();
					}
				}
			}
		}
	}
	func_271();
	if (!iLocal_1183)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (func_139(iVar0, iLocal_243, 1, 0))
				{
					iLocal_1183 = 1;
				}
			}
			else
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_272(iVar1))
					{
						func_273();
						func_274();
						PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
						func_66();
					}
				}
			}
		}
		else if (!func_40(2))
		{
			if (func_275() && (!func_40(15) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)))
			{
				func_273();
				func_274();
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 2000, 3000, 2, func_276(Global_35, vLocal_225, 1065353216), (vLocal_225.z - 1f), vLocal_225, vLocal_225);
			}
			else if (func_277())
			{
				if (Local_399 == 8)
				{
					func_274();
				}
				func_18(2);
				func_18(35);
			}
		}
	}
	else
	{
		if (func_126(&uLocal_252))
		{
			func_269(&uLocal_252);
		}
		if (iLocal_1183)
		{
			if (func_278())
			{
				func_18(21);
				iLocal_1183 = 0;
			}
		}
	}
}

void func_136()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_40(34))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
		{
			if (func_280(&vVar0, &vVar3, func_279(Local_399 == 8, 1, 0)))
			{
				switch (iLocal_411)
				{
					case 0:
						func_42(&Local_327, vVar0, vVar3, 2);
						break;
					case 1:
						func_42(&Local_348, vVar0, vVar3, 2);
						break;
				}
			}
			func_281();
			func_18(34);
			func_18(46);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1758060041))
	{
		if (!func_282(&iLocal_406, &uLocal_415, 0))
		{
		}
	}
}

void func_137()
{
	if (iLocal_1241 && !iLocal_1242)
	{
		if (((((!func_283(&(iLocal_426[0]), 0) && !func_283(&(iLocal_426[1]), 0)) && !func_283(&(iLocal_426[2]), 0)) && !func_283(&(iLocal_426[3]), 0)) && !func_283(&(iLocal_431[0]), 0)) && !func_283(&(iLocal_431[1]), 0))
		{
			func_284(Global_35, Global_35, "RE_BOT_FLEE_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_1242 = 1;
			func_269(&uLocal_1244);
		}
	}
}

void func_138()
{
	bool bVar0;

	if (!iLocal_1243 && Local_399 != 8)
	{
		if (Local_14.f_46)
		{
			bVar0 = (func_126(&uLocal_1247) || (func_130(&iLocal_426, 0) && func_130(&iLocal_431, 0)));
			if (bVar0)
			{
				if (!func_283(Global_35, 0))
				{
					if (!func_126(&uLocal_1247))
					{
						func_269(&uLocal_1247);
					}
					else if (func_285(&uLocal_1247, 2f))
					{
						if (iLocal_390 == 0)
						{
							if (func_286(1, 1))
							{
								func_284(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								func_284(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL_FEUD", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						else
						{
							func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_1243 = 1;
					}
				}
			}
		}
	}
}

bool func_139(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_140(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::CLEAR_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_209, (iParam0 - 32));
	}
}

int func_141()
{
	func_287();
	if (iLocal_398 > 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(iLocal_431[0]), 2118640473))
		{
			if (!func_283(&(iLocal_431[1]), 0))
			{
				func_288(0, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(iLocal_431[1]), 2118640473))
		{
			if (!func_283(&(iLocal_431[0]), 0))
			{
				func_288(1, 0);
			}
		}
	}
	switch (iLocal_398)
	{
		case 0:
			if (Local_399 != 8)
			{
				func_289(0, joaat("weapon_shotgun_doublebarrel"), "Murfree_01", 0, 1, 1);
				func_289(1, joaat("weapon_revolver_cattleman"), "Murfree_02", 0, 1, 1);
				PED::_0x7DE9692C6F64CFE8(&(iLocal_431[0]), true, 0, 0);
				PED::_0x7DE9692C6F64CFE8(&(iLocal_431[1]), true, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(iLocal_431[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(iLocal_431[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			func_290(1);
			break;
		case 1:
			if (func_291())
			{
				func_292(11, 2048);
				if (Local_399 == 8)
				{
					func_290(2);
				}
				else
				{
					func_121(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
					{
						PED::_0x7DE9692C6F64CFE8(&(iLocal_431[0]), false, 0, 0);
						PED::SET_PED_USING_ACTION_MODE(&(iLocal_431[0]), true, -1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
					{
						PED::_0x7DE9692C6F64CFE8(&(iLocal_431[1]), false, 0, 0);
						PED::SET_PED_USING_ACTION_MODE(&(iLocal_431[1]), true, -1, 0);
					}
					func_293();
					if (!func_294(Global_35))
					{
						func_290(5);
					}
					else
					{
						iLocal_246 = func_295(Global_35);
						func_290(4);
					}
				}
			}
			break;
		case 2:
			func_296();
			break;
		case 4:
			func_297();
			if (func_298())
			{
				func_290(5);
				func_293();
			}
			break;
		case 5:
			return func_299();
		case 8:
			if (Local_399 == 8)
			{
				if (!iLocal_1250)
				{
					if (ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])))
					{
						if (ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
						{
							func_284(Global_35, Global_35, "RE_BOT_GUA_V1_PLYFINAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1250 = 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_142()
{
	func_300();
	switch (iLocal_398)
	{
		case 0:
			func_301(&(iLocal_431[0]), &Local_14, 0);
			PED::_0x923583741DC87BCE(&(iLocal_431[0]), "Default");
			PED::_0x89F5E7ADECCCB49C(&(iLocal_431[0]), "injured_LEFT_LEG");
			iLocal_398 = 1;
			break;
		case 1:
			if (func_291())
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(iLocal_431[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
				func_284(&(iLocal_431[0]), Global_35, func_302("OVERHERE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_292(11, 2048);
				func_121(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
				func_303(&(iLocal_431[0]), uLocal_439[0], -89429847, 580546400, 0, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uLocal_439[0]), "RE_INTER_STRANGER");
				iLocal_398 = 3;
			}
			else
			{
				func_304();
				if (!bLocal_1258)
				{
					func_305();
				}
			}
			break;
		case 3:
			if (func_306())
			{
				iLocal_398 = 8;
			}
			break;
		case 8:
			break;
	}
	return 0;
}

bool func_143(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return false;
	}
	return ((!bParam2 || func_116(uParam0, 0, 0, 0)) && MISC::IS_BIT_SET(uParam0->f_8, iParam1));
}

bool func_144(var uParam0, int iParam1)
{
	return func_307(uParam0, &(uParam0->f_15[iParam1]));
}

bool func_145(var uParam0, var uParam1)
{
	char* sVar0;

	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, sVar0);
}

bool func_146(var uParam0, int iParam1)
{
	return func_308(uParam0, &(uParam0->f_15[iParam1]));
}

bool func_147(int iParam0, int iParam1)
{
	return (func_309(iParam0) || (ANIMSCENE::_0x49F1D143ADE32656(iParam0) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0)) <= (BUILTIN::TO_FLOAT(iParam1) * 0.001f));
}

void func_148(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = &uParam0->f_15[iParam1];
	Stack.Push(uParam0->f_1);
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_6);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(StackVal, StackVal, true);
	func_310(uParam0, iParam1, 0);
	uParam0->f_2 = uVar0;
	Stack.Push(uVar0);
	Call_Loc(uParam0->f_5);
}

bool func_149(int iParam0, float fParam1, float fParam2)
{
	return (ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0) >= fParam1 && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam0) <= fParam2);
}

void func_150(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 16384);
	}
	else
	{
		func_79(&(uParam0->f_1), 16384);
	}
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 2048);
	}
	else
	{
		func_79(&(uParam0->f_1), 2048);
	}
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 256);
	}
	else
	{
		func_79(&(uParam0->f_1), 256);
	}
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 128);
	}
	else
	{
		func_79(&(uParam0->f_1), 128);
	}
}

void func_154(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 256);
	}
	else
	{
		func_80(uParam0, 256);
	}
}

void func_155(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_79(uParam0, 268435456);
	}
	else
	{
		func_80(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_79(uParam0, 1073741824);
	}
	else
	{
		func_80(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_79(uParam0, 536870912);
	}
	else
	{
		func_80(uParam0, 536870912);
	}
}

var func_156(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_157(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_311(sParam1));
}

bool func_158(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_312(iParam0, iParam1);
	(Global_17503.f_1003[iVar0 /*6*/])->f_1 = iParam2;
}

void func_160(int* iParam0)
{
	func_313(iParam0, &(iParam0->f_21));
}

void func_161(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_314(uParam0);
		func_313(iParam1, uParam2);
	}
	func_315(*uParam0, 1, bParam4);
}

bool func_162(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_316(iParam0, iParam1);
}

void func_163(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630->f_12 && (!bParam4 || func_162(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_169(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_317(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_164(int iParam0, bool bParam1)
{
	if (func_162(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_318(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_166(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 || iParam1);
}

int func_167(var uParam0, var uParam1)
{
	if (func_75(uParam0->f_3, 16777216))
	{
		if (func_319(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("g_m_m_unibrontegoons_01"))
		{
			return 1;
		}
	}
	return 0;
}

void func_168(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_169(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_171))
	{
		func_320(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_321(uParam0);
	func_322(uParam0);
	func_323(uParam0);
	if (!func_324(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_254(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_325();
	}
	if (!func_326(uParam0->f_3) && !func_75(uParam0->f_3, 256))
	{
		func_327(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_63(uParam0->f_173);
	func_63(uParam0->f_172);
}

void func_171(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_328() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_174(int iParam0)
{
	if (((func_175(iParam0, 1) && func_175(iParam0, 2)) && func_175(iParam0, 8)) && func_175(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_175(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_176(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_190(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_329(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_330(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *(Global_1310750->f_13358[iVar0 /*3*/]);
}

void func_177(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_75(iParam0, 32))
	{
		if (func_331(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_332(Global_35, &(uParam1->f_12)) };
				if (!func_48(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_333(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_255(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_256());
		if (func_334(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_258(iVar0, func_257(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_258(iVar0, func_257(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_75(iParam0, 1))
		{
			func_335(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_336(iParam0);
}

int func_178(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/])->f_1 != -1)
		{
			func_337(uParam1, *(((*Global_1310750)[iParam0 /*111*/])->f_4.f_4[iVar0 /*3*/]));
		}
		iVar0++;
	}
	if (func_120(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_338(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_338(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return 1;
}

void func_179(int iParam0, float fParam1, float fParam2, var uParam3, bool bParam4)
{
	switch (func_339(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_75(iParam0, 1))
			{
				if (func_120(iParam0, 2))
				{
				}
			}
			func_340(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 2:
			func_341(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		case 3:
			func_341(fParam1, fParam2, uParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*uParam3 = (*uParam3 * *uParam3);
			break;
		default:
			break;
	}
	if (func_262(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_180(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*iParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_329(iParam1))
	{
		if (!func_342(iParam1, iVar0))
		{
			vVar4 = { func_176(iParam1, iVar0) };
			if (!func_48(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_185(fVar8, iParam1))
				{
					*iParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_343(iParam1, vVar4, fParam2, fParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_48(vVar4))
	{
	}
	return vVar1;
}

int func_181(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_54("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_182(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_329(iParam0))
	{
		vVar1 = { func_176(iParam0, iVar0) };
		if (func_344(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_183(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return 0;
		}
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_345(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_346(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_48(*(uParam0->f_12[iVar0 /*3*/])))
			{
				vVar5 = { *(uParam0->f_12[iVar0 /*3*/]) };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_347(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *(uParam0->f_12[iVar1 /*3*/]) };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_181(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

int func_185(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_179(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return 0;
	}
	if (func_75(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_186(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*uParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return 1;
	}
	return 0;
}

int func_187(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_348(iParam0, *uParam2))
	{
		return 0;
	}
	if (!func_349(iParam0, uParam2))
	{
		return 0;
	}
	if (!func_350(Param3))
	{
		return 0;
	}
	if (bParam10)
	{
		if (!func_351(*uParam2, Global_35))
		{
			return 0;
		}
	}
	return 1;
}

int func_188(var uParam0)
{
	return uParam0->f_51.f_4;
}

int func_189(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return 1;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_0x39816F6F94F385AD(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_0x39816F6F94F385AD(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return 1;
			}
			break;
	}
	return 0;
}

bool func_190(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_191(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_192(int iParam0, int iParam1)
{
	if (func_352(iParam0))
	{
		return;
	}
	if (func_353(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36601 >= 10)
	{
		Global_36601 = 0;
	}
	(Global_36580[Global_36601 /*2*/])->f_1 = iParam1;
	Global_36580[Global_36601 /*2*/] = iParam0;
	Global_36601++;
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_80(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_354(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return (Global_17503.f_1003[iVar0 /*6*/])->f_1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1)
{
	func_355(iParam0, iParam1);
}

int func_196(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_197(int iParam0)
{
	return &(Global_40.f_297[iParam0]);
}

int func_198(int iParam0)
{
	int iVar0;

	if (func_202(iParam0, &iVar0))
	{
		if (func_200() > func_356(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_199(int iParam0)
{
	func_203(iParam0, -1);
	func_204(iParam0, -15);
}

int func_200()
{
	return &Global_1899515;
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_357(*iParam0);
	iVar1 = func_358(*iParam0);
	iVar2 = func_359(*iParam0);
	iVar3 = func_360(*iParam0);
	iVar4 = func_361(*iParam0);
	iVar5 = func_362(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_363(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_363(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_364(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_197(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		else if (func_197(iVar0) == -1)
		{
			*iParam1 = iVar0;
			return 0;
		}
	else
	{
		}
		iVar0++;
	}
	*iParam1 = -1;
	return 0;
}

void func_203(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0 + 30] = iParam1;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_206(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_365(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_366(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_366(), iVar3);
		if (func_367(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_RUN_SHORT";
		case 3:
			return "PBL_WALK_SHORT";
		case 2:
			return "PBL_RUN_INBRED_RD";
		case 4:
			return "PBL_ACTION";
		case 5:
			return "PBL_BREAKOUT_MID";
		case 6:
			return "PBL_BREAKOUT_POST";
		case 7:
			return func_368(Local_399 == 8, "PBL_CROUCH_WALK_SHORT", "PBL_CROUCH_WALK");
		default:
			break;
	}
	return func_105("[REBOT]", "REBOT_PBL_INDEX_NAME: Invalid PBL Index.");
}

void func_209(var uParam0)
{
}

int func_210(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Push(sParam1);
		Stack.Push(iParam5);
		Stack.Push(iParam4);
		Call_Loc(iParam2);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return 1;
	}
	return 0;
}

void func_211(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

int func_212(var uParam0)
{
	if (!func_369(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_369(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_370(iParam1))
		{
			func_371(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_372(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_373(iParam0, 0);
			bVar0 = true;
		}
		func_374(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

float func_214(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_215()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_375(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

Vector3 func_217(vector3 vParam0, float fParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vParam4);
}

float func_218(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_376((fParam0 + fParam1));
}

int func_219(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_377(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_378(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_104(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_104(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_379(iVar0))
		{
			func_223(iVar0, &(uParam1->f_23), 0);
		}
		if (func_379(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_380(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_381(&(uParam1->f_22)));
			func_383(iVar0, func_382(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_384(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_385(&(uParam1->f_22)))
		{
			func_386(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_387(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_388(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_379(iVar0))
		{
			func_390(iVar0, !func_389(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_391(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_392(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_392(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_220(int iParam0, int iParam1)
{
	if (func_393(iParam0) != -1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("g_m_m_uniswamp_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			return 1;
		case joaat("g_m_m_unicriminals_02"):
		case joaat("g_m_m_unicriminals_01"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

bool func_221(var uParam0)
{
	return func_388(*uParam0, 32);
}

int func_222(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::_SET_PED_ON_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_223(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_162(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_224(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_225()
{
	return &Global_1935436 == 2;
}

void func_226(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_227(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17503.f_3++;
	(Global_17503.f_42[iParam0 /*8*/])->f_1++;
	if (func_75(iParam0, 2))
	{
		func_395(iParam0, func_394(iParam1));
	}
	else
	{
		func_397(iParam0, func_396());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT(((Global_17503.f_42[iParam0 /*8*/])->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_398(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_36, fVar0, 1, 0);
	func_399(iParam0, 0);
	func_400(iParam0);
	func_401(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 4;
	Global_17503.f_6 = iParam0;
	Global_17503.f_10 = 1;
	Global_17503.f_7 = 0;
	Global_17503.f_8 = 0;
	if (!func_75(iParam0, 16))
	{
		func_228(iParam0, 0, 0, 0, 0);
	}
}

void func_228(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_402() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_190(iVar1) && !func_75(iVar1, iParam2)) && (!bParam3 || !func_244(iVar1))) && (!bParam4 || !func_403(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_404(iVar0);
			}
		}
		iVar0++;
	}
}

int func_229(int iParam0)
{
	return ((*Global_1310750)[iParam0 /*111*/])->f_39;
}

void func_230(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_334(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_75(uParam0->f_3, 1073741824))
			{
				func_405(2, -1, 0, 0, 0);
			}
			else
			{
				func_405(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_405(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_406(1, uParam0->f_177))
				{
					func_407(16, uParam0->f_177);
					func_408(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_60(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_405(8, -1, 0, 0, 0);
	}
}

int func_231()
{
	if (func_409(Global_1935630->f_44))
	{
		if (WEAPON::_0x6AD66548840472E5(Global_1935630->f_44))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_410())
		{
			return 1;
		}
	}
	return 0;
}

float func_232(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_75(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_75(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_75(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_75(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_75(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_75(uParam0->f_3, 1))
		{
		}
		else if (func_75(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_233(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_411(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (iParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_412(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_413() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

int func_234(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*9*/])->f_6) && ((*uParam0)[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN(((*uParam0)[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + ((*uParam0)[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return 0;
	}
	if (fVar2 < fParam2)
	{
		return 0;
	}
	func_122(uParam0);
	return 1;
}

bool func_235()
{
	return (Global_1894899 & 1 != 0 && func_247() != -1);
}

int func_236(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_237(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_414(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_238(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_360(func_200());
	if (func_56(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_56(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_239(int iParam0, int iParam1)
{
	return (func_229(iParam0) && iParam1) != 0;
}

int func_240(int iParam0)
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 & -1 == -1)
	{
		return 1;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_415(iVar3))
	{
		return 1;
	}
	if (iParam0 & 2 == 2 && func_416(iVar3))
	{
		return 1;
	}
	if (iParam0 & 4 == 4 && func_417(iVar3))
	{
		return 1;
	}
	if (iParam0 & 8 == 8 && func_418(iVar3))
	{
		return 1;
	}
	if (iParam0 & 16 == 16 && func_419(iVar3))
	{
		return 1;
	}
	if (iParam0 & 32 == 32 && func_420(iVar3))
	{
		return 1;
	}
	if (iParam0 & 64 == 64 && func_421(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_241(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_422(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_243(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_423())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_424(&(Global_1898164->f_1[0 /*5*/]));
		if (func_425(iVar0) && func_426(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_427(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	if (func_428(64) && func_429(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_245(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_430(iVar0) || func_431(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_246()
{
	return Global_1894899 & 4 != 0;
}

int func_247()
{
	return Global_1894899->f_2;
}

int func_248(int iParam0)
{
	if (!func_432(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_249(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_250(vector3 vParam0, int iParam3)
{
	if (!func_249(iParam3))
	{
		return 0;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[iParam3 /*10*/])->f_5))
	{
		return VOLUME::_0xF256A75210C5C0EB(((*Global_1392194)[iParam3 /*10*/])->f_5, vParam0);
	}
	return 0;
}

bool func_251(vector3 vParam0)
{
	float fVar0;

	if (func_48(vParam0))
	{
		return false;
	}
	fVar0 = func_169(func_235(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

int func_252(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_0x1A51BFE60708E482(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_269(uParam0);
						if (bParam3)
						{
							return 1;
						}
					}
					if (!bParam3)
					{
						return 1;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_269(uParam0);
		return 1;
	}
	if (!bParam4)
	{
		if (!func_126(uParam0))
		{
			return 0;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		if (!func_127(uParam0, fParam2))
		{
			return 1;
		}
		if (func_126(uParam0))
		{
			func_433(uParam0);
		}
	}
	return 0;
}

bool func_253(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_254(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_48(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_344(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_255(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0f;
	}
	if (!func_434(iParam0))
	{
		return 0f;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_44;
}

char* func_256()
{
	return "unnamed";
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_258(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;

	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	uVar6 = func_335(vVar0, vVar3.x, uParam1, bParam2, iParam3, iParam4, bParam5, fParam6);
	return uVar6;
}

bool func_259(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_260(var uParam0)
{
	if (!func_126(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_435(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_413() - uParam0->f_1);
}

int func_261()
{
	if (!func_436(Global_1395482->f_1))
	{
		return 0;
	}
	return func_437(Global_1395482->f_1, 32);
}

bool func_262(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return false;
	}
	return (1 == func_438(iParam0) || 2 == func_438(iParam0));
}

int func_263(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_439(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_169(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_269(&(iParam1->f_13));
		}
		if (func_440(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_441(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_263(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_314(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_442(*uParam0, 1, 1);
						}
					}
					else if (func_443(iParam1, 22))
					{
						func_442(*uParam0, 0, 1);
					}
				}
				if (func_444(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_445(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_446(iParam8);
					if (func_447(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_448(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_449(iParam1, uParam3, fVar8);
					if (func_450(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_451(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_452(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_444(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_453(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_447(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_445(uParam0, func_444(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_446(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_451(uParam3, 0, 0, 1, 1);
					}
					func_454(iParam1, 1);
				}
				func_449(iParam1, uParam3, fVar8);
				if (func_452(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_313(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

int func_264(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_116(uParam0, 0, 0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_1, sParam2))
		{
			return 1;
		}
	}
	if (bParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam1, -1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_266()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_455(160, 0);
	iVar1 = func_265(Global_35, 0, 1, 0);
	if (!func_456(bVar0))
	{
		if (iVar1 == joaat("weapon_unarmed"))
		{
			bVar0 = WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false);
		}
	}
	if (!func_456(bVar0))
	{
		return;
	}
	if (iVar1 != bVar0)
	{
		if (!func_457(Global_35, 716706914))
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar0, true, 0, false, false);
			WEAPON::_0x72D4CB5DB927009C(bVar0, -1, 0);
		}
	}
}

int func_267()
{
	switch (iLocal_411)
	{
		case 0:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_327.f_1, "Loop_Bool");
		case 1:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_348.f_1, "Loop_Bool");
		default:
			break;
	}
	return 0;
}

int func_268()
{
	switch (iLocal_411)
	{
		case 0:
			if (func_458(&Local_327, "Loop", 1) || func_458(&Local_327, "Loop_Break", 1))
			{
				return 1;
			}
			break;
		case 1:
			if (func_458(&Local_348, "Loop", 1) || func_458(&Local_348, "Loop_Break", 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_269(var uParam0)
{
	func_459(uParam0, 0f);
}

void func_270()
{
	switch (iLocal_411)
	{
		case 0:
			func_460(&Local_327, "Loop_Bool", 1);
			break;
		case 1:
			func_460(&Local_348, "Loop_Bool", 1);
			break;
	}
}

void func_271()
{
	float fVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 0f;
		iVar1 = PED::GET_MOUNT(Global_35);
		if (TASK::IS_PED_RUNNING(iVar1))
		{
			fVar0 = 4f;
		}
		else if (TASK::IS_PED_SPRINTING(iVar1))
		{
			fVar0 = 6f;
		}
		VOLUME::_0xA46E98BDC407E23D(iLocal_243, vLocal_1216 + Vector(fVar0, fVar0, fVar0));
	}
	else
	{
		VOLUME::_0xA46E98BDC407E23D(iLocal_243, vLocal_1216);
	}
}

bool func_272(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (VEHICLE::_0xEA44E97849E9F3DD(iParam0) && VEHICLE::_0xA19447D83294E29F(iParam0, &iVar0, &uVar1))
	{
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			iVar3 = VEHICLE::_0xA8BA0BAE0173457B(iParam0, iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, iLocal_243, true, 0))
				{
					return true;
				}
			}
			iVar2++;
		}
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_243, true, 0);
}

void func_273()
{
	func_282(&iLocal_406, &uLocal_415, 0);
	func_18(2);
	func_18(48);
}

void func_274()
{
	if (!iLocal_1236)
	{
		if (Local_399 != 8)
		{
			if (iLocal_390 == 0)
			{
				func_284(Global_35, Global_35, "RE_BOT_UNI_V0_WTH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_284(Global_35, Global_35, "RE_BOT_UNI_V0_SHIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else
		{
			func_284(Global_35, Global_35, "RE_BOT_GUA_V1_SHIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iLocal_1236 = 1;
	}
}

int func_275()
{
	if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 0))
	{
		return 0;
	}
	if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_404, true, 0) || VOLUME::_0xF256A75210C5C0EB(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f))) || VOLUME::_0xF256A75210C5C0EB(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 0, 0f, 0f, 0f))) || VOLUME::_0xF256A75210C5C0EB(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 45454, 0f, 0f, 0f))) || VOLUME::_0xF256A75210C5C0EB(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 33646, 0f, 0f, 0f)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_276(int iParam0, vector3 vParam1, float fParam4)
{
	return func_461(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, fParam4);
}

int func_277()
{
	var uVar0;
	var uVar4;
	var uVar8;
	vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_40(15))
	{
		if (func_462(&uVar0, &uVar4, &uVar8, Global_36))
		{
			func_463(&uVar0, &uVar4, &uVar8);
			iVar17 = func_464();
			iVar16 = func_465(iVar17);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar16) && func_466(iVar17, &iVar16))
			{
				switch (iVar17)
				{
					case 1:
						if (func_467(&Local_327, iLocal_402, 0, 0))
						{
							func_18(15);
							return 1;
						}
						break;
					case 2:
						if (func_467(&Local_348, iLocal_403, 1, 0))
						{
							func_18(15);
							return 1;
						}
						break;
					case 3:
						if (func_467(&Local_348, iLocal_403, 1, 1))
						{
							func_18(15);
							return 1;
						}
						break;
					case 4:
						vVar12 = { func_468(&Local_399) };
						iVar15 = PED::GET_MOUNT(Global_35);
						if (ENTITY::IS_ENTITY_IN_VOLUME(iVar15, iLocal_242, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar15))
							{
								func_383(iVar15, 0, 0);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(iVar15, 3000, 5000, 4, 0f, 0f, -1f, vVar12.z, vVar12, vVar12);
							}
							PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 3000, 10000, 0, 0f, 0f, -1f, vVar12.z, vVar12, vVar12);
							func_97(&Local_327, 2);
							if (!func_282(&iLocal_406, &uLocal_415, 1))
							{
							}
							func_18(32);
							func_18(15);
							return 1;
						}
						break;
				}
			}
		}
	}
	return 0;
}

bool func_278()
{
	return func_469(Global_35, &uLocal_1237, 1, 0, 256, 1);
}

int func_279(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_280(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;

	iVar1 = -1;
	if (iParam2 < 0)
	{
		iVar2 = func_470(&Local_399, iLocal_411);
		if (iVar2 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (func_471(&Local_399, iLocal_411, iVar0, &vVar8, &vVar14, &uVar4))
				{
					if (iVar1 < 0 || BUILTIN::VDIST(Global_36, vVar14) < BUILTIN::VDIST(Global_36, vVar11))
					{
						iVar1 = iVar0;
						vVar5 = { vVar8 };
						vVar11 = { vVar14 };
						uVar3 = uVar4;
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_471(&Local_399, iLocal_411, iParam2, &vVar8, &vVar14, &uVar4);
		iVar1 = iParam2;
		vVar5 = { vVar8 };
		vVar11 = { vVar14 };
		uVar3 = uVar4;
	}
	if (iVar1 > -1)
	{
		*uParam0 = { vVar5 };
		*uParam1 = { 0f, 0f, uVar3 };
		return 1;
	}
	return 0;
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar1);
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
		iVar3 = MISC::_0xEE04C0AFD4EFAF0E(iVar2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			PED::_0xED00D72F81CF7278(iVar3, 0, 1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

int func_282(int iParam0, var uParam1, int iParam2)
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		if (iParam2 || *uParam1 == 3)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 6);
			*uParam1 = 4;
		}
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
{
	if (func_162(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

bool func_284(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_472(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_285(var uParam0, float fParam1)
{
	if (func_127(uParam0, fParam1))
	{
		func_433(uParam0);
		return 1;
	}
	return 0;
}

bool func_286(int iParam0, int iParam1)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (iParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

void func_287()
{
	int iVar0;

	if (!Local_14.f_46 && func_40(6))
	{
		if (func_474(&iLocal_426, &(Local_14.f_5), &iVar0, &uLocal_210, 0, (4 - 1), 1))
		{
			if (Local_399 != 8)
			{
				if (iLocal_398 >= 5)
				{
					if (!func_126(&uLocal_252))
					{
						if (iVar0 == 2 || iVar0 == 1)
						{
							func_269(&uLocal_252);
						}
					}
					Local_14.f_46 = 1;
				}
			}
			else
			{
				func_475();
				func_476();
				func_477();
				func_290(8);
				Local_14.f_46 = 1;
			}
		}
	}
}

void func_288(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (&uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 2:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 3:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 4:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 5:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (&uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 2:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 3:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 4:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 5:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1222[iParam0] = &uLocal_1222[iParam0] + 1;
	}
}

void func_289(int iParam0, int iParam1, char[4] cParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iParam0])))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(iLocal_431[iParam0]), true, true);
		switch (iParam0)
		{
			case 0:
				func_478(&(iLocal_431[iParam0]), iParam1, joaat("weapon_shotgun_doublebarrel"), 1);
				break;
			case 1:
				func_478(&(iLocal_431[iParam0]), iParam1, joaat("weapon_revolver_cattleman"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
		{
			func_479(&Local_369, cParam2, &(iLocal_431[iParam0]), 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(&(iLocal_431[iParam0]), joaat("weapon_unarmed"), false, 0, false, false);
		}
		if (bParam4)
		{
			PED::SET_PED_STEALTH_MOVEMENT(&(iLocal_431[iParam0]), true, 0, 1);
		}
		if (bParam5)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(&(iLocal_431[iParam0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_290(int iParam0)
{
	iLocal_398 = iParam0;
}

int func_291()
{
	switch (Local_399)
	{
		case 8:
			return func_480(func_7(&Local_14), &(Local_14.f_33), &uLocal_223, &iLocal_219, 0f, 35f, 0, 0, 1090519040);
		case 3:
		case 10:
			switch (iLocal_390)
			{
				case 0:
					if (func_40(2))
					{
						return 1;
					}
					if (!func_481())
					{
						return 0;
					}
					if (func_482(&Local_14, &uLocal_255, 0, 1, 1, 0.5f) || func_40(2))
					{
						return 1;
					}
					if (func_483())
					{
						return 1;
					}
					break;
				case 1:
					return func_484(&(iLocal_431[0]), &(Local_14.f_33), &uLocal_224, &iLocal_219, 1073741824, 1110704128, 0, 0, 1092616192, 1);
			}
			break;
	}
	return func_485(&Local_14, &uLocal_392, 0f, 40f, 20f, 1500, 2f, 1065353216, 1, 0, 1, -1082130432, 1, 0, 0);
}

void func_292(int iParam0, int iParam1)
{
	func_486(&(((*Global_1396257)[iParam0 /*638*/])->f_626), iParam1, 1);
}

void func_293()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_487(Local_709[iVar0 /*75*/], "", "", "");
		func_488(Local_709[iVar0 /*75*/], 1, 1, 0);
		func_490(Local_709[iVar0 /*75*/], 1, func_489(11));
		(Local_709[iVar0 /*75*/])->f_74 = 35f;
		iVar0++;
	}
	func_491(Local_709[0 /*75*/], 1, "RE_BOT_FTH_V1_THREATEN_A", 0);
	func_491(Local_709[1 /*75*/], 1, "RE_BOT_FTH_V1_THREATEN_B", 0);
	iLocal_401 = 1;
}

bool func_294(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_295(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_296()
{
	var uVar0;
	bool bVar1;

	bVar1 = false;
	func_492();
	switch (iLocal_412)
	{
		case 0:
			if (func_40(2))
			{
				func_121(&Local_14, &(Local_14.f_48), 6, &(Local_14.f_51.f_6));
				if (func_40(48))
				{
					vLocal_231 = { 1571.015f, -7260.388f, 69.31996f };
				}
				else
				{
					func_460(&Local_327, "Loop_Bool", 0);
					func_460(&Local_348, "Loop_Bool", 0);
				}
				iLocal_412 = 1;
			}
			break;
		case 1:
			if (func_110(func_7(&Local_14), func_109(&Local_14), &Local_442, &iLocal_426, 1, 0, -1, 1))
			{
				if (func_40(48) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313))
				{
					func_112(&iLocal_426);
					func_493(&(iLocal_426[0]), vLocal_234, joaat("weapon_repeater_carbine"), "Fussar_01", -530524, 1073741824, 0);
					func_493(&(iLocal_426[1]), vLocal_234, joaat("weapon_repeater_carbine"), "Fussar_02", -530524, 1073741824, 1);
					func_494(&(iLocal_426[0]));
					func_494(&(iLocal_426[1]));
					func_18(6);
					iLocal_412 = 3;
				}
			}
			break;
		case 3:
			if (func_40(48) || ((func_116(&Local_327, 1, 0, 0) && func_458(&Local_327, "getup", 1)) || (func_116(&Local_348, 1, 0, 0) && func_458(&Local_348, "getup", 1))))
			{
				if (!func_40(48))
				{
					func_495(&Local_369);
				}
				func_303(&(iLocal_426[0]), uLocal_434[0], -1595050198, 942020339, 0, 0);
				func_303(&(iLocal_426[1]), uLocal_434[1], -1595050198, 942020339, 0, 0);
				func_476();
				iLocal_412 = 4;
			}
			break;
		case 4:
			uVar0 = func_496();
			if (!func_40(18))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					bVar1 = (PED::IS_PED_CLIMBING(Global_35) || !func_497());
					if (uVar0 || bVar1)
					{
						if (!bVar1)
						{
							func_498(1000, 3000);
						}
						else
						{
							func_499();
						}
						func_500();
						Local_14.f_50 = 1;
						func_18(18);
					}
				}
			}
			break;
	}
}

void func_297()
{
	if (iLocal_401)
	{
		func_501();
	}
	func_502(&(iLocal_431[0]), Local_636[0 /*36*/]);
	func_502(&(iLocal_431[1]), Local_636[1 /*36*/]);
}

int func_298()
{
	if (!func_40(1))
	{
		if (((func_40(2) || func_40(48)) || PED::IS_PED_DEAD_OR_DYING(&(iLocal_431[0]), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(iLocal_431[0]), Global_35, 1, 1))
		{
			return 1;
		}
	}
	if (!func_40(1))
	{
		if (PED::IS_PED_SHOOTING(&(iLocal_431[0])))
		{
			func_284(&(iLocal_431[0]), Global_35, func_302("LOAD", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_503(uLocal_439[0], &(iLocal_431[0]), 0);
			func_504(1066055203, &(iLocal_431[0]), 1);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
			{
				func_503(uLocal_439[1], &(iLocal_431[1]), 0);
			}
			func_18(1);
		}
	}
	else if (!func_40(11))
	{
		if (func_278())
		{
			iLocal_246 = PED::_0x4C8B59171957BCF7(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
			{
				TASK::_0x2E1D6D87346BB7D2(iLocal_246, &(iLocal_431[0]), 0, 0);
			}
			func_18(11);
		}
	}
	else
	{
		if (!func_40(25))
		{
			if (PED::IS_PED_RAGDOLL(Global_35))
			{
				func_269(&uLocal_258);
				func_18(25);
				PED::SET_PED_RAGDOLL_FORCE_FALL(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_246))
				{
					iLocal_246 = PED::_0x4C8B59171957BCF7(Global_35);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_246, &(iLocal_431[0]), 55f, -1, 0, 2.5f, 0);
				}
			}
		}
		else if (!func_40(3))
		{
			if (func_127(&uLocal_258, 0f))
			{
				if (!PED::IS_PED_RAGDOLL(Global_35))
				{
					func_18(25);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_35);
			}
		}
		func_505();
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
		{
			PED::_0xD77AE48611B7B10A(&(iLocal_431[0]), 0.5f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
		{
			PED::_0xD77AE48611B7B10A(&(iLocal_431[1]), 0.5f);
		}
		return 1;
	}
	return 0;
}

int func_299()
{
	if (!func_40(2) && !func_49(Global_35, VOLUME::_0xF70F00013A62F866(iLocal_242), 15f, 1, 1))
	{
		if (func_126(&uLocal_252))
		{
			if (func_285(&uLocal_252, 120f))
			{
				func_507(func_506());
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
				{
					PED::_0xD77AE48611B7B10A(&(iLocal_431[0]), 1f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
				{
					PED::_0xD77AE48611B7B10A(&(iLocal_431[1]), 1f);
				}
				Local_14.f_50 = 1;
				iLocal_413 = 6;
			}
		}
	}
	switch (iLocal_413)
	{
		case 0:
			if (func_40(2) && !func_40(48))
			{
				if (!func_40(9))
				{
					func_508(1);
				}
				if (func_126(&uLocal_252))
				{
					func_433(&uLocal_252);
				}
				func_66();
				if (func_110(func_7(&Local_14), func_109(&Local_14), &Local_442, &iLocal_426, 0, 0, -1, 1))
				{
					func_509();
					func_18(6);
					func_112(&iLocal_426);
					func_510();
					iLocal_413 = 1;
				}
			}
			else
			{
				func_297();
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_439[0])))
				{
					func_503(uLocal_439[0], &(iLocal_431[0]), 0);
				}
				if (!MAP::DOES_BLIP_EXIST(&(uLocal_439[1])))
				{
					func_503(uLocal_439[1], &(iLocal_431[1]), 0);
				}
				if (func_511())
				{
					if (!func_126(&uLocal_252))
					{
						func_269(&uLocal_252);
					}
				}
				if ((func_40(32) || func_40(48)) || func_512())
				{
					if (func_512())
					{
						func_18(21);
					}
					func_66();
					Local_14.f_46 = 1;
					iLocal_217 = 0;
					iLocal_413 = 4;
				}
			}
			break;
		case 1:
			if (func_513())
			{
				iLocal_413 = 2;
			}
			break;
		case 2:
			if (func_514())
			{
				func_274();
				func_515();
				Local_14.f_46 = 1;
				iLocal_217 = 0;
				iLocal_413 = 5;
			}
			break;
		case 6:
			if (func_516(&iLocal_426, 0) || !func_517(Global_35, &iLocal_426, 60f, 1))
			{
				if (func_516(&iLocal_431, 0) || !func_517(Global_35, &iLocal_431, 60f, 1))
				{
					if (!func_126(&uLocal_1247))
					{
						return 1;
					}
				}
			}
			break;
		case 4:
			func_518();
			if (func_110(func_7(&Local_14), func_109(&Local_14), &Local_442, &iLocal_426, 0, 0, -1, 1))
			{
				func_509();
				func_18(6);
				func_112(&iLocal_426);
				func_510();
				iLocal_413 = 5;
			}
			break;
		case 5:
			func_518();
			if (func_519())
			{
				if (!func_126(&uLocal_252))
				{
					func_269(&uLocal_252);
				}
			}
			if (!func_40(18) && func_40(6))
			{
				if ((!func_497() || func_516(&iLocal_426, 0)) || PED::IS_PED_CLIMBING(Global_35))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])))
					{
						PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[0]), 2);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
					{
						PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[1]), 2);
					}
					func_18(18);
				}
			}
			if (func_130(&iLocal_426, 0) && func_130(&iLocal_431, 0))
			{
				return 1;
			}
			if (func_506())
			{
				func_507(1);
				Local_14.f_50 = 1;
				iLocal_413 = 6;
			}
			break;
	}
	return 0;
}

void func_300()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;

	if (func_40(29) && !func_40(30))
	{
		func_520(&Local_399, &vVar0, &vVar3, &vVar6, &vVar9, &vVar12);
		if ((((func_521(iLocal_431[1], Local_571[1 /*32*/], vVar0, 0) && func_521(iLocal_426[0], Local_442[0 /*32*/], vVar3, 0)) && func_521(iLocal_426[1], Local_442[1 /*32*/], vVar6, 0)) && func_521(iLocal_426[2], Local_442[2 /*32*/], vVar9, 0)) && func_521(iLocal_426[3], Local_442[3 /*32*/], vVar12, 0))
		{
			func_522(&(iLocal_426[0]), uLocal_434[0], joaat("weapon_shotgun_doublebarrel"));
			func_522(&(iLocal_426[1]), uLocal_434[1], joaat("weapon_revolver_cattleman"));
			func_522(&(iLocal_426[2]), uLocal_434[2], joaat("weapon_shotgun_doublebarrel"));
			func_522(&(iLocal_426[3]), uLocal_434[3], joaat("weapon_revolver_cattleman"));
			if (!func_40(31))
			{
				func_522(&(iLocal_431[1]), uLocal_439[1], joaat("weapon_revolver_cattleman"));
			}
			func_18(6);
			func_18(30);
		}
	}
}

int func_301(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_523(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

char* func_302(char* sParam0, bool bParam1)
{
	char* sVar0;

	if (!bParam1)
	{
		switch (func_524(Local_399))
		{
			case 4:
				sVar0 = "GUA";
				break;
			case 2:
				sVar0 = "FTH";
				break;
		}
	}
	else
	{
		sVar0 = "UNI";
	}
	return func_525("BOT", sVar0, sParam0, func_279(bParam1, 0, iLocal_390 + 1));
}

void func_303(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_0x23F74C2FDA6E7C61(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_304()
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(&(iLocal_431[0]), true, false));
	if (!bLocal_1258)
	{
		func_345(Global_35, ENTITY::GET_ENTITY_COORDS(&(iLocal_431[0]), true, false), &uLocal_392, 1061158912, 1, fVar0);
		if (func_346(&uLocal_392, 1000))
		{
			if (fVar0 < 75f)
			{
				bLocal_1258 = true;
			}
		}
	}
	else if (!bLocal_1259)
	{
		if (!func_283(&(iLocal_431[0]), 1))
		{
			bLocal_1259 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_CALLOUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (!func_283(Global_35, 0))
	{
		bLocal_1258 = false;
	}
}

void func_305()
{
	char* sVar0;

	if (!func_283(&(iLocal_431[0]), 1))
	{
		if (func_526(Global_35, &(iLocal_431[0]), 75f, 1))
		{
			if (!func_126(&uLocal_264) || func_127(&uLocal_264, 8f))
			{
				sVar0 = func_527(iLocal_215);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_528(sVar0);
				}
			}
		}
	}
}

int func_306()
{
	bool bVar0;
	var uVar1;
	var uVar2;

	if (iLocal_409 > 1)
	{
		if (func_506())
		{
			func_507(1);
			return 1;
		}
	}
	switch (iLocal_409)
	{
		case 0:
			func_345(Global_35, ENTITY::GET_ENTITY_COORDS(&(iLocal_431[0]), true, false), &uLocal_392, 1061158912, 0, 0);
			func_529();
			if (func_40(15) && !func_40(48))
			{
				if (func_40(2))
				{
					if (func_114(Local_571[1 /*32*/], iLocal_431[1], func_7(&Local_14), func_109(&Local_14), 0, 1))
					{
						func_530(&(iLocal_431[1]), joaat("weapon_shotgun_doublebarrel"), -1, 0, 0, 1056964608, 1065353216, 0);
						func_284(&(iLocal_431[0]), Global_35, func_302("UHOH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_509();
						func_18(29);
						func_18(31);
						func_115(&(iLocal_431[1]));
						iLocal_409 = 3;
					}
				}
			}
			else if (iLocal_873 || func_531())
			{
				if (!func_40(32))
				{
					func_284(&(iLocal_431[0]), Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_503(uLocal_439[0], &(iLocal_431[0]), 0);
				PED::_0x58F7DB5BD8FA2288(&(iLocal_431[0]));
				TASK::TASK_COMBAT_PED(&(iLocal_431[0]), Global_35, 0, 0);
				iLocal_1205[0] = 3;
				func_18(29);
				iLocal_409 = 1;
			}
			else
			{
				bVar0 = func_532(&(iLocal_431[0]), 0, &(Local_14.f_5), &uVar1, 0, 0);
				if ((iLocal_872 || func_40(48)) || bVar0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
					{
						if ((bVar0 || iLocal_872) || !func_40(48))
						{
							func_284(&(iLocal_431[0]), Global_35, func_302("CRAZY", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_284(&(iLocal_431[0]), Global_35, func_302("UHOH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_503(uLocal_439[0], &(iLocal_431[0]), 0);
						PED::_0x58F7DB5BD8FA2288(&(iLocal_431[0]));
						TASK::TASK_COMBAT_PED(&(iLocal_431[0]), Global_35, 0, 0);
						iLocal_1205[0] = 3;
					}
					else
					{
						func_533(8);
					}
					func_18(29);
					iLocal_409 = 1;
				}
				else if (!func_534())
				{
					if (func_535(&(iLocal_431[0]), &uLocal_267, &uVar2, 0))
					{
						if (!func_536(7))
						{
							if (func_537(&uLocal_392, 1000))
							{
								func_284(&(iLocal_431[0]), Global_35, func_302("WHEREYOUGOING", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_533(7);
							}
						}
						else if (func_537(&uLocal_392, 3000))
						{
							func_284(&(iLocal_431[0]), Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_503(uLocal_439[0], &(iLocal_431[0]), 0);
							PED::_0x58F7DB5BD8FA2288(&(iLocal_431[0]));
							TASK::TASK_COMBAT_PED(&(iLocal_431[0]), Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
						if (!func_536(6))
						{
							if (func_538(1f, 1, 0, 0))
							{
								func_433(&uLocal_255);
								func_284(&(iLocal_431[0]), Global_35, func_302("REALBADWAY", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_533(6);
							}
						}
						else if (!func_126(&uLocal_255))
						{
							func_269(&uLocal_255);
						}
						else if (func_285(&uLocal_255, 10f))
						{
							func_284(&(iLocal_431[0]), Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_503(uLocal_439[0], &(iLocal_431[0]), 0);
							PED::_0x58F7DB5BD8FA2288(&(iLocal_431[0]));
							TASK::TASK_COMBAT_PED(&(iLocal_431[0]), Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
					}
				}
			}
			break;
		case 1:
			func_518();
			if (func_40(30))
			{
				iLocal_409 = 2;
			}
			break;
		case 2:
			func_539();
			func_518();
			func_540();
			break;
		case 3:
			if (func_513())
			{
				iLocal_409 = 4;
			}
			break;
		case 4:
			if (func_514())
			{
				iLocal_409 = 5;
			}
			break;
		case 5:
			func_539();
			func_518();
			func_540();
			break;
	}
	return 0;
}

bool func_307(var uParam0, var uParam1)
{
	char* sVar0;

	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, sVar0);
}

bool func_308(var uParam0, var uParam1)
{
	char* sVar0;

	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	return ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, sVar0);
}

bool func_309(int iParam0)
{
	return (!ANIMSCENE::_0x25557E324489393C(iParam0) || ANIMSCENE::_0xD8254CB2C586412B(iParam0, 0));
}

void func_310(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (&uParam0->f_15[iParam1] > -1)
		{
			Stack.Push(uParam0->f_1);
			Stack.Push(&(uParam0->f_15[iParam1]));
			Call_Loc(uParam0->f_6);
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(StackVal, StackVal);
		}
	}
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_8), iParam1);
	uParam0->f_15[iParam1] = -1;
	switch (iParam1)
	{
		case 1:
			uParam0->f_9 = 100;
			break;
		case 0:
			uParam0->f_13 = 0;
			uParam0->f_7 = 0;
			break;
		case 2:
			uParam0->f_10 = -1f;
			break;
		case 3:
			uParam0->f_14 = 0;
			uParam0->f_12 = 0;
			uParam0->f_11 = 0;
			break;
	}
}

char* func_311(char* sParam0)
{
	return sParam0;
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_541(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1 || &Global_17503.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17503.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_313(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_542(iParam0, uParam1, 1);
	func_451(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_315(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_316(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_388(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_388(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_317(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

int func_318(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && iParam3)
	{
		if (MISC::_0x870708A6E147A9AD(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_320(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			(Global_36580[iVar0 /*2*/])->f_1 = 3;
		}
		iVar0++;
	}
}

void func_321(var uParam0)
{
	if (func_543(uParam0->f_162))
	{
		func_544(&(uParam0->f_162), 1, 1);
	}
	if (func_543(uParam0->f_163))
	{
		func_544(&(uParam0->f_163), 1, 1);
	}
	if (func_543(uParam0->f_164))
	{
		func_544(&(uParam0->f_164), 1, 1);
	}
	if (func_543(uParam0->f_165))
	{
		func_544(&(uParam0->f_165), 1, 1);
	}
}

void func_322(var uParam0)
{
	if (uParam0->f_170)
	{
		func_545();
	}
}

void func_323(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_546(32);
		func_327(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

int func_324(var uParam0)
{
	if (func_547(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_548(uParam0->f_3);
		func_230(uParam0, 0, 1);
		func_549(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_550(0, 0);
		return 1;
	}
	return 0;
}

void func_325()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_326(int iParam0)
{
	if (!func_190(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_438(iParam0) == 1 && iParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((iParam1 || bParam6) || func_328() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

int func_328()
{
	return Global_1572887->f_12;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

int func_331(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*((*uParam2)[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*((*uParam2)[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*((*uParam2)[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*((*uParam2)[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*((*uParam2)[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*((*uParam2)[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*((*uParam2)[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*((*uParam2)[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 4:
					*((*uParam2)[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*((*uParam2)[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 5:
					*((*uParam2)[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*((*uParam2)[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*((*uParam2)[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*((*uParam2)[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*((*uParam2)[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*((*uParam2)[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*((*uParam2)[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*((*uParam2)[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*((*uParam2)[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*((*uParam2)[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 11:
					*((*uParam2)[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*((*uParam2)[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*((*uParam2)[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*((*uParam2)[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*((*uParam2)[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*((*uParam2)[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*((*uParam2)[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*((*uParam2)[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*((*uParam2)[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*((*uParam2)[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*((*uParam2)[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*((*uParam2)[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*((*uParam2)[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*((*uParam2)[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*((*uParam2)[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*((*uParam2)[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*((*uParam2)[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*((*uParam2)[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*((*uParam2)[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 20:
					*((*uParam2)[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*((*uParam2)[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*((*uParam2)[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 21:
					*((*uParam2)[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*((*uParam2)[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*((*uParam2)[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 22:
					*((*uParam2)[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*((*uParam2)[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*((*uParam2)[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*((*uParam2)[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*((*uParam2)[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*((*uParam2)[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*((*uParam2)[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 9:
					*((*uParam2)[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*((*uParam2)[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 10:
					*((*uParam2)[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*((*uParam2)[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*((*uParam2)[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*((*uParam2)[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 2:
					*((*uParam2)[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*((*uParam2)[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 12:
					*((*uParam2)[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*((*uParam2)[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 13:
					*((*uParam2)[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*((*uParam2)[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 14:
					*((*uParam2)[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*((*uParam2)[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 26:
					*((*uParam2)[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*((*uParam2)[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 27:
					*((*uParam2)[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*((*uParam2)[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*((*uParam2)[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*((*uParam2)[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*((*uParam2)[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*((*uParam2)[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*((*uParam2)[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*((*uParam2)[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*((*uParam2)[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 8:
					*((*uParam2)[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*((*uParam2)[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 1:
					*((*uParam2)[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*((*uParam2)[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 3:
					*((*uParam2)[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*((*uParam2)[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 6:
					*((*uParam2)[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*((*uParam2)[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*((*uParam2)[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*((*uParam2)[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*((*uParam2)[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 7:
					*((*uParam2)[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*((*uParam2)[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 15:
					*((*uParam2)[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*((*uParam2)[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 16:
					*((*uParam2)[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*((*uParam2)[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 17:
					*((*uParam2)[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*((*uParam2)[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 18:
					*((*uParam2)[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*((*uParam2)[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 19:
					*((*uParam2)[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*((*uParam2)[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 24:
					*((*uParam2)[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*((*uParam2)[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 25:
					*((*uParam2)[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*((*uParam2)[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*((*uParam2)[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 28:
					*((*uParam2)[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*((*uParam2)[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 29:
					*((*uParam2)[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*((*uParam2)[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 30:
					*((*uParam2)[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*((*uParam2)[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*((*uParam2)[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 31:
					*((*uParam2)[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*((*uParam2)[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 32:
					*((*uParam2)[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*((*uParam2)[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
				case 33:
					*((*uParam2)[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*((*uParam2)[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*((*uParam2)[2 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[3 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[4 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[5 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[6 /*3*/]) = { 0f, 0f, 0f };
					*((*uParam2)[7 /*3*/]) = { 0f, 0f, 0f };
					return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_332(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_48(*((*uParam1)[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *((*uParam1)[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *((*uParam1)[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_333(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::_0x554D9D53F696D002(-1702907713, *uParam0);
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
			func_54("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_334(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_335(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_48(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_253(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (iParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, fParam9);
	}
	func_551(iVar0, bParam8);
	return iVar0;
}

void func_336(int iParam0)
{
	if (!func_190(iParam0))
	{
		return;
	}
	func_552(iParam0);
}

void func_337(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_338(int iParam0)
{
	if (func_120(iParam0, 2))
	{
		return 200;
	}
	if (func_120(iParam0, 4))
	{
		return 70;
	}
	if (func_120(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_339(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_75(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_396() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_75(iParam0, 2);
		bVar1 = func_75(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_235())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_340(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam0 = 45f;
		*uParam1 = 135f;
	}
	else
	{
		*uParam0 = 45f;
		*uParam1 = 125f;
	}
	if (func_120(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 15f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 50f));
	}
	else
	{
		*uParam2 = 70;
	}
}

void func_341(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*uParam1 = 240f;
	}
	else
	{
		*uParam1 = 215f;
	}
	*uParam0 = 110f;
	if (func_120(iParam3, 2))
	{
		*uParam0 = (*uParam0 + 60f);
		*uParam1 = (*uParam1 + 60f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 110f));
	}
	else if (func_120(iParam3, 2097152))
	{
		*uParam0 = (*uParam0 + 30f);
		*uParam2 = BUILTIN::CEIL((*uParam0 + 30f));
	}
	else
	{
		*uParam2 = 70;
	}
}

bool func_342(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_330(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_17503.f_12[iVar1]), iVar2);
}

int func_343(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_48(vParam1))
	{
		return 0;
	}
	if (func_348(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return 0;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_262(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return 1;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

int func_344(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_345(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_169(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!uParam4->f_1)
	{
		if (fVar0 < uParam4->f_2 || (func_351(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*uParam4 = func_553();
			uParam4->f_2 = func_554(iParam0, vParam1, 1);
			uParam4->f_1 = 1;
		}
	}
	else if (fVar0 > uParam4->f_2 || (!func_351(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*uParam4 = func_553();
		uParam4->f_2 = func_554(iParam0, vParam1, 1);
		uParam4->f_1 = 0;
	}
}

int func_346(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_553() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_48(*(uParam0->f_12[iVar0 /*3*/])))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar1 /*3*/])) < BUILTIN::VDIST2(Global_36, *(uParam0->f_12[iVar0 /*3*/])))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_75(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_555(vParam1, 0, 0, iVar0))
	{
		return 1;
	}
	if (func_75(iParam0, 33554432))
	{
		if (func_556(vParam1, 200f, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_120(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, 0))
		{
			return 0;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return 0;
			}
		}
	}
	if (func_75(iParam0, 1) && !func_75(iParam0, 2))
	{
		if (func_75(iParam0, 4096) || func_75(iParam0, 2048))
		{
			if (func_557(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_350(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_55(&uParam0);
	if (!func_558())
	{
		return 0;
	}
	return 1;
}

bool func_351(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_559(vVar0, vParam0) > func_559(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_352(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_353(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36580[iVar0 /*2*/] == iParam0)
		{
			return (Global_36580[Global_36601 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_541(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17503.f_1003)
	{
		if (&Global_17503.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_355(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_356(int iParam0)
{
	return &(Global_40.f_297[iParam0 + 30]);
}

var func_357(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_279(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_358(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_359(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_360(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_361(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_362(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_363(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_364(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_560(uParam0, iParam6);
	func_561(uParam0, iParam5);
	func_562(uParam0, iParam4);
	func_563(uParam0, iParam3);
	func_564(uParam0, iParam2);
	func_565(uParam0, iParam1);
}

int func_365(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_566(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_366()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_367(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_328() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_368(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_369(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_370(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_371(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_567(iParam0, iParam1))
		{
			if (func_568(iParam0, iParam1))
			{
				if (func_569(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_570(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_372(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_373(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

float func_376(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_377(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_571(&uParam1))
	{
		return 1;
	}
	if (!func_572(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_378(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_379(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_380(var uParam0)
{
	return func_388(*uParam0, 4);
}

bool func_381(var uParam0)
{
	return func_388(*uParam0, 64);
}

bool func_382(var uParam0)
{
	return func_388(*uParam0, 8);
}

void func_383(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_384(var uParam0)
{
	return func_388(*uParam0, 128);
}

bool func_385(var uParam0)
{
	return func_388(*uParam0, 2048);
}

void func_386(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_387(var uParam0)
{
	return func_388(*uParam0, 1024);
}

bool func_388(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_389(var uParam0)
{
	return func_388(*uParam0, 256);
}

void func_390(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_391(var uParam0)
{
	return func_388(*uParam0, 512);
}

bool func_392(var uParam0)
{
	return func_388(*uParam0, 4096);
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			return 0;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			return 2;
		case joaat("g_m_m_uniinbred_01"):
			return 1;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			return 3;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			return 4;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			return 5;
	}
	return -1;
}

int func_394(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		uVar0 = func_573(1);
	}
	else
	{
		uVar0 = func_574(iParam0);
	}
	return uVar0;
}

void func_395(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_575(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_576(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar2 /*2*/] = &Global_17503.f_2205[iVar2 /*2*/] + 1;
	}
}

int func_396()
{
	return Global_1897952->f_41;
}

void func_397(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_120(iParam0, 8192))
	{
		iVar0 = func_576(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17503.f_2205[iVar0 /*2*/] = &Global_17503.f_2205[iVar0 /*2*/] + 1;
	}
}

void func_398(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_327(iParam0, iParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_399(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_75(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_577(262144, iVar0, 0, 1);
		}
	}
	if (func_75(iParam0, 128))
	{
		func_577(128, iVar0, 0, 1);
	}
	else if (func_75(iParam0, 524288))
	{
		func_577(524288, iVar0, 0, 1);
	}
	else if (func_75(iParam0, 536870912))
	{
		func_577(536870912, iVar0, 0, 1);
	}
	else if (func_75(iParam0, 4194304))
	{
		func_577(4194304, iVar0, 0, 1);
	}
	else if (func_75(iParam0, 8388608))
	{
		func_577(8388608, iVar0, 0, 1);
	}
}

void func_400(int iParam0)
{
	Global_1310750->f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750->f_16071 = iParam0;
}

int func_401(bool bParam0)
{
	if (!bParam0 && func_100(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

int func_402()
{
	return Global_1310750->f_16037;
}

int func_403(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_404(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_190(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_578(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_405(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_579(Global_1393447, 1);
	func_580();
	func_581();
	func_582((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_553() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_583();
		if (iParam1 == -1)
		{
			if (func_56(iParam0, 1))
			{
				func_577(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_56(iParam0, 2))
			{
				func_577(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_56(iParam0, 4))
			{
				func_577(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_584(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_585(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_585((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_406(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_407(int iParam0, int iParam1)
{
	((*Global_1392050)[iParam1 /*14*/])->f_1 = (((*Global_1392050)[iParam1 /*14*/])->f_1 - (((*Global_1392050)[iParam1 /*14*/])->f_1 && iParam0));
}

void func_408(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

bool func_409(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

bool func_410()
{
	return (Global_1935630->f_44 == joaat("weapon_kit_binoculars") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

int func_411(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (fParam1 > fParam2)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return 0;
	}
	return 1;
}

int func_412(var uParam0, float fParam1, float fParam2, var uParam3)
{
	if (func_411(uParam0, fParam1, fParam2, uParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_413() - 0.02f);
		}
		return 1;
	}
	uParam0->f_8 = 0f;
	return 0;
}

float func_413()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_414(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_418(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_422(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_423()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_424(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_587(func_586(iParam0));
}

bool func_425(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_426(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_427(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_428(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_429(int iParam0)
{
	return func_75(iParam0, Global_1310750->f_16072 | 64);
}

int func_430(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_431(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_432(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_433(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_434(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1310750)[iParam0 /*111*/])->f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1310750)[iParam0 /*111*/])->f_40)) != 0);
}

bool func_435(var uParam0)
{
	return func_259(*uParam0, 2);
}

bool func_436(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_437(int iParam0, int iParam1)
{
	if (!func_436(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_438(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

void func_439(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_440(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_588(iParam0, uParam1))
		{
			if (!func_56(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_451(uParam2, 0, 0, 1, 0);
				func_79(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_56(uParam1->f_10, 1))
		{
			func_589(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_80(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_441(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_56(iParam4, 32);
		func_542(iParam1, uParam2, 0);
		iVar5 = func_590(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_451(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_56(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_56(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_56(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_56(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_56(iParam4, 8388608) || func_56(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_56(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_56(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_443(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_443(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_56(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_591(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_56(iParam4, 268435456))
			{
				iVar8 = func_592(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_593(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_443(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_56(iParam4, 2) || func_56(iParam4, 16))
			{
				func_442(*uParam0, 1, 1);
			}
			else
			{
				func_442(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_442(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_443(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

int func_444(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_594(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_445(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_595(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_56(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_446(int iParam0)
{
	if (func_56(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_56(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_56(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_447(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_596(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_597(Global_35)) || func_598(Global_35)) || func_599(Global_35));
	fVar12 = -1f;
	if (func_126(&(iParam1->f_13)))
	{
		fVar12 = func_260(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_543(((*uParam4)[iVar0 /*17*/])->f_6);
		func_600(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_601(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_602(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_451(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_603(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_542(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_604(iParam1, fParam6, iParam1->f_9))
					{
						func_269(&(iParam1->f_18));
						if (bVar6)
						{
							func_603(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_605(iParam1, fParam2);
	}
	return bVar5;
}

void func_448(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_449(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_606((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_605(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_450(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_607(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_608(iParam1, 0);
				func_542(iParam1, uParam2, func_443(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

void func_451(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_543(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_544(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

int func_452(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_269(&(iParam1->f_18));
			return 0;
		}
		else if (func_126(&(iParam1->f_18)))
		{
			func_433(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_126(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_285(&(iParam1->f_18), fParam2);
	return 1;
}

void func_453(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_600(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_454(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_455(int iParam0, int iParam1)
{
	var uVar0;

	return func_609(&uVar0, iParam0, iParam1);
}

int func_456(int iParam0)
{
	if (iParam0 == joaat("weapon_unarmed") || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_457(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_458(var uParam0, char* sParam1, int iParam2)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		return ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_1, sParam1, iParam2);
	}
	return 0;
}

void func_459(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_413() - fParam1);
	func_610(uParam0, 1);
	func_611(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_460(var uParam0, char* sParam1, bool bParam2)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1, sParam1, bParam2, false);
	}
}

Vector3 func_461(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_612(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_462(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar7;
	int iVar11;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iLocal_410 != -1)
	{
		iVar11 = 0;
		while (iVar11 < iLocal_218)
		{
			vVar3 = { func_16(iLocal_410, iVar11) };
			if (!func_48(vVar3))
			{
				if (iVar0 == -1)
				{
					iVar0 = iVar11;
				}
				else
				{
					vVar7 = { func_16(iLocal_410, iVar0) };
					if (func_613(vParam3, vVar3) < func_613(vParam3, vVar7))
					{
						iVar0 = iVar11;
					}
				}
			}
			iVar11++;
		}
	}
	if (iVar0 > -1)
	{
		*uParam1 = { func_16(iLocal_410, iVar0) };
		iVar1 = (iVar0 - 1);
		iVar2 = iVar0 + 1;
		if (iVar1 == iLocal_218)
		{
			iVar1 = 0;
		}
		else if (iVar1 < 0)
		{
			iVar1 = (iLocal_218 - 1);
		}
		if (iVar2 == iLocal_218)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = (iLocal_218 - 1);
		}
		*uParam0 = { func_16(iLocal_410, iVar1) };
		*uParam2 = { func_16(iLocal_410, iVar2) };
		return 1;
	}
	return 0;
}

void func_463(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;

	func_614(uParam0, uParam1, uParam2, &vVar0);
	fVar4 = vVar0.f_3;
	vVar5 = { vVar0 };
	vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar5, fVar4, 0.1352f, 1.8006f, -2.6634f) };
	func_42(&Local_327, vVar8, 0f, 0f, func_376((fVar4 + 180f)), 2);
	func_43(&Local_327, "player", Global_35, 0);
	func_42(&Local_348, vVar8, 0f, 0f, func_376((fVar4 + 180f)), 2);
	func_43(&Local_348, "player", Global_35, 0);
	func_615(&vVar8, &Local_327);
}

int func_464()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 4;
	}
	else if (!TASK::IS_PED_STILL(Global_35))
	{
		if (PED::_0xD5FE956C70FF370B(Global_35) || PED::GET_PED_STEALTH_MOVEMENT(Global_35))
		{
			return 3;
		}
		else if (TASK::IS_PED_WALKING(Global_35))
		{
			return 2;
		}
		else if (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return iLocal_402;
		case 2:
			return iLocal_403;
		case 3:
			return iLocal_403;
		default:
			break;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;

	switch (iParam0)
	{
		case 1:
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_327.f_1, "player", &vVar0, false, 0, 2))
			{
				return 0;
			}
			fVar12 = 2f;
			iVar14 = -530524;
			iVar13 = 16;
			break;
		case 2:
			func_616(3);
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return 0;
			}
			fVar12 = 1f;
			iVar14 = -668482597;
			iVar13 = 0;
			break;
		case 3:
			func_616(7);
			if (!ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return 0;
			}
			fVar12 = 1f;
			iVar14 = 147004056;
			iVar13 = 17;
			break;
		default:
			return 0;
	}
	vVar15 = { vVar0 };
	VOLUME::_0x541B8576615C33DE(*iParam1, vVar15);
	if (func_617(vVar15, func_468(&Local_399)))
	{
		if (func_618(Global_35, *iParam1, 0, 1))
		{
			vLocal_228 = { vVar0 };
			vLocal_231 = { vLocal_228 + func_612(vVar0 - Global_36) * Vector(100f, 100f, 100f) };
			func_619(vLocal_231);
			if (iParam0 == 3)
			{
				PED::_0x7DE9692C6F64CFE8(Global_35, true, 0, 0);
			}
			if (iVar13 != 0)
			{
				func_18(iVar13);
			}
			return 1;
		}
	}
	if (iVar13 != 0)
	{
		func_140(iVar13);
	}
	return 0;
}

int func_467(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
	{
		switch (iParam2)
		{
			case 0:
				vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) };
				break;
			case 1:
				if (!bParam3)
				{
					vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) };
				}
				else
				{
					vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(7), 1) };
				}
				break;
			default:
				return 0;
		}
		if (func_48(vVar0))
		{
			return 0;
		}
		if (func_351(vVar0, Global_35))
		{
			if (func_613(Global_36, vVar0) < 0.75f)
			{
				switch (iParam2)
				{
					case 0:
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
						func_460(&Local_327, "Loop_Bool", 0);
						if (Local_399 == 8)
						{
							func_274();
						}
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						iLocal_411 = 0;
						break;
					case 1:
						if (bParam3)
						{
							func_616(7);
							if (func_280(&vVar3, &vVar6, func_279(Local_399 == 8, 1, -1)))
							{
								func_42(&Local_348, vVar3, vVar6, 2);
							}
						}
						WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
						func_460(&Local_348, "Loop_Bool", 0);
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						func_18(47);
						iLocal_411 = 1;
						break;
				}
				vLocal_237 = { Global_36 };
				if (func_40(21))
				{
					iLocal_1195 = 1;
				}
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				iLocal_1233 = 1;
				func_495(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_468(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return 1575.272f, -7256.498f, 68.8f;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 2621.505f, 641.9572f, 69.6888f;
				case 1:
					return 2394.004f, 1057.031f, 83.20756f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_469(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, iParam4, 0);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (iParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || func_621(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!func_457(iVar0, 1041577989))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_0x8BC7C1F929D07BF3(724769646);
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_471(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = { 0f, 0f, 0f };
	*uParam5 = 0f;
	iParam1 = 0;
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1575.76f, -7256.163f, 66.338f, 1577.968f, -7254.326f, 69.9739f, 320.25f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1575.608f, -7257.264f, 66.338f, 1572.88f, -7259.102f, 69.9742f, 140.25f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1576.11f, -7256.514f, 66.3383f, 1577.978f, -7259.194f, 69.9742f, 230.25f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 1575.02f, -7256.743f, 66.3583f, 1572.92f, -7254.064f, 69.9742f, 50.25f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1576.342f, -7256.072f, 66.31089f, 1578.064f, -7254.624f, 69.929f, -41.1f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1574.98f, -7257.467f, 66.20089f, 1573.258f, -7258.915f, 69.819f, 138.9f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1574.959f, -7256.067f, 66.42089f, 1573.511f, -7254.345f, 70.039f, 48.9f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 1576.093f, -7257.566f, 66.25089f, 1577.541f, -7259.288f, 69.869f, 228.9f);
									break;
							}
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2394.765f, 1056.679f, 81.19875f, 2394.006f, 1060.42f, 84.8347f, 141.25f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2394.905f, 1057.452f, 81.22875f, 2397.502f, 1057.202f, 84.8467f, 270f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2394.345f, 1056.48f, 81.19875f, 2394.095f, 1053.883f, 84.8347f, 180f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2393.452f, 1056.709f, 81.19875f, 2390.854f, 1056.959f, 84.8347f, 90f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 2393.603f, 1057.937f, 81.19875f, 2393.949f, 1060.159f, 84.8168f, 0f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 2394.352f, 1056.048f, 81.19875f, 2394.006f, 1053.825f, 84.8168f, 180f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 2393.211f, 1056.609f, 81.19875f, 2390.988f, 1056.954f, 84.8168f, 90f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 2394.726f, 1057.311f, 81.19875f, 2396.949f, 1056.965f, 84.8168f, 270f);
									break;
							}
							break;
					}
					break;
			}
			break;
	}
	return !func_48(*uParam3);
}

int func_472(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_235())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_623(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_624(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_269(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_625(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_279(func_626(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_473(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

int func_474(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_627(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_532(iParam0[*uParam3], 0, uParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

void func_475()
{
	int iVar0;

	if (Local_399 == 8)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (func_162(&(iLocal_426[iVar0]), 0, 1) && PED::IS_PED_HUMAN(&(iLocal_426[iVar0])))
		{
			func_303(&(iLocal_426[iVar0]), uLocal_434[iVar0], 831283580, 580546400, 0, 0);
		}
		iVar0++;
	}
}

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_161(iLocal_426[iVar0], Local_882[iVar0 /*75*/], &((Local_882[iVar0 /*75*/])->f_21), 1, 1);
		PED::SET_PED_CONFIG_FLAG(&(iLocal_426[iVar0]), 301, true);
		iVar0++;
	}
	iLocal_876 = 1;
}

void func_477()
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (func_162(&(iLocal_426[iVar0]), 0, 1) && PED::IS_PED_HUMAN(&(iLocal_426[iVar0])))
		{
			PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[iVar0]), 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_628(&(iLocal_426[iVar0]), &iVar1, fVar2, fVar2, 1, 1);
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_431[0]), 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(&(iLocal_431[0]), &iVar1, 0, 0, 1, 1);
		PED::_0xD77AE48611B7B10A(&(iLocal_431[0]), 1f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_431[1]), 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(&(iLocal_431[1]), &iVar1, 1f, 1f, 1, 1);
		PED::_0xD77AE48611B7B10A(&(iLocal_431[1]), 1f);
	}
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 != 0)
	{
		func_629(iParam0, iParam1, iParam3, 1);
	}
	else
	{
		func_629(iParam0, iParam2, iParam3, 0);
	}
}

void func_479(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

int func_480(vector3 vParam0, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, bool bParam9, float fParam10)
{
	float fVar0;

	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return 0;
		}
	}
	fVar0 = func_554(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (func_630(vParam0, 0, uParam3, uParam4, uParam5, fParam6, fParam7, bParam9, 0))
		{
			return 1;
		}
		if (fVar0 < fParam10)
		{
			*uParam4 = 0f;
			return 1;
		}
	}
	return 0;
}

int func_481()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	switch (Local_399.f_1)
	{
		case 1:
			vVar0 = { 2418.828f, 1065.537f, 86.22379f };
			vVar3 = { 2416.279f, 1062.208f, 88.05131f };
			vVar6 = { 2422.612f, 1066.312f, 86.27942f };
			vVar9 = { 2419.005f, 1064.716f, 86.26469f };
			if (func_631(vVar0, vVar3, Global_36) || func_631(vVar6, vVar9, Global_36))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_482(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (func_190(uParam0->f_3))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
		{
			if (fParam2 > 0f)
			{
				if (!func_126(uParam1))
				{
					if (func_632(uParam0, bParam4, fParam5))
					{
						func_269(uParam1);
					}
				}
				else if (func_285(uParam1, fParam2))
				{
					if (bParam3)
					{
						func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
					return 1;
				}
				else
				{
					func_433(uParam1);
				}
			}
			else if (func_632(uParam0, bParam4, fParam5))
			{
				if (bParam3)
				{
					func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_483()
{
	vector3 vVar0;
	vector3 vVar3;

	switch (Local_399.f_1)
	{
		case 0:
			vVar0 = { 2584.215f, 623.2336f, 73.78429f };
			vVar3 = { 2584.87f, 610.8616f, 75.88813f };
			break;
		case 1:
			vVar0 = { 2412.626f, 1075.403f, 87.59463f };
			vVar3 = { 2412.071f, 1081.062f, 88.69707f };
			break;
	}
	if (!iLocal_1225)
	{
		func_301(&(iLocal_431[0]), &Local_14, 0);
		func_301(&(iLocal_431[1]), &Local_14, 0);
		iLocal_1225 = 1;
	}
	if (func_631(vVar0, vVar3, Global_36))
	{
		return (func_485(&Local_14, &uLocal_392, 3f, 40f, 20f, 1500, 0.5f, 0.5f, 1, 0, 1, -1082130432, 1, 0, 0) || func_633(&iLocal_431, &(Local_14.f_33), &uLocal_1226, 2f, 35f, 0, 20f, 1092616192));
	}
	return 0;
}

int func_484(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, int iParam9)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_634(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*uParam2 = 0f;
		return 1;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return 0;
		}
	}
	if (func_635(iParam0, fParam5))
	{
		if (func_630(vVar0, iParam0, uParam1, uParam2, iParam3, fParam4, fParam5, bParam7, iParam9))
		{
			return 1;
		}
	}
	else if (!bParam7)
	{
		*uParam2 = 0f;
	}
	return 0;
}

int func_485(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, int iParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_345(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_346(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_636(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, iParam12, 1125515264, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_486(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_79(uParam0, iParam1);
	}
	else
	{
		func_80(uParam0, iParam1);
	}
}

void func_487(var uParam0, char[4] cParam1, char* sParam2, char* sParam3)
{
	func_637(&(uParam0->f_21), cParam1, sParam2, sParam3, 0);
}

void func_488(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	func_638(uParam0->f_21[iParam1 /*17*/], iParam2, bParam3);
}

char* func_489(int iParam0)
{
	if (func_639(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_490(var uParam0, int iParam1, char* sParam2)
{
	func_640(uParam0->f_21[iParam1 /*17*/], sParam2);
}

void func_491(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam1 > -1 && iParam1 < 3)
	{
		(uParam0->f_21[iParam1 /*17*/])->f_13 = sParam2;
		(uParam0->f_21[iParam1 /*17*/])->f_15 = iParam3;
	}
}

void func_492()
{
	int iVar0;
	struct<4> Var1[4];

	if (iLocal_221 && !iLocal_222)
	{
		if (func_212(Local_442[2 /*32*/]))
		{
			if (func_212(Local_442[3 /*32*/]))
			{
				if (func_110(func_7(&Local_14), func_109(&Local_14), &Local_442, &iLocal_426, 1, 2, 3, 1))
				{
					func_641(Var1[2 /*4*/], Var1[3 /*4*/]);
					iVar0 = 2;
					while (iVar0 <= 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[iVar0])))
						{
							PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[iVar0]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_426[iVar0]), 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_426[iVar0]), 17, false);
							func_303(&(iLocal_426[iVar0]), uLocal_434[iVar0], -1595050198, 942020339, 0, 0);
							TASK::TASK_COMBAT_PED(&(iLocal_426[iVar0]), Global_35, 0, 0);
							func_494(&(iLocal_426[iVar0]));
							func_642(&(iLocal_426[iVar0]));
						}
						iVar0++;
					}
					iLocal_221 = 0;
					iLocal_222 = 1;
				}
			}
		}
	}
}

void func_493(int iParam0, vector3 vParam1, int iParam4, char[4] cParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar13;
	vector3 vVar16;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, true, true);
		func_643(iParam0, iParam4, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		if (bParam8)
		{
			PED::_0x8ACC0506743A8A5C(iParam0, -324611190, 1, -1082130432);
		}
		WEAPON::_0x5230D3F6EE56CFE6(iParam0, 0);
		if (!func_40(48))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
			func_479(&Local_369, cParam5, iParam0, 0);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_369.f_1, cParam5, &Var1, false, 0, 2))
			{
				vVar13 = { Var1 };
				vVar16 = { func_276(iParam0, vVar13, 1065353216) };
				func_644(iParam0, vVar13);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar13 + vVar16, fParam7, -1, 0.25f, false, Var1.f_3.f_2);
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
			}
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_231, fParam7, -1, 0.25f, false, 40000f);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, iParam6, false, 0, false);
	}
}

void func_494(int iParam0)
{
	MISC::_0xE98D55C5983F2509(iParam0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
}

void func_495(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

var func_496()
{
	var uVar0;
	var uVar1;

	uVar0 = func_645(0);
	uVar1 = func_645(1);
	return (uVar0 && uVar1);
}

int func_497()
{
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_242))
	{
		return func_618(Global_35, iLocal_242, 0, 1);
	}
	return 1;
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[0]), 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam0, 1, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(&(iLocal_426[0]), &iVar0, 0, 0, 1, 1);
		func_642(&(iLocal_426[0]));
		func_494(&(iLocal_426[0]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[1]), 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam1, 1, 1);
		TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, -957453492, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(&(iLocal_426[1]), &iVar0, 0, 0, 1, 1);
		func_642(&(iLocal_426[1]));
		func_494(&(iLocal_426[1]));
	}
}

void func_499()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[iVar0])))
		{
			PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_426[iVar0]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_426[iVar0]), 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_426[iVar0]), 17, false);
			TASK::TASK_COMBAT_PED(&(iLocal_426[iVar0]), Global_35, 0, 16);
			func_494(&(iLocal_426[iVar0]));
			func_642(&(iLocal_426[iVar0]));
		}
		iVar0++;
	}
}

void func_500()
{
	vector3 vVar0;
	vector3 vVar3;

	if (!iLocal_221)
	{
		func_646(&vVar0, &vVar3);
		(Local_442[2 /*32*/])->f_1 = joaat("s_m_m_fussarhenchman_01");
		Local_442[2 /*32*/] = 6;
		(Local_442[2 /*32*/])->f_3 = 522321252;
		StringCopy(&((Local_442[2 /*32*/])->f_23), "0761_S_M_M_FussarHenchman_01_HISPANIC_02", 64);
		(Local_442[2 /*32*/])->f_6 = { vVar0 };
		func_82(&((Local_442[2 /*32*/])->f_22));
		(Local_442[3 /*32*/])->f_1 = joaat("s_m_m_fussarhenchman_01");
		Local_442[3 /*32*/] = 6;
		(Local_442[3 /*32*/])->f_3 = -636783812;
		StringCopy(&((Local_442[3 /*32*/])->f_23), "0760_S_M_M_FussarHenchman_01_HISPANIC_01", 64);
		(Local_442[3 /*32*/])->f_6 = { vVar3 };
		func_82(&((Local_442[2 /*32*/])->f_22));
		func_647(Local_442[2 /*32*/]);
		func_647(Local_442[3 /*32*/]);
		iLocal_221 = 1;
	}
}

void func_501()
{
	int iVar0;

	switch (iLocal_1196)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				switch (&iLocal_860[iVar0])
				{
					case 1:
						switch (iVar0)
						{
							case 0:
								func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V1_THREATEN_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 1:
								func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V1_THREATEN_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						func_603(&((Local_709[0 /*75*/])->f_21), 0, 0);
						func_603(&((Local_709[1 /*75*/])->f_21), 0, 0);
						iLocal_1196 = 1;
						break;
				}
				iVar0++;
			}
			break;
	}
}

void func_502(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (uParam1->f_6 != -1)
		{
			if (!*uParam1)
			{
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
			}
			vVar0 = { func_649(func_48(uParam1->f_28), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28) };
			func_345(Global_35, vVar0, &(uParam1->f_11), 1061158912, 0, 0);
			if (!func_526(Global_35, iParam0, 35f, 1) || func_650(iParam0, uParam1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 2f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1616546922))
			{
				PED::FORCE_PED_MOTION_STATE(iParam0, -530524, false, 0, false);
			}
			switch (uParam1->f_5)
			{
				case 0:
					if (func_651(iParam0, uParam1, 0, 0))
					{
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							uParam1->f_5 = 1;
						}
					}
					break;
				case 1:
					if (func_652(iParam0, uParam1))
					{
						if (!func_653(iParam0, uParam1))
						{
							if (!*uParam1)
							{
								uParam1->f_5 = 0;
							}
							else
							{
								uParam1->f_5 = 5;
							}
						}
					}
					else if (!func_457(iParam0, 1435919172))
					{
						if (!func_126(&(uParam1->f_23)) || func_127(&(uParam1->f_23), 0.5f))
						{
							func_651(iParam0, uParam1, 1, 0);
						}
					}
					break;
				case 2:
					if (func_654(iParam0, uParam1))
					{
						func_655(uParam1);
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							func_651(iParam0, uParam1, 1, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 3:
					if (!*uParam1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1) || func_526(iParam0, Global_35, 35f, 1))
						{
							func_651(iParam0, uParam1, 0, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 4:
					if (func_656(&iParam0) || !func_457(iParam0, 1435919172))
					{
						func_651(iParam0, uParam1, 0, 0);
						uParam1->f_5 = 1;
					}
					break;
				case 5:
					break;
			}
		}
	}
}

void func_503(int* iParam0, int iParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	func_303(iParam1, iParam0, 831283580, 580546400, 0, 0);
	if (bParam2)
	{
		func_657(iParam1, -1034486097, 1);
	}
	else
	{
		func_657(iParam1, 942020339, 1);
	}
}

void func_504(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

void func_505()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_325();
}

bool func_506()
{
	int iVar0;

	iVar0 = func_279(iLocal_390 == 0, 4, 6);
	if (func_658(&(iLocal_426[0])))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(&(iLocal_426[1])))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(&(iLocal_431[0])))
	{
		iVar0 = (iVar0 - 1);
	}
	if (func_658(&(iLocal_431[1])))
	{
		iVar0 = (iVar0 - 1);
	}
	if (iLocal_390 == 1)
	{
		if (func_658(&(iLocal_426[2])))
		{
			iVar0 = (iVar0 - 1);
		}
		if (func_658(&(iLocal_426[3])))
		{
			iVar0 = (iVar0 - 1);
		}
	}
	return iVar0 < 2;
}

void func_507(bool bParam0)
{
	if (!iLocal_1241)
	{
		func_659(&(iLocal_431[0]), "FORGETTHIS", "HIMLATER", "KILLEDMYBROS", "LETSGIT", bParam0);
		func_659(&(iLocal_431[1]), "WONTLET", "KILLSUS", "DAMNLUNATIC", "SCATTER", bParam0);
		func_659(&(iLocal_426[0]), "OHNO", "LETSGIT", "ONEDAY", "WORTHIT", bParam0);
		func_659(&(iLocal_426[1]), "MEALONE", "AINTDEAD", "PAYFORMYBROS", "GOTTARUN", bParam0);
		func_659(&(iLocal_426[2]), "", "", "TIMEFORTHIS", "GOFELLERS", bParam0);
		func_659(&(iLocal_426[3]), "", "", "LEAVEME", "BROTHERS", bParam0);
		iLocal_1241 = 1;
	}
}

void func_508(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, 15f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			func_628(&(iLocal_431[0]), &iVar0, 0, 0, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, 15f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			func_628(&(iLocal_431[1]), &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])))
		{
			func_140(func_660(0));
			TASK::TASK_AIM_AT_ENTITY(&(iLocal_426[0]), Global_35, -1, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
		{
			func_140(func_660(1));
			TASK::TASK_AIM_AT_ENTITY(&(iLocal_426[1]), Global_35, -1, 0, 0);
		}
	}
	func_18(9);
}

void func_509()
{
	switch (iLocal_390)
	{
		case 0:
			func_661(0, joaat("weapon_shotgun_doublebarrel"), "Murfree_01", 0);
			func_661(1, joaat("weapon_revolver_cattleman"), "Murfree_02", 0);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
			{
				PED::_0xD77AE48611B7B10A(&(iLocal_431[0]), 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
			{
				PED::_0xD77AE48611B7B10A(&(iLocal_431[1]), 1f);
			}
			break;
		case 1:
			func_289(1, joaat("weapon_shotgun_doublebarrel"), "Murfree_01", 0, 0, 0);
			func_289(0, joaat("weapon_revolver_cattleman"), "Murfree_02", 0, 0, 0);
			break;
	}
	func_460(&Local_327, "Loop_Bool", 0);
	func_460(&Local_348, "Loop_Bool", 0);
	func_662(&uLocal_302, Global_35, 0, 0, 2, 1, 2, 1, 0, 0, 0, 0);
	func_663(&iLocal_426);
	func_663(&iLocal_431);
	PED::SET_PED_CONFIG_FLAG(&(iLocal_426[0]), 301, true);
	PED::SET_PED_CONFIG_FLAG(&(iLocal_426[1]), 301, true);
}

void func_510()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_661(iVar0, 0, 0, 0);
		iVar0++;
	}
}

int func_511()
{
	func_664(23, 44, 0, 1, "RE_BOT_FTH_V1_GOTME", "GENERIC_SHOCKED_HIGH", 2);
	func_664(24, 45, 1, 0, "RE_BOT_FTH_V1_IMHIT", "GENERIC_FRIGHTENED_HIGH", 1);
	if (!iLocal_220)
	{
		if (ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])) || ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
		{
			iLocal_220 = 1;
		}
	}
	if (!iLocal_220)
	{
		switch (iLocal_216)
		{
			case 0:
				if (func_40(1))
				{
					func_665(&(iLocal_431[1]), -2f, "RE_BOT_FTH_V1_HEHERUN", &iLocal_216, 75f, 1);
				}
				break;
			case 1:
				func_665(&(iLocal_431[0]), -2f, "RE_BOT_FTH_V1_HESCOMING", &iLocal_216, 75f, 1);
				break;
			case 2:
				if (func_457(&(iLocal_431[1]), 242628503))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(&(iLocal_431[1])) == iLocal_213)
					{
						func_665(&(iLocal_431[1]), -2f, "RE_BOT_FTH_V1_WHEREIS", &iLocal_216, 75f, 1);
					}
				}
				break;
			case 3:
				func_665(&(iLocal_431[0]), -4f, "RE_BOT_FTH_V1_EYESOPEN", &iLocal_216, 75f, 1);
				break;
			case 4:
				func_665(&(iLocal_431[1]), 3f, "RE_BOT_FTH_V1_IMSCARED", &iLocal_216, 75f, 1);
				break;
			case 5:
				func_665(&(iLocal_431[0]), -5f, "RE_BOT_FTH_V1_SHUTUP", &iLocal_216, 75f, 1);
				break;
			case 6:
				if (func_665(&(iLocal_431[1]), 3f, "RE_BOT_FTH_V1_SCARED", &iLocal_216, 75f, 1))
				{
					iLocal_220 = 1;
				}
				break;
			case 7:
				return 1;
		}
	}
	return iLocal_220;
}

bool func_512()
{
	return func_666(Global_35);
}

int func_513()
{
	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
	{
		func_495(&Local_369);
		func_667(0);
		func_667(1);
		func_668(0);
		func_668(1);
		return 1;
	}
	return 0;
}

int func_514()
{
	var uVar0[4];

	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	switch (iLocal_390)
	{
		case 0:
			uVar0[0] = &iLocal_426[0];
			uVar0[1] = &iLocal_426[1];
			break;
		case 1:
			uVar0[0] = &iLocal_431[1];
			uVar0[1] = &iLocal_431[0];
			break;
	}
	if (!func_40(26))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[0]), -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[1]), -881316974)) || func_458(&Local_369, "breakout_end", 1))
		{
			func_18(26);
		}
	}
	if (!func_40(27))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -983684657))
		{
			func_18(27);
		}
	}
	_NAMESPACE29::_0x66F9EB44342BB4C5(&(uVar0[0]), &uLocal_302);
	_NAMESPACE29::_0x66F9EB44342BB4C5(&(uVar0[1]), &uLocal_302);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[0]), -999023058))
	{
	}
	if (!func_40(28))
	{
		func_460(&Local_327, "Loop_Bool", 1);
		func_460(&Local_348, "Loop_Bool", 1);
		ANIMSCENE::SET_ANIM_SCENE_RATE(Local_327.f_1, 1.25f);
		ANIMSCENE::SET_ANIM_SCENE_RATE(Local_348.f_1, 1.25f);
		func_18(43);
		func_18(28);
	}
	if (!func_40(37) && func_40(26))
	{
		if (func_458(&Local_369, "breakout_end", 1) || (func_40(28) && func_40(27)))
		{
			if (!func_458(&Local_369, "breakout_end", 1))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[0]), -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[1]), -881316974))
				{
					func_18(40);
				}
				else
				{
					func_18(41);
				}
			}
			else
			{
				func_460(&Local_327, "Loop_Bool", 1);
				func_460(&Local_348, "Loop_Bool", 1);
			}
			switch (iLocal_390)
			{
				case 0:
					func_503(uLocal_434[0], &(iLocal_426[0]), 0);
					func_503(uLocal_434[1], &(iLocal_426[1]), 0);
					break;
				case 1:
					func_503(uLocal_439[1], &(iLocal_431[1]), 0);
					func_503(uLocal_439[0], &(iLocal_431[0]), 0);
					break;
			}
			func_18(37);
		}
	}
	if (func_40(40))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(&(uVar0[0]), -881316974))
		{
			func_669(&Local_369, 5, 1, 1);
			func_140(40);
		}
	}
	else if (func_40(41))
	{
		func_669(&Local_369, 6, 1, 1);
		func_140(41);
	}
	if (!func_40(38))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uVar0[0]), -1) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, "Murfree_01"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(0, uVar0[0], &(uVar0[0]), 2f, uLocal_434[0]);
					iLocal_1200[0] = 4;
					break;
				case 1:
					func_670(0, uVar0[0], &(uVar0[0]), 2f, uLocal_439[1]);
					iLocal_1205[1] = 4;
					break;
			}
			func_18(38);
		}
	}
	if (!func_40(39))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(uVar0[1]), -1) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, "Murfree_02"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(1, uVar0[1], &(uVar0[0]), 2f, uLocal_434[1]);
					iLocal_1200[1] = 4;
					break;
				case 1:
					func_670(1, uVar0[1], &(uVar0[0]), 2f, uLocal_439[0]);
					iLocal_1205[0] = 4;
					break;
			}
			func_18(39);
		}
	}
	if (func_40(38) && func_40(39))
	{
		return 1;
	}
	return 0;
}

void func_515()
{
	int iVar0;

	return;
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_431[0]), 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_431[0]), 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(&(iLocal_431[0]), false, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20f, 1.5f, -1f);
		func_671(&(iLocal_431[0]), Global_35, 1);
		func_628(&(iLocal_431[0]), &iVar0, 0, 0, 1, 1);
		func_672(&(iLocal_431[0]));
		func_63((Local_636[0 /*36*/])->f_8);
		PED::SET_PED_CONFIG_FLAG(&(iLocal_431[0]), 301, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
	{
		PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_431[1]), 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_431[1]), 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(&(iLocal_431[1]), false, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20f, 1.5f, -1f);
		func_671(&(iLocal_431[1]), Global_35, 1);
		func_628(&(iLocal_431[1]), &iVar0, 0, 0, 1, 1);
		func_672(&(iLocal_431[1]));
		func_63((Local_636[1 /*36*/])->f_8);
		PED::SET_PED_CONFIG_FLAG(&(iLocal_431[1]), 301, true);
	}
}

int func_516(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!PED::IS_PED_INJURED(iParam0[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return 1;
}

int func_517(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (*iParam1 - 1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam1[iVar0]))
		{
		}
		else if (func_526(iParam0, iParam1[iVar0], fParam2, bParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_518()
{
	int iVar0;

	func_673();
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_674(iLocal_426[iVar0], &(uLocal_434[iVar0]), iLocal_1200[iVar0], 1, uLocal_1208[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		func_674(iLocal_431[iVar0], &(uLocal_439[iVar0]), iLocal_1205[iVar0], 0, uLocal_1213[iVar0]);
		iVar0++;
	}
}

int func_519()
{
	if (func_283(Global_35, 1))
	{
		return 0;
	}
	if ((func_40(21) && !func_40(32)) && !func_40(22))
	{
		switch (iLocal_217)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])))
				{
					func_665(&(iLocal_431[0]), -2f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75f, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])))
				{
					func_665(&(iLocal_431[1]), -2f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75f, 1);
				}
				else
				{
					iLocal_217++;
				}
				break;
			case 1:
				if (func_40(6))
				{
					if (func_665(&(iLocal_426[0]), -3f, "RE_BOT_FTH_V1_FORYOU", &iLocal_217, 75f, 1))
					{
						iLocal_217 = 0;
						func_18(22);
					}
				}
				break;
		}
	}
	else
	{
		switch (iLocal_217)
		{
			case 0:
				func_665(&(iLocal_426[1]), -2f, "RE_BOT_FTH_V1_SQUEAL", &iLocal_217, 75f, 1);
				break;
			case 1:
				func_665(&(iLocal_426[0]), -2f, "RE_BOT_FTH_V1_GUTYOU", &iLocal_217, 75f, 1);
				break;
			case 2:
				if (func_40(18))
				{
					func_665(&(iLocal_431[0]), -2f, "RE_BOT_FTH_V1_DEADYET", &iLocal_217, 75f, 1);
				}
				break;
			case 3:
				func_665(&(iLocal_431[1]), -2f, "RE_BOT_FTH_V1_COMEOUT", &iLocal_217, 75f, 1);
				break;
			case 4:
				return 1;
		}
	}
	return 0;
}

void func_520(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar5;
	int iVar8;

	iVar8 = func_675(iParam0);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar1 = { func_16(iVar8, iVar0) };
		if (!func_48(vVar1))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vVar1, 2f))
			{
				if (func_48(vVar5))
				{
					vVar5 = { vVar1 };
				}
				if (func_48(*uParam1))
				{
					*uParam1 = { vVar1 };
				}
				else if (func_48(*uParam2))
				{
					*uParam2 = { vVar1 };
				}
				else if (func_48(*uParam3))
				{
					*uParam3 = { vVar1 };
				}
				else if (func_48(*uParam4))
				{
					*uParam4 = { vVar1 };
				}
				else if (func_48(*uParam5))
				{
					*uParam5 = { vVar1 };
				}
				else
				{
					iVar0++;
				}
				if (func_48(*uParam1))
				{
					*uParam1 = { vVar5 };
				}
				if (func_48(*uParam2))
				{
					*uParam2 = { vVar5 };
				}
				if (func_48(*uParam3))
				{
					*uParam3 = { vVar5 };
				}
				if (func_48(*uParam4))
				{
					*uParam4 = { vVar5 };
				}
				if (func_48(*uParam5))
				{
					*uParam5 = { vVar5 };
				}
			}
		}
	}

bool func_521(var uParam0, var uParam1, vector3 vParam2, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!func_48(vParam2))
		{
			uParam1->f_6 = { vParam2 };
			func_82(&(uParam1->f_22));
		}
		if (func_114(uParam1, uParam0, func_7(&Local_14), func_109(&Local_14), 0, 1))
		{
			func_115(*uParam0);
			return true;
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

void func_522(int iParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_40(31))
		{
		}
	}
}

int func_523(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = iParam0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

var func_525(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_676(cVar0);
}

int func_526(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

char* func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANYBODY";
		case 1:
			return "NEEDHELP";
		case 2:
			return "OUTTHERE";
		default:
			break;
	}
	return "";
}

void func_528(char* sParam0)
{
	if (func_284(&(iLocal_431[0]), Global_35, func_302(sParam0, 0), 0, 75f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
	{
		func_269(&uLocal_264);
		func_504(1891783641, &(iLocal_431[0]), 1);
		iLocal_215++;
	}
}

void func_529()
{
	int iVar0;

	iVar0 = 0;
	switch (iLocal_874)
	{
		case 0:
			func_487(Local_709[iVar0 /*75*/], "", "", "");
			(Local_709[iVar0 /*75*/])->f_74 = 20f;
			func_488(Local_709[iVar0 /*75*/], 2, 1, 0);
			func_488(Local_709[iVar0 /*75*/], 0, 1, 0);
			func_488(Local_709[iVar0 /*75*/], 1, 1, 0);
			func_490(Local_709[iVar0 /*75*/], 0, func_489(24));
			iLocal_401 = 1;
			iLocal_860[iVar0] = -1;
			iLocal_874 = 1;
			break;
		case 1:
			switch (&iLocal_860[iVar0])
			{
				case 2:
					func_269(&uLocal_863);
					func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V2_ROB", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_869 = true;
					iLocal_874 = 6;
					break;
				case 0:
					func_269(&uLocal_863);
					if (!bLocal_870)
					{
						func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V2_QUESTION", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V2_GREET", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 2;
					break;
				case 1:
					func_269(&uLocal_863);
					if (!iLocal_871)
					{
						func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V2_ANTAGONIZE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_284(Global_35, &(iLocal_431[iVar0]), "RE_BOT_FTH_V2_ANTAGONIZE_END", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 4;
					break;
			}
			break;
		case 2:
			if (func_127(&uLocal_863, 2f))
			{
				if (!bLocal_870 && !iLocal_871)
				{
					func_284(&(iLocal_431[iVar0]), Global_35, "CALL_FOR_SUPPORT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_870 = true;
					iLocal_874 = 3;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 3:
			if (!func_283(&(iLocal_431[iVar0]), 1))
			{
				func_488(Local_709[iVar0 /*75*/], 2, 1, 0);
				func_488(Local_709[iVar0 /*75*/], 0, 1, 0);
				func_488(Local_709[iVar0 /*75*/], 1, 1, 0);
				func_490(Local_709[iVar0 /*75*/], 0, func_489(7));
				func_269(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 4:
			if (func_127(&uLocal_863, 2f))
			{
				if (!bLocal_870 && !iLocal_871)
				{
					func_284(&(iLocal_431[iVar0]), Global_35, "CALL_FOR_SUPPORT", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_871 = 1;
					iLocal_874 = 5;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 5:
			if (!func_283(&(iLocal_431[iVar0]), 1))
			{
				func_488(Local_709[iVar0 /*75*/], 2, 1, 0);
				func_488(Local_709[iVar0 /*75*/], 0, 1, 0);
				func_488(Local_709[iVar0 /*75*/], 1, 1, 0);
				func_490(Local_709[iVar0 /*75*/], 0, func_489(7));
				func_269(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 6:
			if (func_127(&uLocal_863, 2f))
			{
				iLocal_872 = 1;
			}
			break;
		case 7:
			break;
	}
}

bool func_530(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_677(iParam3, 1);
	bVar1 = func_677(iParam3, 2);
	bVar2 = !func_677(iParam3, 4);
	bVar3 = func_677(iParam3, 8);
	bVar4 = !func_677(iParam3, 16);
	bVar5 = func_677(iParam3, 32);
	bVar6 = func_677(iParam3, 64);
	return func_643(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_531()
{
	if (func_40(32) || func_40(21))
	{
		return 1;
	}
	if (func_512())
	{
		return 1;
	}
	return 0;
}

int func_532(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_678(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_679(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_680(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_681(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_682(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_683(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_237(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_680(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_684(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_685(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_686(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_687(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_687(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_680(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_688(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_689(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_690(uParam2, 4000))
				{
					if ((func_691(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_692(uParam2, iParam0)) && func_693(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_691(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_692(uParam2, iParam0)) && func_693(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_694(iParam0, Global_1935630->f_41))
							{
								func_695();
								*uParam3 = 2;
								func_680(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_694(iParam0, Global_1935630->f_41))
						{
							func_695();
							*uParam3 = 2;
							func_680(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_696(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_553() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_695();
						*uParam3 = 2;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_697())
					{
						if (func_694(iParam0, Global_1935630->f_42))
						{
							func_695();
							*uParam3 = 2;
							func_680(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_698(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_680(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_699(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_700(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_701(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_702(uParam2, 4000))
				{
					if (func_703(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_680(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_704(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_680(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_705(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_680(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_533(int iParam0)
{
	MISC::SET_BIT(&iLocal_214, iParam0);
}

int func_534()
{
	if (bLocal_869)
	{
		return 1;
	}
	if (func_126(&uLocal_866))
	{
		if (!func_127(&uLocal_866, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_535(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_678(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_690(uParam1, 4000))
				{
					if ((func_691(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_692(uParam1, iParam0)) && func_693(uParam1, iParam0))
					{
						func_695();
						*uParam2 = 2;
						func_680(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_690(uParam1, 4000))
				{
					if ((func_691(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_692(uParam1, iParam0)) && func_693(uParam1, iParam0))
					{
						func_695();
						*uParam2 = 2;
						func_680(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_694(iParam0, Global_1935630->f_41))
							{
								func_695();
								*uParam2 = 2;
								func_680(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_694(iParam0, Global_1935630->f_41))
						{
							func_695();
							*uParam2 = 2;
							func_680(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_697())
					{
						if (func_694(iParam0, Global_1935630->f_42))
						{
							func_695();
							*uParam2 = 2;
							func_680(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_684(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_685(Global_35, iParam0, uParam1))
					{
						func_695();
						*uParam2 = 4;
						func_680(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_686(Global_35, iParam0, uParam1))
					{
						func_695();
						*uParam2 = 256;
						func_680(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_706(iParam0, uParam1))
			{
				func_695();
				*uParam2 = 131072;
				func_680(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_707(iParam0, uParam1))
			{
				func_695();
				*uParam2 = 262144;
				func_680(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

bool func_536(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_214, iParam0);
}

int func_537(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (func_553() - *uParam0) >= iParam1;
	}
	return 0;
}

int func_538(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_283(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_708(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_539()
{
	float fVar0;

	if (!bLocal_1251)
	{
		fVar0 = BUILTIN::VDIST(Global_36, vLocal_248);
		func_345(Global_35, vLocal_248, &uLocal_392, 1061158912, 1, fVar0);
		if (fVar0 > 35f)
		{
			if (func_709())
			{
				if (func_537(&uLocal_392, 3000))
				{
					if (!func_283(Global_35, 0))
					{
						bLocal_1251 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_RUN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						if (bLocal_1251)
						{
							func_269(&uLocal_1253);
						}
					}
				}
			}
		}
	}
	if (!bLocal_1252)
	{
		if (func_709())
		{
			if (!func_283(Global_35, 0))
			{
				if (func_710())
				{
					bLocal_1252 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (bLocal_1252)
					{
						func_269(&uLocal_1253);
					}
				}
			}
		}
	}
}

void func_540()
{
	if (func_538(1f, 1, 0, 0) && !func_283(Global_35, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[0])) && !func_536(0))
		{
			func_284(&(iLocal_431[0]), Global_35, func_302("YOUREDEAD", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(0);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[1])) && !func_536(1))
		{
			func_284(&(iLocal_431[1]), Global_35, func_302("BUTCHERED", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(1);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])) && !func_536(2))
		{
			func_284(&(iLocal_426[0]), Global_35, func_302("FUCKDIE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(2);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])) && !func_536(3))
		{
			func_284(&(iLocal_426[1]), Global_35, func_302("KILLEM", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(3);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[2])) && !func_536(4))
		{
			func_284(&(iLocal_426[2]), Global_35, func_302("FEEDPIGS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(4);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[3])) && !func_536(5))
		{
			func_284(&(iLocal_426[3]), Global_35, func_302("HEREALIVE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_533(5);
			return;
		}
	}
}

int func_541(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

void func_542(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_544(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_711(iParam0, 0);
		}
	}
}

bool func_543(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_544(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_543(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_712(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_713(iVar0);
	*uParam0 = 0;
}

void func_545()
{
	func_714(23);
}

void func_546(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_547(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_548(int iParam0)
{
	int iVar0;

	iVar0 = func_715(iParam0);
	if (iVar0 != 0)
	{
		func_716(-1, 24, 0, iVar0);
	}
}

void func_549(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17503.f_42[iParam0 /*8*/] == 0)
	{
		func_718(func_717(-1029789297), 1);
	}
	Global_17503.f_4++;
	Global_17503.f_42[iParam0 /*8*/] = &Global_17503.f_42[iParam0 /*8*/] + 1;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 8;
	if (func_75(iParam0, 2))
	{
		func_719(iParam0, func_394(iParam3));
	}
	if (func_75(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_396();
		}
		func_720(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_120(iParam0, 65536))
	{
		func_721(iParam0, iParam1);
		func_722(iParam0, func_176(iParam0, iParam1));
		func_546(128);
	}
	func_398(iParam0, ((*Global_1310750)[iParam0 /*111*/])->f_37, 1065353216, 0, 0);
	func_399(iParam0, 1);
	if (!bParam2)
	{
		func_546(16);
		Global_17503.f_5 = iParam0;
		Global_17503.f_9 = 1;
		Global_17503.f_7 = 0;
		Global_17503.f_8 = 0;
		func_723(524288);
	}
	if (func_724(iParam0) != 0)
	{
		if (&Global_17503.f_42[iParam0 /*8*/] >= func_724(iParam0))
		{
			(Global_17503.f_42[iParam0 /*8*/])->f_6 = 1;
		}
	}
}

void func_550(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_725(&Global_0, 8);
	}
	if (!func_726() || func_328() != -1)
	{
		return;
	}
	func_725(&Global_0, 1);
}

int func_551(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_552(int iParam0)
{
	Global_17503.f_2++;
	(Global_17503.f_42[iParam0 /*8*/])->f_3++;
	((*Global_1310750)[iParam0 /*111*/])->f_110 |= 2;
}

int func_553()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

float func_554(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_555(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	var uVar0[4];
	int iVar5[4];

	if (func_48(vParam0))
	{
		return 0;
	}
	uVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar0, &iVar5, iParam3))
	{
		return 1;
	}
	return 0;
}

bool func_556(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_48(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

int func_557(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_48(*(Global_1310750->f_16043[iVar0 /*3*/])))
		{
			if (func_131(vParam0, *(Global_1310750->f_16043[iVar0 /*3*/])) < 2500f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_558()
{
	int iVar0;
	int iVar1;

	iVar0 = func_727(func_247());
	if (iVar0 == 8)
	{
		iVar1 = func_248(func_247());
		if (func_250(Global_36, iVar1))
		{
			return 0;
		}
	}
	if (func_728(func_573(0)))
	{
		return 0;
	}
	if (func_729())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

float func_559(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_560(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_561(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_562(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_358(*uParam0);
	iVar1 = func_357(*uParam0);
	if (iParam1 < 1 || iParam1 > func_363(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_563(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_564(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_565(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_566(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_567(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_568(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_569(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_567(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_570(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_571(var uParam0)
{
	return func_388(*uParam0, 1);
}

int func_572(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_730(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

int func_573(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_731(1, 0, 0);
	}
	else
	{
		iVar0 = func_247();
	}
	return func_574(iVar0);
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_576(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_577(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_334(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_326(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_732(iVar0) < func_733(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_398(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_578(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_579(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_580()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_734(iVar0, 128))
		{
			func_735(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_581()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_734(iVar0, 128) && func_734(iVar0, 1))
		{
			func_735(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_582(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_583()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_75(iVar0, 16777216))
		{
			if (!func_736(iVar0))
			{
				func_737(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_327(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_327(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_327(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_327(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_327(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_327(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_585(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_413();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_586(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_587(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_588(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_738((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_589(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_606((*uParam0)[iVar0 /*17*/]))
		{
			func_739((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_590(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_740(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_543(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_739((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_591(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_319(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_592(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_593(int* iParam0, int* iParam1)
{
	if (!func_443(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_739(iParam1, 19);
			func_608(iParam0, 23);
			func_741(iParam1, 2);
		}
	}
}

int func_594(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_742(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_743(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_595(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_740(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_596(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

var func_597(int iParam0)
{
	return (func_744(iParam0, 4) || func_744(iParam0, 5));
}

int func_598(int iParam0)
{
	return func_744(iParam0, 7);
}

int func_599(int iParam0)
{
	return func_744(iParam0, 6);
}

void func_600(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_606(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_740(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_601(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_745(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_746(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_747(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_747(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_748(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_602(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_749(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_750(iParam1, 1))
	{
		func_751(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_603(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_638((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_604(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_605(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_606(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_607(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_608(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_609(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_752(uParam1, 128);
	if (func_753("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_754(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_409(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0xD955FEE4B87AFA07(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_752(uParam1, 32))) && (!WEAPON::_0xDDC64F5E31EEDAB6(Var4.f_4) || !func_752(uParam1, 8192))) && (!WEAPON::_0xC212F1D05A8232BB(Var4.f_4) || !func_752(uParam1, 16384)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_755(iVar1);
	}
	if (func_409(iVar0))
	{
	}
	return iVar0;
}

void func_610(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_611(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_612(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

float func_613(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_614(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_756(uParam0, uParam1, uParam2, uParam3);
}

void func_615(var uParam0, var uParam1)
{
	struct<7> Var0;
	vector3 vVar12;

	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam1->f_1, "player", &Var0, false, 0, 2))
	{
		vVar12 = { Var0.f_6 };
		if (func_572(&vVar12, 1, 10, 0))
		{
			uParam0->f_2 = (vVar12.z + 0.2f);
		}
	}
}

void func_616(int iParam0)
{
	if (!func_757(&Local_348, iParam0))
	{
		if (!func_758(&Local_348, iParam0, 5))
		{
			if (!func_758(&Local_348, iParam0, 4))
			{
				func_669(&Local_348, iParam0, 1, 1);
			}
		}
	}
}

bool func_617(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;

	vVar0 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	vVar3 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
	uVar6 = func_759(Global_35, vVar3, vParam3, 90f);
	uVar7 = func_759(Global_35, vVar0, vParam0, 90f);
	return (uVar6 && uVar7);
}

bool func_618(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_619(vector3 vParam0)
{
	struct<7> Var0;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	struct<4> Var18;

	if (Local_399 == 8)
	{
		if (func_760(Local_399.f_1, vParam0, &Var0, 1))
		{
			vVar9 = { Var0 };
			vVar12 = { Var0.f_3 };
			vVar15 = { Var0.f_6 };
		}
		if (!func_48(vVar9))
		{
			func_42(&Local_369, vVar9, vVar12, 2);
			vLocal_234 = { vVar15 - func_612(vVar9 - vVar15) * Vector(10f, 10f, 10f) };
			func_572(&vLocal_234, 50, 10, 0);
		}
	}
	else if (Local_399 == 10)
	{
		Var18 = { func_16(9, func_761()) };
		if (!func_48(Var18))
		{
			func_42(&Local_369, Var18, 0f, 0f, Var18.f_3, 2);
		}
	}
}

Vector3 func_620(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

int func_621(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 308778731, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1002303471, false);
				PAD::DISABLE_CONTROL_ACTION(0, 1520437207, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_457(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_622(var uParam0, var uParam1, var uParam2, vector3 vParam3, vector3 vParam6, float fParam9)
{
	*uParam0 = { vParam3 };
	*uParam1 = { vParam6 };
	*uParam2 = fParam9;
}

float func_623(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_624(Global_35, iParam0, bParam1, iParam2);
}

float func_624(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_625(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_626(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, var uParam6, var uParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = uParam7;
	return func_762(iParam0, &Var0);
}

int func_627(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_628(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_629(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 || func_763(iParam1))
	{
		func_530(iParam0, iParam1, -1, iParam2, 0, 1056964608, 1065353216, 0);
		if (func_56(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, true, 0, false, false);
		}
	}
	else
	{
		func_530(iParam0, joaat("weapon_revolver_cattleman"), -1, iParam2, 0, 1056964608, 1065353216, 0);
		if (func_56(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_revolver_cattleman"), true, 0, false, false);
		}
	}
}

int func_630(vector3 vParam0, int iParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_764(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_765(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_766(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*uParam6 = 1;
		if (*uParam5 != 0f)
		{
		}
		if (*uParam5 <= 0f)
		{
			*uParam5 = func_413();
		}
		else if ((func_413() - *uParam5) > fParam7)
		{
			*uParam5 = 0f;
			return 1;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		*uParam6 = 1;
	}
	return 0;
}

bool func_631(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, Vector3 vParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_632(var uParam0, bool bParam1, float fParam2)
{
	vector3 vVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173))
	{
		if (func_139(Global_35, uParam0->f_173, 1, 0))
		{
			return 1;
		}
		if (bParam1)
		{
			vVar0 = { func_767(Global_35, fParam2) };
			if (VOLUME::_0xF256A75210C5C0EB(uParam0->f_173, vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_633(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		if (func_768(iVar2, bParam5))
		{
			if (func_484(uParam0[iVar2], uParam1, uParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*uParam2 = 0f;
	}
	return 0;
}

float func_634(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_131(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_635(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_634(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_636(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, var uParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_232(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return 0;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return 0;
		}
	}
	if (uParam0->f_178 && func_231())
	{
		bVar1 = true;
		fVar3 = func_169(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_233(uParam0->f_121[iVar0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_233(uParam0->f_121[0 /*9*/], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_234(&(uParam0->f_121), iParam4, fParam1))
		{
			func_122(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_172(uParam0->f_3, uParam0->f_185), 0);
			}
			return 1;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD((uParam0->f_121[iVar0 /*9*/])->f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS((uParam0->f_121[iVar0 /*9*/])->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_173) && !(uParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return 0;
						}
					}
					if (bParam6)
					{
						func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_122(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_172(uParam0->f_3, uParam0->f_185), 0);
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_637(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_769((*uParam0)[0 /*17*/], func_489(7), sParam1, -163964935, 0, 0, 0, 1, 0);
	func_769((*uParam0)[1 /*17*/], func_489(10), sParam2, 648122183, 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_769((*uParam0)[2 /*17*/], func_489(12), sParam3, -1616532217, 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			func_638((*uParam0)[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_638((*uParam0)[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_638((*uParam0)[1 /*17*/], 0, 0);
	}
}

void func_638(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_770(iParam0, 13))
	{
		func_739(iParam0, 0);
	}
	else
	{
		func_771(iParam0, 0);
	}
	if (func_543(iParam0->f_6))
	{
		if (bParam2)
		{
			func_544(&(iParam0->f_6), 0, 1);
		}
	}
}

int func_639(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_640(int* iParam0, char* sParam1)
{
	if (func_543(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_772(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_771(iParam0, 1);
}

void func_641(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	vVar0 = { func_773() };
	vVar3 = { 1574.123f, -7258.26f, 69.08138f };
	vVar6 = { 1577.012f, -7254.958f, 68.76313f };
	iVar9 = func_774(vVar0, vVar3, vVar6);
	switch (iVar9)
	{
		case 1:
			*uParam0 = { 1574.875f, -7259.426f, 69.259f };
			*uParam1 = { 1573.219f, -7258.094f, 69.12478f };
			break;
		default:
			*uParam0 = { 1578.345f, -7255.663f, 68.91415f };
			*uParam1 = { 1577.078f, -7254.425f, 68.73707f };
			break;
	}
}

void func_642(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_421)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_421[iVar0])))
		{
			func_775(iParam0, &(iLocal_421[iVar0]));
		}
		iVar0++;
	}
}

bool func_643(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_409(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_409(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_328() == -1 && !func_763(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_763(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_409(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_776(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_777(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_778(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

void func_644(int iParam0, struct<2> Param1, var uParam3)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((Param1 - vVar0.x), (Param1.f_1 - vVar0.y)));
	}
}

var func_645(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "Fussar_01";
			break;
		case 1:
			sVar0 = "Fussar_02";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!&iLocal_416[iParam0])
		{
			bVar1 = false;
			if ((bVar1 || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(&(iLocal_426[iParam0]), -1)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_369.f_1, sVar0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!bVar1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 1, 0);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, 1, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, -1422700276, 1);
				}
				func_628(&(iLocal_426[iParam0]), &iVar2, 0, 0, 1, 1);
				PED::_0x2208438012482A1A(&(iLocal_426[iParam0]), true, false);
				PED::FORCE_PED_MOTION_STATE(&(iLocal_426[iParam0]), 1063765679, false, 1, true);
				iLocal_416[iParam0] = 1;
			}
		}
	}
	return &(iLocal_416[iParam0]);
}

void func_646(var uParam0, var uParam1)
{
	switch (func_780(func_779(), 1574.123f, -7258.26f, 69.08138f, 1577.012f, -7254.958f, 68.76313f))
	{
		case 1:
			*uParam0 = { 1534.829f, -7301.735f, 73.20496f };
			*uParam1 = { 1520.272f, -7279.861f, 72.0063f };
			break;
		case 2:
			*uParam0 = { 1580.688f, -7180.271f, 63.34436f };
			*uParam1 = { 1576.945f, -7179.079f, 62.8494f };
			break;
	}
}

void func_647(var uParam0)
{
	func_211(&(uParam0->f_1));
	func_211(&(uParam0->f_12));
}

int func_648(var uParam0)
{
	if (uParam0->f_26 > -1)
	{
		return uParam0->f_26 == uParam0->f_27;
	}
	return 0;
}

Vector3 func_649(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_650(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED01", 1))
			{
				return 1;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED02", 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_651(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (*uParam1)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1197[uParam1->f_9])))
		{
			iLocal_1197[uParam1->f_9] = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 10f, 10f, 10f);
			PED::_0xFC3DB99C8144CD81(iParam0, &(iLocal_1197[uParam1->f_9]), 0, 1, 0);
			TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
		}
		return 1;
	}
	if (func_781(iParam0, uParam1))
	{
		if (!func_48(uParam1->f_28))
		{
			iVar1 = 0;
			if (!func_648(uParam1))
			{
				iVar1 = 1;
			}
			if (!bParam3)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
			}
			if (func_782(uParam1->f_6, uParam1->f_26, 1332820953))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0, 1);
			}
			else if (func_782(uParam1->f_6, uParam1->f_26, -1023305933))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, true, 0, 0);
			}
			if (func_782(uParam1->f_6, uParam1->f_26, 1100690837))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uParam1->f_28, Global_35, uParam1->f_4, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam1->f_28, uParam1->f_4, -1, 40000f, 1056964608, iVar1);
			}
			if (!bParam3)
			{
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
			}
			return 1;
		}
	}
	return 0;
}

int func_652(int iParam0, var uParam1)
{
	if (!func_48(uParam1->f_28))
	{
		if (func_49(iParam0, uParam1->f_28, 0.5f, 1, 0))
		{
			return 1;
		}
		if (func_783(uParam1) == 4)
		{
			if (func_49(Global_35, func_7(&Local_14), 7f, 1, 1) || func_517(Global_35, &iLocal_431, 10f, 1))
			{
				return 1;
			}
		}
		else if (!func_648(uParam1))
		{
			if (!func_48(uParam1->f_32))
			{
				if (!func_782(uParam1->f_6, uParam1->f_26, -684151734))
				{
					if (!func_784(iParam0, &(uParam1->f_28), &(uParam1->f_32)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_653(int iParam0, var uParam1)
{
	int iVar0;

	switch (func_783(uParam1))
	{
		case 2:
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
			{
				func_785(uParam1);
				func_63(uParam1->f_8);
				uParam1->f_8 = VOLUME::_0xB3FB80A32BAE3065(uParam1->f_28, 0f, 0f, 0f, 3f, 3f, 3f);
				func_786(iParam0, uParam1->f_8, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_28, 1.5f, -1, 0.25f, false, 40000f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
				uParam1->f_5 = 3;
				return 1;
			}
			break;
		case 1:
			break;
		case 4:
			PED::_0x4C57F27D1554E6B0(iParam0, Global_36, 1, -1082130432, 0, -1f);
			uParam1->f_5 = 4;
			return 1;
		case 5:
			if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_1197[uParam1->f_9])))
			{
				iLocal_1197[uParam1->f_9] = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 10f, 10f, 10f);
				PED::_0xFC3DB99C8144CD81(iParam0, &(iLocal_1197[uParam1->f_9]), 0, 1, 0);
				TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
				uParam1->f_5 = 5;
				return 1;
			}
			break;
		default:
			uParam1->f_10 = func_787(iParam0, uParam1);
			switch (uParam1->f_10)
			{
				case 0:
					break;
				case 1:
					uParam1->f_22 = 0;
					func_788(uParam1);
					uParam1->f_5 = 2;
					return 1;
				case 2:
					func_789(iParam0, uParam1);
					func_269(&(uParam1->f_14));
					break;
			}
			break;
	}
	return 0;
}

int func_654(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == &iLocal_431[0])
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (func_790(iParam0, uParam1) || func_791(iVar1))
	{
		func_269(&(uParam1->f_17));
		return 1;
	}
	else
	{
		switch (uParam1->f_22)
		{
			case 0:
				switch (uParam1->f_10)
				{
					case 1:
						if (func_792(iParam0, uParam1))
						{
							func_433(&(uParam1->f_17));
							uParam1->f_22 = 1;
						}
						else
						{
							return 1;
						}
						break;
				}
				break;
			case 1:
				if (func_793(iParam0, uParam1))
				{
					if (func_794(iParam0, uParam1) && func_795(iParam0, Global_35, 0))
					{
						if (uParam1->f_21 < 4)
						{
							iVar2 = func_796(uParam1);
							if (iVar2 >= 2 || !func_797(&(iLocal_431[iVar2]), Local_636[iVar2 /*36*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								switch (uParam1->f_21)
								{
									case 0:
										if (uParam1->f_9 == 0)
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 1:
										if (uParam1->f_9 == 0)
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 2:
										if (uParam1->f_9 == 0)
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 3:
										if (uParam1->f_9 == 0)
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_798(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
								}
								if (uParam1->f_9 == 0)
								{
									func_799(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1082130432, -1065353216, 0, 1);
								}
								else
								{
									func_799(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1082130432, -1065353216, 0, 1);
								}
								func_628(iParam0, &iVar0, 0, 0, 1, 1);
								uParam1->f_21++;
								func_800(uParam1);
								uParam1->f_22 = 3;
							}
						}
					}
				}
				break;
			case 3:
				if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1)
				{
					if (!func_283(iParam0, 0))
					{
						func_801(uParam1->f_9);
						func_802(uParam1);
						func_269(&(uParam1->f_17));
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

void func_655(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_803(1);
			break;
		case 1:
			func_803(2);
			break;
	}
}

bool func_656(int iParam0)
{
	if (!func_316(*iParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*iParam0);
}

int func_657(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0;
	}
	return MAP::_0x662D364ABF16DE2F(iVar0, iParam1);
}

int func_658(int iParam0)
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0)) || PED::_0xB655DB7582AEC805(iParam0)) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 1;
	}
	return 0;
}

void func_659(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(iParam0, Global_35, 3, 0, -1082130432, -1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 0, true);
		PED::REGISTER_TARGET(iParam0, Global_35, 1);
		if (!iLocal_1240)
		{
			if (iLocal_390 == 0)
			{
				if (bParam5)
				{
					if (!func_40(42))
					{
						iLocal_1240 = func_284(iParam0, Global_35, func_302(sParam1, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
						func_18(42);
					}
				}
				else
				{
					iLocal_1240 = func_284(iParam0, Global_35, func_302(sParam2, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
				}
			}
			else if (bParam5)
			{
				if (!func_40(42))
				{
					iLocal_1240 = func_284(iParam0, Global_35, func_302(sParam3, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
					func_18(42);
				}
			}
			else
			{
				iLocal_1240 = func_284(iParam0, Global_35, func_302(sParam4, 0), 0, 75f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			}
		}
	}
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		default:
			break;
	}
	return 4;
}

void func_661(int iParam0, int iParam1, char[4] cParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[iParam0])))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(&(iLocal_426[iParam0]), true, true);
		switch (iParam0)
		{
			case 0:
				func_478(&(iLocal_426[iParam0]), iParam1, joaat("weapon_shotgun_doublebarrel"), 1);
				break;
			case 1:
				func_478(&(iLocal_426[iParam0]), iParam1, joaat("weapon_revolver_cattleman"), 1);
				break;
			case 2:
				if (iParam1 != 0)
				{
					func_478(&(iLocal_426[iParam0]), iParam1, joaat("weapon_revolver_cattleman"), 1);
				}
				else
				{
					func_530(&(iLocal_426[iParam0]), joaat("weapon_revolver_cattleman"), -1, 0, 0, 1056964608, 1065353216, 0);
					if (func_763(joaat("weapon_melee_hatchet_meleeonly")))
					{
						func_530(&(iLocal_426[iParam0]), joaat("weapon_melee_hatchet_meleeonly"), -1, 1, 0, 1056964608, 1065353216, 0);
					}
					else
					{
						func_530(&(iLocal_426[iParam0]), joaat("weapon_melee_knife"), -1, 1, 0, 1056964608, 1065353216, 0);
					}
				}
				break;
			case 3:
				func_478(&(iLocal_426[iParam0]), iParam1, joaat("weapon_shotgun_doublebarrel"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
		{
			func_479(&Local_369, cParam2, &(iLocal_426[iParam0]), 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(&(iLocal_426[iParam0]), joaat("weapon_unarmed"), false, 0, false, false);
		}
		func_494(&(iLocal_426[iParam0]));
	}
}

void func_662(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

void func_663(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_804(iParam0[iVar0]);
		iVar0++;
	}
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iParam2])))
	{
		if (!func_40(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(&(iLocal_431[iParam2]), Global_35, 1, 1))
			{
				if (func_284(&(iLocal_431[iParam2]), Global_35, sParam4, 0, -1082130432, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
				{
					func_805(&(iLocal_431[iParam2]));
				}
				func_18(iParam0);
			}
		}
	}
	else if (!func_40(iParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iParam2])))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iParam3])))
			{
				if (func_284(&(iLocal_431[iParam3]), Global_35, sParam5, 0, -1082130432, iParam6, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
				{
					func_805(&(iLocal_431[iParam3]));
				}
				func_18(iParam1);
			}
		}
	}
}

int func_665(int iParam0, float fParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		*iParam3++;
		return 1;
	}
	if (!func_126(&uLocal_261) || func_127(&uLocal_261, (fParam1 + 7f)))
	{
		if (func_284(iParam0, Global_35, sParam2, 0, fParam4, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0))
		{
			if (bParam5)
			{
				func_805(iParam0);
			}
			*iParam3++;
			func_269(&uLocal_261);
			return 1;
		}
	}
	return 0;
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar6;

	if (Local_399 == 8)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_242, true, 0))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, -1))
		{
			return 1;
		}
	}
	if (func_49(iParam0, vLocal_225, 35f, 1, 1))
	{
		if (func_806(&iVar0, &iVar1))
		{
			vVar2 = { func_16(10, iVar0) };
			vVar6 = { func_16(10, iVar1) };
			if (!func_631(vVar2, vVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_431[iParam0])))
	{
		func_503(uLocal_439[iParam0], &(iLocal_431[iParam0]), 1);
	}
}

void func_668(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[iParam0])) && Local_399 != 8)
	{
		func_503(uLocal_434[iParam0], &(iLocal_426[iParam0]), 1);
	}
}

int func_669(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;

	Stack.Push(iParam1);
	Call_Loc(uParam0->f_6);
	sVar0 = StackVal;
	if (iParam3 && !func_307(uParam0, iParam1))
	{
		return func_807(uParam0, iParam1, bParam2);
	}
	else
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			func_808(uParam0, 5, 1);
		}
		Stack.Push(iParam1);
		Call_Loc(uParam0->f_5);
	}
	return 1;
}

void func_670(int iParam0, var uParam1, int iParam2, float fParam3, int* iParam4)
{
	vector3 vVar0;
	int iVar4;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		func_503(iParam4, *uParam1, 0);
		switch (iParam0)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, 2000, 0, 0);
				if (func_809(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
				}
				else
				{
					func_810(iParam2, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				if (func_809(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, -1, 0);
				}
				else
				{
					func_810(*uParam1, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
		}
		func_314(uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 301, true);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 317, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 297, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 360, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 315, true);
	}
}

void func_671(int iParam0, int iParam1, bool bParam2)
{
	if (func_162(iParam0, 0, 1) && func_162(iParam1, 0, 1))
	{
		func_811(iParam0);
		TASK::TASK_COMBAT_PED(func_738(bParam2, 0, iParam0), iParam1, 0, 0);
	}
}

void func_672(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_673()
{
	int iVar0;

	iLocal_1193 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (&iLocal_1200[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		if (&iLocal_1205[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
}

void func_674(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::_0xB655DB7582AEC805(*uParam0))
	{
		if (*uParam2 == 4)
		{
			*uParam2 = 0;
			iLocal_1193 = (iLocal_1193 - 1);
		}
		return;
	}
	if (*uParam2 > 0)
	{
		if (!func_457(*uParam0, 1435919172))
		{
			if (*uParam2 == 4)
			{
				func_812(*uParam0);
			}
			else
			{
				*uParam2 = 0;
			}
		}
	}
	if (!*uParam4)
	{
		if (*uParam2 > 0)
		{
			if (func_813(*uParam0))
			{
				func_814(&iParam1);
				func_503(&iParam1, *uParam0, 0);
				func_657(*uParam0, 942020339, 1);
				func_815(*uParam0, -1034486097, 1);
				*uParam4 = 1;
			}
		}
	}
	switch (*uParam2)
	{
		case 0:
			if (func_265(*uParam0, 0, 1, 0) == joaat("weapon_unarmed"))
			{
				func_530(*uParam0, joaat("weapon_revolver_cattleman"), -1, 1, 0, 1056964608, 1065353216, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_revolver_cattleman"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
			}
			if (iParam3 == 0)
			{
				func_672(*uParam0);
			}
			func_314(uParam0);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 317, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 360, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
			if (func_816(Global_35))
			{
				if (func_817())
				{
					func_812(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (func_526(Global_35, *uParam0, 25f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, 0, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2f, 0, 25f, 4f, 1, 0, -687903391, 0);
					}
					*uParam2 = 1;
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 1:
			if (func_817())
			{
				func_812(*uParam0);
				*uParam2 = 4;
			}
			else if (!func_816(Global_35) || func_816(*uParam0))
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 3:
			if (func_816(Global_35))
			{
				if (func_817())
				{
					func_812(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (func_526(Global_35, *uParam0, 25f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, 0, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2f, 0, 25f, 4f, 1, 0, -687903391, 0);
					}
					*uParam2 = 1;
				}
			}
			break;
		case 4:
			if (!func_816(Global_35))
			{
				iLocal_1193 = (iLocal_1193 - 1);
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
	}
}

int func_675(var uParam0)
{
	switch (*uParam0)
	{
		case 10:
			switch (uParam0->f_1)
			{
				case 0:
					return 1;
				case 1:
					return 6;
				default:
					break;
			}
			break;
	}
	return -1;
}

var func_676(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_677(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_678(var uParam0, bool bParam1, int iParam2)
{
	func_818(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_819(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_79(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_241(1))
						{
							func_79(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_241(1) || *uParam0 & 8192 != 0))
				{
					func_80(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_820(uParam0))
			{
				uParam0->f_15 = func_553();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_553() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_821(uParam0);
}

int func_679(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_822(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_823(iParam0, iVar2) <= func_824(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_680(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_825(iParam2, 1, 1, 1, 0))
	{
		func_79(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_826(uParam1, 1);
	func_325();
}

int func_681(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_827(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_828(uParam1);
			if (func_829(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_830(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_826(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_826(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_682(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_831(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_828(uParam2);
		if (func_829(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_830(uParam2)
				{
					func_826(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_683(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_822(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_830(uParam1)
		{
			fVar3 = func_828(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_684(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_685(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_832(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_693(uParam2, iParam1))
			{
				func_826(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_686(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_833(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_693(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_826(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_687(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_834(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_826(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_826(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_835(iParam1, vVar0, vVar4))
					{
						func_826(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_826(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_835(iParam1, vVar0, vVar7))
					{
						func_826(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_688(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_822(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_836(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_837(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_838(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_839(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_840(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_689(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_690(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_691(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_841(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_842(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_692(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_693(var uParam0, int iParam1)
{
	if (func_843(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_694(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_624(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_695()
{
}

int func_696(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_844(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_553();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_554(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_553();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_697()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_553() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_698(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_824(uParam0);
	if (uParam0->f_12 > func_845(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_846(iParam1);
	iVar1 = func_847(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_848(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_700(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_849(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_850(uParam1, iParam0))
					{
						if (func_554(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_701(int iParam0, var uParam1)
{
	if (!func_851(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_702(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_703(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_704(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_553();
	}
	else if (func_553() - uParam1->f_4) > func_852(uParam1)
	{
		return func_853(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

int func_705(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_706(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_854(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_855(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_856())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_707(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_242(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_708(float fParam0)
{
	if (func_857(1))
	{
		return 1;
	}
	if (func_126(&uLocal_0) && !func_285(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

int func_709()
{
	if (!func_126(&uLocal_1253))
	{
		return 1;
	}
	return func_127(&uLocal_1253, 3f);
}

int func_710()
{
	int iVar0;

	if (func_474(&iLocal_426, &(Local_14.f_5), &iVar0, &uLocal_1256, 0, (iLocal_426 - 1), 1))
	{
		if (func_825(iVar0, 1, 1, 1, 0))
		{
			return 1;
		}
	}
	if (func_474(&iLocal_431, &(Local_14.f_5), &iVar0, &uLocal_1257, 0, (iLocal_431 - 1), 1))
	{
		if (func_825(iVar0, 1, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_711(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_433(&(uParam0->f_18));
}

int func_712(int iParam0)
{
	return iParam0;
}

void func_713(int iParam0)
{
	if (!func_858(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_714(int iParam0)
{
	int iVar0;

	if (func_328() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_316(func_859(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_859(iVar0), func_366(), 1))
			{
				func_860(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_716(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = (Global_1415419->f_19[iParam0 /*12*/])->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if ((Global_1415419->f_19[iVar0 /*12*/])->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_861() > (Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5)
					{
						(Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5 = func_861();
					}
					func_201(&((Global_32073.f_2697.f_6[iVar0 /*6*/])->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_80(&((Global_1415419->f_19[iVar0 /*12*/])->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_717(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_718(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_719(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_575(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_576(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar2 /*2*/])->f_1++;
	}
}

void func_720(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_120(iParam0, 8192))
	{
		iVar0 = func_576(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		(Global_17503.f_2205[iVar0 /*2*/])->f_1++;
	}
}

void func_721(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_330(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(Global_17503.f_12[iVar1], iVar2);
}

void func_722(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_75(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_48(vParam1))
	{
		return;
	}
	if (!func_190(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17503.f_2084)
	{
		vVar2 = { *(Global_17503.f_2084[iVar0 /*5*/]) };
		if (func_48(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if ((Global_17503.f_2084[iVar0 /*5*/])->f_3 == iParam0)
		{
			if (func_344(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*(Global_17503.f_2084[iVar1 /*5*/]) = { vParam1 };
		(Global_17503.f_2084[iVar1 /*5*/])->f_3 = iParam0;
		(Global_17503.f_2084[iVar1 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17503.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { vParam1 };
				(Global_17503.f_2084[iVar0 /*5*/])->f_3 = iParam0;
				(Global_17503.f_2084[iVar0 /*5*/])->f_4 = ((*Global_1310750)[iParam0 /*111*/])->f_62;
			}
			else
			{
				*(Global_17503.f_2084[iVar0 /*5*/]) = { *(Global_17503.f_2084[iVar0 + 1 /*5*/]) };
			}
			iVar0++;
		}
	}
}

void func_723(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_737(iVar0, iParam0);
		iVar0++;
	}
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_725(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_726()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_727(int iParam0)
{
	if (!func_432(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

bool func_728(var uParam0)
{
	return (Global_1310750->f_16074 && uParam0) != 0;
}

bool func_729()
{
	return Global_1894899 & 2 != 0;
}

bool func_730(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_731(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (((*Global_1888801)[iVar2 /*35*/])->f_20 == iParam0)
		{
			if (!(iParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_862(iVar2))
				{
					vVar3 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iVar2 /*35*/])->f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_732(int iParam0)
{
	if (func_190(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_733(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

bool func_734(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_735(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_737(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

int func_738(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_739(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_740(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_543(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_544(&(iParam1->f_6), 0, 1);
	}
	if (!func_543(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_606(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_863(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_543(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_748(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_864(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_865(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_866(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_864(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_747(iParam1->f_6, 0, 1);
				}
				else
				{
					func_747(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_741(int* iParam0, int iParam1)
{
	if (!func_770(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_739(iParam0, 14);
		}
	}
}

bool func_742(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_743(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_744(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_745(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_746(int iParam0, int iParam1)
{
	if (iParam1 && !func_543(iParam0))
	{
		return false;
	}
	return !func_867(iParam0, 4);
}

void func_747(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (bParam1)
	{
		func_868(iParam0, 4);
		func_869(iVar0, 1);
		func_870(iVar0, 1);
	}
	else
	{
		func_871(iParam0, 4);
		func_870(iVar0, 0);
	}
}

void func_748(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_543(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	func_864(iParam0, 18, 0, 1);
	func_864(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_749(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_750(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_751(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_752(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_753(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_872(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_754(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_755(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_756(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	vector3 vVar17;

	vVar0 = { MISC::_0x83ACC65D9ACEC5EF(*uParam1, *uParam0, *uParam2, true) };
	fVar3 = BUILTIN::VDIST(Global_36, *uParam1);
	vVar4 = { Global_36 + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(fVar3, fVar3, fVar3) };
	vVar7 = { func_461(vVar4, vVar0, 1065353216) };
	vVar10 = { MISC::_0x83ACC65D9ACEC5EF(vVar0 - vVar7, *uParam0, *uParam2, true) };
	fVar13 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar10));
	fVar14 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar0));
	vVar17 = { func_461(Global_36, vVar10, 1065353216) };
	if (fVar13 > fVar14)
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam1, *uParam2));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam1, MISC::_0x83ACC65D9ACEC5EF(vVar10 - vVar17, *uParam1, *uParam2, true)));
		func_873(uParam1, uParam2, uParam3, (fVar16 / fVar15));
	}
	else
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam0, *uParam1));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam0, MISC::_0x83ACC65D9ACEC5EF(vVar10 - vVar17, *uParam0, *uParam1, true)));
		func_873(uParam0, uParam1, uParam3, (fVar16 / fVar15));
	}
}

bool func_757(var uParam0, int iParam1)
{
	return uParam0->f_2 == iParam1;
}

bool func_758(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 5 || iParam2 == -1)
	{
		return false;
	}
	return (func_143(uParam0, iParam2, 1) && iParam1 == &uParam0->f_15[iParam2]);
}

var func_759(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 + func_874(vVar0, (fParam7 * 0.5f)) };
	vVar6 = { vParam1 + func_874(vVar0, (fParam7 * -0.5f)) };
	uVar9 = func_631(vVar3, vParam1, vParam4);
	uVar10 = func_631(vParam1, vVar6, vParam4);
	return (uVar9 && uVar10);
}

int func_760(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	struct<9> Var0[4];
	int iVar37;

	switch (iParam0)
	{
		case 0:
			func_875(Var0[0 /*9*/], 1574.965f, -7256.959f, 66.44505f, 0f, 0f, -42.821f, 1569.381f, -7263.209f, 69.6908f);
			func_875(Var0[1 /*9*/], 1575.715f, -7256.348f, 65.94505f, 2.65f, 0f, 137.179f, 1581.422f, -7250.153f, 68.54831f);
			break;
		default:
			return func_876(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
	}
	iVar37 = func_279(iParam5 > -1, iParam5, func_877(&Var0, vParam1));
	if (iVar37 > -1)
	{
		*uParam4 = { *(Var0[iVar37 /*9*/]) };
		uParam4->f_3 = { (Var0[iVar37 /*9*/])->f_3 };
		uParam4->f_6 = { (Var0[iVar37 /*9*/])->f_6 };
		return 1;
	}
	return func_876(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
}

int func_761()
{
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

var func_762(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_763(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

float func_764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_765(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_878(iParam1) };
	vVar3 = { func_878(iParam2) };
	return func_879(uParam0, vVar0, vVar3, iParam2);
}

int func_766(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_878(iParam1) };
	return func_879(uParam0, vVar0, vParam2, 0);
}

Vector3 func_767(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_612(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_768(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return 1;
	}
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

void func_769(int* iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = uParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_543(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_866(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_772(iParam0->f_6, iParam0->f_5, 0);
			}
			func_747(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_640(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_770(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_771(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_772(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

Vector3 func_773()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[2])))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(&(iLocal_426[2]), true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[3])))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(&(iLocal_426[3]), true, false) };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FtoV((1f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return 0f, 0f, 0f;
}

int func_774(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_613(vParam0, vParam3);
	fVar1 = func_613(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 1;
	}
	return 2;
}

int func_775(int iParam0, int iParam1)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	}
	if (PED::_0xE9B168527B337BF0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_776(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_880(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_881((375 + iVar28), 1);
			if (func_882(iParam0, &Var0, iVar5, 0))
			{
				if (func_883(iParam0, &Var6, iVar5))
				{
					Var29 = { func_884(iParam0, Var0, iVar5, 0) };
					func_885(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_886(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_887(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_888(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_777(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_778(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

Vector3 func_779()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[0])))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(&(iLocal_426[0]), true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_426[1])))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(&(iLocal_426[1]), true, false) };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FtoV((1f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return 0f, 0f, 0f;
}

int func_780(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_613(vParam0, vParam3);
	fVar1 = func_613(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 2;
	}
	return 1;
}

int func_781(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<4> Var7;

	iVar1 = 15;
	iVar2 = uParam1->f_26 + 1;
	if (!func_889(uParam1, uParam1->f_26))
	{
		if (iVar2 > -1 && iVar2 <= iVar1)
		{
			iVar0 = iVar2;
			while (iVar0 <= iVar1)
			{
				if (func_889(uParam1, iVar0))
				{
					uParam1->f_26 = iVar0;
					uParam1->f_27 = iVar0;
					uParam1->f_28 = { func_16(uParam1->f_6, iVar0) };
					uParam1->f_32 = { uParam1->f_28 };
					return 1;
				}
				else
				{
					Var3 = { func_16(uParam1->f_6, iVar0) };
					Var7 = { func_16(uParam1->f_6, iVar0 + 1) };
					if ((func_782(uParam1->f_6, iVar0, -684151734) || func_782(uParam1->f_6, iVar0, 1100690837)) || func_784(iParam0, &Var3, &Var7))
					{
						uParam1->f_26 = iVar0;
						uParam1->f_27 = iVar0 + 1;
						uParam1->f_28 = { Var3 };
						uParam1->f_32 = { Var7 };
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_782(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_890(iParam0, iParam1, iVar0) == iParam2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_783(var uParam0)
{
	if (*uParam0)
	{
		return 5;
	}
	if (uParam0->f_26 > -1 && uParam0->f_26 < 16)
	{
		switch (func_890(uParam0->f_6, uParam0->f_26, 3))
		{
			case -73865943:
				return 1;
			case 1100690837:
				return 4;
			default:
				break;
		}
	}
	return 0;
}

int func_784(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam1);
	fVar1 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam2);
	fVar2 = BUILTIN::VDIST2(*uParam1, *uParam2);
	if (fVar1 < fVar0 || fVar1 < fVar2)
	{
		return 0;
	}
	return 1;
}

void func_785(var uParam0)
{
	if (uParam0->f_7 != 0)
	{
		TASK::REMOVE_COVER_POINT(uParam0->f_7);
		uParam0->f_7 = 0;
	}
	uParam0->f_7 = TASK::ADD_COVER_POINT(uParam0->f_28, uParam0->f_28.f_3, 3, 1, 1, false);
}

void func_786(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::_0xFC3DB99C8144CD81(iParam0, iParam1, iParam2, bParam3, 0);
	}
}

int func_787(int iParam0, var uParam1)
{
	int iVar0;

	if ((!*uParam1 && uParam1->f_5 != 2) && !uParam1->f_1)
	{
		iVar0 = 0;
		if (func_891(iVar0))
		{
			return 0;
		}
		if (iParam0 == &iLocal_431[1])
		{
			iVar0 = 1;
		}
		if (func_791(iVar0))
		{
			return 0;
		}
		if (!func_650(iParam0, uParam1))
		{
			if (func_892(iParam0, uParam1))
			{
				return 1;
			}
			else if (func_893(iParam0, uParam1))
			{
				return 2;
			}
		}
	}
	return 0;
}

void func_788(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_894(1);
			break;
		case 1:
			func_894(2);
			break;
	}
}

void func_789(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (func_895(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_896(iParam0, "RUN_L_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_896(iParam0, "RUN_L_LOOK_02_PED01", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_896(iParam0, "RUN_R_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_896(iParam0, "RUN_R_LOOK_02_PED01", uParam1);
						break;
				}
			}
			break;
		case 1:
			if (func_895(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_896(iParam0, "RUN_L_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_896(iParam0, "RUN_L_LOOK_02_PED02", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_896(iParam0, "RUN_R_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_896(iParam0, "RUN_R_LOOK_02_PED02", uParam1);
						break;
				}
			}
			break;
	}
	uParam1->f_20++;
}

int func_790(int iParam0, var uParam1)
{
	var uVar0;

	if (func_535(iParam0, &uLocal_267, &uVar0, 0) || func_526(iParam0, Global_35, 15f, 1))
	{
		return 1;
	}
	return 0;
}

bool func_791(int iParam0)
{
	return &uLocal_1222[iParam0] > 5;
}

int func_792(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_897(iParam0, Global_35, BUILTIN::COS(120f));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if ((iVar1 != 0 && ENTITY::GET_ENTITY_SPEED(iParam0) > 1f) && !func_48(uParam1->f_28))
	{
		switch (iVar1)
		{
			case 1:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED01", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED02", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
				}
				break;
			case 3:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED01", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED02", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
				}
				break;
			case 2:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED01", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED02", 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
						break;
				}
				break;
		}
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_799(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 4f, -4f, 0, 1);
			break;
		case 1:
			func_799(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 4f, -4f, 0, 1);
			break;
	}
	func_628(iParam0, &iVar0, 0, 0, 1, 1);
	return 1;
}

int func_793(int iParam0, var uParam1)
{
	if (!func_126(&(uParam1->f_17)))
	{
		return 1;
	}
	return func_127(&(uParam1->f_17), 15f);
}

int func_794(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1);
		case 1:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1);
		default:
			break;
	}
	return 0;
}

bool func_795(int iParam0, int iParam1, float fParam2)
{
	return func_898(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_796(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 2;
}

int func_797(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1))
			{
				return 1;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_798(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam5 |= 67108864;
	}
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, iParam3, iParam4, iParam6, iParam5, 0, 0, 0, 0, 0, 0);
}

void func_799(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam6 |= 1;
	}
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, sParam2, sParam3, iParam1, func_279(bParam7, -1, func_899(sParam2, sParam3)), iParam4, iParam5, iParam6 | 67108864, 0, 0, 0, -1082130432, 0, 0, -1082130432);
}

void func_800(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_894(4);
			break;
		case 1:
			func_894(8);
			break;
	}
}

void func_801(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (&uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (&uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = func_284(&(iLocal_431[iParam0]), &(iLocal_431[iParam0]), "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1219[iParam0] = &uLocal_1219[iParam0] + 1;
	}
}

void func_802(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_803(4);
			break;
		case 1:
			func_803(8);
			break;
	}
}

void func_803(int iParam0)
{
	func_900(&iLocal_211, iParam0);
}

void func_804(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 30, false);
	}
}

void func_805(int iParam0)
{
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_0x0C7A2289A5C4D7C9(919052783, iParam0);
}

bool func_806(var uParam0, var uParam1)
{
	*uParam0 = -1;
	*uParam1 = -1;
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					*uParam0 = 0;
					*uParam1 = 1;
					break;
				case 1:
					*uParam0 = 2;
					*uParam1 = 3;
					break;
			}
			break;
	}
	return ((*uParam0 > -1 && *uParam1 > -1) && *uParam0 != *uParam1);
}

int func_807(var uParam0, var uParam1, bool bParam2)
{
	MISC::SET_BIT(&(uParam0->f_8), 4);
	uParam0->f_15[4] = uParam1;
	if (func_901(uParam0, uParam1))
	{
		return func_145(uParam0, uParam1);
	}
	else
	{
		func_310(uParam0, 4, 0);
		return 0;
	}
	if (bParam2)
	{
		func_808(uParam0, 4, 1);
	}
	return 1;
}

void func_808(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_116(uParam0, 0, 0, 0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != iParam1)
			{
				func_310(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			func_310(uParam0, iVar0, 0);
			iVar0++;
		}
	}
}

int func_809(int iParam0, var uParam1)
{
	switch (Local_399)
	{
		case 10:
			switch (Local_399.f_1)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 1) };
							return 1;
						case 1:
							*uParam1 = { func_16(9, 2) };
							return 1;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 4) };
							return 1;
						case 1:
							*uParam1 = { func_16(9, 5) };
							return 1;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_810(int iParam0, float fParam1)
{
	if (!func_526(iParam0, Global_35, 12f, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 2f, -1, 12f, false, 40000f);
	}
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, fParam1, 0, 3.5f, 4f, 1, 0, -687903391, 0);
}

void func_811(int iParam0)
{
	PED::SET_PED_ACCURACY(iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	PED::SET_COMBAT_FLOAT(iParam0, 12, 0.2f);
}

void func_812(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar8;
	vector3 vVar11;

	iLocal_1193++;
	iVar2 = 0;
	iVar3 = -1;
	switch (Local_399.f_1)
	{
		case 0:
			iVar2 = 7;
			iVar3 = 13;
			break;
		case 1:
			iVar2 = 7;
			iVar3 = 12;
			break;
	}
	if (iVar2 > 0)
	{
		vVar8 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		vVar11 = { 0f, 0f, 0f };
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			vVar4 = { func_16(iVar3, iVar1) };
			if (!func_48(vVar4))
			{
				if (func_48(vVar11) || BUILTIN::VDIST(vVar8, vVar11) > BUILTIN::VDIST(vVar8, vVar4))
				{
					vVar11 = { vVar4 };
				}
			}
			iVar1++;
		}
		if (func_48(vVar11))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!func_49(iParam0, vVar11, 7f, 1, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 2f, -1, 7f, false, 40000f);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar11, Global_35, 1.5f, 0, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, 0, 0);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

int func_813(int iParam0)
{
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 1;
	}
	if (func_283(iParam0, 1))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, Global_35))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iParam0, 17))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_814(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_815(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0;
	}
	return MAP::_0xB059D7BD3D78C16F(iVar0, iParam1);
}

bool func_816(int iParam0)
{
	return func_139(iParam0, iLocal_242, 1, 0);
}

int func_817()
{
	if (iLocal_1193 < 3)
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_902();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_903(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_819(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_820(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_328() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_904(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_904(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_847(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_821(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_905(uParam0);
	}
}

int func_822(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_847(iParam2);
	}
	else
	{
		iVar1 = func_846(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_847(iParam0);
	}
	else
	{
		iVar0 = func_846(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_56(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_823(int iParam0, int iParam1)
{
	return func_624(iParam0, iParam1, 1, 1);
}

float func_824(var uParam0)
{
	return uParam0->f_26;
}

int func_825(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_826(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(uParam0, 134217728);
	}
	else
	{
		func_80(uParam0, 134217728);
	}
}

int func_827(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_624(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_906(iVar0, 0)))
		{
			if (func_907(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_828(var uParam0)
{
	return uParam0->f_17;
}

int func_829(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_56(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_830(var uParam0)
{
	return uParam0->f_18;
}

int func_831(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_906(iVar0, 0)))
		{
			if (func_908(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_832(var uParam0)
{
	return uParam0->f_23;
}

int func_833(var uParam0)
{
	return uParam0->f_21;
}

int func_834(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_835(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_898(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_836(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_909(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_837(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_838(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_242(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_839(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_242(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_840(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_242(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_841(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_842(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_910(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_843(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_844(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_554(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_845(var uParam0)
{
	return uParam0->f_24;
}

int func_846(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_847(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_848(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_841(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_624(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_624(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_849(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_422(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_850(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_850(uParam1, iVar1))
				{
					if (func_554(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_850(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_851(int iParam0)
{
	if (func_911())
	{
		return 0;
	}
	return func_912(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_852(var uParam0)
{
	return uParam0->f_20;
}

int func_853(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

float func_854(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_845(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_913(uParam0);
	}
	return func_845(uParam0);
}

float func_855(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_856()
{
	int iVar0;
	int iVar1;

	iVar0 = func_360(func_200());
	iVar1 = func_361(func_200());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

bool func_857(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_858(int iParam0)
{
	return func_867(iParam0, 2);
}

int func_859(int iParam0)
{
	if (!func_914(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_860(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_915(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_861()
{
	return &Global_1899515;
}

bool func_862(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_863(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_867(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_916(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_864(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_865(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_866(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

bool func_867(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_868(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_869(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_867(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_870(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_871(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_872(bool bParam0)
{
	if (func_328() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

void func_873(var uParam0, var uParam1, var uParam2, float fParam3)
{
	*uParam2 = { func_917(*uParam0, *uParam1, fParam3) };
	uParam2->f_3 = func_918(uParam0->f_3, uParam1->f_3, fParam3, 0);
}

Vector3 func_874(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

void func_875(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = { vParam4 };
	uParam0->f_6 = { vParam7 };
}

int func_876(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1575.51f, -7256.65f, 66.43461f };
			*uParam2 = { -1.707547E-06f, 0f, -40.00001f };
			*uParam3 = { 1568.849f, -7270.316f, 70.75385f };
			break;
		default:
			return 0;
	}
	return 1;
}

int func_877(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_48(*((*uParam0)[iVar0 /*9*/])))
		{
			if (!func_48(((*uParam0)[iVar0 /*9*/])->f_3))
			{
				if (!func_48(((*uParam0)[iVar0 /*9*/])->f_6))
				{
					if (iVar1 < 0 || func_919(uParam0, iVar1, iVar0, vParam1))
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

Vector3 func_878(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_920(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_48(vVar0))
	{
	}
	return vVar0;
}

int func_879(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_921(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

struct<5> func_880(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_922(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_923(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_884(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_924(bParam1) };
			if (iParam2 && func_925(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_882(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_882(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_883(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_926(bParam1) };
			switch (func_927(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_928(iParam0, -1823706425))
			{
				Var0 = { func_884(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_928(iParam0, -1483207246))
			{
				Var0 = { func_884(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_929(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_881(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return -1990194462;
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685;
		case 376:
			return -649335959;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_882(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_930(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_883(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_931(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_884(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_932(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_872(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_885(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_933(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_929(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_886(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_872(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_886(bool bParam0)
{
	if (func_328() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_872(bParam0));
}

int func_887(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_934(iParam0))
	{
		return 0;
	}
	if (!func_886(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_888(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_627(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_889(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 15;
	if (iParam1 == iVar0)
	{
		return 1;
	}
	if (iParam1 > -1 && iParam1 < iVar0)
	{
		return func_782(uParam0->f_6, iParam1, 229088988);
	}
	return 0;
}

int func_890(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return -684151734;
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return -684151734;
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 1:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 10:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return -282788437;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		default:
			return 2;
	}
	return 2;
}

int func_891(int iParam0)
{
	if (&uLocal_1222[iParam0] > 5)
	{
		return 1;
	}
	return 0;
}

int func_892(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (func_936(iParam0, uParam1))
		{
			if (!func_526(iParam0, Global_35, (35f + 5f), 1))
			{
				if (uParam1->f_21 < 4)
				{
					if (!func_126(&(uParam1->f_17)) || func_127(&(uParam1->f_17), 5f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_893(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (uParam1->f_20 < 2)
		{
			if (!func_48(uParam1->f_28))
			{
				if (func_937(iParam0, uParam1))
				{
					if (!func_526(iParam0, Global_35, 15f, 1))
					{
						if (TASK::IS_PED_RUNNING(iParam0) || TASK::IS_PED_SPRINTING(iParam0))
						{
							if (!func_126(&(uParam1->f_14)) || func_127(&(uParam1->f_14), 5f))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_894(int iParam0)
{
	func_195(&iLocal_211, iParam0);
}

bool func_895(int iParam0, int iParam1)
{
	return func_938(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

void func_896(int iParam0, char* sParam1, var uParam2)
{
	int iVar0;

	iVar0 = 2064;
	TASK::TASK_PLAY_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", sParam1, 4f, -4f, -1, iVar0, 0, 0, 0, 0, 0, 0);
}

int func_897(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_939(iParam0, vVar0, fParam2);
}

bool func_898(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_899(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_900(int iParam0, int iParam1)
{
	func_566(iParam0, iParam1);
}

bool func_901(var uParam0, var uParam1)
{
	return func_940(uParam0, uParam1);
}

int func_902()
{
	if (func_941())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_903(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_904(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_905(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_80(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_79(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

var func_906(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_907(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_908(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_908(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_909(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_910(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_911()
{
	if (func_328() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_912(int iParam0, bool bParam1)
{
	switch (func_942(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

var func_913(var uParam0)
{
	return uParam0->f_25;
}

bool func_914(int iParam0)
{
	return iParam0 > -1;
}

int func_915(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

void func_916(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, var uParam15, var uParam16, int iParam17, var uParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, uParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, uParam16, uParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, uParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, uParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), uParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_869(iParam0, 1);
	func_870(iParam0, 1);
	func_871(iParam0, 128);
}

Vector3 func_917(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_918(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;

	fVar0 = func_943(fParam0, 0f, 360f);
	fVar1 = func_943(fParam1, 0f, 360f);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 == 0f)
	{
		return fVar0;
	}
	if (iParam3 == 2)
	{
		bVar4 = true;
	}
	else if (iParam3 != 3)
	{
		if (fVar0 <= 180f)
		{
			if (fVar2 >= 0f && fVar2 <= 180f)
			{
				bVar4 = true;
			}
		}
		else if (fVar2 < -180f || fVar2 > 0f)
		{
			bVar4 = true;
		}
		if (iParam3 == 1)
		{
			bVar4 = !bVar4;
		}
	}
	if (bVar4)
	{
		if (fVar2 > 0f)
		{
			fVar3 = fVar2;
		}
		else
		{
			fVar3 = (fVar2 + 360f);
		}
	}
	else if (fVar2 < 0f)
	{
		fVar3 = fVar2;
	}
	else
	{
		fVar3 = (fVar2 - 360f);
	}
	return (fParam0 + (fParam2 * fVar3));
}

int func_919(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST(*((*uParam0)[iParam1 /*9*/]), vParam3);
	fVar1 = BUILTIN::VDIST(*((*uParam0)[iParam2 /*9*/]), vParam3);
	if (fVar1 < fVar0)
	{
		return 1;
	}
	return 0;
}

float func_920(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_921(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

struct<4> func_922(bool bParam0)
{
	return func_884(1328661203, func_944(), -1591664384, bParam0);
}

int func_923(int iParam0)
{
	vector3 vVar0;

	if (!func_932(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_924(bool bParam0)
{
	int iVar0;

	iVar0 = func_872(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_884(923904168, func_922(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_884(923904168, func_922(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_884(923904168, func_922(bParam0), -740156546, 0);
}

int func_925(int iParam0, bool bParam1)
{
	if (func_927(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_945(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_926(bool bParam0)
{
	int iVar0;

	iVar0 = func_872(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_884(271701509, func_922(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_884(271701509, func_922(bParam0), 12999093, 0);
}

int func_927(int iParam0)
{
	struct<2> Var0;

	if (!func_932(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_928(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_927(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_929(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_872(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_930(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_932(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_884(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_872(bParam6), &Var0, 0);
	return uVar4;
}

int func_931(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_872(0);
	*uParam1 = { func_884(iParam0, func_924(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_932(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_933(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_934(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_935(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return !func_283(&(iLocal_431[1]), 0);
		case 1:
			return !func_283(&(iLocal_431[0]), 0);
		default:
			break;
	}
	return 0;
}

int func_936(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_796(uParam1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		return 0;
	}
	if (iVar0 < 2)
	{
		if (func_946(Local_636[iVar0 /*36*/]))
		{
			if (func_526(iParam0, &(iLocal_431[iVar0]), 10f, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_937(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	iVar0 = func_939(iParam0, uParam1->f_28, 1060437492);
	iVar1 = 0;
	bVar2 = (func_648(uParam1) || func_48(uParam1->f_32));
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28);
	fVar4 = func_169(bVar2, 0f, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_32));
	iVar1 = func_939(iParam0, uParam1->f_32, 1060437492);
	if (iVar0 == 0 && (fVar3 > 1f || (iVar1 == 0 && fVar4 > 1f)))
	{
		return 1;
	}
	return 0;
}

bool func_938(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_631(vVar0, vVar3, vParam1);
}

int func_939(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_947(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_631(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_940(var uParam0, var uParam1)
{
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_6);
	return !MISC::IS_STRING_NULL_OR_EMPTY(StackVal);
}

int func_941()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_942(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_948(iParam0);
}

float func_943(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

struct<4> func_944()
{
	struct<4> Var0;

	return Var0;
}

int func_945(int iParam0, bool bParam1)
{
	if (func_934(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_872(bParam1), iParam0, 0);
}

int func_946(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return func_949(1);
		case 1:
			return func_949(2);
	}
	return 0;
}

float func_947(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

int func_948(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_950(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_949(int iParam0)
{
	return func_388(iLocal_211, iParam0);
}

int func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

