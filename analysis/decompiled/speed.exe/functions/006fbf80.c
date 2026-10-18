/* speed.exe 006fbf80 FUN_006fbf80; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006fb9d0 FUN_006fb9d0
 * calls 006f3630 FUN_006f3630
 * calls 006f3d20 FUN_006f3d20
 */

undefined4 __thiscall FUN_006fbf80(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 == (int *)0x0) {
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if ((iVar1 != 0) && (*(int *)((int)param_2 + 4) == *(int *)(iVar1 + 4))) {
    return 0;
  }
  piVar3 = (int *)FUN_005d59f0(&LAB_00402820);
  if (piVar3 != (int *)0x0) {
    for (puVar4 = (undefined4 *)**(undefined4 **)(param_1 + 8);
        (puVar4 != *(undefined4 **)(param_1 + 8) && ((int *)puVar4[2] != piVar3));
        puVar4 = (undefined4 *)*puVar4) {
    }
    if (puVar4 == *(undefined4 **)(param_1 + 8)) {
      param_2 = piVar3;
      FUN_006fb9d0(&param_2);
      cVar2 = (**(code **)(*piVar3 + 0xc))(*(undefined4 *)(param_1 + 0x10));
      if ((cVar2 == '\0') &&
         (cVar2 = (**(code **)(*piVar3 + 4))(*(undefined4 *)(param_1 + 0x10)), cVar2 == '\0')) {
        puVar4 = (undefined4 *)
                 FUN_006f3d20(&stack0xfffffff8,**(undefined4 **)(param_1 + 8),
                              *(undefined4 **)(param_1 + 8),&stack0x00000000);
        FUN_006f3630(&stack0x00000000,*puVar4);
        return 0;
      }
      (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(piVar3);
      return 1;
    }
  }
  return 0;
}

