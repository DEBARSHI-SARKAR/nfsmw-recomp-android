/* speed.exe 005a1840 FUN_005a1840; analysis pseudocode, not buildable source.
 * calls 0058dae0 FUN_0058dae0
 * calls 00586290 FUN_00586290
 * calls 00595f80 FUN_00595f80
 */

undefined4 * __thiscall FUN_005a1840(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008735a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_008a26b0;
  param_1[0xcb] = 0;
  local_4 = 0;
  param_1[199] = *(undefined4 *)(param_2 + 4);
  DAT_0091d4a8 = DAT_00925b14;
  FUN_0058dae0();
  FUN_00595f80();
  ExceptionList = local_c;
  return param_1;
}

