/* speed.exe 00546fc0 FUN_00546fc0; analysis pseudocode, not buildable source.
 * calls 0052e0c0 FUN_0052e0c0
 * calls 00593920 FUN_00593920
 */

undefined4 * __thiscall FUN_00546fc0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870098;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e668;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  FUN_0052e0c0();
  ExceptionList = local_c;
  return param_1;
}

