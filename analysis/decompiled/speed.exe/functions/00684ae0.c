/* speed.exe 00684ae0 FUN_00684ae0; analysis pseudocode, not buildable source.
 * calls 0067dce0 FUN_0067dce0
 * calls 0067d200 FUN_0067d200
 * calls 00684710 FUN_00684710
 * calls 0067f510 FUN_0067f510
 */

void __thiscall FUN_00684ae0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *local_4;
  
  puVar2 = param_2;
  param_2 = (undefined4 *)*param_2;
  local_4 = param_1;
  piVar3 = (int *)FUN_0067d200(&local_4,&param_2);
  if (*piVar3 != param_1[0x25]) {
    piVar3 = (int *)FUN_00684710(&param_2);
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      FUN_0067f510(iVar1);
      FUN_0067dce0(iVar1);
      puVar4 = (undefined4 *)FUN_00684710(&param_2);
      *puVar4 = 0;
      (**(code **)(*param_1 + 0x10))(puVar2);
    }
  }
  return;
}

