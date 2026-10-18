/* speed.exe 004b9bb0 FUN_004b9bb0; analysis pseudocode, not buildable source.
 * calls 004eb610 FUN_004eb610
 * calls 0072cc80 FUN_0072cc80
 */

undefined4 * __fastcall FUN_004b9bb0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004eb610();
  local_4 = 0;
  *param_1 = &PTR_FUN_00896fa8;
  FUN_0072cc80(&DAT_004afa70,0x40000);
  *(undefined1 *)(param_1 + 0x49) = 0;
  ExceptionList = local_c;
  return param_1;
}

