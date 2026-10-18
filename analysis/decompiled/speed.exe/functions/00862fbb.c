/* speed.exe 00862fbb FUN_00862fbb; analysis pseudocode, not buildable source.
 * calls 00823e53 FUN_00823e53
 * calls 00823e2d FUN_00823e2d
 * calls 0081bccb FUN_0081bccb
 * calls 00821c7c FUN_00821c7c
 * calls 0081eae9 FUN_0081eae9
 * calls 0081bcd9 FUN_0081bcd9
 */

undefined4 FUN_00862fbb(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (DAT_009c2188 != '\0') {
    iVar1 = FUN_00823e53(param_1);
    if (iVar1 < 0) {
      uVar2 = 0xfffffff8;
    }
    else {
      iVar1 = FUN_00823e2d(*(undefined4 *)(param_1 * 8 + DAT_009c21f8),param_2);
      if (iVar1 == 0) {
        uVar2 = 0xfffffff8;
      }
      else {
        FUN_0081bccb();
        FUN_00821c7c(*(undefined4 *)(param_1 * 8 + DAT_009c21f8),iVar1,param_3,param_4,param_5,0);
        iVar1 = 0;
        if (*(char *)(param_3 + 2) != '\0') {
          piVar3 = (int *)(param_4 + 0x18);
          do {
            if (*piVar3 != 0) {
              FUN_0081eae9(*piVar3);
              *piVar3 = 0;
              piVar3[6] = 0;
            }
            iVar1 = iVar1 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar1 < (int)(uint)*(byte *)(param_3 + 2));
        }
        FUN_0081bcd9();
        uVar2 = 0;
      }
    }
    return uVar2;
  }
  return 0xfffffff6;
}

