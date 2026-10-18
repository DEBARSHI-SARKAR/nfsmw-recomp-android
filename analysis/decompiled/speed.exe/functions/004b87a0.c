/* speed.exe 004b87a0 FUN_004b87a0; analysis pseudocode, not buildable source.
 * calls 004aaee0 FUN_004aaee0
 * calls 00456cb0 FUN_00456cb0
 */

undefined4 * __thiscall FUN_004b87a0(undefined4 *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b64b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00896f64;
  FUN_004aaee0(param_2);
  local_4 = 0;
  FUN_00456cb0(param_2 + 0x34,0,0);
  ExceptionList = local_c;
  return param_1;
}

