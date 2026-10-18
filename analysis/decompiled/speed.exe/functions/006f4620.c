/* speed.exe 006f4620 FUN_006f4620; analysis pseudocode, not buildable source.
 * calls 006f2540 FUN_006f2540
 */

void __thiscall FUN_006f4620(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[0x20] == 0) {
    iVar1 = FUN_006f2540(param_2,param_1,param_3);
    if (iVar1 != 0) {
      param_1[10] = param_1[10] + 1;
    }
    param_1[0x20] = iVar1;
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}

