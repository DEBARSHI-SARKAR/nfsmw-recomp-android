/* speed.exe 00844340 FUN_00844340; analysis pseudocode, not buildable source.
 * calls 00856250 FUN_00856250
 * calls 0078af20 thunk_FUN_004655f0
 * calls 0078af00 FUN_0078af00
 * calls 0084bcb0 GetTickCount
 */

int * FUN_00844340(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (DAT_009c36e4 != (int *)0x0) {
    DAT_009c36e8 = DAT_009c36e8 + 1;
    return DAT_009c36e4;
  }
  uVar5 = (param_1 + -1) * 0x4c + 0x6c;
  piVar1 = (int *)FUN_0078af00(uVar5);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)piVar3 = 0;
      piVar3 = (int *)((int)piVar3 + 1);
    }
    *piVar1 = param_1;
    DVar2 = GetTickCount();
    piVar1[4] = DVar2;
    piVar1[3] = DVar2;
    iVar4 = FUN_00856250();
    piVar1[7] = iVar4;
    if (iVar4 == 0) {
      thunk_FUN_004655f0(piVar1);
      return (int *)0x0;
    }
    DAT_009c36e8 = 1;
    piVar3 = piVar1;
    DAT_009c36e4 = piVar1;
  }
  return piVar3;
}

