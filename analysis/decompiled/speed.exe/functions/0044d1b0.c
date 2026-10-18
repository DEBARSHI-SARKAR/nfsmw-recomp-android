/* speed.exe 0044d1b0 FUN_0044d1b0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

undefined4 * __fastcall FUN_0044d1b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00869a2b;
  local_c = ExceptionList;
  puVar1 = param_1 + 4;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008938dc;
  param_1[3] = 0;
  *puVar1 = puVar1;
  param_1[5] = puVar1;
  local_4 = 0;
  uVar2 = FUN_00460bf0("WorldAnimations");
  param_1[3] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

