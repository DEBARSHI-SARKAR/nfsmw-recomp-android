/* speed.exe 00735b60 FUN_00735b60; analysis pseudocode, not buildable source.
 * calls 00840aa0 FUN_00840aa0
 * calls 005a3590 FUN_005a3590
 * calls 00794f80 FUN_00794f80
 * calls 0078b720 FUN_0078b720
 */

/* WARNING: Removing unreachable block (ram,0x00735ba3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00735b60(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = DAT_0091cf90;
  FUN_00794f80(0x7374696d);
  uVar3 = FUN_0078b720();
  uVar4 = FUN_00840aa0(uVar3);
  fVar1 = (float)((uVar4 % 0xe10) * 1000) * _DAT_008b474c;
  if (_DAT_0089096c <= fVar1) {
    fVar1 = _DAT_00890d3c - fVar1;
  }
  *(float *)(iVar2 + 0x194) = fVar1;
  FUN_005a3590();
  _DAT_009b08a4 = 0;
  return;
}

