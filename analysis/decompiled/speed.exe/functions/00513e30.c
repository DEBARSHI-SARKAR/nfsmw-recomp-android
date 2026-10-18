/* speed.exe 00513e30 FUN_00513e30; analysis pseudocode, not buildable source.
 * calls 00513bc0 FUN_00513bc0
 * calls 0078c730 FUN_0078c730
 * calls 0078c760 FUN_0078c760
 */

void FUN_00513e30(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_27c [636];
  
  FUN_0078c730(param_2);
  uVar1 = FUN_0078c760(param_2);
  puVar2 = (undefined4 *)FUN_00513bc0(local_27c,uVar1);
  for (iVar3 = 0x9f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

