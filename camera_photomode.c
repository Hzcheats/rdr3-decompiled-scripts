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
	float fLocal_9 = 0f;
	float fLocal_10 = 0f;
	bool bLocal_11 = false;
	bool bLocal_12 = false;
	bool bLocal_13 = false;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	char* sLocal_24 = NULL;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	int iLocal_48 = 0;
	bool bLocal_49 = false;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = false;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char cLocal_64[32] = "";
	char cLocal_68[32] = "";
	char cLocal_72[32] = "";
	int iLocal_76 = 0;
	char cLocal_77[64] = "";
	char cLocal_85[32] = "";
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	bool bLocal_102 = false;
	struct<113> Local_103 = { 1, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_216 = 0;
	float fLocal_217 = 0f;
	bool bLocal_218 = false;
	int iLocal_219 = 0;
	vector3 vLocal_220 = { 0f, 0f, 0f };
	vector3 vLocal_223 = { 0f, 0f, 0f };
	vector3 vLocal_226 = { 0f, 0f, 0f };
	bool bLocal_229 = false;
	bool bLocal_230 = false;
	float fLocal_231 = 0f;
	float fLocal_232 = 0f;
	vector3 vLocal_233 = { 0f, 0f, 0f };
	vector3 vLocal_236 = { 0f, 0f, 0f };
	bool bLocal_239 = false;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	bool bLocal_249 = false;
	char* sLocal_250[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_303[39] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_343 = 0;
	int iLocal_344[39] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_384[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = false;
	float fLocal_395 = 0f;
	float fLocal_396 = 0f;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	fLocal_10 = -10f;
	fLocal_14 = 18.88f;
	fLocal_15 = -18.88f;
	fLocal_16 = 18.88f;
	fLocal_17 = -18.88f;
	fLocal_18 = 18.88f;
	fLocal_19 = -18.88f;
	iLocal_22 = MISC::_GET_SYSTEM_TIME();
	sLocal_24 = "PhotoMode_Bounds";
	fLocal_25 = 1f;
	fLocal_26 = 1f;
	fLocal_27 = 0.1f;
	bLocal_30 = true;
	sLocal_44 = "adjust_loop_a";
	sLocal_45 = "adjust_loop_b";
	sLocal_46 = "adjust_oneshot_a";
	sLocal_47 = "adjust_oneshot_b";
	StringCopy(&cLocal_64, "", 32);
	StringCopy(&cLocal_68, "", 32);
	StringCopy(&cLocal_72, "", 32);
	StringCopy(&cLocal_77, "", 64);
	StringCopy(&cLocal_85, "", 32);
	sLocal_89 = "CameraViewfinder";
	sLocal_90 = "PhotoMode_TakePicture";
	sLocal_91 = "CameraTransitionBlink";
	sLocal_92 = "No_PostFx_Applied";
	sLocal_93 = "No_PostFx_Applied";
	bLocal_102 = true;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	iLocal_398 = 4;
	iLocal_399 = -1534086282;
	iLocal_401 = joaat("DOMINOS_SET_1");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_103, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (func_3())
	{
		MISC::SET_BIT(&Global_1357505, 3);
		func_4(0);
	}
	if (HUD::_0xD6BD313CFA41E57A(joaat("INPUT_NEXT_CAMERA")) || HUD::_0xD6BD313CFA41E57A(joaat("INPUT_FOCUS_CAM")))
	{
		bLocal_20 = true;
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
	}
	while (bLocal_102)
	{
		GRAPHICS::_0xC37792A3F9C90771();
		PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_PHOTO_MODE_BACK"));
		if (iLocal_50 != 1)
		{
		}
		else
		{
			func_5();
		}
		if (func_6(Local_103.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1357510, 5))
			{
				func_7(Local_103.f_1[2], 0, 1);
			}
			else
			{
				func_7(Local_103.f_1[2], 1, 1);
			}
		}
		if (func_6(Local_103.f_1[8], 1))
		{
			if (bLocal_394)
			{
				func_7(Local_103.f_1[8], 0, 1);
			}
			else
			{
				func_7(Local_103.f_1[8], 1, 1);
			}
		}
		func_8(2);
		func_8(4);
		func_8(8);
		func_8(16);
		func_8(32);
		func_8(128);
		func_8(256);
		func_8(512);
		func_8(1024);
		func_8(2048);
		func_8(4096);
		func_8(16384);
		func_8(1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
		if (bLocal_102)
		{
			if (func_9(&Local_103))
			{
				bLocal_102 = true;
			}
			else
			{
				bLocal_102 = false;
			}
		}
		func_10(Local_103);
		func_11(&Local_103);
		func_12(&(Local_103.f_90), &(Local_103.f_91), &(Local_103.f_94), &(Local_103.f_95), joaat("INPUT_MOVE_LR"), joaat("INPUT_MOVE_UD"), joaat("INPUT_LOOK_LR"), joaat("INPUT_LOOK_UD"), 2);
		if (func_13(Local_103.f_1[2], 1) || func_13(Local_103.f_1[7], 1))
		{
			iLocal_94 = 1;
			if (func_14(&Local_103) != 3)
			{
				if (func_14(&Local_103) == 6)
				{
					func_15();
					if (AUDIO::_0x4AD019591E94C064("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					iLocal_248 = MISC::GET_GAME_TIMER();
					bLocal_249 = true;
					func_16();
					Global_1357507 = 0;
					func_17(&Local_103, 4);
				}
			}
			else
			{
				func_17(&Local_103, 15);
			}
		}
		func_18(&Local_103);
		iVar0 = func_14(&Local_103);
		if (func_19())
		{
		}
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_50 = 0;
					uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_17(&Local_103, 1);
				}
				else
				{
					if (func_22(&Local_103))
					{
						GRAPHICS::_0xA42EDF1E88734A7E();
						iLocal_50 = 1;
						func_23(&Local_103);
					}
					func_17(&Local_103, 1);
				}
				break;
			case 1:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_24();
				Local_103.f_89 = 0;
				func_25();
				iLocal_31 = MISC::GET_GAME_TIMER();
				iLocal_32 = AUDIO::GET_SOUND_ID();
				iLocal_33 = AUDIO::GET_SOUND_ID();
				iLocal_36 = AUDIO::GET_SOUND_ID();
				iLocal_37 = AUDIO::GET_SOUND_ID();
				iLocal_40 = AUDIO::GET_SOUND_ID();
				iLocal_41 = AUDIO::GET_SOUND_ID();
				func_17(&Local_103, 2);
				ANIMSCENE::_0x7C709C01D43D94CD();
				break;
			case 2:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				if (func_26())
				{
					if (ANIMSCENE::_0x2DB524750DC41ED4())
					{
						if (func_27(iLocal_31, iLocal_22))
						{
							if (func_28())
							{
								func_29(1);
								if (func_30())
								{
									Local_103.f_89 = Global_1357504;
									func_31();
									func_17(&Local_103, 14);
								}
								else
								{
									func_17(&Local_103, 12);
								}
								HUD::_HIDE_HUD_COMPONENT(-1404924319);
								func_32();
							}
						}
					}
				}
				else if (func_27(iLocal_31, iLocal_22) && func_33(Global_35, 1, 0, 0) == joaat("WEAPON_KIT_CAMERA"))
				{
					func_17(&Local_103, 3);
				}
				break;
			case 4:
				func_11(&Local_103);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				if (bLocal_249)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_248) > 500)
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
						CAM::SET_CAM_ACTIVE(Local_103.f_32, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_103.f_32);
						CAM::DESTROY_CAM(Local_103.f_32, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_17(&Local_103, 3);
						func_34();
						bLocal_249 = false;
						func_35();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_240) > 100)
				{
					func_36();
					iLocal_240 = MISC::GET_GAME_TIMER();
				}
				if (func_22(&Local_103))
				{
					func_37(&Local_103);
					func_38(3);
					func_39(1);
					func_23(&Local_103);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_94 == 1 && Global_1357508 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_CAMERA_HANDHELD_USE")))
					{
						iLocal_94 = 0;
					}
					else
					{
						iLocal_94 = 1;
					}
				}
				if (Global_1357508 == 1)
				{
					iLocal_94 = 0;
				}
				if (bLocal_239 && iLocal_94 == 0)
				{
					func_7(Local_103.f_1[0], 1, 1);
					if (func_40(Local_103.f_1[0], 1) || Global_1357508 == 1)
					{
						if (!func_26())
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
						}
						if (Global_1357508 != 1)
						{
						}
						else
						{
							Global_1357508 = 0;
						}
						Global_1357507 = 1;
						func_16();
						HUD::_HIDE_HUD_COMPONENT(-1404924319);
						func_41();
						iLocal_216 = MISC::GET_GAME_TIMER();
						func_17(&Local_103, 5);
					}
				}
				else
				{
					func_7(Local_103.f_1[0], 0, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_219) > 600)
				{
					func_42();
					iLocal_219 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_218)
				{
					func_7(Local_103.f_1[1], 1, 1);
					if (func_40(Local_103.f_1[1], 1))
					{
						if (func_43(Global_35, 0))
						{
						}
						else
						{
							iLocal_245 = 0;
							iLocal_247 = 0;
							func_16();
							func_17(&Local_103, 8);
							if (!func_44(&uLocal_242))
							{
								func_45(&uLocal_242, 1);
							}
							if (AUDIO::_0x4AD019591E94C064("Place_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::_PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_7(Local_103.f_1[1], 0, 1);
				}
				break;
			case 5:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				if (func_46() && (MISC::GET_GAME_TIMER() - iLocal_216) > 500)
				{
					func_47();
					if (!func_26())
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					}
					Local_103.f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					Local_103.f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
					Local_103.f_83 = { Local_103.f_71, Local_103.f_71.f_1, Local_103.f_71.f_2 };
					Local_103.f_77 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_103.f_68, Local_103.f_71.f_2, 0f, 0.3f, 0.5f) };
					Local_103.f_110 = 0;
					Local_103.f_83 = { 0f, 0f, 0f };
					Local_103.f_82 = 0f;
					Local_103.f_81 = 0f;
					Local_103.f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_103.f_77, Local_103.f_83, 65f, false, 2);
					CAM::ATTACH_CAM_TO_PED_BONE(Local_103.f_32, Global_35, 21030, 0f, 0.2f, 0f, true);
					CAM::SET_CAM_NEAR_CLIP(Local_103.f_32, 0.25f);
					Local_103.f_33 = 5f;
					Local_103.f_33.f_1 = 2f;
					Local_103.f_33.f_2 = 128f;
					Local_103.f_33.f_3 = 25f;
					Local_103.f_33.f_4 = 25f;
					Local_103.f_33.f_5 = 60f;
					Local_103.f_33.f_6 = 1;
					Local_103.f_33.f_7 = 0;
					Local_103.f_33.f_8 = 1;
					Local_103.f_33.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_103.f_32, &(Local_103.f_33));
					CAM::_0x9F97E85EC142255E(Local_103.f_32, Local_103.f_110);
					CAM::_0x42ED56B02E05D109(Local_103.f_32, false);
					CAM::SET_CAM_ACTIVE(Local_103.f_32, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::_0x4AD019591E94C064("Expand_Camera", Global_35, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::_PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_42();
					iLocal_219 = MISC::GET_GAME_TIMER();
					func_35();
					func_17(&Local_103, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				if (iLocal_95 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1357509 = 1;
					iLocal_95 = 1;
				}
				if (MISC::IS_BIT_SET(Global_1357510, 6))
				{
				}
				else
				{
					HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_103))
				{
					func_38(6);
					func_23(&Local_103);
				}
				func_48(&Local_103);
				if (iLocal_98 == 0)
				{
					if (func_49(Local_103.f_1[6]) && !func_50(&Local_103, 32))
					{
						func_37(&Local_103);
						func_51(1);
						func_52(&Local_103, 32);
					}
					if (!func_50(&Local_103, 32))
					{
						if (func_49(Local_103.f_1[5]))
						{
							func_53();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_103))
				{
					Local_103.f_1[6] = func_54("CAM_TAKE_PHOTO", joaat("INPUT_CONTEXT_RT"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					func_39(1);
					func_55("CAM_SNAP", 0, 0, 1);
					func_23(&Local_103);
				}
				if (func_56())
				{
					if (!func_50(&Local_103, 16))
					{
						func_17(&Local_103, 3);
					}
					else
					{
						func_17(&Local_103, 16);
					}
				}
				else
				{
					func_57(&Local_103);
				}
				break;
			case 10:
				func_58(&Local_103);
				PAD::_SET_CONTROL_CONTEXT(5, joaat("PHOTOCAMERAONFOOT"));
				iLocal_94 = 1;
				if (iLocal_246 == 0)
				{
					if (func_59(&uLocal_242) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_103.f_32))
						{
							CAM::SET_CAM_ACTIVE(Local_103.f_32, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_103.f_32, false);
						}
						if (!func_26())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_CAMERA"), true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, true, true, false);
						ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_395);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_34();
						iLocal_246 = 1;
					}
				}
				if (func_59(&uLocal_242) > 1000)
				{
					HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
					func_35();
					func_60(&uLocal_242);
					func_15();
					func_17(&Local_103, 3);
				}
				break;
			case 8:
				func_58(&Local_103);
				if (iLocal_245 != 0)
				{
				}
				else if (func_59(&uLocal_242) > 500)
				{
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
					if (!func_26())
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_220, fLocal_231, true, false, true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					}
					func_47();
					bLocal_394 = false;
					iLocal_245 = 1;
				}
				if (iLocal_245 == 1)
				{
					if (iLocal_247 == 0)
					{
						if (func_59(&uLocal_242) > 300)
						{
							iLocal_247 = 1;
							func_61(&Local_103);
						}
					}
					else if (func_59(&uLocal_242) > 1000)
					{
						func_60(&uLocal_242);
						func_62(&Local_103);
						func_35();
						func_17(&Local_103, 9);
					}
				}
				break;
			case 9:
				func_58(&Local_103);
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOCAMERAINUSE"));
				HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_62(&Local_103);
				if (func_40(Local_103.f_1[6], 1) && !func_50(&Local_103, 32))
				{
					func_37(&Local_103);
					func_51(1);
					func_52(&Local_103, 32);
				}
				else if (func_40(Local_103.f_1[1], 1))
				{
					func_17(&Local_103, 8);
				}
				if (!func_50(&Local_103, 32))
				{
					if (func_49(Local_103.f_1[5]))
					{
						func_53();
					}
				}
				break;
			case 7:
				func_17(&Local_103, 12);
				break;
			case 15:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_37(&Local_103);
				func_17(&Local_103, 16);
				break;
			case 16:
				if (func_22(&Local_103))
				{
					func_23(&Local_103);
				}
				func_2();
				func_1(&Local_103, 1);
				if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
				{
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_63())
		{
			if (func_64(&uLocal_259) > 1f)
			{
				func_65();
			}
		}
		if (iVar0 != 12)
		{
		}
		else
		{
			CAM::_0x8505E05FC8822843(0);
			if (bLocal_23)
			{
				if (BUILTIN::TIMERA() > 1200)
				{
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
					{
						GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
					}
					bLocal_23 = false;
				}
			}
			else if (CAM::_0xEF9A3132A0AA6B19())
			{
				BUILTIN::SETTIMERA(0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sLocal_24);
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
					}
				}
				bLocal_23 = true;
			}
			func_66();
			if (func_13(Local_103.f_1[20], 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("reset", "Photo_Mode_Sounds", true, 0);
				}
			}
			fLocal_14 = CAM::_GET_PHOTO_MODE_FOCAL_LENGTH();
			if (fLocal_15 == fLocal_14)
			{
			}
			else
			{
				fLocal_15 = fLocal_14;
				func_32();
			}
			if (func_67(Local_103.f_1[21], 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_up", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(Local_103.f_1[21], 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND("lens_down", "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(Local_103.f_1[22], 0, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (func_67(Local_103.f_1[22], 1, 1))
			{
				if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
				}
			}
			if (CAM::_0x14C4A49E36C29E49())
			{
				if (iLocal_241 != 0)
				{
				}
				else
				{
					if (CAM::_0xF824530B612FE0CE())
					{
						iLocal_241 = 1;
					}
					else
					{
						iLocal_241 = 2;
					}
					func_32();
					func_37(&Local_103);
					func_38(12);
				}
				if (iLocal_241 != 1)
				{
					if (iLocal_241 == 2)
					{
						if (CAM::_0xF824530B612FE0CE())
						{
							iLocal_241 = 1;
							func_32();
							func_37(&Local_103);
							func_38(12);
						}
					}
				}
				else if (!CAM::_0xF824530B612FE0CE())
				{
					iLocal_241 = 2;
					func_32();
					func_37(&Local_103);
					func_38(12);
				}
			}
			else
			{
				iLocal_241 = 0;
			}
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(12);
				func_23(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMB", 1, 0, 0, 0);
			if (iLocal_35 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_33, "zoom_out", "Photo_Mode_Sounds", 1);
					}
					iLocal_35 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_OUT")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_33);
				iLocal_35 = 0;
			}
			if (iLocal_34 == 0)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::_0xCE5D0FFE83939AF1(iLocal_32, "zoom_In", "Photo_Mode_Sounds", 1);
					}
					iLocal_34 = 1;
				}
			}
			else if (PAD::IS_CONTROL_RELEASED(0, joaat("INPUT_PHOTO_MODE_ZOOM_IN")) || CAM::_0x2AB7C81B3F70570C())
			{
				AUDIO::_0x3210BCB36AF7621B(iLocal_32);
				iLocal_34 = 0;
			}
			if (!func_50(&Local_103, 32))
			{
				if (func_13(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_32);
					AUDIO::_0x3210BCB36AF7621B(iLocal_33);
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					func_17(&Local_103, 13);
					func_32();
				}
			}
		}
		if (iVar0 != 13)
		{
		}
		else
		{
			func_66();
			func_68();
			func_69();
			CAM::_0x8505E05FC8822843(1);
			fLocal_16 = CAM::_GET_PHOTO_MODE_DOF();
			if (fLocal_17 != fLocal_16)
			{
				fLocal_17 = fLocal_16;
				func_32();
			}
			fLocal_18 = CAM::_GET_PHOTO_MODE_FOCUS_DISTANCE();
			if (fLocal_19 == fLocal_18)
			{
			}
			else
			{
				fLocal_19 = fLocal_18;
				func_32();
			}
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(13);
				func_23(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PMA", 1, 0, 0, 0);
			if (!func_50(&Local_103, 32))
			{
				if (func_13(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					func_31();
					func_17(&Local_103, 14);
					func_32();
				}
				func_70();
			}
		}
		if (iVar0 != 14)
		{
		}
		else
		{
			func_66();
			CAM::_0x8505E05FC8822843(2);
			if (func_22(&Local_103))
			{
				func_37(&Local_103);
				func_38(14);
				func_23(&Local_103);
			}
			PAD::_SET_CONTROL_CONTEXT(4, joaat("PHOTOMODE"));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-857683846, "CAM_CONG_PME", 1, 0, 0, 0);
			if (!func_50(&Local_103, 32))
			{
				func_71();
				func_72();
			}
			if (!func_50(&Local_103, 32))
			{
				if (func_13(Local_103.f_1[19], 1))
				{
					if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND("effects", "Photo_Mode_Sounds", true, 0);
					}
					AUDIO::_0x3210BCB36AF7621B(iLocal_36);
					AUDIO::_0x3210BCB36AF7621B(iLocal_37);
					AUDIO::_0x3210BCB36AF7621B(iLocal_40);
					AUDIO::_0x3210BCB36AF7621B(iLocal_41);
					func_17(&Local_103, 12);
					func_32();
				}
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("PLAYER_MENU")) > 0)
		{
			bLocal_102 = false;
		}
		if (MISC::IS_BIT_SET(Global_1357505, 8))
		{
			bLocal_102 = false;
		}
	}
	func_2();
	func_1(&Local_103, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	if (func_26())
	{
		Global_1357504 = uParam0->f_89;
		HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
	}
	Global_1357503 = 0;
	func_29(0);
	GRAPHICS::_0xF5793BB386E1FF9C(0);
	ANIMSCENE::_0xCDCD7B2D49AEE73A(0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISPLAY_HUD_COMPONENT(959420967);
	Global_1357507 = 0;
	Global_1357508 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	if (!func_26())
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	}
	STREAMING::REMOVE_CLIP_SET(func_73());
	STREAMING::REMOVE_ANIM_DICT(func_74());
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	func_37(uParam0);
	func_39(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_DATABASE_DELETE("CAMERA");
	if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("CAMERA_PHOTOMODE"))
	{
		func_75();
		Global_1935496.f_127 = 1;
	}
}

