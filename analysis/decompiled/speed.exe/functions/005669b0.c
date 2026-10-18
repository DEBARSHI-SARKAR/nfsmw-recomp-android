/* speed.exe 005669b0 FUN_005669b0; analysis pseudocode, not buildable source.
 * calls 00514da0 FUN_00514da0
 * calls 00515d70 FUN_00515d70
 * calls 00515c00 FUN_00515c00
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_005669b0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    if (*(int *)(param_1 + 0x3c) < 1) {
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x5079c8f8);
      if (cVar1 != '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x33113ac,1);
      }
    }
    else {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      FUN_00515c00(*(undefined4 *)(param_1 + 0x44),0x7d0171e4);
      FUN_00515d70(*(undefined4 *)(param_1 + 0x40),&DAT_0089c2d0,*(undefined4 *)(param_1 + 0x38));
      cVar1 = FUN_00514da0(*(undefined4 *)(param_1 + 0x48),0x5079c8f8);
      if (cVar1 == '\0') {
        FUN_00514d10(*(undefined4 *)(param_1 + 0x48),0x5079c8f8,1);
        return;
      }
    }
  }
  return;
}

