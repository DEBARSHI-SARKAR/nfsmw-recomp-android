/* speed.exe 0056d8c0 FUN_0056d8c0; analysis pseudocode, not buildable source.
 */

void FUN_0056d8c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_0091cd10;
  iVar2 = 0x39;
  do {
    if (param_1 + 2 <= param_2) {
      *param_1 = *puVar1;
      param_1[1] = puVar1[1];
      param_1 = param_1 + 2;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

