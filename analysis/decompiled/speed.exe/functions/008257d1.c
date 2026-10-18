/* speed.exe 008257d1 FUN_008257d1; analysis pseudocode, not buildable source.
 * calls 0081e022 FUN_0081e022
 * calls 00822050 FUN_00822050
 * calls 00825636 FUN_00825636
 * calls 008267dc FUN_008267dc
 * calls 008256ee FUN_008256ee
 */

int FUN_008257d1(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    param_2 = (*(code *)**(undefined4 **)(param_1 + 8))
                        (*(undefined4 **)(param_1 + 8),200,param_4,param_3,
                         *(undefined1 *)(param_1 + 0x1a));
  }
  else {
    uVar1 = FUN_00825636(param_1,param_2);
    if ((*(int *)(param_1 + 0x20) < 0) ||
       (iVar2 = FUN_0081e022(*(int *)(param_1 + 0x20)), (int)uVar1 <= iVar2)) {
      if (0 < (int)uVar1) {
        if (*(int *)(param_1 + 0x1830) < (int)(uVar1 * 4)) {
          iVar2 = (uVar1 & 0xffffffc0) + 0x40;
          if (*(int *)(param_1 + 0x182c) < iVar2) {
            FUN_008267dc(param_1 + 0x1828,(int *)(param_1 + 0x182c),iVar2,4);
          }
          param_3 = *(int *)(param_1 + 0x1828) + 8;
        }
        iVar2 = (*(code *)**(undefined4 **)(param_1 + 8))
                          (*(undefined4 **)(param_1 + 8),uVar1,param_4,param_3,
                           *(undefined1 *)(param_1 + 0x1a));
        if (iVar2 < 1) {
          return iVar2;
        }
      }
      iVar2 = FUN_008256ee(param_1,param_2,param_3,param_4);
      if (iVar2 < param_2) {
        FUN_00822050(param_4 + iVar2 * 4,(param_2 - iVar2) * 4);
      }
    }
    else {
      param_2 = 0;
    }
  }
  return param_2;
}

