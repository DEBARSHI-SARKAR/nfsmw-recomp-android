/* speed.exe 00661280 FUN_00661280; analysis pseudocode, not buildable source.
 * calls 00735620 FUN_00735620
 * calls 00660100 FUN_00660100
 * calls 007c4b80 FUN_007c4b80
 * calls 0065fe90 FUN_0065fe90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00661280(float param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  
  uVar4 = DAT_00925968 & 0xf;
  if (DAT_009258d4 == 0) {
    param_1 = _DAT_00925964 + param_1;
    cVar2 = FUN_00735620();
    if (cVar2 == '\0') {
      fVar1 = _DAT_008970f0;
      if (DAT_008f82f0 == 0) {
        fVar1 = _DAT_00892b64;
      }
      if (DAT_008f8304 * fVar1 <= param_1) {
        param_1 = DAT_008f8304 * fVar1;
      }
    }
    local_8 = FUN_007c4b80();
    iVar3 = FUN_007c4b80();
    _DAT_00925964 = param_1 - (float)iVar3 * _DAT_00890984;
    if ((DAT_009258d8 != 0) && (FUN_0065fe90(local_8,0x10,3), DAT_009258d8 != 0)) {
      FUN_0065fe90(uVar4,4,5);
    }
  }
  else {
    local_8 = FUN_00660100(0x10,3);
    FUN_00660100(4,5);
  }
  _DAT_0092595c = local_8;
  DAT_009259bc = (float)local_8 * _DAT_008a8ae4;
  return;
}

