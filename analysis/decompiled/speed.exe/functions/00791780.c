/* speed.exe 00791780 FUN_00791780; analysis pseudocode, not buildable source.
 * calls 0078d5a0 FUN_0078d5a0
 * calls 0078d4f0 FUN_0078d4f0
 * calls 0078d400 FUN_0078d400
 * calls 0078d430 FUN_0078d430
 * calls 00842cf0 FUN_00842cf0
 */

void __fastcall FUN_00791780(int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)param_1[2];
  if (iVar1 < 0x68747471) {
    if (iVar1 == 0x68747470) {
      FUN_0078d5a0();
      return;
    }
    if (iVar1 == 0x616c7274) {
      FUN_0078d400();
      return;
    }
    if (iVar1 == 0x63617264) {
      FUN_0078d4f0();
      return;
    }
  }
  else if (iVar1 == 0x6e657773) {
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (iVar1 < 10) {
      FUN_00842cf0(param_1[1],iVar1);
      *(undefined1 *)(param_1 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x007917f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x3c))();
      return;
    }
  }
  else if (iVar1 == 0x70726f6d) {
    FUN_0078d430();
    return;
  }
  return;
}

