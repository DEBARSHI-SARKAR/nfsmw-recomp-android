/* speed.exe 0083c4e0 FUN_0083c4e0; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 */

undefined4 FUN_0083c4e0(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar3 = (byte *)FUN_0083a670(param_1,param_2);
  pbVar5 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return 0xffffffff;
  }
  for (; (pbVar5 != param_1 && (0x20 < pbVar5[-1])); pbVar5 = pbVar5 + -1) {
  }
  bVar2 = *pbVar3;
  pbVar4 = pbVar3;
  while (0x1f < bVar2) {
    if (bVar2 == 0x3d) goto LAB_0083c53c;
    if (bVar2 == 0x20) {
      pbVar4 = pbVar3;
    }
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  if (*pbVar3 != 0x3d) {
    pbVar4 = pbVar3;
  }
LAB_0083c53c:
  bVar2 = *pbVar4;
  while ((bVar2 != 0 && (bVar2 < 0x21))) {
    pbVar3 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = *pbVar3;
  }
  bVar2 = *pbVar4;
  while (bVar2 != 0) {
    *pbVar5 = bVar2;
    pbVar3 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = *pbVar3;
  }
  for (; (pbVar5 != param_1 && (pbVar5[-1] < 0x21)); pbVar5 = pbVar5 + -1) {
  }
  *pbVar5 = 0;
  return 0;
}

