/* speed.exe 0083a670 FUN_0083a670; analysis pseudocode, not buildable source.
 */

byte * FUN_0083a670(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  bVar5 = 0;
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (pbVar3 = param_2, *param_2 == 0)) {
    return (byte *)0x0;
  }
  do {
    pbVar7 = param_1;
    if (*pbVar7 == 0) {
      return (byte *)0x0;
    }
    pbVar6 = pbVar3 + 1;
    bVar5 = bVar5 | (&DAT_008c6508)[*pbVar3] ^ (&DAT_008c6508)[*pbVar7];
    param_1 = pbVar7 + 1;
    pbVar3 = pbVar3 + 1;
  } while (*pbVar6 != 0);
  iVar4 = (int)pbVar3 - (int)param_2;
  if ((bVar5 == 0) && (*param_1 == 0x3d)) {
LAB_0083a757:
    return param_1 + 1;
  }
  if (*param_1 != 0) {
    bVar5 = pbVar7[2];
    param_1 = pbVar7 + 2;
    if (bVar5 != 0) {
      pbVar3 = param_1 + -iVar4;
      pbVar7 = param_2 + (iVar4 - (int)param_1);
      do {
        if (bVar5 == 0x3d) {
          if (pbVar3[iVar4 + -1] < 0x21) {
            return (byte *)0x0;
          }
          if (pbVar3[-1] < 0x21) {
            pbVar6 = pbVar3;
            if ((&DAT_008c6508)[*pbVar3] == (&DAT_008c6508)[*param_2]) {
              do {
                pbVar1 = pbVar6 + 1;
                pbVar2 = pbVar7 + 1 + (int)pbVar6;
                pbVar6 = pbVar6 + 1;
              } while ((&DAT_008c6508)[*pbVar1] == (&DAT_008c6508)[*pbVar2]);
            }
            if (pbVar6 == param_1) goto LAB_0083a757;
          }
        }
        bVar5 = param_1[1];
        param_1 = param_1 + 1;
        pbVar7 = pbVar7 + -1;
        pbVar3 = pbVar3 + 1;
      } while (bVar5 != 0);
    }
  }
  return (byte *)0x0;
}

