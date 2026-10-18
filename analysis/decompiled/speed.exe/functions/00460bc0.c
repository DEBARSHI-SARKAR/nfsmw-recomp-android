/* speed.exe 00460bc0 FUN_00460bc0; analysis pseudocode, not buildable source.
 */

int FUN_00460bc0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = -1;
  bVar3 = *param_1;
  while (bVar3 != 0) {
    if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
      bVar3 = bVar3 & 0x5f;
    }
    iVar2 = iVar2 * 0x21 + (int)(char)bVar3;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar3 = *pbVar1;
  }
  return iVar2;
}

