/* speed.exe 0042e4a0 FUN_0042e4a0; analysis pseudocode, not buildable source.
 * calls 005d7930 FUN_005d7930
 * calls 004245e0 FUN_004245e0
 */

undefined4 * __thiscall FUN_0042e4a0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868328;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00890970;
  param_1[1] = param_2;
  FUN_005d7930(&LAB_00405020,param_1);
  local_4 = 0;
  FUN_004245e0();
  *param_1 = &PTR_FUN_0089188c;
  ExceptionList = local_c;
  return param_1;
}

