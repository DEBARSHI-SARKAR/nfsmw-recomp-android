/* speed.exe 0079f690 FUN_0079f690; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls EXTERNAL:00000011 GetTickCount
 * calls 0079f090 FUN_0079f090
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079f690(void)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  
  DAT_009b421c = 0;
  DVar2 = GetTickCount();
  DAT_009b40a0 = DVar2 - _DAT_009b40d8;
  DAT_009b40a4 = DAT_009b40a0;
  _DAT_009b40a8 = DAT_009b40a0;
  _DAT_009b40ac = DAT_009b40a0;
  piVar3 = (int *)FUN_0079f090();
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
  }
  piVar3[1] = (int)&LAB_0079f360;
  piVar3[2] = 0;
  if (iVar1 != 0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  DAT_009b41fc = 1;
  return;
}

