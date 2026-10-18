/* speed.exe 00606000 FUN_00606000; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 */

undefined4 FUN_00606000(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    piVar1 = (int *)FUN_00605950();
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
  }
  iVar2 = *(int *)(param_1 + 8) + -8;
  if (*(int *)(*(int *)(param_1 + 8) + -8) == 0) {
    iVar2 = *(int *)(param_1 + 0x10) + 0x34;
  }
  if ((*piVar1 != 5) && (*piVar1 != 7)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
    return 0;
  }
  *(undefined4 *)(piVar1[1] + 8) = *(undefined4 *)(iVar2 + 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return 1;
}

