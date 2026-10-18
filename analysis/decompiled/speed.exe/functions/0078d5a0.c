/* speed.exe 0078d5a0 FUN_0078d5a0; analysis pseudocode, not buildable source.
 * calls 00844150 FUN_00844150
 * calls 00842cf0 FUN_00842cf0
 */

void __fastcall FUN_0078d5a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  iVar2 = FUN_00844150(param_1[1]);
  if (9 >= iVar1) {
    FUN_00842cf0(param_1[1],iVar1);
  }
  if ((iVar2 == 0) && (9 < iVar1)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0078d5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}

