/* speed.exe 007b25e0 FUN_007b25e0; analysis pseudocode, not buildable source.
 * calls 005157e0 FUN_005157e0
 * calls 007b1620 FUN_007b1620
 * calls 00524850 FUN_00524850
 */

void __fastcall FUN_007b25e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_007b1620();
  iVar1 = *(int *)(param_1 + 0x1c4);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x10);
  if (iVar2 == 0x85) {
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x5d19f25,*(undefined4 *)(iVar1 + 0x50));
    FUN_005157e0(uVar3);
  }
  else {
    if (iVar2 == 0x86) {
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd312f0cb,*(undefined4 *)(iVar1 + 0x50))
      ;
      FUN_005157e0(uVar3);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x8fe2a217,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x50));
      FUN_005157e0(uVar3);
      return;
    }
    if (iVar2 == 0x87) {
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc0721eb9,*(undefined4 *)(iVar1 + 0x50))
      ;
      FUN_005157e0(uVar3);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc62ad685,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x50));
      FUN_005157e0(uVar3);
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xb8f1f802,
                           *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x50));
      FUN_005157e0(uVar3);
      return;
    }
  }
  return;
}

