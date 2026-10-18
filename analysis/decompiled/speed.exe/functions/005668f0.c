/* speed.exe 005668f0 FUN_005668f0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 005af1c0 FUN_005af1c0
 * calls 00515d70 FUN_00515d70
 * calls 00515c00 FUN_00515c00
 */

void __fastcall FUN_005668f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(param_1 + 0x44) < 1) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x38) = 0;
      pcVar3 = "LEAVE";
    }
    else {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
      FUN_00515c00(*(undefined4 *)(param_1 + 0x4c),0x3dd874c5);
      FUN_00515d70(*(undefined4 *)(param_1 + 0x48),&DAT_0089c2d0,*(undefined4 *)(param_1 + 0x3c));
      if (*(char *)(param_1 + 0x38) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x38) = 1;
      pcVar3 = "APPEAR";
    }
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(pcVar3,1);
    uVar2 = FUN_005af1c0("CTS_GROUP",uVar2);
    FUN_00524920(uVar1,uVar2);
  }
  return;
}

