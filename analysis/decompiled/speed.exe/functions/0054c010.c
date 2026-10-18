/* speed.exe 0054c010 FUN_0054c010; analysis pseudocode, not buildable source.
 * calls 0053f470 FUN_0053f470
 * calls 00586290 FUN_00586290
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0054c010(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089b320;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  _DAT_0091ca9c = 0;
  _DAT_0091caa0 = 0;
  _DAT_0091caa4 = 0;
  _DAT_0091caa8 = 0;
  local_4 = 0;
  FUN_0053f470();
  ExceptionList = local_c;
  return param_1;
}

