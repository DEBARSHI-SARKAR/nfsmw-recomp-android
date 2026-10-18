/* speed.exe 0060b060 FUN_0060b060; analysis pseudocode, not buildable source.
 * calls 00607ee0 FUN_00607ee0
 * calls 00605950 FUN_00605950
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0060b060(int param_1,int param_2)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  if (param_2 < 1) {
    piVar1 = (int *)FUN_00605950();
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    if (*(int **)(param_1 + 8) <= piVar1) goto LAB_0060b07b;
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 3) {
      piVar1 = (int *)FUN_00607ee0(piVar1,local_8);
      if (piVar1 == (int *)0x0) goto LAB_0060b07b;
    }
    return (float10)(float)piVar1[1];
  }
LAB_0060b07b:
  return (float10)_DAT_00890968;
}

