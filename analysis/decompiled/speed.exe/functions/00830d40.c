/* speed.exe 00830d40 FUN_00830d40; analysis pseudocode, not buildable source.
 */

void FUN_00830d40(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_0090d244 + DAT_0090d248;
  if ((uVar1 < DAT_0090d248) || (uVar1 < DAT_0090d244)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  uVar2 = uVar1 + iVar5 + DAT_0090d240;
  uVar3 = uVar2 + (uVar2 < DAT_0090d240) + DAT_0090d23c;
  uVar4 = uVar3 + (uVar3 < DAT_0090d23c) + DAT_0090d238;
  DAT_0090d234 = DAT_0090d234 + uVar4 + (uVar4 < DAT_0090d238);
  DAT_0090d248 = DAT_0090d248 + 1;
  DAT_0090d238 = uVar4;
  DAT_0090d23c = uVar3;
  DAT_0090d240 = uVar2;
  DAT_0090d244 = uVar1;
  if ((((DAT_0090d248 == 0) && (DAT_0090d244 = uVar1 + 1, DAT_0090d244 == 0)) &&
      (DAT_0090d240 = uVar2 + 1, DAT_0090d240 == 0)) &&
     ((DAT_0090d23c = uVar3 + 1, DAT_0090d23c == 0 && (DAT_0090d238 = uVar4 + 1, DAT_0090d238 == 0))
     )) {
    DAT_0090d234 = DAT_0090d234 + 1;
  }
  return;
}

