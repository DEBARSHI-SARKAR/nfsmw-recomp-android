/* speed.exe 004b4470 FUN_004b4470; analysis pseudocode, not buildable source.
 * calls 0065f740 FUN_0065f740
 * calls 0065f830 FUN_0065f830
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0065f7a0 FUN_0065f7a0
 * calls 0065aed0 FUN_0065aed0
 * calls 004647c0 FUN_004647c0
 * calls 0065f680 FUN_0065f680
 * calls 00465a70 FUN_00465a70
 * calls 004e0760 FUN_004e0760
 */

void __thiscall FUN_004b4470(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_34 [52];
  
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar2 = FUN_004e0760(param_2);
  if (iVar2 != -1) {
    FUN_004647c0(local_34,"sound\\NISRevData\\%s.bin",*(undefined4 *)(&DAT_00913f38 + iVar2 * 0xc));
    iVar2 = FUN_0065f7a0(local_34);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x88) = 0;
      return;
    }
    uVar3 = FUN_0065f740(local_34);
    iVar2 = FUN_0065f680(local_34,1,1);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        thunk_FUN_007c7250(*(int *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
      }
      uVar4 = FUN_00465a70(uVar3,0x1040);
      *(undefined4 *)(param_1 + 4) = uVar4;
      FUN_0065f830(iVar2,uVar4,uVar3);
      FUN_0065aed0(iVar2);
      piVar5 = *(int **)(param_1 + 4);
      piVar6 = (int *)(param_1 + 8);
      iVar2 = 4;
      do {
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        *piVar6 = iVar1;
        if (iVar1 != 0) {
          piVar6[1] = (int)piVar5;
          piVar5 = piVar5 + iVar1 * 3;
        }
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6[2] = iVar1;
        if (iVar1 != 0) {
          piVar6[3] = (int)piVar5;
          piVar5 = piVar5 + iVar1 * 3;
        }
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6[4] = iVar1;
        if (iVar1 != 0) {
          piVar6[5] = (int)piVar5;
          piVar5 = piVar5 + iVar1 * 3;
        }
        iVar1 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6[6] = iVar1;
        if (iVar1 != 0) {
          piVar6[7] = (int)piVar5;
          piVar5 = piVar5 + iVar1 * 3;
        }
        piVar6 = piVar6 + 8;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined1 *)(param_1 + 0x88) = 1;
    }
  }
  return;
}

