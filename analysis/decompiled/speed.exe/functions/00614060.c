/* speed.exe 00614060 FUN_00614060; analysis pseudocode, not buildable source.
 * calls 00613fd0 FUN_00613fd0
 */

undefined4 FUN_00614060(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_00613fd0(param_1);
  iVar4 = *(int *)(param_2 + 0x1c);
  iVar2 = iVar2 + 1;
  if (iVar2 < iVar4) {
    piVar3 = (int *)(*(int *)(param_2 + 0xc) + iVar2 * 8);
    do {
      if (*piVar3 != 0) {
        *param_3 = 3;
        param_3[1] = (float)(iVar2 + 1);
        iVar4 = *(int *)(param_2 + 0xc);
        param_3[2] = *(undefined4 *)(iVar4 + iVar2 * 8);
        param_3[3] = *(undefined4 *)(iVar4 + iVar2 * 8 + 4);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar2 < iVar4);
  }
  iVar2 = iVar2 - iVar4;
  iVar4 = 1 << (*(byte *)(param_2 + 7) & 0x1f);
  if (iVar2 < iVar4) {
    iVar1 = *(int *)(param_2 + 0x10);
    piVar3 = (int *)(iVar1 + 8 + iVar2 * 0x14);
    do {
      if (*piVar3 != 0) {
        iVar2 = iVar2 * 0x14;
        *param_3 = *(undefined4 *)(iVar1 + iVar2);
        param_3[1] = *(undefined4 *)(iVar1 + 4 + iVar2);
        iVar4 = *(int *)(param_2 + 0x10);
        param_3[2] = *(undefined4 *)(iVar4 + 8 + iVar2);
        param_3[3] = *(undefined4 *)(iVar4 + iVar2 + 0xc);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < iVar4);
  }
  return 0;
}

