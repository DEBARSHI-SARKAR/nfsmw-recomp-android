/* speed.exe 006935a0 FUN_006935a0; analysis pseudocode, not buildable source.
 * calls 006fc5f0 FUN_006fc5f0
 * calls 006698a0 FUN_006698a0
 * calls 005d7930 FUN_005d7930
 */

undefined4 * __thiscall
FUN_006935a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087bf46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006fc5f0(param_2,param_4);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 4;
  }
  puVar1 = param_1 + 0x25;
  *puVar1 = &PTR_FUN_00890970;
  param_1[0x26] = puVar2;
  FUN_005d7930();
  *puVar1 = &PTR_FUN_008a93b8;
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_008ab304;
  param_1[2] = &PTR_LAB_008ab2fc;
  param_1[0xb] = &PTR_LAB_008ab2e0;
  param_1[0xd] = &PTR_LAB_008ab260;
  param_1[0x10] = &PTR_LAB_008ab258;
  *puVar1 = &PTR_LAB_008ab250;
  param_1[0x28] = 0;
  FUN_006698a0(param_5);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = param_3;
  DAT_00937808 = DAT_00937808 + 1;
  ExceptionList = local_c;
  return param_1;
}

