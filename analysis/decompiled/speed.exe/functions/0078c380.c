/* speed.exe 0078c380 FUN_0078c380; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085ce00 FUN_0085ce00
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

int * __thiscall FUN_0078c380(int *param_1,int param_2)

{
  int *piVar1;
  
  if (*param_1 == 0) {
    return (int *)0x0;
  }
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  piVar1 = (int *)FUN_0085ce00(*param_1);
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (param_2 <= *piVar1)) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    return piVar1 + param_2 * 0x2c + 2;
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return (int *)0x0;
}

