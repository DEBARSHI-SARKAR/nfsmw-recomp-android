/* speed.exe 004f5360 FUN_004f5360; analysis pseudocode, not buildable source.
 * calls 004eb060 FUN_004eb060
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_004f5360(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d538;
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
  local_4 = 0;
  *param_1 = &PTR_FUN_00899320;
  FUN_005cc240(&DAT_00894b1c);
  uVar1 = FUN_004eb060(param_1,FUN_004ebd90);
  param_1[0xd] = uVar1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  ExceptionList = local_c;
  return param_1;
}

