/* speed.exe 00803ed8 FUN_00803ed8; analysis pseudocode, not buildable source.
 */

void FUN_00803ed8(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = *(int *)(param_4 +
                    ((int)((((uint)param_2[2] - (uint)param_2[1]) * 3 - (uint)param_2[3]) + 4 +
                          (uint)*param_2) >> 3) * 4);
    param_2[1] = (&DAT_009c6c00)[iVar1 + (uint)param_2[1]];
    param_2[2] = (&DAT_009c6c00)[(uint)param_2[2] - iVar1];
    param_2 = param_2 + param_3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

