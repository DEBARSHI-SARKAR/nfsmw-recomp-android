/* speed.exe 0040e7e0 FUN_0040e7e0; analysis pseudocode, not buildable source.
 */

void FUN_0040e7e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 8;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 8; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

