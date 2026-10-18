/* speed.exe 00816b52 FUN_00816b52; analysis pseudocode, not buildable source.
 * calls 008169be FUN_008169be
 */

void FUN_00816b52(int param_1,undefined4 param_2,byte *param_3,short *param_4,int param_5)

{
  byte *pbVar1;
  short *psVar2;
  int iVar3;
  
  iVar3 = 8;
  psVar2 = (short *)(param_1 + 4);
  do {
    psVar2[-2] = (ushort)*param_3 + *param_4;
    psVar2[-1] = (ushort)param_3[1] + param_4[1];
    *psVar2 = (ushort)param_3[2] + param_4[2];
    psVar2[1] = (ushort)param_3[3] + param_4[3];
    psVar2[2] = (ushort)param_3[4] + param_4[4];
    psVar2[3] = (ushort)param_3[5] + param_4[5];
    psVar2[4] = (ushort)param_3[6] + param_4[6];
    pbVar1 = param_3 + 7;
    param_3 = param_3 + param_5;
    iVar3 = iVar3 + -1;
    psVar2[5] = (ushort)*pbVar1 + param_4[7];
    psVar2 = psVar2 + 8;
    param_4 = param_4 + 8;
  } while (iVar3 != 0);
  FUN_008169be(param_2,param_1,param_5,8);
  return;
}

