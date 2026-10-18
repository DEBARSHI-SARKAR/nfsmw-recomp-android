/* speed.exe 005a8780 FUN_005a8780; analysis pseudocode, not buildable source.
 * calls 005fc1f0 FUN_005fc1f0
 * calls 005dda40 FUN_005dda40
 * calls 005dcf60 thunk_FUN_005d97a0
 * calls 005dc930 FUN_005dc930
 * calls 005fba70 FUN_005fba70
 * calls 005fc180 FUN_005fc180
 * calls 005dcf70 thunk_FUN_005da7a0
 * calls 005fab40 FUN_005fab40
 * calls 007c4b80 FUN_007c4b80
 * calls 005dca70 FUN_005dca70
 * calls 005a3c30 FUN_005a3c30
 * calls 005e3980 FUN_005e3980
 * calls 00601020 FUN_00601020
 * calls 005dc920 FUN_005dc920
 * calls 00460d20 FUN_00460d20
 * calls 005dda50 FUN_005dda50
 * calls 00601060 FUN_00601060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a8780(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint local_c;
  undefined4 local_8;
  undefined2 local_4;
  
  local_4 = 0;
  iVar9 = FUN_005dda40(0);
  fVar1 = (float)iVar9;
  if (iVar9 < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  local_c = 1;
  do {
    FUN_005e3980(local_c);
    uVar10 = thunk_FUN_005d97a0();
    uVar12 = 0;
    if (uVar10 != 0) {
      do {
        uVar11 = FUN_00601020(uVar12);
        FUN_005dca70(uVar11,2);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
    uVar10 = thunk_FUN_005da7a0();
    uVar12 = 0;
    if (uVar10 != 0) {
      do {
        uVar11 = FUN_00601060(uVar12);
        FUN_005dca70(uVar11,2);
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar10);
    }
    local_c = local_c + 1;
  } while (local_c < 0x11);
  uVar10 = 0;
  iVar9 = FUN_005dc920();
  if (iVar9 != 0) {
    do {
      FUN_005dc930(uVar10);
      uVar11 = FUN_005fba70("19.8.31");
      iVar9 = FUN_00460d20(uVar11);
      if ((iVar9 != 0) &&
         (((DAT_008f8718 != '\0' || (cVar3 = FUN_005fc1f0(), cVar3 == '\0')) &&
          (cVar3 = FUN_005fc180(), cVar3 != '\0')))) {
        cVar3 = (char)local_4 + '\x01';
        local_4 = CONCAT11(local_4._1_1_,cVar3);
        uVar11 = FUN_005fab40();
        cVar4 = FUN_005dca70(uVar11,1);
        if (cVar4 != '\0') {
          local_4 = CONCAT11(local_4._1_1_ + '\x01',cVar3);
        }
      }
      uVar10 = uVar10 + 1;
      uVar12 = FUN_005dc920();
    } while (uVar10 < uVar12);
  }
  iVar9 = 0;
  fVar2 = _DAT_00890968;
  while (fVar2 < fVar1) {
    FUN_005dda50(iVar9);
    iVar9 = iVar9 + 1;
    fVar2 = (float)iVar9;
    if (iVar9 < 0) {
      fVar2 = fVar2 + _DAT_00891214;
    }
  }
  uVar10 = 0;
  do {
    FUN_005a3c30(uVar10,1);
    uVar10 = uVar10 + 1;
  } while (uVar10 < 10);
  uVar5 = FUN_007c4b80();
  uVar6 = FUN_007c4b80();
  uVar7 = FUN_007c4b80();
  uVar8 = FUN_007c4b80();
  local_8 = CONCAT31(CONCAT12(uVar7,CONCAT11(uVar5,uVar6)),uVar8);
  *param_1 = local_8;
  *(undefined2 *)(param_1 + 1) = local_4;
  return;
}

