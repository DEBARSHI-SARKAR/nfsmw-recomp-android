/* speed.exe 00678530 FUN_00678530; analysis pseudocode, not buildable source.
 * calls 0066b8b0 FUN_0066b8b0
 * calls 00672d30 FUN_00672d30
 * calls 00678150 FUN_00678150
 * calls 00677a80 FUN_00677a80
 */

void FUN_00678530(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  if ((((*(byte *)(param_1 + 0x10) & 1) != 0) && (iVar3 = FUN_00672d30(param_1,param_2), iVar3 != 0)
      ) && (piVar4 = &DAT_008f87a0, DAT_008f87a8 != 0)) {
    while (*piVar4 != param_2) {
      piVar1 = piVar4 + 9;
      piVar4 = piVar4 + 7;
      if (*piVar1 == 0) {
        return;
      }
    }
    if (piVar4[2] != 0) {
      cVar2 = FUN_0066b8b0(param_1,param_2);
      FUN_00677a80();
      if (cVar2 != '\0') {
        FUN_00678150(param_1,param_2);
      }
    }
  }
  return;
}

