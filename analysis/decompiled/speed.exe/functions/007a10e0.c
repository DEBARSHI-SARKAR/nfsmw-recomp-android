/* speed.exe 007a10e0 FUN_007a10e0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078c380 FUN_0078c380
 * calls 0078b190 FUN_0078b190
 * calls 0078c240 FUN_0078c240
 * calls 00652ad0 _malloc
 * calls 0079f090 FUN_0079f090
 * calls 007a0890 FUN_007a0890
 * calls 00652b10 thunk_FUN_007c7250
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078ef00 FUN_0078ef00
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_007a10e0(void)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < DAT_009b4220) {
    piVar1 = (int *)FUN_0079f090();
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_007ec1bd();
      InterlockedIncrement((LONG *)&DAT_009b42d4);
    }
    piVar1[1] = 0;
    piVar1[2] = 0;
    if (iVar2 != 0) {
      InterlockedDecrement((LONG *)&DAT_009b42d4);
      FUN_007ec1c8();
    }
    FUN_007a0890();
    FUN_0078ef00();
    DAT_00905dfc = 0xffffffff;
    DAT_009b4228 = 0;
    FUN_0079f090();
    iVar2 = FUN_0078c240();
    pvVar3 = _malloc(iVar2 * 4);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar4 = iVar5;
        FUN_0079f090(iVar5);
        iVar4 = FUN_0078c380(iVar4);
        if (*(int *)(iVar4 + 0x88) == 3) {
          *(undefined4 *)((int)pvVar3 + iVar6 * 4) = *(undefined4 *)(iVar4 + 0x9c);
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    FUN_0078b190(pvVar3,iVar6);
    thunk_FUN_007c7250(pvVar3);
    DAT_009b4220 = 0;
  }
  return;
}

