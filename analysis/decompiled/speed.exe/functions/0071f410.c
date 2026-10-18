/* speed.exe 0071f410 FUN_0071f410; analysis pseudocode, not buildable source.
 * calls 0071f1b0 FUN_0071f1b0
 * calls 0071b170 FUN_0071b170
 * calls 0071ef50 FUN_0071ef50
 * calls 0071aff0 FUN_0071aff0
 * calls 004cb460 FUN_004cb460
 */

void __fastcall FUN_0071f410(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(DAT_00993cc8 + 0x138) != 2) && (*(int *)(DAT_00993cc8 + 0x138) != 0x29a)) {
    (**(code **)(*param_1 + 0xc))(999);
    return;
  }
  if (((param_1[9] & 0x200U) == 0) &&
     ((iVar2 = FUN_004cb460(0x53), 0 < iVar2 || (iVar2 = FUN_004cb460(0x42), 0 < iVar2)))) {
    FUN_0071aff0();
  }
  uVar1 = param_1[9];
  if (((uVar1 & 0x10000000) != 0) && ((uVar1 & 0x88) == 0)) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) != 0) {
        FUN_0071ef50();
      }
    }
    else {
      FUN_0071b170();
    }
  }
  if ((param_1[9] & 0x40000U) == 0) {
    return;
  }
  FUN_0071f1b0();
  return;
}

