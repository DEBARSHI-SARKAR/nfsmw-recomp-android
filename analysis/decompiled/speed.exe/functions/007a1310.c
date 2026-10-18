/* speed.exe 007a1310 FUN_007a1310; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007a0060 FUN_007a0060
 * calls 0079f090 FUN_0079f090
 * calls 007ec1bd FUN_007ec1bd
 * calls 007924d0 FUN_007924d0
 * calls 0078ee80 FUN_0078ee80
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_007a1310(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_0078ee80();
  piVar2 = (int *)FUN_0079f090();
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
  }
  piVar2[1] = (int)&LAB_007a12c0;
  piVar2[2] = 0;
  if (iVar1 != 0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  DAT_00905dfc = FUN_007924d0();
  FUN_007a0060(1);
  return;
}

