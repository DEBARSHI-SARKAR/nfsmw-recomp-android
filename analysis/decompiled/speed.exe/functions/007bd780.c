/* speed.exe 007bd780 FUN_007bd780; analysis pseudocode, not buildable source.
 * calls 007b3f60 FUN_007b3f60
 * calls 007bcf80 FUN_007bcf80
 * calls 007a6c60 FUN_007a6c60
 */

void __fastcall FUN_007bd780(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00883736;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7ec4;
  local_4 = 1;
  if ((DAT_009b9eb0 != '\0') && (*(char *)(param_1 + 0x73) != '\0')) {
    FUN_007a6c60();
  }
  local_4 = local_4 & 0xffffff00;
  FUN_007b3f60();
  local_4 = 0xffffffff;
  FUN_007bcf80();
  ExceptionList = local_c;
  return;
}

