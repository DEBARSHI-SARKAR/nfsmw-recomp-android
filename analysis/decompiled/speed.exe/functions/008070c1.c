/* speed.exe 008070c1 FUN_008070c1; analysis pseudocode, not buildable source.
 */

uint FUN_008070c1(void)

{
  byte bVar1;
  byte *pbVar2;
  int *in_EAX;
  int iVar3;
  
  if (*in_EAX != 0) {
    iVar3 = *in_EAX + -1;
    *in_EAX = iVar3;
    return (uint)in_EAX[1] >> ((byte)iVar3 & 0x1f) & 1;
  }
  pbVar2 = (byte *)in_EAX[2];
  bVar1 = *pbVar2;
  in_EAX[1] = CONCAT31(CONCAT21(CONCAT11(bVar1,pbVar2[1]),pbVar2[2]),pbVar2[3]);
  in_EAX[2] = (int)(pbVar2 + 4);
  *in_EAX = 0x1f;
  return (uint)(bVar1 >> 7);
}

