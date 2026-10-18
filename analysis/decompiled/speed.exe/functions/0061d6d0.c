/* speed.exe 0061d6d0 FUN_0061d6d0; analysis pseudocode, not buildable source.
 * calls 0061d350 FUN_0061d350
 * calls 005d0370 FUN_005d0370
 * calls 004655f0 FUN_004655f0
 */

void __thiscall FUN_0061d6d0(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar2 = param_2;
  if (*(int *)(param_1 + 100) != 0) {
    for (piVar1 = (int *)**(int **)(param_1 + 0x60); piVar1 != *(int **)(param_1 + 0x60);
        piVar1 = (int *)*piVar1) {
      if ((undefined4 *)piVar1[2] == param_2) {
        FUN_004655f0(param_2);
        if (piVar1 == *(int **)(param_1 + 0x60)) {
          return;
        }
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        FUN_005d0370(piVar1,0xc,0);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        return;
      }
    }
  }
  uVar3 = param_3 + 7U >> 3;
  if (uVar3 != 0) {
    if (uVar3 < 0x10) {
      *param_2 = *(undefined4 *)(param_1 + 0x10 + uVar3 * 4);
      *(undefined4 **)(param_1 + 0x10 + uVar3 * 4) = param_2;
      return;
    }
    param_2 = (undefined4 *)uVar3;
    puVar4 = (undefined4 *)FUN_0061d350(&param_2);
    *puVar2 = *puVar4;
    puVar4 = (undefined4 *)FUN_0061d350(&param_2);
    *puVar4 = puVar2;
  }
  return;
}

