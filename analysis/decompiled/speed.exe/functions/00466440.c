/* speed.exe 00466440 FUN_00466440; analysis pseudocode, not buildable source.
 * calls 004660f0 FUN_004660f0
 */

void FUN_00466440(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(DAT_0090e648 + 0x18);
  piVar1 = (int *)(DAT_0090e648 + 0x18);
  puVar3 = (undefined4 *)(DAT_0090e648 + 0x10);
  *param_1 = *puVar3;
  *puVar3 = param_1;
  *piVar1 = iVar2 + -1;
  if ((DAT_0090e64c != 0) && (DAT_0090e648 != 0)) {
    if (*(int *)(DAT_0090e648 + 0x18) == 0) {
      FUN_004660f0(DAT_0090e648);
      DAT_0090e648 = 0;
      return;
    }
    DAT_0090e64c = 1;
  }
  return;
}

