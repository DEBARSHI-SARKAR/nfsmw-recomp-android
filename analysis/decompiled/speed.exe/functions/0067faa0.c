/* speed.exe 0067faa0 FUN_0067faa0; analysis pseudocode, not buildable source.
 * calls 006745f0 FUN_006745f0
 */

undefined4 * __fastcall FUN_0067faa0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087b268;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008aa31c;
  FUN_006745f0(0x8f8);
  ExceptionList = local_c;
  return param_1;
}

