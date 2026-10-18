/* speed.exe 00684bb0 FUN_00684bb0; analysis pseudocode, not buildable source.
 * calls 006846a0 FUN_006846a0
 * calls 00683df0 FUN_00683df0
 * calls 00684b60 FUN_00684b60
 * calls 00684ae0 FUN_00684ae0
 * calls 00684710 FUN_00684710
 */

int __thiscall FUN_00684bb0(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *local_10;
  int *local_c;
  int *local_8;
  undefined4 *local_4;
  
  puVar1 = param_2;
  if ((char)param_1[0x12] == '\0') {
    iVar2 = FUN_00684b60(param_2);
    local_8 = param_3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x3c) == *param_3)) {
      return iVar2;
    }
    FUN_00684ae0(puVar1);
    iVar2 = *local_8;
    if (iVar2 != DAT_0091ddbc) {
      param_2 = (undefined4 *)*puVar1;
      local_10 = &stack0x0000000c;
      local_4 = puVar1;
      local_c = param_1;
      iVar2 = FUN_006846a0(iVar2,&local_10);
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00684710(&param_2);
        *piVar3 = iVar2;
        FUN_00683df0(iVar2);
        (**(code **)(*param_1 + 0x10))(puVar1);
        return iVar2;
      }
    }
  }
  return 0;
}

