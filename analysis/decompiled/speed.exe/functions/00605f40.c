/* speed.exe 00605f40 FUN_00605f40; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 */

undefined4 FUN_00605f40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 < 1) {
    piVar2 = (int *)FUN_00605950();
  }
  else {
    piVar2 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    if (*(int **)(param_1 + 8) <= piVar2) {
      return 0;
    }
  }
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 5) {
      iVar3 = *(int *)(piVar2[1] + 8);
    }
    else {
      if (*piVar2 != 7) {
        return 0;
      }
      iVar3 = *(int *)(piVar2[1] + 8);
    }
    if ((iVar3 != 0) && (iVar3 != *(int *)(*(int *)(param_1 + 0x10) + 0x38))) {
      puVar1 = *(undefined4 **)(param_1 + 8);
      *puVar1 = 5;
      puVar1[1] = iVar3;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
      return 1;
    }
  }
  return 0;
}

