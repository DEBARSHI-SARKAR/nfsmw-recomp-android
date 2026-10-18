/* speed.exe 00483f30 FUN_00483f30; analysis pseudocode, not buildable source.
 * calls 00478e50 FUN_00478e50
 */

undefined4 * __fastcall FUN_00483f30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086a928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008952b4;
  FUN_00478e50(2);
  ExceptionList = local_c;
  return param_1;
}

