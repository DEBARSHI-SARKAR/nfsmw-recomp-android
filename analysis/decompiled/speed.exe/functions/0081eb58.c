/* speed.exe 0081eb58 FUN_0081eb58; analysis pseudocode, not buildable source.
 */

void FUN_0081eb58(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = DAT_009c1ff8 + DAT_009c1ffc;
  if ((uVar1 < DAT_009c1ffc) || (uVar1 < DAT_009c1ff8)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  uVar2 = uVar1 + iVar5 + DAT_009c1ff4;
  uVar3 = uVar2 + (uVar2 < DAT_009c1ff4) + DAT_009c1ff0;
  uVar4 = uVar3 + (uVar3 < DAT_009c1ff0) + DAT_009c1fec;
  DAT_009c1fe8 = DAT_009c1fe8 + uVar4 + (uVar4 < DAT_009c1fec);
  DAT_009c1ffc = DAT_009c1ffc + 1;
  DAT_009c1fec = uVar4;
  DAT_009c1ff0 = uVar3;
  DAT_009c1ff4 = uVar2;
  DAT_009c1ff8 = uVar1;
  if ((((DAT_009c1ffc == 0) && (DAT_009c1ff8 = uVar1 + 1, DAT_009c1ff8 == 0)) &&
      (DAT_009c1ff4 = uVar2 + 1, DAT_009c1ff4 == 0)) &&
     ((DAT_009c1ff0 = uVar3 + 1, DAT_009c1ff0 == 0 && (DAT_009c1fec = uVar4 + 1, DAT_009c1fec == 0))
     )) {
    DAT_009c1fe8 = DAT_009c1fe8 + 1;
  }
  return;
}

