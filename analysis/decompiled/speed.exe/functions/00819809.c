/* speed.exe 00819809 FUN_00819809; analysis pseudocode, not buildable source.
 * calls 00831696 FUN_00831696
 */

undefined4 FUN_00819809(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 8) == '\0') {
    piVar5 = (int *)(param_1 + 0xc);
  }
  else {
    piVar5 = (int *)(param_1 + 0xc + (uint)*(byte *)(param_1 + 9) * 8);
    iVar6 = 0;
    piVar3 = piVar5;
    if (*(byte *)(param_1 + 9) != 0) {
      do {
        piVar3 = piVar3 + 1;
        iVar4 = *(int *)(param_1 + 0xc + iVar6 * 8);
        iVar1 = *piVar3;
        iVar2 = *(int *)(param_1 + 0x10 + iVar6 * 8);
        if ((iVar4 <= iVar1) && (iVar4 = iVar1, iVar2 < iVar1)) {
          iVar4 = iVar2;
        }
        *piVar3 = iVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uint)*(byte *)(param_1 + 9));
    }
  }
  if (*piVar5 != 0) {
    FUN_00831696(param_1,piVar5 + 1);
  }
  return 0;
}

