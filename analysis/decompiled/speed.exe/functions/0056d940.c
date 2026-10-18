/* speed.exe 0056d940 FUN_0056d940; analysis pseudocode, not buildable source.
 */

void FUN_0056d940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = &DAT_0091cd10;
  iVar3 = 0x39;
  puVar1 = param_1;
  do {
    puVar1 = puVar1 + 2;
    if (puVar1 <= param_2) {
      *puVar2 = *param_1;
      puVar2[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

