/* speed.exe 0071a390 FUN_0071a390; analysis pseudocode, not buildable source.
 * calls 007153b0 FUN_007153b0
 */

void __fastcall FUN_0071a390(int *param_1)

{
  int *piVar1;
  
  if (DAT_00993cc8 != 0) {
    piVar1 = (int *)FUN_007153b0(0,0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x108))();
    }
    (**(code **)(*param_1 + 0xc))(0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x0071a3c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  return;
}

