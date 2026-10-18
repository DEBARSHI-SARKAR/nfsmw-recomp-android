/* speed.exe 0078c240 FUN_0078c240; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085ce00 FUN_0085ce00
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __fastcall FUN_0078c240(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
    puVar2 = (undefined4 *)FUN_0085ce00(*param_1);
    if (puVar2 != (undefined4 *)0x0) {
      uVar1 = *puVar2;
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
      return uVar1;
    }
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  return 0;
}

