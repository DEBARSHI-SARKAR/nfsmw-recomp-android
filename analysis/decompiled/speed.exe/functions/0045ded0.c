/* speed.exe 0045ded0 FUN_0045ded0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045ded0(float param_1,float param_2)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = param_1 < _DAT_00890968;
  if ((bool)bVar4) {
    param_1 = -param_1;
  }
  if (param_2 < _DAT_00890968) {
    bVar4 = bVar4 ^ 3;
    param_2 = -param_2;
  }
  if (param_1 <= param_2) {
    if (param_2 <= param_1) {
      uVar1 = in_EAX & 0xffff0000;
      if (param_2 == _DAT_00890968) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0x2000;
      }
    }
    else {
      uVar2 = FUN_007c4b80();
      uVar1 = uVar2 & 0xff;
      iVar3 = (0x4000 - ((int)(((uint)*(ushort *)((int)&PTR_LAB_008ecb72 + ((int)uVar2 >> 8) * 2) -
                               (uint)*(ushort *)(&DAT_008ecb70 + ((int)uVar2 >> 8) * 2)) * uVar1) >>
                        8)) -
              CONCAT22((short)(char)(uVar2 >> 0x18),
                       *(ushort *)(&DAT_008ecb70 + ((int)uVar2 >> 8) * 2));
    }
  }
  else {
    uVar1 = FUN_007c4b80();
    iVar3 = ((int)uVar1 >> 8) * 2;
    uVar1 = uVar1 & 0xff;
    iVar3 = ((int)(((uint)*(ushort *)((int)&PTR_LAB_008ecb72 + iVar3) -
                   (uint)*(ushort *)(&DAT_008ecb70 + iVar3)) * uVar1) >> 8) +
            (uint)*(ushort *)(&DAT_008ecb70 + iVar3);
  }
  if (bVar4 == 0) {
    return CONCAT22((short)(uVar1 >> 0x10),(short)iVar3);
  }
  if (bVar4 == 3) {
    return -iVar3;
  }
  if (bVar4 == 1) {
    return 0x8000 - iVar3;
  }
  return iVar3 + 0x8000;
}

