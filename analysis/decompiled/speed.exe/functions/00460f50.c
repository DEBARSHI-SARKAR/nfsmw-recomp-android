/* speed.exe 00460f50 FUN_00460f50; analysis pseudocode, not buildable source.
 */

void FUN_00460f50(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while (bVar2 != 0) {
    bVar2 = *param_1;
    if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
      bVar2 = bVar2 & 0x5f;
    }
    *param_1 = bVar2;
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar2 = *pbVar1;
  }
  return;
}

