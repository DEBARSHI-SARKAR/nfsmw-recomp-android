/* speed.exe 0067c220 FUN_0067c220; analysis pseudocode, not buildable source.
 * calls 00678ad0 FUN_00678ad0
 * calls 0066b8b0 FUN_0066b8b0
 * calls 00672d30 FUN_00672d30
 * calls 00677a80 FUN_00677a80
 */

void FUN_0067c220(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  if (((*(byte *)(param_1 + 0x10) & 1) != 0) && (piVar3 = &DAT_008f87a0, DAT_008f87a8 != 0)) {
    while (*piVar3 != param_2) {
      piVar1 = piVar3 + 9;
      piVar3 = piVar3 + 7;
      if (*piVar1 == 0) {
        return;
      }
    }
    if ((piVar3[2] != 0) && (cVar2 = FUN_0066b8b0(param_1,param_2), cVar2 != '\0')) {
      iVar4 = FUN_00672d30(param_1,param_2);
      FUN_00677a80();
      if (0 < iVar4) {
        FUN_00678ad0(param_1,param_2,iVar4);
      }
    }
  }
  return;
}

