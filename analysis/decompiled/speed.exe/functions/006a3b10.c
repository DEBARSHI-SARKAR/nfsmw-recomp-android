/* speed.exe 006a3b10 FUN_006a3b10; analysis pseudocode, not buildable source.
 * calls 006e9f60 FUN_006e9f60
 * calls 005d0370 FUN_005d0370
 * calls 0066fb40 FUN_0066fb40
 */

void __fastcall FUN_006a3b10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  if (iVar1 != 0) {
    FUN_0066fb40();
    FUN_005d0370(iVar1,8,0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(char *)(param_1 + 0xb8) != '\0') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  FUN_006e9f60();
                    /* WARNING: Could not recover jumptable at 0x006a3b5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x34) + 0x7c))();
  return;
}

