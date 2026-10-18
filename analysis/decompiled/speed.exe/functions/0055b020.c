/* speed.exe 0055b020 FUN_0055b020; analysis pseudocode, not buildable source.
 * calls 005484b0 FUN_005484b0
 * calls 00507dc0 FUN_00507dc0
 * calls 00586290 FUN_00586290
 */

undefined4 * __thiscall FUN_0055b020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870e63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089c3fc;
  uVar1 = *param_2;
  local_4 = 0;
  param_1[0xe] = &PTR_FUN_0089c3f8;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = uVar1;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_00507dc0("Global\\Rivals.bin",&LAB_00551040,param_1 + 0xe,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005484b0();
  ExceptionList = local_c;
  return param_1;
}

