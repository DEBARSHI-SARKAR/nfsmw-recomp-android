/* speed.exe 0044c140 FUN_0044c140; analysis pseudocode, not buildable source.
 * calls 00466410 FUN_00466410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044c140(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00466410();
  if (piVar2 != (int *)0x0) {
    piVar2[2] = param_2;
    piVar1 = *(int **)(param_1 + 4);
    *piVar1 = (int)piVar2;
    *(int **)(param_1 + 4) = piVar2;
    *piVar2 = param_1;
    piVar2[1] = (int)piVar1;
    return;
  }
  _DAT_00000004 = *(undefined4 **)(param_1 + 4);
  *_DAT_00000004 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  _DAT_00000000 = param_1;
  return;
}

