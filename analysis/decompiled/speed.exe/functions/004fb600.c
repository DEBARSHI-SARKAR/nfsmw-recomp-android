/* speed.exe 004fb600 FUN_004fb600; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fb600(int param_1,undefined2 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = &DAT_00914b60;
  piVar2 = (int *)0x0;
  while (((piVar2 == (int *)0x0 && (piVar3 = piVar1, *piVar1 == 0)) ||
         (piVar3 = piVar2, *piVar1 != param_1))) {
    piVar1 = piVar1 + 2;
    piVar2 = piVar3;
    if (0x91510f < (int)piVar1) {
      _DAT_00915fb8 = _DAT_00915fb8 + 1;
      *piVar3 = param_1;
      *(undefined2 *)(piVar3 + 1) = param_2;
      *(undefined2 *)((int)piVar3 + 6) = 1;
      return;
    }
  }
  *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
  return;
}

