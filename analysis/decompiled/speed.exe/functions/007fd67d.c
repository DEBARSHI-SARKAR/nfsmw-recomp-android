/* speed.exe 007fd67d FUN_007fd67d; analysis pseudocode, not buildable source.
 */

void FUN_007fd67d(byte *param_1,short *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    *param_2 = (ushort)*param_1 - *param_2;
    param_2[1] = (ushort)param_1[1] - param_2[1];
    param_2[2] = (ushort)param_1[2] - param_2[2];
    param_2[3] = (ushort)param_1[3] - param_2[3];
    param_2[4] = (ushort)param_1[4] - param_2[4];
    param_2[5] = (ushort)param_1[5] - param_2[5];
    param_2[6] = (ushort)param_1[6] - param_2[6];
    pbVar1 = param_1 + 7;
    param_1 = param_1 + param_3;
    iVar2 = iVar2 + -1;
    param_2[7] = (ushort)*pbVar1 - param_2[7];
    param_2 = param_2 + 8;
  } while (iVar2 != 0);
  return;
}

