/* speed.exe 004ccab0 FUN_004ccab0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004ccab0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  piVar5 = (int *)(param_1 + 0x1c);
  iVar9 = 7;
  do {
    iVar1 = *piVar5;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x18) == '\x01')) {
      *(undefined1 *)(iVar1 + 0x18) = 0;
    }
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  if (((DAT_00993c4c != (undefined4 *)0x0) && (((int)DAT_00993c50 - (int)DAT_00993c4c) / 0x2c != 0))
     && (puVar6 = DAT_00993c50, puVar8 = DAT_00993c4c, DAT_00993c4c != DAT_00993c50)) {
    do {
      puVar2 = puVar6;
      puVar3 = puVar8;
      puVar4 = puVar8;
      if (puVar8[8] == param_1) {
        while (puVar4 = puVar4 + 0xb, puVar4 != puVar6) {
          puVar7 = puVar3 + 0xb;
          puVar10 = puVar4;
          puVar11 = puVar3;
          for (iVar9 = 0xb; puVar2 = DAT_00993c50, puVar3 = puVar7, iVar9 != 0; iVar9 = iVar9 + -1)
          {
            *puVar11 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        puVar6 = puVar2 + -0xb;
        DAT_00993c50 = puVar6;
      }
      else {
        puVar8 = puVar8 + 0xb;
      }
    } while (puVar8 != puVar6);
  }
  return;
}

