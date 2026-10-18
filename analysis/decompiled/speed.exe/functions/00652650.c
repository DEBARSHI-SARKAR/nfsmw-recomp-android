/* speed.exe 00652650 FUN_00652650; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_00652650(int param_1,uint param_2,int param_3,int param_4)

{
  sbyte sVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(((int)(param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3) + param_1);
  param_2 = param_2 & 7;
  iVar2 = 0;
  if (0 < param_4) {
    do {
      sVar1 = (sbyte)param_2;
      param_2 = param_2 + 1 & 7;
      *pbVar3 = ((byte)(param_3 >> ((byte)iVar2 & 0x1f)) & 1) << sVar1 |
                ~('\x01' << sVar1) & *pbVar3;
      if (param_2 == 0) {
        pbVar3 = pbVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  return;
}

