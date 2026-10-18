/* speed.exe 00803f91 FUN_00803f91; analysis pseudocode, not buildable source.
 * calls 00804cc1 FUN_00804cc1
 */

void FUN_00803f91(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = *(undefined4 *)(DAT_009c67e0 + param_1 * 4);
  param_1 = 8;
  do {
    bVar1 = *param_2;
    bVar2 = param_2[-1];
    iVar4 = FUN_00804cc1(uVar3,(int)((((uint)bVar1 - (uint)bVar2) * 3 - (uint)param_2[1]) + 4 +
                                    (uint)param_2[-2]) >> 3);
    param_2[-1] = (&DAT_009c6c00)[iVar4 + (uint)bVar2];
    *param_2 = (&DAT_009c6c00)[(uint)bVar1 - iVar4];
    param_2 = param_2 + param_3;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}

