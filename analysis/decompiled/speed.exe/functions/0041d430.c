/* speed.exe 0041d430 FUN_0041d430; analysis pseudocode, not buildable source.
 */

void FUN_0041d430(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -8;
    param_3 = param_3 + -8;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

