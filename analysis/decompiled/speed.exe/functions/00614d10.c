/* speed.exe 00614d10 FUN_00614d10; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 * calls 00614c50 FUN_00614c50
 */

int FUN_00614d10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    piVar1 = (int *)FUN_00605950();
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    if (*(int **)(param_1 + 8) <= piVar1) {
      return 0;
    }
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if ((*piVar1 != 4) && (iVar2 = FUN_00614c50(param_1,piVar1), iVar2 == 0)) {
    return 0;
  }
  return piVar1[1] + 0x10;
}

