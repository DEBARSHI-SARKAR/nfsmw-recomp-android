/* speed.exe 0072d5a0 FUN_0072d5a0; analysis pseudocode, not buildable source.
 * calls 00463ca0 FUN_00463ca0
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0072d5a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void **ppvVar6;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_0088055b;
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = (int *)(param_1 + 8);
  local_14 = 0;
  ppvVar6 = &local_1c;
  local_1c = ExceptionList;
  while (ExceptionList = ppvVar6, piVar2 != piVar1) {
    piVar2 = *(int **)(*piVar1 + 8);
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    if ((((int *)piVar2[0xb] != (int *)0x0) && (iVar3 = *(int *)piVar2[0xb], iVar3 != 0)) &&
       (*(undefined4 **)(iVar3 + 0x2c) != (undefined4 *)0x0)) {
      **(undefined4 **)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    piVar4 = (int *)piVar2[10];
    iVar3 = *piVar4;
    piVar5 = (int *)piVar4[1];
    *piVar5 = iVar3;
    *(int **)(iVar3 + 4) = piVar5;
    FUN_00466440(piVar4);
    FUN_00463ca0(DAT_009a39f4,piVar2);
    ppvVar6 = ExceptionList;
    piVar2 = (int *)*piVar1;
  }
  piVar2 = (int *)*piVar1;
  local_14 = 0xffffffff;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)*piVar1;
  }
  ExceptionList = local_1c;
  return;
}