void func_2()
{
	if (iLocal_48 == 1)
	{
		_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_97);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_58);
	UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
	UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_400);
	iLocal_400 = 0;
	func_34();
	func_76();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_91);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
	}
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_24);
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_92);
	}
	iLocal_343 = 0;
	while (iLocal_343 < 39)
	{
		GRAPHICS::_0x37D7BDBA89F13959(sLocal_303[iLocal_343]);
		iLocal_343++;
	}
	func_15();
	func_77();
	func_51(0);
}

bool func_3()
{
	return !Global_40.f_12017;
}

void func_4(bool bParam0)
{
	Global_40.f_12017 = !bParam0;
}

void func_5()
{
	Local_103.f_106 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_103.f_106 == 1)
	{
	}
	if (Local_103.f_106 == 0)
	{
		bLocal_49 = false;
		iLocal_51 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		if (MISC::IS_PC_VERSION())
		{
			iLocal_52 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		}
		else
		{
			iLocal_52 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		}
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", " ");
		uLocal_60 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel0", " ");
		uLocal_61 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel1", " ");
		uLocal_62 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel2", " ");
		uLocal_63 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "photoModeLabel3", " ");
		fLocal_19 = CAM::_GET_PHOTO_MODE_FOCUS_DISTANCE();
		func_32();
		iLocal_50 = 0;
		bLocal_54 = true;
		iLocal_55 = MISC::GET_GAME_TIMER();
	}
	else if (Local_103.f_106 == 2)
	{
		bLocal_49 = true;
		uLocal_58 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_59 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uLocal_58, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_50 = 0;
		bLocal_54 = false;
	}
}

