/* speed.exe 007fd8b8 FUN_007fd8b8; analysis pseudocode, not buildable source.
 */

void FUN_007fd8b8(int *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int *param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  if (param_5 != 0) {
    do {
      uVar3 = 0;
      if (param_6 != 0) {
        piVar2 = param_1 + -param_4;
        do {
          iVar1 = param_1[param_4] * param_7[2] + param_1[param_4 * 2] * param_7[3] +
                  *param_1 * param_7[1] + 0x40 + *piVar2 * *param_7 >> 7;
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          else if (0xff < iVar1) {
            iVar1 = 0xff;
          }
          param_1 = param_1 + 1;
          piVar2 = piVar2 + 1;
          *(short *)(param_2 + uVar3 * 2) = (short)iVar1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_6);
      }
      param_2 = param_2 + param_6 * 2;
      param_1 = param_1 + (param_3 - param_6);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  return;
}

