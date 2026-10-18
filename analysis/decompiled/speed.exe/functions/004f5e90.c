/* speed.exe 004f5e90 FUN_004f5e90; analysis pseudocode, not buildable source.
 * calls 004eb0f0 FUN_004eb0f0
 * calls 005cc240 FUN_005cc240
 * calls 004b0280 FUN_004b0280
 */

undefined4 * __fastcall FUN_004f5e90(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d6f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_009142d8 = 0;
  DAT_009142dc = 0;
  param_1[9] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00899664;
  FUN_004b0280();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005cc240("FRONT_BARRIER");
  uVar1 = FUN_004eb0f0(param_1,&LAB_004dc840);
  param_1[0x15] = uVar1;
  FUN_005cc240("FRONT_BARRIER_HIT");
  uVar1 = FUN_004eb0f0(param_1,FUN_004e69b0);
  param_1[0x16] = uVar1;
  param_1[0x14] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