bool func_6(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return HUD::_UIPROMPT_IS_ACTIVE(Global_1945938[iVar0 /*18*/].f_3);
}

void func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (bParam1)
	{
		func_80(iParam0, 4);
		func_81(iVar0, 1);
		func_82(iVar0, 1);
	}
	else
	{
		func_83(iParam0, 4);
		func_82(iVar0, 0);
	}
}

void func_8(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

bool func_9(var uParam0)
{
	if (Global_1357509 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1357509 = 0;
		return false;
	}
	if (!func_26())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
			if (PED::_0x7FC84E85D98F063D(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_26())
	{
		if (func_84())
		{
			if (func_85(19) || func_86(Global_1914319.f_16855.f_1))
			{
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!func_26())
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (!func_87(Global_35, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_26())
	{
		if (!func_88(joaat("WEAPON_KIT_CAMERA"), 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (func_14(uParam0) == 8)
		{
		}
		if ((func_14(uParam0) != 8 && func_14(uParam0) != 9) && func_14(uParam0) != 10)
		{
			if (func_33(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_CAMERA"))
			{
				if (func_89(uParam0) == 0)
				{
					return false;
				}
			}
		}
	}
	if (func_90())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!func_26())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
		{
			func_91("CAM_VEH", 10000, 0, 0, 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	return true;
}

void func_10(struct<108> Param0, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PED::SET_PED_RESET_FLAG(Global_35, 173, true);
	if (Param0.f_107 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_HORSE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	if (!Param0.f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	if (func_92(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_0x06D26A96CA1BCA75(iVar0, 3, 0f, 0);
		}
	}
}

void func_11(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((func_14(uParam0) == 8 || func_14(uParam0) == 9) || func_14(uParam0) == 10) || func_14(uParam0) == 5) || func_14(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		func_93(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_31) && CAM::IS_CAM_ACTIVE(uParam0->f_31))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	if (Global_1357503 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_12(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (PAD::_IS_USING_KEYBOARD(iParam8))
	{
		*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam4));
		*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_NORMAL(iParam8, iParam5));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam6) * 250f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(iParam8, iParam7) * 250f));
	}
	else
	{
		*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
		*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
		*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
		*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
	}
}

bool func_13(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

int func_14(var uParam0)
{
	return uParam0->f_107;
}

void func_15()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_16()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_91);
	}
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	func_94(uParam0);
}

void func_18(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_30())
	{
		if (func_6(uParam0->f_1[19], 1))
		{
			func_7(uParam0->f_1[19], 0, 1);
		}
		if (func_6(uParam0->f_1[23], 1))
		{
			func_7(uParam0->f_1[23], 0, 1);
		}
	}
	if (bLocal_30 == 1)
	{
		if (func_6(uParam0->f_1[14], 1) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 3000)
		{
			func_7(uParam0->f_1[14], 1, 1);
		}
		if (func_6(uParam0->f_1[18], 1))
		{
			if ((uParam0->f_108 == 0 && iLocal_50 == 0) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 1000)
			{
				func_7(uParam0->f_1[18], 1, 1);
				if (bLocal_54)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_55) > 2500)
					{
						iLocal_51 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
						func_32();
						iLocal_55 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				func_7(uParam0->f_1[18], 0, 1);
				if (bLocal_30 == 0)
				{
				}
			}
		}
	}
	switch (uParam0->f_108)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_97);
				bLocal_49 = true;
				func_95(uParam0, 2);
				iLocal_48 = 0;
			}
			break;
		case 0:
			if (func_50(uParam0, 32))
			{
				if (!func_26())
				{
					func_37(uParam0);
				}
				if (func_20() || bLocal_49)
				{
					func_95(uParam0, 2);
				}
				else if (iLocal_51 == iLocal_52)
				{
					if (iLocal_97 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_97 = func_96(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_95(uParam0, 1);
						iLocal_48 = 1;
					}
					else
					{
						bLocal_49 = true;
						func_95(uParam0, 2);
					}
				}
				else
				{
					func_95(uParam0, 2);
				}
			}
			if (func_50(uParam0, 128))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_95(uParam0, 7);
			}
			break;
		case 2:
			Local_103.f_112 = 0;
			func_51(0);
			func_95(uParam0, 3);
			iLocal_101 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_101) > 0 || func_26())
			{
				iLocal_101 = MISC::GET_GAME_TIMER();
				if (func_20() || bLocal_49)
				{
					func_95(uParam0, 4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_51++;
					func_32();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_95(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 1)
			{
			}
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xFA91736933AB3D93(1);
				GRAPHICS::_0x8B3296278328B5EB(Local_103.f_89);
				if (func_14(uParam0) == 8 || func_14(uParam0) == 9)
				{
					GRAPHICS::_0x2705D18C11B61046(1);
				}
				else
				{
					GRAPHICS::_0x2705D18C11B61046(0);
				}
				StringCopy(&cVar19, "", 32);
				iVar23 = func_97();
				if (func_98(iVar23))
				{
					MemCopy(&cVar19, {func_99(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_100();
					StringCopy(&cVar19, func_101(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_102();
				if (func_103(iVar29))
				{
					StringCopy(&cVar25, func_104(iVar29), 16);
					StringCopy(&cVar27, func_105(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_53 = 0;
				func_95(uParam0, 6);
			}
			else if (uParam0->f_106 == 2)
			{
				func_95(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_53 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_38(func_14(uParam0));
				func_7(uParam0->f_1[6], 0, 1);
				iLocal_53 = 1;
			}
			uParam0->f_106 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_106 == 0)
			{
				Local_103.f_112 = 1;
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_107();
			}
			else if (uParam0->f_106 == 2)
			{
				Local_103.f_112 = 1;
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_107();
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_101) > 300 || func_26())
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_106(uParam0, 32);
				func_95(uParam0, 0);
				func_38(func_14(uParam0));
				func_108(600, 0);
			}
			break;
		case 7:
			uParam0->f_106 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (uParam0->f_106 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_52(uParam0, 256);
				func_106(uParam0, 128);
				func_95(uParam0, 0);
			}
			else if (uParam0->f_106 == 2)
			{
				func_106(uParam0, 128);
				func_95(uParam0, 0);
			}
			break;
	}
}

bool func_19()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

bool func_20()
{
	return Global_1357506;
}

void func_21()
{
	StringCopy(&cLocal_64, "-", 32);
	StringConCat(&cLocal_64, " / ", 32);
	StringCopy(&cLocal_68, "-", 32);
	StringConCat(&cLocal_64, &cLocal_68, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_64);
}

bool func_22(var uParam0)
{
	return *uParam0;
}

void func_23(var uParam0)
{
	*uParam0 = 0;
}

void func_24()
{
	sLocal_303[0] = "No_PostFX_Applied";
	sLocal_263[0] = "CAM_PM_F_V0";
	sLocal_303[1] = "PhotoMode_FilterVintage01";
	iLocal_344[1] = 2;
	sLocal_263[1] = "CAM_PM_F_V1";
	sLocal_303[2] = "PhotoMode_FilterVintage02";
	iLocal_344[2] = 2;
	sLocal_263[2] = "CAM_PM_F_V2";
	sLocal_303[3] = "PhotoMode_FilterVintage03";
	iLocal_344[3] = 2;
	sLocal_263[3] = "CAM_PM_F_V3";
	sLocal_303[4] = "PhotoMode_FilterVintage04";
	iLocal_344[4] = 2;
	sLocal_263[4] = "CAM_PM_F_V4";
	sLocal_303[5] = "PhotoMode_FilterVintage05";
	iLocal_344[5] = 2;
	sLocal_263[5] = "CAM_PM_F_V5";
	sLocal_303[6] = "PhotoMode_FilterVintage06";
	iLocal_344[6] = 2;
	sLocal_263[6] = "CAM_PM_F_V6";
	sLocal_303[7] = "PhotoMode_FilterVintage07";
	iLocal_344[7] = 2;
	sLocal_263[7] = "CAM_PM_F_V7";
	sLocal_303[8] = "PhotoMode_FilterVintage08";
	iLocal_344[8] = 2;
	sLocal_263[8] = "CAM_PM_F_V8";
	sLocal_303[9] = "PhotoMode_FilterVintage09";
	iLocal_344[9] = 2;
	sLocal_263[9] = "CAM_PM_F_V9";
	sLocal_303[10] = "PhotoMode_FilterVintage10";
	iLocal_344[10] = 2;
	sLocal_263[10] = "CAM_PM_F_V10";
	sLocal_303[11] = "PhotoMode_FilterModern01";
	iLocal_344[11] = 1;
	sLocal_263[11] = "CAM_PM_F_M1";
	sLocal_303[12] = "PhotoMode_FilterModern02";
	iLocal_344[12] = 1;
	sLocal_263[12] = "CAM_PM_F_M2";
	sLocal_303[13] = "PhotoMode_FilterModern03";
	iLocal_344[13] = 1;
	sLocal_263[13] = "CAM_PM_F_M3";
	sLocal_303[14] = "PhotoMode_FilterModern04";
	iLocal_344[14] = 1;
	sLocal_263[14] = "CAM_PM_F_M4";
	sLocal_303[15] = "PhotoMode_FilterModern05";
	iLocal_344[15] = 1;
	sLocal_263[15] = "CAM_PM_F_M5";
	sLocal_303[16] = "PhotoMode_FilterModern06";
	iLocal_344[16] = 1;
	sLocal_263[16] = "CAM_PM_F_M6";
	sLocal_303[17] = "PhotoMode_FilterModern07";
	iLocal_344[17] = 1;
	sLocal_263[17] = "CAM_PM_F_M7";
	sLocal_303[18] = "PhotoMode_FilterModern08";
	iLocal_344[18] = 1;
	sLocal_263[18] = "CAM_PM_F_M8";
	sLocal_303[19] = "PhotoMode_FilterModern09";
	iLocal_344[19] = 1;
	sLocal_263[19] = "CAM_PM_F_M9";
	sLocal_303[20] = "PhotoMode_FilterModern10";
	iLocal_344[20] = 1;
	sLocal_263[20] = "CAM_PM_F_M10";
	sLocal_303[21] = "PhotoMode_FilterGame01";
	iLocal_344[21] = 0;
	sLocal_263[21] = "CAM_PM_F_S1";
	sLocal_303[22] = "PhotoMode_FilterGame02";
	iLocal_344[22] = 0;
	sLocal_263[22] = "CAM_PM_F_S2";
	sLocal_303[23] = "PhotoMode_FilterGame03";
	iLocal_344[23] = 0;
	sLocal_263[23] = "CAM_PM_F_S3";
	sLocal_303[24] = "PhotoMode_FilterGame04";
	iLocal_344[24] = 0;
	sLocal_263[24] = "CAM_PM_F_S4";
	sLocal_303[25] = "PhotoMode_FilterGame05";
	iLocal_344[25] = 0;
	sLocal_263[25] = "CAM_PM_F_S5";
	sLocal_303[26] = "PhotoMode_FilterGame06";
	iLocal_344[26] = 0;
	sLocal_263[26] = "CAM_PM_F_S6";
	sLocal_303[27] = "PhotoMode_FilterGame07";
	iLocal_344[27] = 0;
	sLocal_263[27] = "CAM_PM_F_S7";
	sLocal_303[28] = "PhotoMode_FilterGame08";
	iLocal_344[28] = 0;
	sLocal_263[28] = "CAM_PM_F_S8";
	sLocal_303[29] = "PhotoMode_FilterGame09";
	iLocal_344[29] = 0;
	sLocal_263[29] = "CAM_PM_F_S9";
	sLocal_303[30] = "PhotoMode_FilterGame10";
	iLocal_344[30] = 0;
	sLocal_263[30] = "CAM_PM_F_S10";
	sLocal_303[31] = "PhotoMode_FilterGame11";
	iLocal_344[31] = 0;
	sLocal_263[31] = "CAM_PM_F_S11";
	sLocal_303[32] = "PhotoMode_FilterGame12";
	iLocal_344[32] = 0;
	sLocal_263[32] = "CAM_PM_F_S12";
	sLocal_303[33] = "PhotoMode_FilterGame13";
	iLocal_344[33] = 0;
	sLocal_263[33] = "CAM_PM_F_S13";
	sLocal_303[34] = "PhotoMode_FilterGame14";
	iLocal_344[34] = 0;
	sLocal_263[34] = "CAM_PM_F_S14";
	sLocal_303[35] = "PhotoMode_FilterGame15";
	iLocal_344[35] = 0;
	sLocal_263[35] = "CAM_PM_F_S15";
	sLocal_303[36] = "PhotoMode_FilterGame16";
	iLocal_344[36] = 0;
	sLocal_263[36] = "CAM_PM_F_S16";
	sLocal_303[37] = "PhotoMode_FilterGame17";
	iLocal_344[37] = 0;
	sLocal_263[37] = "CAM_PM_F_S17";
	sLocal_303[38] = "PhotoMode_FilterGame18";
	iLocal_344[38] = 0;
	sLocal_263[38] = "CAM_PM_F_S18";
}

void func_25()
{
	if (func_26())
	{
		HUD::_TEXT_DATABASE_REQUEST("CAMERA");
	}
	else
	{
		HUD::_TEXT_DATABASE_REQUEST("CAMERA");
		STREAMING::REQUEST_ANIM_DICT(func_74());
		STREAMING::REQUEST_CLIP_SET(func_73());
		GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
		GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
	}
}

bool func_26()
{
	return Global_1357503;
}

bool func_27(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_26())
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0) == 0)
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_CLIP_SET_LOADED(func_73()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_74()))
		{
			iVar0 = 0;
		}
		if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
		{
			if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_28()
{
	if (ANIMSCENE::_0xEA41D44A8D42057B())
	{
		return true;
	}
	return false;
}

void func_29(bool bParam0)
{
	if (bParam0)
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(true);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		GRAPHICS::_0xEC3D8C228FE553D7(0);
	}
	else
	{
		ANIMSCENE::_PAUSE_SCRIPT_THREADS(false);
		ANIMSCENE::_0x41AFA5F228B0B6B0();
		GRAPHICS::_0xEC3D8C228FE553D7(1);
	}
}

bool func_30()
{
	MISC::SET_BIT(&Global_1357505, 0);
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_PEEPING_TOM")) > 0)
	{
		if (func_109(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 30f)
		{
			return true;
		}
	}
	if (GRAPHICS::_0x3DA7A10583A4BEC0())
	{
		return true;
	}
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		return true;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		return true;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return true;
	}
	if (CAM::_0xA24C1D341C6E0D53(0, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return true;
	}
	if (func_110())
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEECHERS2_2")) > 0)
	{
		return true;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_NAKED_SWIMMER")) > 0)
	{
		return true;
	}
	if (bLocal_20)
	{
		return true;
	}
	if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
	{
		return true;
	}
	if (CAM::_0x20389408F0E93B9A())
	{
		return true;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || Global_1914319.f_18941.f_17)
	{
		return true;
	}
	MISC::CLEAR_BIT(&Global_1357505, 0);
	return false;
}

void func_31()
{
	if (iLocal_76 == 0)
	{
		Local_103.f_89 = Global_1357504;
		iLocal_76 = 1;
	}
	if (Local_103.f_89 != 0)
	{
		sLocal_92 = sLocal_303[Local_103.f_89];
		func_111();
		func_32();
	}
}

void func_32()
{
	if (bLocal_30 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
	}
	else
	{
		if (func_14(&Local_103) == 12)
		{
			func_112();
		}
		if (func_14(&Local_103) == 13)
		{
			func_113();
		}
		if (func_14(&Local_103) == 14)
		{
			func_114();
		}
		StringCopy(&cLocal_64, "", 32);
		MISC::_INT_TO_STRING(iLocal_51, "%i", &cLocal_64);
		StringConCat(&cLocal_64, " / ", 32);
		StringCopy(&cLocal_68, "", 32);
		MISC::_INT_TO_STRING(iLocal_52, "%i", &cLocal_68);
		StringConCat(&cLocal_64, &cLocal_68, 32);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, &cLocal_64);
	}
}

int func_33(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
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

void func_34()
{
	if (func_26())
	{
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_89);
	}
}

void func_35()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_91))
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sLocal_91);
	}
}

