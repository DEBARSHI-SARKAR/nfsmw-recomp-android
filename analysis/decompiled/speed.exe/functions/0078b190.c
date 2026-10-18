/* speed.exe 0078b190 FUN_0078b190; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0045ce70 FUN_0045ce70
 * calls 006df8e0 FUN_006df8e0
 * calls 0045ce40 FUN_0045ce40
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078b190(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1 != 0) {
    FUN_007ec1bd();
    InterlockedIncrement((LONG *)&DAT_009b42d4);
    uVar1 = FUN_0045ce40();
    iVar3 = 0;
    do {
      FUN_006df8e0();
      uVar2 = FUN_0045ce40();
      fVar4 = (float10)FUN_0045ce70(uVar1,uVar2);
      iVar3 = iVar3 + 1;
      if (1000000 < iVar3) break;
    } while (fVar4 * (float10)_DAT_00890d60 <= (float10)_DAT_0089096c);
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
  }
  return;
}

