/* speed.exe 00816bee FUN_00816bee; analysis pseudocode, not buildable source.
 * calls 008169be FUN_008169be
 */

void FUN_00816bee(int param_1,undefined4 param_2,byte *param_3,byte *param_4,short *param_5,
                 int param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  short *psVar3;
  int local_8;
  
  local_8 = 8;
  psVar3 = (short *)(param_1 + 4);
  do {
    psVar3[-2] = (short)((int)((uint)*param_3 + (uint)*param_4) >> 1) + *param_5;
    psVar3[-1] = (short)((int)((uint)param_3[1] + (uint)param_4[1]) >> 1) + param_5[1];
    *psVar3 = (short)((int)((uint)param_3[2] + (uint)param_4[2]) >> 1) + param_5[2];
    psVar3[1] = (short)((int)((uint)param_3[3] + (uint)param_4[3]) >> 1) + param_5[3];
    psVar3[2] = (short)((int)((uint)param_3[4] + (uint)param_4[4]) >> 1) + param_5[4];
    psVar3[3] = (short)((int)((uint)param_3[5] + (uint)param_4[5]) >> 1) + param_5[5];
    psVar3[4] = (short)((int)((uint)param_3[6] + (uint)param_4[6]) >> 1) + param_5[6];
    pbVar1 = param_3 + 7;
    pbVar2 = param_4 + 7;
    param_3 = param_3 + param_6;
    param_4 = param_4 + param_6;
    local_8 = local_8 + -1;
    psVar3[5] = (short)((int)((uint)*pbVar1 + (uint)*pbVar2) >> 1) + param_5[7];
    psVar3 = psVar3 + 8;
    param_5 = param_5 + 8;
  } while (local_8 != 0);
  FUN_008169be(param_2,param_1,param_6,8);
  return;
}