void func_36()
{
	float fVar0;
	vector3 vVar1;

	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar0, 0f, 2f, -0.2f) };
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_239 = false;
		return;
	}
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, vVar1.z, 3167))
	{
		bLocal_239 = true;
	}
	else
	{
		bLocal_239 = false;
	}
}

void func_37(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_78(uParam0->f_1[iVar0]))
		{
			func_115(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_38(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 1);
			func_116(14, 1);
			func_116(15, 1);
			func_116(16, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(20, 1);
			func_116(21, 1);
			func_116(22, 1);
			func_116(17, 0);
			func_116(23, 0);
			func_116(24, 0);
			func_116(25, 0);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 13:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 0);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 1);
			func_116(24, 0);
			func_116(25, 0);
			if (bLocal_11)
			{
				func_116(26, 1);
				func_7(Local_103.f_1[26], 0, 1);
			}
			else
			{
				func_116(26, 1);
				func_7(Local_103.f_1[26], 1, 1);
			}
			func_116(27, 1);
			func_116(28, 1);
			break;
		case 14:
			func_116(6, 0);
			func_116(7, 1);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(4, 0);
			func_116(5, 1);
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(11, 0);
			func_116(12, 0);
			func_116(13, 0);
			func_116(14, 1);
			func_116(15, 0);
			func_116(16, 0);
			func_116(17, 1);
			func_116(18, 1);
			func_116(19, 1);
			func_116(23, 0);
			if (Local_103.f_89 == 0)
			{
				func_116(24, 1);
				func_7(Local_103.f_1[24], 0, 1);
			}
			else
			{
				func_116(24, 1);
				func_7(Local_103.f_1[24], 1, 1);
			}
			func_116(25, 1);
			func_116(26, 0);
			func_116(27, 0);
			func_116(28, 0);
			break;
		case 3:
			func_116(6, 0);
			func_116(3, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(0, 1);
			func_116(1, 1);
			func_116(2, 1);
			break;
		case 6:
			func_116(0, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 8:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 9:
			func_116(0, 0);
			func_116(1, 0);
			func_116(2, 0);
			func_116(5, 1);
			func_116(8, 1);
			func_116(9, 1);
			func_116(3, 1);
			func_116(4, 1);
			func_116(6, 1);
			func_116(7, 1);
			break;
		case 10:
			func_116(2, 0);
			func_116(0, 0);
			func_116(3, 0);
			func_116(1, 0);
			func_116(5, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			func_116(6, 0);
			func_116(9, 0);
			func_116(4, 0);
			break;
		case 7:
			func_116(2, 0);
			func_116(0, 0);
			func_116(6, 0);
			func_116(4, 0);
			func_116(5, 0);
			func_116(1, 0);
			func_116(8, 0);
			func_116(9, 0);
			func_116(7, 0);
			break;
	}
	if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) > 3000)
	{
		func_117(bLocal_30);
	}
	else
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) < 1000)
		{
			func_7(Local_103.f_1[18], 0, 1);
		}
		func_7(Local_103.f_1[14], 0, 1);
	}
}

