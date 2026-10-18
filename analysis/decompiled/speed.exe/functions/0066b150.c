/* speed.exe 0066b150 FUN_0066b150; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0066b150(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x54))();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
    *param_2 = *puVar3;
    param_2[1] = puVar3[1];
    param_2[2] = puVar3[2];
    return;
  }
  *param_2 = DAT_008a2fb4;
  param_2[1] = DAT_008a2fb8;
  param_2[2] = DAT_008a2fbc;
  return;
}

