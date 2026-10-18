/* speed.exe 00547050 FUN_00547050; analysis pseudocode, not buildable source.
 * calls 00586290 FUN_00586290
 * calls 0052e450 FUN_0052e450
 */

undefined4 * __thiscall FUN_00547050(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008700b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089e678;
  local_4 = 0;
  param_1[0xb] = *(undefined4 *)(param_2 + 8);
  FUN_0052e450();
  ExceptionList = local_c;
  return param_1;
}

