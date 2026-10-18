/* speed.exe 005af1c0 FUN_005af1c0; analysis pseudocode, not buildable source.
 */

int FUN_005af1c0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = -1;
  if (param_1 != (byte *)0x0) {
    bVar3 = *param_1;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      iVar2 = iVar2 * 0x21 + (uint)bVar3;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      bVar3 = *pbVar1;
    }
  }
  return iVar2;
}

