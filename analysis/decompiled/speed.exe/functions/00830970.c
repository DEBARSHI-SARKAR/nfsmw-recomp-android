/* speed.exe 00830970 FUN_00830970; analysis pseudocode, not buildable source.
 * calls 00830890 FUN_00830890
 */

undefined4 FUN_00830970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  
  iVar3 = 0x7ffffff;
  local_8 = -1;
  iVar4 = 0;
  iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x6c))();
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x74))(iVar4);
      if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x24), -1 < iVar1)) && (iVar1 < iVar3)) {
        iVar3 = iVar1;
        local_8 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x6c))();
    } while (iVar4 < iVar1);
    if (local_8 != -1) {
      uVar2 = FUN_00830890(param_1,local_8);
      return uVar2;
    }
  }
  return 0;
}

