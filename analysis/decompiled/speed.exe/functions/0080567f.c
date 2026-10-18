/* speed.exe 0080567f FUN_0080567f; analysis pseudocode, not buildable source.
 */

void FUN_0080567f(undefined4 param_1,byte *param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  int local_1c;
  int local_18;
  int local_8;
  
  local_8 = (int)param_2 + 2 + param_4 * 2;
  pbVar2 = (byte *)(((int)param_2 - param_4) + 1);
  iVar4 = (int)param_2 + param_4 * 8;
  local_1c = 8;
  do {
    param_2 = (byte *)0x0;
    pbVar5 = (byte *)(local_8 + (-1 - param_4));
    pbVar3 = pbVar2;
    do {
      uVar1 = (int)param_2 + 1;
      param_3[(int)param_2] =
           (char)((int)(((uint)pbVar3[1 - param_4] +
                         (pbVar3[-2] + 4 + (uint)pbVar3[param_4 + -1] * 2 + (uint)pbVar5[-2] +
                          (uint)*pbVar5 + (uint)*pbVar3) * 2 + (uint)pbVar3[-3 - param_4] +
                         (uint)pbVar5[param_4 + -3] + (uint)*(byte *)(local_8 + (int)param_2)) * 2)
                 >> 5);
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar5 + 1;
      param_2 = (byte *)uVar1;
    } while (uVar1 < 8);
    param_3 = param_3 + param_4;
    local_8 = local_8 + param_4;
    pbVar2 = pbVar2 + param_4;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  param_2 = (byte *)(iVar4 + -1);
  local_18 = 8;
  do {
    local_1c = 8;
    pbVar2 = param_2;
    puVar6 = param_3;
    do {
      iVar4 = (int)((((((uint)pbVar2[1] * 6 - (uint)pbVar2[param_4 + 1]) - (uint)pbVar2[1 - param_4]
                      ) - (uint)*pbVar2) - (uint)pbVar2[2]) + 1) >> 1;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *puVar6 = (char)iVar4;
      puVar6 = puVar6 + 1;
      local_1c = local_1c + -1;
      pbVar2 = pbVar2 + 1;
    } while (local_1c != 0);
    param_3 = param_3 + param_4;
    param_2 = param_2 + param_4;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  return;
}

