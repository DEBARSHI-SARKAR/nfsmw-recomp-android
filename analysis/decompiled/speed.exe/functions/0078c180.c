/* speed.exe 0078c180 FUN_0078c180; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_0078c180(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  if (iVar1 != 0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  return;
}