void func_39(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_40(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_41()
{
	if (iLocal_398 == 0)
	{
		iLocal_398 = 1;
	}
}

void func_42()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar0, 0f, 4f, 0f) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1.x, vVar1.y, (vVar1.z + 50f), &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_223, &uVar5, false);
	if ((vLocal_223.z - fVar4) > 3f)
	{
		bLocal_218 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::_0x50F124E6EF188B22(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_223, 2f) > 0)
	{
		bLocal_218 = false;
		return;
	}
	if ((fVar4 - vLocal_223.z) > 1f)
	{
		bLocal_218 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (func_43(Global_35, 0))
	{
		bLocal_218 = false;
		return;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		bLocal_218 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_218 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_218 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_218 = true;
	}
	else
	{
		bLocal_218 = false;
	}
	if (bLocal_218)
	{
		vLocal_220 = { vLocal_223.x, vLocal_223.y, (vLocal_223.z - 1f) };
		fLocal_231 = fVar0;
		vLocal_226 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_43(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_44(var uParam0)
{
	return func_118(*uParam0, 1);
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1 || !func_44(uParam0))
	{
		func_119(uParam0);
	}
}

bool func_46()
{
	switch (iLocal_398)
	{
		case 0:
			if (iLocal_399 == iLocal_401)
			{
			}
			break;
		case 1:
			iLocal_400 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_399);
			iLocal_398 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_400))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_400, iLocal_401);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_400);
				iLocal_398 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_47()
{
	if (func_26())
	{
	}
	else if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_89))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_89);
	}
}

void func_48(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;

	if (uParam0->f_90 > 0 && IntToFloat(uParam0->f_90) > 89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_90 < 0 && IntToFloat(uParam0->f_90) < -89f)
	{
		uParam0->f_90 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_91 > 0 && IntToFloat(uParam0->f_91) > 89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_91 < 0 && IntToFloat(uParam0->f_91) < -89f)
	{
		uParam0->f_91 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_90 != uParam0->f_92)
	{
		uParam0->f_92 = uParam0->f_90;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_90) - -89f) / (89f - -89f));
		uParam0->f_98 = fVar0;
	}
	else
	{
		uParam0->f_102 = 0f;
	}
	if (uParam0->f_91 != uParam0->f_93)
	{
		uParam0->f_93 = uParam0->f_91;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_91) - -89f) / (89f - -89f));
		uParam0->f_99 = fVar1;
	}
	else
	{
		uParam0->f_103 = 0f;
	}
	vVar6 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	fVar4 = 50f;
	if ((func_120(Global_1347702[85 /*49*/].f_15) || func_120(Global_1347702[86 /*49*/].f_15)) || func_120(Global_1347702[87 /*49*/].f_15))
	{
		fVar5 = -50f;
	}
	else
	{
		fVar5 = -25f;
	}
	if ((func_120(Global_1347702[85 /*49*/].f_15) || func_120(Global_1347702[86 /*49*/].f_15)) || func_120(Global_1347702[87 /*49*/].f_15))
	{
		fVar2 = 38f;
		fVar3 = -40f;
	}
	else
	{
		fVar2 = 68f;
		fVar3 = -85f;
	}
	fVar12 = uParam0->f_81;
	fVar13 = uParam0->f_82;
	fVar11 = -1f;
	if (uParam0->f_94 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_94 = MISC::ABSI(uParam0->f_94);
	}
	fVar9 = ((BUILTIN::TO_FLOAT(uParam0->f_94) - 0f) / (89f - 0f));
	fVar12 = (fVar12 + (fVar9 * fVar11));
	if (fVar12 >= fVar2)
	{
		fVar12 = fVar2;
	}
	else if (fVar12 < fVar3)
	{
		fVar12 = fVar3;
	}
	uParam0->f_81 = fVar12;
	fVar11 = -1f;
	if (uParam0->f_95 <= 0)
	{
		fVar11 = 1f;
		uParam0->f_95 = MISC::ABSI(uParam0->f_95);
	}
	fVar10 = ((BUILTIN::TO_FLOAT(uParam0->f_95) - 0f) / (89f - 0f));
	fVar13 = (fVar13 + (fVar10 * fVar11));
	if (fVar13 >= fVar4)
	{
		fVar13 = fVar4;
	}
	else if (fVar13 < fVar5)
	{
		fVar13 = fVar5;
	}
	uParam0->f_82 = fVar13;
	uParam0->f_83 = { Vector(vVar6.z, 0f, 0f) + Vector(uParam0->f_81, 0f, uParam0->f_82) };
	func_121(uParam0);
	func_122(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, uParam0->f_83, 50f, 0, 1, 1, 2, 0, 0);
	if ((func_120(Global_1347702[85 /*49*/].f_15) || func_120(Global_1347702[86 /*49*/].f_15)) || func_120(Global_1347702[87 /*49*/].f_15))
	{
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_240) > 100)
	{
		if (iLocal_96 == 0)
		{
			fVar14 = ENTITY::GET_ENTITY_HEADING(Global_35);
			vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_223, fVar14, 0f, 0.25f, 0f) };
			if (!ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vVar15.x, vVar15.y, vVar15.z, 3167))
			{
				Global_1357509 = 1;
				iLocal_96 = 1;
			}
		}
		iLocal_240 = MISC::GET_GAME_TIMER();
	}
}

bool func_49(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_79(iParam0);
	iVar1 = Global_1945938[iVar0 /*18*/].f_4;
	return (func_40(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_50(var uParam0, int iParam1)
{
	return (uParam0->f_109 && iParam1) != 0;
}

void func_51(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 || iParam1);
}

void func_53()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_54(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
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
		if (func_123(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
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
				func_124(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

var func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_91(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

bool func_56()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_57(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !func_50(uParam0, 32))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CLICK", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		func_51(1);
		func_52(uParam0, 32);
	}
	return 1;
}

void func_58(var uParam0)
{
	vLocal_223 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_223, vLocal_220, true) > 3f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_220, fLocal_231, true, false, true);
		ENTITY::_SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

int func_59(var uParam0)
{
	if (!func_44(uParam0))
	{
		return 0;
	}
	if (func_125(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_126() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_60(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_61(var uParam0)
{
	if (func_22(uParam0))
	{
		func_38(8);
		func_23(uParam0);
	}
	func_127(uParam0);
	func_128();
	func_129();
	uParam0->f_88 = 0;
	iLocal_392 = 0;
	bLocal_229 = true;
	bLocal_230 = false;
	HUD::_HIDE_HUD_COMPONENT(-1404924319);
}

void func_62(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	func_130(uParam0);
	if (PAD::_0x6CD79468A1E595C6(0))
	{
		vLocal_233 = { vLocal_236 };
		fLocal_232 = 0f;
		fLocal_396 = 0f;
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar1 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_LR")) * 4.5f);
		fVar2 = (PAD::GET_CONTROL_UNBOUND_NORMAL(0, joaat("INPUT_LOOK_UD")) * 4.5f);
		fVar0 = func_131(vLocal_236.z, (vLocal_233.z - fVar1));
		if (fVar0 > 30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.f_2 = (vLocal_236.z - -30f);
		}
		else
		{
			vLocal_233.f_2 = (vLocal_233.z - fVar1);
		}
		fVar0 = func_131(vLocal_236.x, (vLocal_233.x - fVar2));
		if (fVar0 > 30f)
		{
			vLocal_233.x = (vLocal_236.x - 30f);
		}
		else if (fVar0 < -30f)
		{
			vLocal_233.x = (vLocal_236.x - -30f);
		}
		else
		{
			vLocal_233.x = (vLocal_233.x - fVar2);
		}
	}
	else
	{
		if (uParam0->f_94 > 16)
		{
			if ((fLocal_232 - 0.07f) > -10f)
			{
				if (uParam0->f_94 > 100)
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.6f);
					fLocal_232 = (fLocal_232 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z - 0.2f);
					fLocal_232 = (fLocal_232 - 0.07f);
				}
			}
		}
		if (uParam0->f_94 < -16)
		{
			if ((fLocal_232 + 0.07f) < 10f)
			{
				if (uParam0->f_94 < -100)
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.6f);
					fLocal_232 = (fLocal_232 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.f_2 = (vLocal_233.z + 0.2f);
					fLocal_232 = (fLocal_232 + 0.07f);
				}
			}
		}
		if (uParam0->f_95 > 16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_396 - 0.07f) > -10f)
			{
				if (uParam0->f_95 > 100)
				{
					vLocal_233.x = (vLocal_233.x - 0.6f);
					fLocal_396 = (fLocal_396 - (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x - 0.2f);
					fLocal_396 = (fLocal_396 - 0.07f);
				}
			}
		}
		if (uParam0->f_95 < -16)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
			}
			if ((fLocal_396 + 0.07f) < 10f)
			{
				if (uParam0->f_95 < -100)
				{
					vLocal_233.x = (vLocal_233.x + 0.6f);
					fLocal_396 = (fLocal_396 + (0.07f * 3f));
				}
				else
				{
					vLocal_233.x = (vLocal_233.x + 0.2f);
					fLocal_396 = (fLocal_396 + 0.07f);
				}
			}
		}
	}
	if (bLocal_229)
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(Global_35, vLocal_226, 3167))
		{
			bLocal_230 = false;
		}
		else
		{
			bLocal_230 = true;
		}
		bLocal_229 = false;
	}
	if ((func_40(uParam0->f_1[7], 1) || func_43(Global_35, 0)) || bLocal_230)
	{
		if (func_43(Global_35, 0))
		{
		}
		else if (func_132(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		if (AUDIO::_0x4AD019591E94C064("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_246 = 0;
		func_37(uParam0);
		func_17(uParam0, 10);
		func_16();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, "portrait_normal", func_74());
		if (!func_44(&uLocal_242))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_45(&uLocal_242, 1);
		}
	}
	if (func_67(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_262 == 0)
		{
			uParam0->f_87++;
			if (uParam0->f_87 == 8)
			{
				uParam0->f_87 = 0;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_250[uParam0->f_87], func_74());
		}
	}
	if (func_67(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_262 == 0)
		{
			uParam0->f_87 = (uParam0->f_87 - 1);
			if (uParam0->f_87 < 0)
			{
				uParam0->f_87 = 7;
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_35, sLocal_250[uParam0->f_87], func_74());
		}
	}
	uParam0->f_43 = { func_133(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(uParam0->f_43));
	if (bLocal_394 == 0)
	{
		if (func_67(uParam0->f_1[8], 1, 1))
		{
			bLocal_394 = true;
			uParam0->f_88++;
			if (uParam0->f_88 == 7)
			{
				uParam0->f_88 = 0;
			}
			func_134();
		}
	}
	if (bLocal_394 == 0)
	{
		if (func_67(uParam0->f_1[8], 0, 1))
		{
			bLocal_394 = true;
			uParam0->f_88 = (uParam0->f_88 - 1);
			if (uParam0->f_88 < 0)
			{
				uParam0->f_88 = 6;
			}
			func_134();
		}
	}
	if (bLocal_394)
	{
		switch (iLocal_392)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 200)
				{
					iLocal_392 = 2;
				}
				break;
			case 2:
				func_135(uParam0);
				iLocal_392 = 3;
				iLocal_393 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 500)
				{
					iLocal_392 = 4;
					iLocal_393 = MISC::GET_GAME_TIMER();
					func_35();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_393) > 700)
				{
					iLocal_392 = 0;
					bLocal_394 = false;
				}
				break;
			default:
				break;
		}
	}
	func_122(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_32, uParam0->f_77, vLocal_233, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_63()
{
	return iLocal_262;
}

float func_64(var uParam0)
{
	if (!func_44(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_136() - uParam0->f_1);
}

void func_65()
{
	func_60(&uLocal_259);
	iLocal_262 = 0;
}

void func_66()
{
	if (func_13(Local_103.f_1[14], 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("hide_hud", "Photo_Mode_Sounds", true, 0);
		}
		if (bLocal_30)
		{
			bLocal_30 = false;
			func_37(&Local_103);
			func_38(func_14(&Local_103));
			func_117(0);
		}
		else
		{
			bLocal_30 = true;
			func_37(&Local_103);
			func_38(func_14(&Local_103));
			func_117(1);
		}
		func_32();
	}
	if (func_137(Local_103.f_1[7], 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("back", "Photo_Mode_Sounds", true, 0);
		}
		func_138();
		func_17(&Local_103, 15);
	}
	if (bLocal_30)
	{
		if (iLocal_48 == 0)
		{
			if (iLocal_21 == 0)
			{
				if (!func_6(Local_103.f_1[14], 1))
				{
					func_37(&Local_103);
					if (func_14(&Local_103) == 14)
					{
						func_38(14);
					}
					else if (func_14(&Local_103) == 12)
					{
						func_38(12);
					}
					else if (func_14(&Local_103) == 13)
					{
						func_38(13);
					}
					BUILTIN::SETTIMERB(0);
					iLocal_21 = 1;
				}
			}
			else if (BUILTIN::TIMERB() > 2500)
			{
				if (!func_6(Local_103.f_1[14], 1))
				{
					MISC::SET_BIT(&Global_1357505, 1);
					func_138();
					func_17(&Local_103, 15);
				}
				else
				{
					iLocal_21 = 0;
				}
			}
		}
		else
		{
			iLocal_21 = 0;
		}
	}
	else
	{
		iLocal_21 = 0;
	}
	if ((func_49(Local_103.f_1[18]) && !func_50(&Local_103, 32)) && (MISC::_GET_SYSTEM_TIME() - iLocal_22) > 1000)
	{
		BUILTIN::SETTIMERB(0);
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("take_photo", "Photo_Mode_Sounds", true, 0);
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_24))
		{
			GRAPHICS::ANIMPOSTFX_STOP(sLocal_24);
		}
		func_51(1);
		func_52(&Local_103, 32);
	}
	if (!func_50(&Local_103, 32))
	{
		if ((MISC::_GET_SYSTEM_TIME() - iLocal_22) > 500)
		{
			if (func_49(Local_103.f_1[5]))
			{
				func_53();
			}
		}
	}
}

