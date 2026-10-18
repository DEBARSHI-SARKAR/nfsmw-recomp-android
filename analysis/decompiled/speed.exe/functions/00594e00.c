/* speed.exe 00594e00 FUN_00594e00; analysis pseudocode, not buildable source.
 * calls 00594d50 FUN_00594d50
 * calls 00652ad0 _malloc
 * calls 00460c50 FUN_00460c50
 * calls 00460c70 FUN_00460c70
 * calls 0058afb0 FUN_0058afb0
 */

void __thiscall FUN_00594e00(int param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00594d50(0);
  }
  iVar1 = FUN_00460c50(param_2);
  pvVar2 = _malloc(iVar1 + 1);
  FUN_00460c70(pvVar2,param_2);
  FUN_0058afb0(pvVar2);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

