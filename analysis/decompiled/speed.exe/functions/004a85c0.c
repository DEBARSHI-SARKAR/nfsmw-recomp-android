/* speed.exe 004a85c0 FUN_004a85c0; analysis pseudocode, not buildable source.
 * calls 004a07c0 FUN_004a07c0
 * calls 004a07b0 FUN_004a07b0
 */

void FUN_004a85c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004a07b0(param_1 + -0x18);
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + -0x18);
    FUN_004a07c0(piVar1);
    (**(code **)(*piVar1 + 0x40))(iVar2);
    *(int **)(param_1 + 0x10) = piVar1;
  }
  return;
}