bool func_67(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_68()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) > 0.3f)
	{
		if (bLocal_38 == 0 && fLocal_19 > 0.2f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (fLocal_19 < 0.2f || fLocal_19 == 0.2f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH")) < -0.3f)
	{
		if (bLocal_39 == 0 && fLocal_19 < 49.6f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (fLocal_19 > 49.6f || fLocal_19 == 49.6f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_37);
		bLocal_39 = false;
	}
}

void func_69()
{
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) > 0.3f)
	{
		if (bLocal_42 == 0 && fLocal_17 > 0.1f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_40, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_42 = true;
			}
		}
		else if (fLocal_17 <= 0.1f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_40);
			bLocal_38 = false;
		}
	}
	else if (bLocal_42)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_40);
		bLocal_42 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_DOF")) < -0.3f)
	{
		if ((bLocal_43 == 0 && fLocal_17 < 99.9f) && fLocal_17 > 0f)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_41, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_43 = true;
			}
		}
		else if (fLocal_17 > 99.9f || fLocal_17 < 0f)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_41);
			bLocal_43 = false;
		}
	}
	else if (bLocal_43)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_41);
		bLocal_43 = false;
	}
}

void func_70()
{
	if (func_30())
	{
		if (!bLocal_11)
		{
			return;
		}
	}
	GRAPHICS::_0xF5793BB386E1FF9C(1);
	if (func_67(Local_103.f_1[26], 0, 1))
	{
		if (!bLocal_12)
		{
			GRAPHICS::_0xC8D0611D9A0CF5D3(0.1f);
			fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
			func_32();
		}
	}
	if (func_67(Local_103.f_1[26], 1, 1))
	{
		GRAPHICS::_0xC8D0611D9A0CF5D3(-0.1f);
		fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
		}
		func_32();
	}
	if (func_40(Local_103.f_1[27], 1))
	{
		if (bLocal_11)
		{
			bLocal_11 = false;
			GRAPHICS::_0x5CD6A2CCE5087161(0);
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			}
		}
		else
		{
			bLocal_11 = true;
			GRAPHICS::_0x5CD6A2CCE5087161(1);
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
			}
		}
		func_38(13);
		func_32();
	}
}

void func_71()
{
	if (func_67(Local_103.f_1[24], 0, 1))
	{
		if (fLocal_25 < 1f)
		{
			fLocal_25 = (fLocal_25 + fLocal_27);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_25);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_46, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(Local_103.f_1[24], 1, 1))
	{
		if (fLocal_25 > 0.1f)
		{
			fLocal_25 = (fLocal_25 - fLocal_27);
			GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_25);
			AUDIO::PLAY_SOUND_FRONTEND(sLocal_47, "Photo_Mode_Sounds", false, 2);
			func_32();
		}
	}
	if (func_67(Local_103.f_1[17], 0, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_left", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89 = (Local_103.f_89 - 1);
		if (Local_103.f_89 < 0)
		{
			Local_103.f_89 = 38;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
	if (func_67(Local_103.f_1[17], 1, 1))
	{
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
		{
			AUDIO::PLAY_SOUND_FRONTEND("filter_right", "Photo_Mode_Sounds", true, 0);
		}
		GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_92, fLocal_26);
		fLocal_25 = fLocal_26;
		sLocal_93 = sLocal_303[Local_103.f_89];
		func_76();
		Local_103.f_89++;
		if (Local_103.f_89 == 39)
		{
			Local_103.f_89 = 0;
		}
		if (Local_103.f_89 == 0)
		{
			func_76();
		}
		else
		{
			sLocal_92 = sLocal_303[Local_103.f_89];
			func_111();
		}
		func_139();
		func_38(14);
		func_32();
	}
}

void func_72()
{
	float fVar0;

	if (func_30())
	{
		if (!bLocal_11)
		{
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PauseMenuIn"))
			{
				GRAPHICS::_0x9229ED770975BD9E();
				fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
				bLocal_11 = true;
			}
			return;
		}
	}
	GRAPHICS::_0xF5793BB386E1FF9C(1);
	fVar0 = 0.0125f;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar0 = 0.025f;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) > 0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(-fVar0);
		fLocal_9 = GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
		func_32();
		if (bLocal_38 == 0 && iLocal_29 > 0)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_36, sLocal_44, "Photo_Mode_Sounds", 1);
				bLocal_38 = true;
			}
		}
		else if (iLocal_29 == 0)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_36);
			bLocal_38 = false;
		}
	}
	else if (bLocal_38)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_36);
		bLocal_38 = false;
	}
	if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_PHOTO_MODE_CONTRAST")) < -0.3f)
	{
		GRAPHICS::_0x62B9F9A1272AED80(fVar0);
		fLocal_9 = GRAPHICS::_GET_PHOTO_MODE_CONTRAST();
		func_32();
		if (bLocal_39 == 0 && iLocal_29 < 14)
		{
			if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0))
			{
				AUDIO::_0xCE5D0FFE83939AF1(iLocal_37, sLocal_45, "Photo_Mode_Sounds", 1);
				bLocal_39 = true;
			}
		}
		else if (iLocal_29 == 14)
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_37);
			bLocal_39 = false;
		}
	}
	else if (bLocal_39)
	{
		AUDIO::_0x3210BCB36AF7621B(iLocal_37);
		bLocal_39 = false;
	}
}

char* func_73()
{
	return "facials@gen_male@portrait";
}

char* func_74()
{
	return "FACE_HUMAN@GEN_MALE@PORTRAIT";
}

void func_75()
{
	Global_1935496.f_29 = 0;
}

void func_76()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_92);
	}
}

void func_77()
{
	AUDIO::_0x3210BCB36AF7621B(iLocal_32);
	AUDIO::_0x3210BCB36AF7621B(iLocal_33);
	AUDIO::_0x3210BCB36AF7621B(iLocal_36);
	AUDIO::_0x3210BCB36AF7621B(iLocal_37);
	AUDIO::_0x3210BCB36AF7621B(iLocal_40);
	AUDIO::_0x3210BCB36AF7621B(iLocal_41);
	AUDIO::RELEASE_SOUND_ID(iLocal_32);
	AUDIO::RELEASE_SOUND_ID(iLocal_33);
	AUDIO::RELEASE_SOUND_ID(iLocal_36);
	AUDIO::RELEASE_SOUND_ID(iLocal_37);
	AUDIO::RELEASE_SOUND_ID(iLocal_40);
	AUDIO::RELEASE_SOUND_ID(iLocal_41);
}

