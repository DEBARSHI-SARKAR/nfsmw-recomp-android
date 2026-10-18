/* speed.exe 00759ff0 FUN_00759ff0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00464050 FUN_00464050
 * calls 00759f00 FUN_00759f00
 * calls 00460b00 FUN_00460b00
 * calls 00465a70 FUN_00465a70
 * calls 00464080 FUN_00464080
 */

undefined4 FUN_00759ff0(int param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (param_2 == 0) {
    param_2 = param_1;
  }
  iVar2 = FUN_00464050(DAT_00904a00);
  iVar3 = FUN_00464080(DAT_00904a00 & 0xf | 0x2000);
  if ((iVar2 < param_2) || (iVar3 < param_1)) {
    iVar4 = FUN_00759f00(1);
    while (iVar4 != 0) {
      iVar2 = FUN_00464050(DAT_00904a00);
      iVar3 = FUN_00464080(DAT_00904a00 & 0xf | 0x2000);
      if ((param_2 <= iVar2) && (param_1 <= iVar3)) break;
      iVar4 = FUN_00759f00(1);
    }
  }
  if ((param_2 <= iVar2) && (param_1 <= iVar3)) {
    if (param_3 != '\0') {
      uVar8 = 0;
      iVar2 = 0;
      uVar7 = DAT_00904a00;
      do {
        puVar9 = &DAT_0091a0b0;
        if (iVar2 == 1) {
          puVar9 = &DAT_0091a078;
        }
        for (puVar1 = (undefined4 *)*puVar9; puVar1 != puVar9; puVar1 = (undefined4 *)*puVar1) {
          if (((puVar1[7] != 0) &&
              (uVar5 = FUN_00460b00(puVar1[7]), uVar7 = DAT_00904a00, uVar5 == DAT_00904a00)) &&
             ((uVar8 == 0 || ((uint)puVar1[7] < uVar8)))) {
            uVar8 = puVar1[7];
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 2);
      uVar6 = FUN_00465a70(param_1,uVar7 & 0xf | 0x2040);
      FUN_004655f0(uVar6);
    }
    return 1;
  }
  return 0;
}

