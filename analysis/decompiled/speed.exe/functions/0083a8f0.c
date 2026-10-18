/* speed.exe 0083a8f0 FUN_0083a8f0; analysis pseudocode, not buildable source.
 */

int FUN_0083a8f0(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (param_1 != (byte *)0x0) {
    iVar2 = 1;
    bVar3 = 0x21;
    pbVar4 = param_2;
    if (1 < param_3) {
      do {
        bVar1 = *param_1;
        pbVar4 = param_2;
        if (bVar1 < bVar3) break;
        bVar3 = bVar3 ^ bVar1 == 0x22;
        pbVar4 = param_2 + 1;
        *param_2 = bVar1;
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
        param_2 = pbVar4;
      } while (iVar2 < param_3);
    }
    *pbVar4 = 0;
    return iVar2 + -1;
  }
  if (param_4 == (byte *)0x0) {
    return -1;
  }
  iVar2 = 1;
  pbVar4 = param_2;
  if (1 < param_3) {
    do {
      pbVar4 = param_2;
      if (*param_4 == 0) break;
      pbVar4 = param_2 + 1;
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      iVar2 = iVar2 + 1;
      param_2 = pbVar4;
    } while (iVar2 < param_3);
  }
  *pbVar4 = 0;
  return iVar2 + -1;
}

