/* speed.exe 00432d50 FUN_00432d50; analysis pseudocode, not buildable source.
 * calls 00430080 FUN_00430080
 * calls 007c5700 FUN_007c5700
 */

undefined4 * __thiscall FUN_00432d50(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00868668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007c5700();
  *param_1 = &PTR_FUN_008bf29c;
  param_1[8] = 0;
  param_1[9] = 0xf;
  local_4 = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00430080(param_2,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

