/* speed.exe 0078d400 FUN_0078d400; analysis pseudocode, not buildable source.
 * calls 00842cf0 FUN_00842cf0
 */

void __fastcall FUN_0078d400(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 < 10) {
    FUN_00842cf0(param_1[1],iVar1);
    *(undefined1 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0078d426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  return;
}

