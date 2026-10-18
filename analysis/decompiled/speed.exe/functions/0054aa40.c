/* speed.exe 0054aa40 FUN_0054aa40; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 0059bc40 FUN_0059bc40
 * calls 00521e60 FUN_00521e60
 */

undefined4 * __thiscall FUN_0054aa40(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870358;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e868;
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_00525220(param_1[4],0xb71b576d,0xcdf0cc03);
  FUN_00521e60();
  ExceptionList = local_c;
  return param_1;
}

