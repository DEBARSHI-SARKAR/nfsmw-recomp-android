/* speed.exe 0051d410 FUN_0051d410; analysis pseudocode, not buildable source.
 * calls 00628230 FUN_00628230
 * calls 00588250 FUN_00588250
 */

void __fastcall FUN_0051d410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xe4);
  if (((iVar1 == 1) || (iVar1 == 3)) && (iVar2 = 0, (iVar1 != 1) != 0xffffffee)) {
    do {
      iVar1 = FUN_00588250(*(int *)(param_1 + 0x4c) * iVar2);
      FUN_00628230(iVar1 + 0x18,*(undefined4 *)(param_1 + 0xe4),iVar2,1);
      iVar1 = FUN_00588250(*(int *)(param_1 + 0x4c) * iVar2 + 1);
      FUN_00628230(iVar1 + 0x18,*(undefined4 *)(param_1 + 0xe4),iVar2,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)((*(int *)(param_1 + 0xe4) != 1) + 0x12));
  }
                    /* WARNING: Could not recover jumptable at 0x0051d4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
  return;
}

