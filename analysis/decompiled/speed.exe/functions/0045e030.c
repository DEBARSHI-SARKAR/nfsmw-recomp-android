/* speed.exe 0045e030 FUN_0045e030; analysis pseudocode, not buildable source.
 */

int FUN_0045e030(uint param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  
  bVar4 = (int)param_1 < 0;
  if (bVar4) {
    param_1 = -param_1;
  }
  if ((int)param_1 < 0x200000) {
    if ((int)param_1 < 0x40000) {
      iVar1 = ((int)param_1 >> 0xb) * 2;
      uVar2 = *(ushort *)(&DAT_008ed180 + iVar1);
      uVar3 = *(ushort *)(&DAT_008ed182 + iVar1);
      iVar1 = (param_1 & 0x7ff) << 5;
    }
    else {
      uVar2 = *(ushort *)(&DAT_008ed288 + ((int)param_1 >> 0xe) * 2);
      uVar3 = *(ushort *)(&DAT_008ed28a + ((int)param_1 >> 0xe) * 2);
      iVar1 = (param_1 & 0x3fff) << 2;
    }
  }
  else if ((int)param_1 < 0x1000000) {
    iVar1 = (int)param_1 >> 8;
    uVar2 = 0x3eba;
    uVar3 = 0x3fd7;
  }
  else {
    uVar2 = 0x3fff;
    uVar3 = 0x3fff;
    iVar1 = 0;
  }
  iVar1 = ((int)(((uint)uVar3 - (uint)uVar2) * iVar1) >> 0x10) + (uint)uVar2;
  if (bVar4) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

