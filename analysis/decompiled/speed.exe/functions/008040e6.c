/* speed.exe 008040e6 FUN_008040e6; analysis pseudocode, not buildable source.
 * calls 00804cc1 FUN_00804cc1
 */

void FUN_008040e6(int param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar1 = *(undefined4 *)(DAT_009c67e0 + param_1 * 4);
  pbVar4 = param_2 + -param_3;
  pbVar3 = param_2 + param_3 * -2;
  param_1 = 0xc;
  do {
    iVar2 = FUN_00804cc1(uVar1,(int)((((uint)*param_2 - (uint)*pbVar4) * 3 - (uint)param_2[param_3])
                                     + 4 + (uint)*pbVar3) >> 3);
    *pbVar4 = (&DAT_009c6c00)[iVar2 + (uint)*pbVar4];
    *param_2 = (&DAT_009c6c00)[(uint)*param_2 - iVar2];
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}

