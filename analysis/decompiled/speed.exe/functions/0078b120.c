/* speed.exe 0078b120 FUN_0078b120; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083f690 FUN_0083f690
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 FUN_0078b120(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  iVar1 = FUN_0083f690(param_1,param_2,1);
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  if (iVar1 != 0) {
    *(bool *)param_3 = *(char *)(param_2 + 6) == '\x05';
    return 1;
  }
  return 0;
}

