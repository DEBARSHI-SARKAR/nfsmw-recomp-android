/* speed.exe 007fd98f FUN_007fd98f; analysis pseudocode, not buildable source.
 */

void FUN_007fd98f(byte *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 int *param_7)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  for (; param_5 != 0; param_5 = param_5 + -1) {
    uVar3 = 0;
    if (param_6 != 0) {
      do {
        pbVar1 = param_1 + param_4;
        bVar2 = *param_1;
        param_1 = param_1 + 1;
        *(short *)(param_2 + uVar3 * 2) =
             (short)((int)((uint)*pbVar1 * param_7[1] + 0x40 + (uint)bVar2 * *param_7) >> 7);
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_6);
    }
    param_1 = param_1 + (param_3 - param_6);
    param_2 = param_2 + param_6 * 2;
  }
  return;
}

