/* speed.exe 00731b10 FUN_00731b10; analysis pseudocode, not buildable source.
 * calls 00729640 FUN_00729640
 * calls 00731870 FUN_00731870
 */

void FUN_00731b10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_100 [128];
  
  iVar2 = FUN_00731870(local_100,0x80,param_1);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if ((((-1 < local_100[iVar3]) && (*(int *)(&DAT_009a3bb0 + local_100[iVar3] * 4) != 0)) &&
          (iVar1 = *(int *)(*(int *)(&DAT_009a3bb0 + local_100[iVar3] * 4) + 4), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x28) != 0)) {
        FUN_00729640(param_1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

