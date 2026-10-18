/* speed.exe 0078e530 FUN_0078e530; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

uint __fastcall FUN_0078e530(int param_1)

{
  char cVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  cVar1 = *(char *)(param_1 + 0xc);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return -(uint)(cVar1 != '\0') & param_1 + 0xcU;
}

