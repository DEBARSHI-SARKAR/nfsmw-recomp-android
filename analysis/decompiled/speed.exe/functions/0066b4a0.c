/* speed.exe 0066b4a0 FUN_0066b4a0; analysis pseudocode, not buildable source.
 * calls 00667ff0 FUN_00667ff0
 */

void __thiscall FUN_0066b4a0(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((char)param_1[0x2e] == '\0') {
    iVar3 = (**(code **)(*param_1 + 0x20))();
    if (iVar3 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0066b4ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 100))();
      return;
    }
    if (param_1[0x27] != 0) {
      FUN_00667ff0();
      return;
    }
    puVar4 = &DAT_008a3028;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
  }
  else {
    cVar1 = (**(code **)(param_1[0x2c] + 4))(param_2);
    if (cVar1 == '\0') {
      puVar4 = &DAT_008a3028;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      return;
    }
  }
  return;
}

