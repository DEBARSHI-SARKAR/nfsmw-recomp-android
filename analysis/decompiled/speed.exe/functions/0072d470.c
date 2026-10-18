/* speed.exe 0072d470 FUN_0072d470; analysis pseudocode, not buildable source.
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0072d470(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (((*(int **)(param_1 + 0x2c) != (int *)0x0) && (iVar1 = **(int **)(param_1 + 0x2c), iVar1 != 0)
      ) && (*(undefined4 **)(iVar1 + 0x2c) != (undefined4 *)0x0)) {
    **(undefined4 **)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  piVar2 = *(int **)(param_1 + 0x28);
  iVar1 = *piVar2;
  piVar3 = (int *)piVar2[1];
  *piVar3 = iVar1;
  *(int **)(iVar1 + 4) = piVar3;
  FUN_00466440(piVar2);
  return;
}

