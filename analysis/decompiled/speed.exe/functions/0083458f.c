/* speed.exe 0083458f FUN_0083458f; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083458f(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_0090d280 + _DAT_0090d284;
  if ((uVar1 < _DAT_0090d284) || (uVar1 < DAT_0090d280)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  uVar2 = uVar1 + iVar5 + DAT_0090d27c;
  uVar3 = uVar2 + (uVar2 < DAT_0090d27c) + DAT_0090d278;
  uVar4 = uVar3 + (uVar3 < DAT_0090d278) + DAT_0090d274;
  DAT_0090d270 = DAT_0090d270 + uVar4 + (uVar4 < DAT_0090d274);
  _DAT_0090d284 = _DAT_0090d284 + 1;
  DAT_0090d274 = uVar4;
  DAT_0090d278 = uVar3;
  DAT_0090d27c = uVar2;
  DAT_0090d280 = uVar1;
  if ((((_DAT_0090d284 == 0) && (DAT_0090d280 = uVar1 + 1, DAT_0090d280 == 0)) &&
      (DAT_0090d27c = uVar2 + 1, DAT_0090d27c == 0)) &&
     ((DAT_0090d278 = uVar3 + 1, DAT_0090d278 == 0 && (DAT_0090d274 = uVar4 + 1, DAT_0090d274 == 0))
     )) {
    DAT_0090d270 = DAT_0090d270 + 1;
  }
  return;
}

