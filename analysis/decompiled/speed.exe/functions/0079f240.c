/* speed.exe 0079f240 FUN_0079f240; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078b190 FUN_0078b190
 * calls 0079f090 FUN_0079f090
 * calls 007940f0 FUN_007940f0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 00735c10 FUN_00735c10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079f240(void)

{
  int iVar1;
  int *piVar2;
  
  if (0 < DAT_009b41fc) {
    piVar2 = (int *)FUN_0079f090();
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_007ec1bd();
      InterlockedIncrement((LONG *)&DAT_009b42d4);
    }
    piVar2[1] = 0;
    piVar2[2] = 0;
    if (iVar1 != 0) {
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
    }
    if ((DAT_009b4218 != 0) && (*(int *)(DAT_009b4218 + 0x88) == 3)) {
      FUN_007940f0(8);
      FUN_0078b190(DAT_009b4218 + 0x9c,1);
    }
    if (DAT_00905de4 != -1) {
      FUN_00735c10(DAT_00905de4,0);
    }
    _DAT_00905dd8 = 0xffffffff;
    DAT_00905ddc = 0xffffffff;
    DAT_00905de4 = -1;
    _DAT_009b41f8 = 0;
    _DAT_00905de0 = 0xbf800000;
    _DAT_009b4210 = 0;
    _DAT_009b4200 = 0;
    _DAT_009b4204 = 0;
    _DAT_009b4208 = 0;
    DAT_009b4214 = 0;
    DAT_009b4218 = 0;
    DAT_009b41fc = 0;
  }
  return;
}

