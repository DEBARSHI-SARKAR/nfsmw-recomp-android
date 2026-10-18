/* speed.exe 0083298b FUN_0083298b; analysis pseudocode, not buildable source.
 * calls 0083264d FUN_0083264d
 */

void FUN_0083298b(int param_1,byte param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 0) {
    pbVar2 = (byte *)FUN_0083264d(param_1);
    bVar3 = *pbVar2;
    if (bVar3 < bVar1) {
      pbVar2[bVar3 + 1] = param_2;
    }
    bVar3 = bVar3 + 1;
    if (*(byte *)(param_1 + 6) <= bVar3) {
      bVar3 = 0;
    }
    *pbVar2 = bVar3;
  }
  return;
}

