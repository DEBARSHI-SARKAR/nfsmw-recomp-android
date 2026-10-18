/* speed.exe 0052af20 FUN_0052af20; analysis pseudocode, not buildable source.
 * calls 0052ac70 FUN_0052ac70
 * calls 00634370 FUN_00634370
 * calls 00628c50 FUN_00628c50
 */

void __fastcall FUN_0052af20(int param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_00634370();
  if (*(int *)(param_1 + 0xe4) == 1) {
    cVar1 = FUN_00628c50();
    iVar2 = 3;
    if (cVar1 != '\0') goto LAB_0052af49;
  }
  iVar2 = 1;
LAB_0052af49:
  if (*(int *)(param_1 + 0xe4) != iVar2) {
    *(int *)(param_1 + 0xe4) = iVar2;
    FUN_0052ac70();
                    /* WARNING: Could not recover jumptable at 0x0052af65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x2c) + 8))();
    return;
  }
  return;
}

