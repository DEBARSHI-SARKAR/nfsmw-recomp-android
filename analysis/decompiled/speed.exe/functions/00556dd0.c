/* speed.exe 00556dd0 FUN_00556dd0; analysis pseudocode, not buildable source.
 * calls 00791f10 FUN_00791f10
 * calls 0054b730 FUN_0054b730
 * calls 00586290 FUN_00586290
 * calls 00796d30 FUN_00796d30
 * calls 0051a2f0 FUN_0051a2f0
 * calls 0056e340 FUN_0056e340
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_00556dd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870ba3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e908;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  FUN_0051a2f0();
  param_1[0x9c] = 0;
  param_1[0x9d] = 3;
  param_1[0x9e] = 0xffffffff;
  param_1[0x9f] = 0xffffffff;
  param_1[0xa0] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)(DAT_0091cae0 + 1) = 0;
  FUN_00796d30();
  FUN_00791f10();
  param_1[0xd] = 0x34fa2c1;
  param_1[0xe] = 0xb94fd70e;
  param_1[0xf] = 0x6f547e4c;
  if ((DAT_0091ca87 == '\0') && (DAT_0091ca88 == '\0')) {
    uVar1 = param_1[4];
    uVar2 = FUN_0056e340();
    FUN_005252d0(uVar1,0x7326e44c,&DAT_008941f8,uVar2);
  }
  else {
    FUN_005252d0(param_1[4],0x7326e44c,&DAT_008941f8,s_PlraQlraRlraSlraotherplayer_008f3300 + 0x10);
  }
  FUN_0054b730();
  ExceptionList = pvStack_c;
  return param_1;
}

