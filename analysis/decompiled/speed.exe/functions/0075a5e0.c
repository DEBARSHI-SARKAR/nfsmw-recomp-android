/* speed.exe 0075a5e0 FUN_0075a5e0; analysis pseudocode, not buildable source.
 * calls 007585b0 FUN_007585b0
 */

void __fastcall FUN_0075a5e0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar1 = (int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  piVar4 = (int *)*piVar1;
  while (piVar4 != piVar1) {
    if (*piVar1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(*piVar1 + -4);
    }
    (**(code **)(*piVar4 + 8))();
    if (piVar4[3] != 0) {
      iVar3 = piVar4[1];
      piVar5 = (int *)piVar4[2];
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
    }
    piVar4[3] = 0;
    if (piVar4[4] != 0) {
      piVar5 = piVar4 + 1;
      iVar3 = FUN_007585b0();
      puVar2 = *(undefined4 **)(iVar3 + 4);
      *puVar2 = piVar5;
      *(int **)(iVar3 + 4) = piVar5;
      piVar4[2] = (int)puVar2;
      *piVar5 = iVar3;
    }
    piVar4 = (int *)*piVar1;
  }
  return;
}

