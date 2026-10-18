/* speed.exe 008246e8 FUN_008246e8; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00819670 FUN_00819670
 */

int FUN_008246e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 0x24) != 0) {
    *(undefined2 *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  iVar3 = param_2 << 2;
  if (*(int *)(param_1 + 0x20) < param_2) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_0081eae9(*(int *)(param_1 + 0x1c));
    }
    uVar1 = FUN_0081e9e7(iVar3);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(int *)(param_1 + 0x20) = param_2;
  }
  if (*(short *)(param_1 + 0x26) == 0) {
    FUN_00819670(param_4,*(undefined4 *)(param_1 + 0x1c),iVar3);
    *(undefined2 *)(param_1 + 0x24) = 1;
    iVar2 = param_2;
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)(param_1 + 8))
                      (*(undefined4 **)(param_1 + 8),param_2,param_4,param_3,1);
    if (0 < iVar2) {
      FUN_00819670(param_4,param_3,iVar3);
      FUN_00819670(*(undefined4 *)(param_1 + 0x1c),param_3,iVar3);
      *(undefined2 *)(param_1 + 0x26) = 0;
      iVar2 = param_2;
    }
  }
  return iVar2;
}

