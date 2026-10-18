/* speed.exe 006b9b20 FUN_006b9b20; analysis pseudocode, not buildable source.
 * calls 006b9920 FUN_006b9920
 * calls 005d59f0 FUN_005d59f0
 * calls 006b66b0 FUN_006b66b0
 */

undefined4 * __thiscall FUN_006b9b20(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087df36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006b9920(param_2,param_3);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4) + 0x10;
  }
  FUN_006b66b0(iVar1);
  *param_1 = &PTR_FUN_008ad350;
  param_1[2] = &PTR_LAB_008ad348;
  param_1[0x13] = &PTR_LAB_008ad324;
  param_1[0x15] = &PTR_FUN_008ad320;
  param_1[0x16] = &PTR_LAB_008ad314;
  param_1[0x18] = &PTR_LAB_008ad30c;
  param_1[0x2e] = &PTR_LAB_008ad2fc;
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar2 = FUN_005d59f0(&LAB_00404040);
  param_1[0x30] = uVar2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  ExceptionList = local_c;
  return param_1;
}

