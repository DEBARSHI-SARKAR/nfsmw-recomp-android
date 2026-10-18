/* speed.exe 00830640 FUN_00830640; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00830640(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 0) {
    return 0xfffffff8;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x6c))();
  if (iVar1 <= param_2) {
    return 0xfffffff8;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 300) + 0x74))(param_2);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x124) != 0) {
      iVar2 = (**(code **)(*DAT_009c29a8 + 0x1c))
                        (*(undefined4 *)(param_1 + 0x120),(undefined4 *)(iVar1 + 0x20));
      if (iVar2 == 0) {
        return 0xffffd8f1;
      }
      *(undefined4 *)(param_1 + 0x120) = 0xbedfaced;
      uVar3 = (**(code **)(**(int **)(param_1 + 300) + 0x7c))(param_2,*(undefined4 *)(iVar1 + 0x20))
      ;
      *(undefined4 *)(param_1 + 0x128) = uVar3;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    if (-1 < *(int *)(param_1 + 0x11c)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x80))(param_2);
      if (iVar2 == 0) {
        return 0xffffd8f1;
      }
      (**(code **)(**(int **)(param_1 + 300) + 0x84))(param_2,*(undefined4 *)(param_1 + 0x128));
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    return 0;
  }
  return 0xfffffff8;
}

