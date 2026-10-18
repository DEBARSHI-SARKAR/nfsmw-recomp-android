/* speed.exe 00644630 FUN_00644630; analysis pseudocode, not buildable source.
 * calls 0041c080 FUN_0041c080
 */

undefined4 * __fastcall FUN_00644630(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879c98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008a7e98;
  FUN_0041c080(0x8f8);
  ExceptionList = local_c;
  return param_1;
}

