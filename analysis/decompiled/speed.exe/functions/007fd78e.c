/* speed.exe 007fd78e FUN_007fd78e; analysis pseudocode, not buildable source.
 */

void FUN_007fd78e(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int *param_7)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    uVar4 = 0;
    if (param_6 != 0) {
      pbVar3 = param_1 + -param_4;
      pbVar2 = param_1 + param_4;
      do {
        iVar1 = (int)((uint)pbVar2[param_4] * param_7[3] + (uint)*param_1 * param_7[1] +
                      (uint)*pbVar2 * param_7[2] + 0x40 + (uint)*pbVar3 * *param_7) >> 7;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (0xff < iVar1) {
          iVar1 = 0xff;
        }
        param_1 = param_1 + 1;
        pbVar2 = pbVar2 + 1;
        pbVar3 = pbVar3 + 1;
        *(short *)(param_2 + uVar4 * 2) = (short)iVar1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_6);
    }
    param_1 = param_1 + (param_3 - param_6);
    param_2 = param_2 + param_6 * 2;
  }
  return;
}

