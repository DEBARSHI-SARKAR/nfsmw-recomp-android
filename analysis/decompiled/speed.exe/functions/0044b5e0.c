/* speed.exe 0044b5e0 FUN_0044b5e0; analysis pseudocode, not buildable source.
 * calls 0044a230 FUN_0044a230
 * calls 0044b430 FUN_0044b430
 * calls 0044a260 FUN_0044a260
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_0044b5e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00460bf0("EN_TollBoothArm_01");
  if (DAT_0090dad0 != 0) {
    iVar2 = FUN_0044b430(uVar1);
    if (iVar2 != 0) {
      FUN_0044a230(0);
      FUN_0044a260();
    }
  }
  uVar1 = FUN_00460bf0("EN_TollBoothArm_02");
  if (DAT_0090dad0 != 0) {
    iVar2 = FUN_0044b430(uVar1);
    if (iVar2 != 0) {
      FUN_0044a230(0);
      FUN_0044a260();
    }
  }
  uVar1 = FUN_00460bf0("EN_TollBoothArm_03");
  if (DAT_0090dad0 != 0) {
    iVar2 = FUN_0044b430(uVar1);
    if (iVar2 != 0) {
      FUN_0044a230(0);
      FUN_0044a260();
    }
  }
  uVar1 = FUN_00460bf0("EN_TollBoothArm_04");
  if (DAT_0090dad0 != 0) {
    iVar2 = FUN_0044b430(uVar1);
    if (iVar2 != 0) {
      FUN_0044a230(0);
      FUN_0044a260();
      return;
    }
  }
  return;
}

