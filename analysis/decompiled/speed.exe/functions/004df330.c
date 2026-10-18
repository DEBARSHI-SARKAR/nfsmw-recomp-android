/* speed.exe 004df330 FUN_004df330; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004df330(char param_1)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  _DAT_008f2094 = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x7c);
  _DAT_008f2084 = 0;
  _DAT_008f209c = 0;
  _DAT_008f20ac = *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x7c);
  DAT_008f2080 = 0;
  _DAT_008f2098 = 0;
  DAT_008f2088 = 0;
  DAT_008f20a0 = 0;
  iVar4 = 0;
  if (0 < DAT_008f42c4) {
    do {
      cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x328 + iVar4 * 8);
      bVar3 = (byte)*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x324 + iVar4 * 8);
      if (cVar1 == '\x01') {
        uVar2 = 1 << (bVar3 & 0x1f);
LAB_004df3e9:
        DAT_008f2088 = DAT_008f2088 + 1;
        _DAT_008f2084 = _DAT_008f2084 | uVar2;
        DAT_008f2080 = _DAT_008f2084;
      }
      else if (cVar1 == '\x02') {
        _DAT_008f209c = _DAT_008f209c | 1 << (bVar3 & 0x1f);
        DAT_008f20a0 = DAT_008f20a0 + 1;
        _DAT_008f2098 = _DAT_008f209c;
      }
      else if (cVar1 == '\x03') {
        uVar2 = 1 << (bVar3 & 0x1f);
        _DAT_008f209c = _DAT_008f209c | uVar2;
        DAT_008f20a0 = DAT_008f20a0 + 1;
        _DAT_008f2098 = _DAT_008f209c;
        goto LAB_004df3e9;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_008f42c4);
  }
  if (param_1 != '\0') {
    _DAT_008f208c = 0xffffffff;
    _DAT_008f20a4 = 0xffffffff;
  }
  return;
}

