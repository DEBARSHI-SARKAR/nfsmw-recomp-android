/* speed.exe 00790a60 FUN_00790a60; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085ce00 FUN_0085ce00
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 0085cd80 FUN_0085cd80
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __fastcall FUN_00790a60(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    piVar1 = (int *)FUN_0085ce00(*param_1);
    if (0 < *piVar1) {
      FUN_007ec1bd();
      InterlockedIncrement((LONG *)&DAT_009b42d4);
      if (*param_1 != 0) {
        piVar1 = (int *)FUN_0085ce00(*param_1);
        if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
          FUN_0085cd80(*param_1);
          param_1[3] = 0;
        }
      }
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
      return;
    }
  }
  return;
}

