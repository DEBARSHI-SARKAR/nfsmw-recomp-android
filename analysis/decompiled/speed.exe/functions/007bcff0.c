/* speed.exe 007bcff0 FUN_007bcff0; analysis pseudocode, not buildable source.
 * calls 007bcf80 FUN_007bcf80
 * calls 007a6c60 FUN_007a6c60
 */

void __fastcall FUN_007bcff0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008836e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7ea4;
  local_4 = 0;
  if ((DAT_009b9eb0 != '\0') && (*(char *)(param_1 + 0x72) != '\0')) {
    FUN_007a6c60();
  }
  local_4 = 0xffffffff;
  FUN_007bcf80();
  ExceptionList = local_c;
  return;
}

