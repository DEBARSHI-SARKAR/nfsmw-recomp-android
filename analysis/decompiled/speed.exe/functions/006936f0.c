/* speed.exe 006936f0 FUN_006936f0; analysis pseudocode, not buildable source.
 * calls 00667ff0 FUN_00667ff0
 */

void __thiscall FUN_006936f0(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x20))();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00693701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 100))();
    return;
  }
  if (param_1[0x1b] != 0) {
    FUN_00667ff0();
    return;
  }
  puVar3 = &DAT_008a3028;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

