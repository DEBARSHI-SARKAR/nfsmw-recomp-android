/* speed.exe 0044b3a0 FUN_0044b3a0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0044b3a0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  while (piVar1 != (int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x14) == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x14) + -4);
    }
    iVar2 = puVar3[1];
    piVar1 = (int *)puVar3[2];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    piVar1 = *(int **)(param_1 + 0x10);
  }
  return;
}

