/* speed.exe 0078e490 FUN_0078e490; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 0083e3a0 FUN_0083e3a0
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __fastcall FUN_0078e490(int *param_1)

{
  undefined4 uVar1;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0083e3a0(*param_1);
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return uVar1;
}

