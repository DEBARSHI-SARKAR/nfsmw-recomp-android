/* speed.exe 00450310 FUN_00450310; analysis pseudocode, not buildable source.
 * calls 0044fff0 FUN_0044fff0
 * calls 0044a300 FUN_0044a300
 * calls 0044e3c0 FUN_0044e3c0
 * calls 0044a230 FUN_0044a230
 * calls 0044b430 FUN_0044b430
 * calls 00460bf0 FUN_00460bf0
 * calls 0044d510 FUN_0044d510
 */

void FUN_00450310(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((DAT_0090d9ec == '\0') && (DAT_009260d8 == 0)) {
    FUN_0044d510();
    if (DAT_0090dad0 == 0) {
      FUN_0044e3c0();
    }
    puVar1 = DAT_0090db84;
    if (DAT_0090dad0 != 0) {
      for (; (undefined4 **)puVar1 != &DAT_0090db84; puVar1 = (undefined4 *)*puVar1) {
        FUN_0044fff0(puVar1[2]);
      }
      uVar2 = FUN_00460bf0("EN_TollBoothArm_01");
      if ((DAT_0090dad0 != 0) && (iVar3 = FUN_0044b430(uVar2), iVar3 != 0)) {
        FUN_0044a230(0);
        FUN_0044a300();
      }
      uVar2 = FUN_00460bf0("EN_TollBoothArm_02");
      if ((DAT_0090dad0 != 0) && (iVar3 = FUN_0044b430(uVar2), iVar3 != 0)) {
        FUN_0044a230(0);
        FUN_0044a300();
      }
      uVar2 = FUN_00460bf0("EN_TollBoothArm_03");
      if ((DAT_0090dad0 != 0) && (iVar3 = FUN_0044b430(uVar2), iVar3 != 0)) {
        FUN_0044a230(0);
        FUN_0044a300();
      }
      uVar2 = FUN_00460bf0("EN_TollBoothArm_04");
      if ((DAT_0090dad0 != 0) && (iVar3 = FUN_0044b430(uVar2), iVar3 != 0)) {
        FUN_0044a230(0);
        FUN_0044a300();
        return;
      }
    }
  }
  return;
}

