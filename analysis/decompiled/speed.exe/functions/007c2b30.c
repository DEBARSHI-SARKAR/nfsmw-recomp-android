/* speed.exe 007c2b30 FUN_007c2b30; analysis pseudocode, not buildable source.
 * calls 0052a600 FUN_0052a600
 * calls 007aa190 FUN_007aa190
 * calls 007bcf80 FUN_007bcf80
 */

void __fastcall FUN_007c2b30(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00883b36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b8068;
  local_4 = 1;
  param_1[0x86] = 0;
  FUN_0052a600();
  local_4 = local_4 & 0xffffff00;
  FUN_007aa190();
  local_4 = 0xffffffff;
  FUN_007bcf80();
  ExceptionList = local_c;
  return;
}

