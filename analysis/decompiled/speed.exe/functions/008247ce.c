/* speed.exe 008247ce FUN_008247ce; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0081e9e7 FUN_0081e9e7
 */

int FUN_008247ce(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) < param_2) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_0081eae9(*(int *)(param_1 + 0x1c));
    }
    *(int *)(param_1 + 0x20) = param_2;
    uVar3 = FUN_0081e9e7(param_2 << 2);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  iVar4 = (*(code *)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),param_2,param_3,param_4,1);
  if (((0 < iVar4) &&
      (iVar4 = (*(code *)**(undefined4 **)(param_1 + 0xc))
                         (*(undefined4 **)(param_1 + 0xc),param_2,param_3,
                          *(undefined4 *)(param_1 + 0x1c),2), 0 < iVar4)) &&
     (iVar5 = 0, iVar4 = param_2, 0 < param_2)) {
    do {
      iVar1 = iVar5 * 4;
      pfVar2 = (float *)(param_4 + iVar5 * 4);
      iVar5 = iVar5 + 1;
      *pfVar2 = *(float *)(*(int *)(param_1 + 0x1c) + iVar1) + *pfVar2;
    } while (iVar5 < param_2);
  }
  return iVar4;
}

