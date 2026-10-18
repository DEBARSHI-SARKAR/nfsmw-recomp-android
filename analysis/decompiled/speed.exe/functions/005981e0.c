/* speed.exe 005981e0 FUN_005981e0; analysis pseudocode, not buildable source.
 * calls 00508b10 FUN_00508b10
 * calls 00524850 FUN_00524850
 * calls 00460bf0 FUN_00460bf0
 * calls 00586290 FUN_00586290
 * calls 00514c70 FUN_00514c70
 */

undefined4 * __thiscall FUN_005981e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a1d74;
  local_4 = 0;
  param_1[0xb] = 0;
  param_2 = FUN_00460bf0("DEMO_DISC_MARKETING_BLURB");
  FUN_00508b10(&param_2,1,&LAB_005981a0,0,0);
  uVar1 = FUN_00524850(param_1[4],0x505e82bf);
  FUN_00514c70(uVar1);
  ExceptionList = local_c;
  return param_1;
}

