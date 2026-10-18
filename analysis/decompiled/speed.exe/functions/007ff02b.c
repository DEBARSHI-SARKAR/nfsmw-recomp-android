/* speed.exe 007ff02b FUN_007ff02b; analysis pseudocode, not buildable source.
 */

void FUN_007ff02b(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,byte *param_5,
                 uint param_6,undefined4 param_7,int param_8)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = param_1;
  *param_5 = *param_1;
  iVar2 = (int)param_2 * 2;
  param_1 = (byte *)param_6;
  if (param_6 < param_6 * param_8) {
    param_2 = pbVar3;
    pbVar3 = pbVar3 + iVar2;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + iVar2;
      param_5[(int)param_1] =
           (byte)(((uint)bVar1 + (uint)pbVar3[iVar2]) * 3 + 8 + (uint)*pbVar3 * 10 >> 4);
      param_1 = (byte *)((int)param_1 + param_6);
      pbVar3 = pbVar3 + iVar2;
    } while (param_1 < param_6 * param_8);
  }
  return;
}

