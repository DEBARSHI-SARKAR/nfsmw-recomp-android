/* speed.exe 0083b110 FUN_0083b110; analysis pseudocode, not buildable source.
 */

uint FUN_0083b110(byte *param_1,uint param_2)

{
  uint3 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  if ((param_1 == (byte *)0x0) || (bVar6 = *param_1, bVar6 < 0x21)) {
    return param_2;
  }
  pbVar2 = param_1 + 1;
  if (bVar6 < 0x20) {
    bVar6 = 0x20;
    pbVar2 = param_1;
  }
  else if (bVar6 == 0x25) {
    bVar6 = (&DAT_008c6408)[*pbVar2] << 4 | (&DAT_008c6408)[param_1[2]];
    pbVar2 = param_1 + 3;
  }
  bVar4 = *pbVar2;
  pbVar3 = pbVar2 + 1;
  if (bVar4 < 0x20) {
    bVar4 = 0x20;
    pbVar3 = pbVar2;
  }
  else if (bVar4 == 0x25) {
    bVar4 = (&DAT_008c6408)[*pbVar3] << 4 | (&DAT_008c6408)[pbVar2[2]];
    pbVar3 = pbVar2 + 3;
  }
  bVar5 = *pbVar3;
  pbVar2 = pbVar3 + 1;
  if (bVar5 < 0x20) {
    bVar5 = 0x20;
    pbVar2 = pbVar3;
  }
  else if (bVar5 == 0x25) {
    bVar5 = (&DAT_008c6408)[*pbVar2] << 4 | (&DAT_008c6408)[pbVar3[2]];
    pbVar2 = pbVar3 + 3;
  }
  uVar1 = CONCAT21(CONCAT11(bVar6,bVar4),bVar5);
  bVar6 = *pbVar2;
  if (bVar6 < 0x20) {
    return (uint)uVar1 << 8 | 0x20;
  }
  if (bVar6 == 0x25) {
    bVar6 = (&DAT_008c6408)[pbVar2[1]] << 4 | (&DAT_008c6408)[pbVar2[2]];
  }
  return CONCAT31(uVar1,bVar6);
}

