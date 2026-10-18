/* speed.exe 007ba3f0 FUN_007ba3f0; analysis pseudocode, not buildable source.
 * calls 00573870 FUN_00573870
 * calls 0059bc40 FUN_0059bc40
 * calls 007aa730 FUN_007aa730
 * calls 00525220 FUN_00525220
 */

undefined4 * __thiscall FUN_007ba3f0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008835a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7e04;
  FUN_007aa730();
  FUN_00573870();
  FUN_00525220(param_1[4],0x3c458c1,0xcdf0cc03);
  FUN_00525220(param_1[4],0xb5c74226,0xcdf0cc03);
  ExceptionList = local_c;
  return param_1;
}

