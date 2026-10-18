/* speed.exe 00546650 FUN_00546650; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0052cbc0 FUN_0052cbc0
 */

undefined4 * __thiscall FUN_00546650(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e5d0;
  FUN_0052cbc0();
  ExceptionList = local_c;
  return param_1;
}

