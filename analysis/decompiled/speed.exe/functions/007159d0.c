/* speed.exe 007159d0 FUN_007159d0; analysis pseudocode, not buildable source.
 * calls 004cc9e0 FUN_004cc9e0
 * calls 00713670 FUN_00713670
 * calls 0070c490 FUN_0070c490
 * calls 0070b0b0 FUN_0070b0b0
 */

void __thiscall FUN_007159d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if (((*(int *)(param_1 + 0x5c) != 0) &&
      (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 3 != 0)) &&
     (piVar1 = (int *)FUN_004cc9e0(param_2), piVar1 != (int *)0x0)) {
    uVar2 = (**(code **)(*piVar1 + 0x30))();
    FUN_0070c490(uVar2);
    piVar5 = *(int **)(param_1 + 0xec);
    if (((piVar5 != (int *)0x0) && (*(int *)(param_1 + 0xf0) - (int)piVar5 >> 2 != 0)) &&
       (piVar5 != *(int **)(param_1 + 0xf0))) {
      do {
        if ((int *)*piVar5 != (int *)0x0) {
          iVar3 = (**(code **)(*(int *)*piVar5 + 0x28))();
          iVar4 = (**(code **)(*piVar1 + 0x28))();
          if (iVar3 == iVar4) {
            FUN_0070b0b0(&param_2,piVar5);
            break;
          }
        }
        piVar5 = piVar5 + 1;
      } while (piVar5 != *(int **)(param_1 + 0xf0));
    }
    if (*(int **)(param_1 + 0xfc) != (int *)0x0) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x28))();
      iVar4 = (**(code **)(*piVar1 + 0x28))();
      if (iVar3 == iVar4) {
        *(undefined4 *)(param_1 + 0xfc) = 0;
      }
    }
    if (*(int **)(param_1 + 0xdc) == piVar1) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
    if (*(int **)(param_1 + 0xe0) == piVar1) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    if (*(int **)(param_1 + 0x100) == piVar1) {
      *(undefined4 *)(param_1 + 0x100) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x1fc) + 0x20))(piVar1);
    (**(code **)(*piVar1 + 0x30))();
    FUN_00713670(&stack0x00000000);
    (**(code **)*piVar1)(1);
  }
  return;
}