bool func_78(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

int func_79(int iParam0)
{
	return iParam0;
}

void func_80(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_81(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_123(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_82(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_84()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

int func_85(int iParam0)
{
	if (func_84())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	int iVar0;

	if (!func_140(iParam0))
	{
		return 0;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return 0;
	}
	iVar0 = func_141(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return 1;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_142(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_142(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_142(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_88(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_143(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_145(iParam0, 1))
		{
			return false;
		}
	}
	return func_146(iParam0, 0, bParam2) >= iParam1;
}

int func_89(var uParam0)
{
	return uParam0->f_108;
}

bool func_90()
{
	return Global_1935689.f_1;
}

var func_91(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_92(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		func_147(4);
	}
	func_147(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_94(var uParam0)
{
	*uParam0 = 1;
}

void func_95(var uParam0, int iParam1)
{
	uParam0->f_108 = iParam1;
}

int func_96(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	var uVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _NAMESPACE77::_0x339E16B41780FC35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_97()
{
	return Global_1894899.f_2;
}

bool func_98(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_99(int iParam0)
{
	char[] cVar0[8];

	if (!func_98(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1888801[iParam0 /*35*/].f_22;
}

int func_100()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

char* func_101(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_102()
{
	return Global_1897952.f_41;
}

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

void func_106(var uParam0, int iParam1)
{
	uParam0->f_109 = (uParam0->f_109 - (uParam0->f_109 && iParam1));
}

void func_107()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_90))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_90);
	}
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_110()
{
	int iVar0;

	if (func_151())
	{
		iVar0 = TASK::_0x804425C4BBD00883(Global_35);
		if (func_152(iVar0) == 2041469314 || func_152(iVar0) == -77448735)
		{
			return false;
		}
		else
		{
			if (func_152(iVar0) == 0)
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COFFEE_DRINKING")) > 0 || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STEW_EATING")) > 0)
				{
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

void func_111()
{
	if (!GRAPHICS::_0xBF2DD155B2ADCD0A(sLocal_92))
	{
		GRAPHICS::_0x5199405EABFBD7F0(sLocal_92);
	}
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_92))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_92);
	}
}

void func_112()
{
	StringCopy(&cLocal_77, "", 64);
	if (iLocal_241 == 1 || iLocal_241 == 0)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_ORBIT"), 64);
	}
	if (iLocal_241 == 2)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_IN_FREE"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_LENS"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_15 == -18.88f)
	{
		StringCopy(&cLocal_77, " ", 64);
	}
	else
	{
		StringCopy(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_15, 1), 64);
	}
	StringConCat(&cLocal_77, "mm", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_113()
{
	if (!bLocal_13)
	{
		GRAPHICS::_0x9229ED770975BD9E();
		fLocal_10 = GRAPHICS::_GET_PHOTO_MODE_EXPOSURE();
		bLocal_13 = true;
	}
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXPOSURE"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_10 * 10f));
	iLocal_28 += 161;
	if (iLocal_28 > 240 || iLocal_28 == 240)
	{
		iLocal_28 = 240;
		bLocal_12 = true;
	}
	else
	{
		bLocal_12 = false;
	}
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_85);
	StringConCat(&cLocal_77, &cLocal_85, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	if (bLocal_11)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKON"), 64);
	}
	else
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_EXLOCKOFF"), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FOCDIST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	StringConCat(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_19, 1), 64);
	StringConCat(&cLocal_77, "m", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_BLUR"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	if (fLocal_17 < 0f && fLocal_17 > -1f)
	{
		StringConCat(&cLocal_77, "0.0", 64);
	}
	else if (fLocal_17 == -1f)
	{
		StringConCat(&cLocal_77, "100.0", 64);
	}
	else
	{
		StringConCat(&cLocal_77, MISC::_0x2B6846401D68E563(fLocal_17, 1), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, &cLocal_77);
}

void func_114()
{
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_CONTRAST"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_9 * 10f));
	iLocal_28 = (iLocal_28 - 6);
	if (iLocal_28 > 14)
	{
		iLocal_28 = 14;
	}
	if (iLocal_28 < 0)
	{
		iLocal_28 = 0;
	}
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_85);
	iLocal_29 = iLocal_28;
	StringConCat(&cLocal_77, &cLocal_85, 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, &cLocal_77);
	StringCopy(&cLocal_77, "", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTSTYLE"), 64);
	StringConCat(&cLocal_77, ":", 64);
	StringConCat(&cLocal_77, " ", 64);
	if (iLocal_344[Local_103.f_89] == 2)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	if (iLocal_344[Local_103.f_89] == 1)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	if (iLocal_344[Local_103.f_89] == 0)
	{
		StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2(sLocal_263[Local_103.f_89]), 64);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, &cLocal_77);
	StringCopy(&cLocal_77, " ", 64);
	StringConCat(&cLocal_77, HUD::_GET_LABEL_TEXT_2("CAM_PM_HUD_FILTINTEN"), 64);
	StringConCat(&cLocal_77, ": ", 64);
	iLocal_28 = BUILTIN::CEIL((fLocal_25 * 100f));
	MISC::_INT_TO_STRING(iLocal_28, "%i", &cLocal_72);
	StringConCat(&cLocal_77, &cLocal_72, 64);
	StringConCat(&cLocal_77, "%", 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, &cLocal_77);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_115(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_78(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_79(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_153(iVar0);
	*uParam0 = 0;
}

void func_116(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_78(Local_103.f_1[iParam0]))
		{
			if (iParam0 == 16)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_CAMERA_EXPRESSION_PREV"), joaat("INPUT_CAMERA_EXPRESSION_NEXT"), 0);
			}
			else if (iParam0 == 17)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_PREV"), joaat("INPUT_PHOTO_MODE_FILTER_NEXT"), 0);
			}
			else if (iParam0 == 24)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP"), joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN"), 0);
			}
			else if (iParam0 == 26)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_EXPOSURE_UP"), joaat("INPUT_PHOTO_MODE_EXPOSURE_DOWN"), 0);
			}
			else if (iParam0 == 13)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_ZOOM_OUT"), joaat("INPUT_PHOTO_MODE_ZOOM_IN"), 0);
			}
			else if (iParam0 == 21)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_LENSE_PREV"), joaat("INPUT_PHOTO_MODE_LENSE_NEXT"), 0);
			}
			else if (iParam0 == 22)
			{
				Local_103.f_1[iParam0] = func_155(func_154(iParam0), joaat("INPUT_PHOTO_MODE_ROTATE_LEFT"), joaat("INPUT_PHOTO_MODE_ROTATE_RIGHT"), 0);
			}
			else if (iParam0 == 25)
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), joaat("INPUT_PHOTO_MODE_CONTRAST"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (iParam0 == 28)
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), joaat("INPUT_PHOTO_MODE_DOF"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, joaat("INPUT_PHOTO_MODE_DOF_UP_ONLY"));
				HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, joaat("INPUT_PHOTO_MODE_DOF_DOWN_ONLY"));
			}
			else if (iParam0 == 3)
			{
				if (Local_103.f_110 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_103.f_1[iParam0] = func_156(sVar0, func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				Local_103.f_1[iParam0] = func_156(func_154(iParam0), func_157(iParam0), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (iParam0 == 4)
			{
				func_158(Local_103.f_1[iParam0], 11, 1, 1);
			}
			if (bLocal_30)
			{
				func_159(Local_103.f_1[iParam0], -857683846, 0, 1);
			}
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, true);
		}
		HUD::_0xF4A5C4509BF923B1(Global_1945938[Local_103.f_1[iParam0] /*18*/].f_3, 6);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	else if (func_78(Local_103.f_1[iParam0]))
	{
		func_115(&(Local_103.f_1[iParam0]), 1, 1);
	}
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		func_32();
	}
	else
	{
		func_138();
	}
	func_160(Local_103.f_1[14], bParam0, 0);
	func_160(Local_103.f_1[15], bParam0, 0);
	func_160(Local_103.f_1[13], bParam0, 0);
	func_160(Local_103.f_1[19], bParam0, 0);
	func_160(Local_103.f_1[20], bParam0, 0);
	func_160(Local_103.f_1[21], bParam0, 0);
	func_160(Local_103.f_1[22], bParam0, 0);
	func_160(Local_103.f_1[5], bParam0, 0);
	func_160(Local_103.f_1[18], bParam0, 0);
	func_160(Local_103.f_1[7], bParam0, 0);
	func_160(Local_103.f_1[23], bParam0, 0);
	func_160(Local_103.f_1[28], bParam0, 0);
	func_160(Local_103.f_1[26], bParam0, 0);
	func_160(Local_103.f_1[27], bParam0, 0);
	func_160(Local_103.f_1[17], bParam0, 0);
	func_160(Local_103.f_1[24], bParam0, 0);
	func_160(Local_103.f_1[25], bParam0, 0);
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_119(var uParam0)
{
	func_161(uParam0, 0f);
}

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_162(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_121(var uParam0)
{
	fLocal_217 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_217 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 60f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 25f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.6f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.6f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_57)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

void func_122(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_98 == 0)
	{
		if (func_49(uParam0->f_1[3]))
		{
			if (AUDIO::_0x4AD019591E94C064("DOF_Change", Global_35, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_99 = MISC::GET_GAME_TIMER();
			iLocal_98 = 1;
			iLocal_100 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_99) > 300 && iLocal_100 == 0)
	{
		if (uParam0->f_110 == 0)
		{
			uParam0->f_110 = 1;
			iVar0 = func_79(Local_103.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_110 = 0;
			iVar1 = func_79(Local_103.f_1[3]);
			HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar1 /*18*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
		iLocal_100 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_99) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_99) > 850)
		{
			iLocal_98 = 0;
			iLocal_100 = 0;
		}
	}
}

bool func_123(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_124(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_81(iParam0, 1);
	func_82(iParam0, 1);
	func_83(iParam0, 128);
}

bool func_125(var uParam0)
{
	return func_118(*uParam0, 2);
}

int func_126()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_127(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_32, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	fLocal_395 = ENTITY::GET_ENTITY_HEADING(Global_35);
	uParam0->f_68 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	uParam0->f_71 = { ENTITY::GET_ENTITY_ROTATION(Global_35, 2) };
	uParam0->f_83 = { uParam0->f_71, uParam0->f_71.f_1, (uParam0->f_71.f_2 - 180f) };
	uParam0->f_77 = { vLocal_226 };
	uParam0->f_110 = 0;
	fLocal_232 = 0f;
	fLocal_396 = 0.5f;
	vLocal_233 = { uParam0->f_83 };
	vLocal_233.x = (vLocal_233.x + 1f);
	vLocal_236 = { vLocal_233 };
	uParam0->f_43.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_43.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		fVar0 = 50f;
		uParam0->f_32 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_77, uParam0->f_83, fVar0, true, 2);
	}
	uParam0->f_33 = 25f;
	uParam0->f_33.f_1 = 2f;
	uParam0->f_33.f_2 = 128f;
	uParam0->f_33.f_3 = 30f;
	uParam0->f_33.f_4 = 30f;
	uParam0->f_33.f_5 = 90f;
	uParam0->f_33.f_6 = 1;
	uParam0->f_33.f_7 = 0;
	uParam0->f_33.f_8 = 1;
	uParam0->f_33.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
	CAM::_0x9F97E85EC142255E(uParam0->f_32, uParam0->f_110);
	CAM::_0x42ED56B02E05D109(uParam0->f_32, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_32, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_128()
{
	sLocal_250[0] = "portrait_normal";
	sLocal_250[1] = "portrait_happy";
	sLocal_250[2] = "portrait_pensive";
	sLocal_250[3] = "portrait_pensive_2";
	sLocal_250[4] = "portrait_relaxed";
	sLocal_250[5] = "portrait_angry";
	sLocal_250[6] = "portrait_angry_2";
	sLocal_250[7] = "portrait_annoyed";
}

void func_129()
{
	iLocal_384[0] = 0;
	iLocal_384[1] = 1;
	iLocal_384[2] = 2;
	iLocal_384[3] = 3;
	iLocal_384[4] = 4;
	iLocal_384[5] = 5;
	iLocal_384[6] = 6;
}

void func_130(var uParam0)
{
	fLocal_217 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_CAMERA_ZOOM"));
	if (fLocal_217 < -0.2f)
	{
		if (uParam0->f_33.f_3 < 90f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 + 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_56)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_In", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_56 = true;
			}
		}
		else if (bLocal_56)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_56 = false;
		}
	}
	else if (bLocal_56)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_56 = false;
	}
	if (fLocal_217 > 0.2f)
	{
		if (uParam0->f_33.f_3 > 30f)
		{
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - (0.9f * 4f));
			}
			else
			{
				uParam0->f_33.f_3 = (uParam0->f_33.f_3 - 0.9f);
			}
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_32, &(uParam0->f_33));
			if (!bLocal_57)
			{
				if (AUDIO::_0x4AD019591E94C064("Zoom_Out", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_57 = true;
			}
		}
		else if (bLocal_57)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_57 = false;
		}
	}
	else if (bLocal_57)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_57 = false;
	}
}

float func_131(float fParam0, float fParam1)
{
	float fVar0;

	fVar0 = ((fParam0 - fParam1) + 180f);
	fVar0 = (fVar0 / 360f);
	fVar0 = (((fVar0 - IntToFloat(BUILTIN::FLOOR(fVar0))) * 360f) - 180f);
	return fVar0;
}

int func_132(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_163(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
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
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
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

Vector3 func_133(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_134()
{
	bLocal_394 = true;
	iLocal_393 = MISC::GET_GAME_TIMER();
	iLocal_392 = 1;
	func_16();
}

void func_135(var uParam0)
{
	func_164(uParam0);
	switch (iLocal_384[uParam0->f_88])
	{
		case 0:
			func_165(Global_35);
			break;
		case 1:
			func_166(joaat("WORLD_HUMAN_STARE_STOIC"), "WORLD_HUMAN_STARE_STOIC_MALE_A");
			break;
		case 2:
			func_166(joaat("WORLD_HUMAN_STERNGUY_IDLES"), "WORLD_HUMAN_STERNGUY");
			break;
		case 3:
			func_166(joaat("WORLD_HUMAN_SMOKE"), "WORLD_HUMAN_SMOKE_MALE_C");
			break;
		case 4:
			func_166(joaat("WORLD_PLAYER_CAMP_FIRE_SQUAT"), "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A");
			break;
		case 5:
			ENTITY::SET_ENTITY_HEADING(Global_35, (fLocal_395 + 180f));
			break;
		case 6:
			func_166(joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A");
			break;
	}
}

float func_136()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_137(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_78(iParam0))
	{
		return false;
	}
	iVar0 = func_79(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_138()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_59, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_60, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_61, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_62, " ");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_63, " ");
}

void func_139()
{
	GRAPHICS::_0x37D7BDBA89F13959(sLocal_93);
}

bool func_140(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_141(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

bool func_142(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_144(int iParam0)
{
	vector3 vVar0;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_143(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_167(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_168("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_169(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_170(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_171(iVar1);
				return true;
			}
			iVar3++;
		}
		func_171(iVar1);
	}
	return false;
}

int func_146(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_167(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_172(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_173(bParam2), iParam0, 0);
	return uVar2;
}

void func_147(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_174(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_175(iParam0))
	{
		return false;
	}
	if (func_176(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_177(iParam0, 1)) || func_178(32768))
	{
		if (!func_177(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_179())
	{
		return false;
	}
	return true;
}

void func_150(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_151()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::_0x038B1F1674F0E242(Global_35))
	{
		return true;
	}
	return false;
}

int func_152(int iParam0)
{
	struct<2> Var0;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_153(int iParam0)
{
	if (!func_180(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

char* func_154(int iParam0)
{
	if (func_26())
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_SAVE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			case 11:
				return "CAM_PM_MOVEMENT";
			case 12:
				return "CAM_PM_CAMERA";
			case 13:
				if (iLocal_241 == 2)
				{
					return "CAM_PM_HEIGHT";
				}
				else
				{
					return "CAM_PM_ZOOM";
				}
				break;
			case 14:
				return "CAM_PM_HUD_TOGGLE";
			case 15:
				return "CAM_PM_ORBIT_TOGGLE";
			case 16:
				return "CAM_PM_DOF";
			case 17:
				return "CAM_PM_FILTERS";
			case 18:
				return "CAM_SAVE_PHOTO";
			case 20:
				return "CAM_PM_RESET";
			case 21:
				return "CAM_PM_S_LENS";
			case 22:
				return "CAM_PM_ROTATE";
			case 23:
				return "CAM_PM_FOCLENGTH";
			case 24:
				return "CAM_PM_FILINTENS";
			case 25:
				return "CAM_PM_CONTRAST";
			case 26:
				return "CAM_PM_EXPOSURE";
			case 27:
				return "CAM_PM_EXPOLOCK";
			case 28:
				return "CAM_PM_APERTURE";
			case 19:
				if (func_14(&Local_103) == 14)
				{
					return "CAM_PM_B_MODE";
				}
				else if (func_14(&Local_103) == 12)
				{
					return "CAM_PM_A_MODE";
				}
				else if (func_14(&Local_103) == 13)
				{
					return "CAM_PM_E_MODE";
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 6:
				return "CAM_TAKE_PHOTO";
			case 2:
				return "CAM_PUT_AWAY";
			case 0:
				return "CAM_HANDHELD";
			case 3:
				return "CAM_FOCUS_LOCK";
			case 1:
				return "CAM_SELFIE";
			case 8:
				return "CAM_POSES";
			case 9:
				return "CAM_EXPRESSIONS";
			case 7:
				return "CAM_BACK";
			case 4:
				return "CAM_ZOOM";
			case 5:
				return "CAM_GALLERY";
			default:
				break;
		}
	}
	return "INVALID_USE_CONTEXT";
}

int func_155(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_123(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_124(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_156(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_123(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_124(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("INPUT_CAMERA_PUT_AWAY");
		case 7:
			return joaat("INPUT_PHOTO_MODE_BACK");
		case 0:
			return joaat("INPUT_CAMERA_HANDHELD_USE");
		case 3:
			return joaat("INPUT_CAMERA_DOF");
		case 1:
			return joaat("INPUT_CAMERA_SELFIE");
		case 4:
			return joaat("INPUT_CAMERA_ZOOM");
		case 8:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 9:
			return joaat("INPUT_CAMERA_POSE_PREV");
		case 6:
			return joaat("INPUT_CAMERA_TAKE_PHOTO");
		case 5:
			return joaat("INPUT_PHOTO_MODE_VIEW_PHOTOS");
		case 11:
			return joaat("INPUT_PHOTO_MODE_MOVE_LR");
		case 12:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 13:
			return joaat("INPUT_PHOTO_MODE_ZOOM_OUT");
		case 14:
			return joaat("INPUT_PHOTO_MODE_TOGGLE_HUD");
		case 15:
			return joaat("INPUT_PHOTO_MODE_CHANGE_CAMERA");
		case 16:
			return joaat("INPUT_CAMERA_EXPRESSION_PREV");
		case 17:
			return joaat("INPUT_PHOTO_MODE_FILTER_PREV");
		case 18:
			return joaat("INPUT_PHOTO_MODE_TAKE_PHOTO");
		case 19:
			return joaat("INPUT_PHOTO_MODE_SWITCH_MODE");
		case 20:
			return joaat("INPUT_PHOTO_MODE_RESET");
		case 21:
			return joaat("INPUT_PHOTO_MODE_LENSE_NEXT");
		case 22:
			return joaat("INPUT_PHOTO_MODE_ROTATE_LEFT");
		case 23:
			return joaat("INPUT_PHOTO_MODE_FOCAL_LENGTH");
		case 24:
			return joaat("INPUT_PHOTO_MODE_FILTER_INTENSITY_UP");
		case 25:
			return joaat("INPUT_PHOTO_MODE_CONTRAST");
		case 26:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_UP");
		case 27:
			return joaat("INPUT_PHOTO_MODE_EXPOSURE_LOCK");
		case 28:
			return joaat("INPUT_PHOTO_MODE_DOF");
		default:
			break;
	}
	return 0;
}

void func_158(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_78(iParam0))
	{
		return;
	}
	iVar0 = func_79(iParam0);
	func_81(iVar0, bParam1);
}

void func_161(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_136() - fParam1);
	func_181(uParam0, 1);
	func_182(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_162(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_184(iParam0);
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_164(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, fLocal_395);
}

void func_165(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
		PED::SET_PED_STEALTH_MOVEMENT(iParam0, 0, 0, 0);
	}
}

void func_166(int iParam0, char* sParam1)
{
	iLocal_397 = TASK::CREATE_SCENARIO_POINT(iParam0, vLocal_220, fLocal_395, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_397, 25, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_397, 23, true);
	TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_397, sParam1, -1, false, true, 0, false, 0f, false);
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_143(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_144(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_185(iParam0, 1399091007))
	{
		func_186(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_168(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_173(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_169(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_170(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_171(int iParam0)
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

int func_172(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_187(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_189(&Var0, func_188(0));
	}
	if (!func_190(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_171(iVar14);
	return uVar15;
}

int func_173(bool bParam0)
{
	if (func_191() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_174(int iParam0, int iParam1)
{
	if (func_191() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_175(int iParam0)
{
	if (func_191() != -1)
	{
		if (func_177(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_177(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_177(iParam0, 65536) && !func_177(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_177(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_177(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_177(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_178(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_179()
{
	return Global_1905944.f_5694;
}

bool func_180(int iParam0)
{
	return func_123(iParam0, 2);
}

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_182(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_183(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_184(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_192(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

bool func_185(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_186(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_188(bool bParam0)
{
	int iVar0;

	iVar0 = func_173(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224215))
		{
			Global_1224215 = { func_194(923904168, func_193(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Global_1224223))
		{
			Global_1224223 = { func_194(923904168, func_193(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_194(923904168, func_193(bParam0), -740156546, 0);
}

void func_189(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_190(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_173(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_191()
{
	return Global_1572887.f_12;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
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

struct<4> func_193(bool bParam0)
{
	return func_194(joaat("CHARACTER"), func_195(), -1591664384, bParam0);
}

struct<4> func_194(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_143(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_173(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_195()
{
	struct<4> Var0;

	return Var0;
}

