/* speed.exe 0066b100 FUN_0066b100; analysis pseudocode, not buildable source.
 * calls 00667ff0 FUN_00667ff0
 */

void __thiscall FUN_0066b100(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0066b118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 100))();
    return;
  }
  if (param_1[0x27] != 0) {
    FUN_00667ff0();
    return;
  }
  puVar3 = &DAT_008a3028;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

