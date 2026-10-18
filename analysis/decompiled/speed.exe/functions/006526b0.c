/* speed.exe 006526b0 FUN_006526b0; analysis pseudocode, not buildable source.
 */

uint __thiscall FUN_006526b0(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(((int)(((int)param_2 >> 0x1f & 7U) + param_2) >> 3) + param_1);
  param_2 = param_2 & 7;
  uVar1 = 0;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      uVar1 = uVar1 | (*pbVar2 >> (sbyte)param_2 & 1) << ((byte)iVar3 & 0x1f);
      param_2 = param_2 + 1 & 7;
      if (param_2 == 0) {
        pbVar2 = pbVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return uVar1;
}

