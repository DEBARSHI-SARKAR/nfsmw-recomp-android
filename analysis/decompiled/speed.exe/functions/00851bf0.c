/* speed.exe 00851bf0 FUN_00851bf0; analysis pseudocode, not buildable source.
 * calls 0085a9d0 FUN_0085a9d0
 */

void FUN_00851bf0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((param_2 != (undefined4 *)0x0) && (param_3 != 0)) && (param_3 == 0x54)) {
    *(undefined2 *)(param_1 + 0x8e) = 1;
    puVar2 = (undefined4 *)(param_1 + 0x90);
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    return;
  }
  *(undefined2 *)(param_1 + 0x8e) = 0;
  FUN_0085a9d0(param_1 + 0xe4,0);
  return;
}

