/* speed.exe 004f4af0 FUN_004f4af0; analysis pseudocode, not buildable source.
 * calls 004ca430 FUN_004ca430
 */

undefined4 __fastcall FUN_004f4af0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (**(code **)(*piVar1 + 0x2c))();
    if (piVar1[4] != 0) {
      *(undefined4 *)(piVar1[4] + 0x3c) = 0;
    }
    FUN_004ca430(piVar1);
    if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)piVar1[3];
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
  }
  for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (**(code **)(*piVar1 + 0x2c))();
    if ((undefined4 *)piVar1[3] != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)piVar1[3];
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return 1;
}

