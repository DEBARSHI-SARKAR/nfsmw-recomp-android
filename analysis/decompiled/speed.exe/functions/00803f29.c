/* speed.exe 00803f29 FUN_00803f29; analysis pseudocode, not buildable source.
 */

void FUN_00803f29(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  int local_8;
  
  pbVar2 = param_2 + -param_3;
  pbVar3 = param_2 + param_3 * -2;
  local_8 = 8;
  do {
    iVar1 = *(int *)(param_4 +
                    ((int)((((uint)*param_2 - (uint)*pbVar2) * 3 - (uint)param_2[param_3]) + 4 +
                          (uint)*pbVar3) >> 3) * 4);
    *pbVar2 = (&DAT_009c6c00)[iVar1 + (uint)*pbVar2];
    *param_2 = (&DAT_009c6c00)[(uint)*param_2 - iVar1];
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

