/* speed.exe 0054b5e0 FUN_0054b5e0; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 0059bc40 FUN_0059bc40
 * calls 0053cfe0 FUN_0053cfe0
 */

undefined4 * __thiscall FUN_0054b5e0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e8d0;
  FUN_00525220(param_1[4],0xb71b576d,0xc5e9f93a);
  FUN_0053cfe0();
  DAT_0091ca86 = 0;
  ExceptionList = local_c;
  return param_1;
}

