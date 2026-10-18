/* speed.exe 004660f0 FUN_004660f0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00465e60 FUN_00465e60
 */

void __thiscall FUN_004660f0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != (int *)0x0) {
    if (*param_1 != 0) {
      iVar1 = *param_2;
      piVar2 = (int *)param_2[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
    }
    if (((*(byte *)(param_2 + 5) & 8) != 0) && (0 < param_2[6])) {
      FUN_00465e60(0);
    }
    do {
      piVar2 = (int *)param_2[2];
      FUN_004655f0(param_2);
      param_2 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return;
}

