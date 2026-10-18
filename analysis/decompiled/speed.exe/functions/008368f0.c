/* speed.exe 008368f0 FUN_008368f0; analysis pseudocode, not buildable source.
 * calls 0083e390 FUN_0083e390
 * calls 0083e2f0 FUN_0083e2f0
 * calls 0083e190 FUN_0083e190
 */

void FUN_008368f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    iVar1 = FUN_0083e390(*(int *)(param_1 + 0xcc));
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = FUN_0083e2f0(*(undefined4 *)(param_1 + 0xcc),iVar1);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 4))(iVar2);
      }
    }
    FUN_0083e190(*(undefined4 *)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}

