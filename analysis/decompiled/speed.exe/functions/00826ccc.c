/* speed.exe 00826ccc FUN_00826ccc; analysis pseudocode, not buildable source.
 * calls 00822050 FUN_00822050
 * calls 0081e092 FUN_0081e092
 * calls 0081e1e8 FUN_0081e1e8
 * calls 00828b03 FUN_00828b03
 * calls 00828b2f FUN_00828b2f
 * calls 00828c53 FUN_00828c53
 */

int FUN_00826ccc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  short *psVar2;
  float local_18;
  float local_14;
  undefined1 local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_0081e1e8(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38),
                 *(int *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  while (0 < param_2) {
    iVar1 = FUN_00828b2f(&param_4,param_2);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + iVar1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar1;
    local_8 = local_8 + iVar1;
    param_4 = param_4 + iVar1 * 4;
    if (iVar1 < param_2) {
      param_2 = param_2 - iVar1;
      psVar2 = (short *)FUN_0081e092(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38)
                                     ,(int *)(param_1 + 0x24),local_10);
      *(short **)(param_1 + 0x20) = psVar2;
      if (psVar2 == (short *)0x0) {
        if ((0 < param_2) && (*(int *)(param_1 + 0x34) != 0)) {
          FUN_00822050(param_4,param_2 * 4);
        }
        param_2 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x2c) < 2) {
          local_c = 1;
        }
        if (local_c != 0) {
          local_18 = (float)(int)*psVar2;
          local_14 = (float)(int)psVar2[1];
          FUN_00828c53(&local_18);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
        }
        iVar1 = *(int *)(param_1 + 0x24);
        *(undefined4 *)(param_1 + 0x28) = 0;
        FUN_00828b03(*(undefined4 *)(param_1 + 0x20),iVar1 << 2,iVar1);
      }
    }
    else {
      param_2 = param_2 - iVar1;
    }
  }
  return local_8;
}

