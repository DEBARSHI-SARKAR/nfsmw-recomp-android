/* speed.exe 004e4180 FUN_004e4180; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e4180(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_30 [12];
  
  iVar2 = 0;
  _DAT_0091441c = 0xffffffff;
  if (param_1 == 0) {
    return -10000;
  }
  uVar3 = param_1 & 0x4000;
  while (uVar3 == 0) {
    if (iVar2 == 0x10) goto LAB_004e425e;
    iVar2 = iVar2 + 1;
    uVar3 = param_1 & 0x4000 >> ((byte)iVar2 & 0x1f);
  }
  local_30[0] = 0;
  local_30[1] = 1;
  local_30[2] = 3;
  iVar1 = param_1 - (0x4000 >> ((byte)iVar2 & 0x1f));
  local_30[3] = 7;
  local_30[4] = 0xf;
  local_30[5] = 0x1f;
  local_30[6] = 0x3f;
  local_30[7] = 0x7f;
  local_30[8] = 0xff;
  local_30[9] = 0x1ff;
  local_30[10] = 0x3ff;
  local_30[0xb] = 0x7ff;
  if (iVar2 < 5) {
    uVar3 = iVar1 >> (5 - (byte)iVar2 & 0x1f);
  }
  else {
    uVar3 = iVar1 << ((byte)(iVar2 + -5) & 0x1f) | local_30[iVar2 + -5];
  }
  iVar2 = (-1 - iVar2) * 0x25a + *(int *)(&DAT_008f0d50 + uVar3 * 4);
  if (iVar2 < -10000) {
LAB_004e425e:
    iVar2 = -10000;
  }
  return iVar2;
}

