/* speed.exe 007ba4a0 FUN_007ba4a0; analysis pseudocode, not buildable source.
 * calls 0059bc40 FUN_0059bc40
 * calls 007aa900 FUN_007aa900
 * calls 007a2f20 FUN_007a2f20
 */

undefined4 * __thiscall FUN_007ba4a0(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008835c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7e18;
  FUN_007aa900();
  FUN_007a2f20();
  ExceptionList = local_c;
  return param_1;
}

