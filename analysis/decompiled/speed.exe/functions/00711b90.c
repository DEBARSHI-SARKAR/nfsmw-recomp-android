/* speed.exe 00711b90 FUN_00711b90; analysis pseudocode, not buildable source.
 * calls 00705980 FUN_00705980
 * calls 004b1d90 FUN_004b1d90
 * calls 0070f610 FUN_0070f610
 * calls 00711900 FUN_00711900
 * calls 006fff90 FUN_006fff90
 * calls 0070f6d0 FUN_0070f6d0
 * calls 0070d1f0 FUN_0070d1f0
 */

void __fastcall FUN_00711b90(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  
  if (((DAT_008f8700 != 0) && (DAT_00993c4c != (undefined4 *)0x0)) &&
     (((int)DAT_00993c50 - (int)DAT_00993c4c) / 0x2c != 0)) {
    puVar4 = DAT_00993c4c;
    if (1 < (uint)(((int)DAT_00993c50 - (int)DAT_00993c4c) / 0x2c)) {
      FUN_00711900(DAT_00993c4c,DAT_00993c50);
      puVar4 = DAT_00993c4c;
    }
    while (puVar7 = DAT_00993c4c, bVar3 = DAT_00993c4c != DAT_00993c50, DAT_00993c4c = puVar4, bVar3
          ) {
      iVar9 = FUN_0070f6d0(param_1,puVar7);
      puVar5 = puVar7;
      puVar6 = DAT_00993c50;
      puVar4 = puVar7;
      if (iVar9 == 0) {
        puVar8 = DAT_00993c50;
        if (((puVar7[8] != 0) &&
            (iVar9 = FUN_0070f610(param_1,puVar7), puVar6 = DAT_00993c50, puVar8 = DAT_00993c50,
            DAT_008f8700 != 0)) &&
           ((lVar15 = FUN_006fff90(*puVar7,puVar7[1]), puVar6 = DAT_00993c50, puVar8 = DAT_00993c50,
            lVar15 != 0 &&
            (uVar10 = FUN_00705980(lVar15), puVar6 = DAT_00993c50, puVar8 = DAT_00993c50,
            uVar10 < DAT_009922e8)))) {
          iVar2 = *(int *)(uVar10 * 0x10 + 8 + DAT_009922e4);
          iVar11 = uVar10 * 0x10 + DAT_009922e4;
          if (((iVar2 != iVar11) && (iVar2 != iVar11)) && (iVar2 != 0)) {
            uVar1 = *(undefined1 *)(puVar7 + 10);
            goto LAB_00711cc0;
          }
        }
      }
      else if (puVar7[8] == 0) {
        puVar8 = DAT_00993c50;
        if (*(char *)(iVar9 + 0x19) == '\0') {
          FUN_0070d1f0(iVar9);
          puVar6 = DAT_00993c50;
          puVar8 = DAT_00993c50;
        }
      }
      else {
        uVar1 = *(undefined1 *)(puVar7 + 10);
LAB_00711cc0:
        FUN_004b1d90(iVar9,uVar1);
        puVar6 = DAT_00993c50;
        puVar8 = DAT_00993c50;
      }
      while (DAT_00993c50 = puVar8, puVar8 = DAT_00993c50, puVar4 = puVar4 + 0xb,
            puVar4 != DAT_00993c50) {
        puVar12 = puVar5 + 0xb;
        puVar13 = puVar4;
        puVar14 = puVar5;
        DAT_00993c50 = puVar6;
        for (iVar9 = 0xb; puVar5 = puVar12, puVar6 = DAT_00993c50, iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar14 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      puVar4 = DAT_00993c4c;
      DAT_00993c4c = puVar7;
      DAT_00993c50 = puVar6 + -0xb;
    }
  }
  return;
}

