/* speed.exe 00796220 FUN_00796220; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 00794e70 FUN_00794e70
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

int __fastcall FUN_00796220(int param_1)

{
  int *piVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = param_1;
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  piVar1 = (int *)FUN_00794e70(&local_4,&stack0x00000004);
  if (*piVar1 != *(int *)(param_1 + 4)) {
    iVar2 = *piVar1 + 0x10;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return iVar2;
}

