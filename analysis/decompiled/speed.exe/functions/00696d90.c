/* speed.exe 00696d90 FUN_00696d90; analysis pseudocode, not buildable source.
 * calls 005d06a0 FUN_005d06a0
 * calls 00486bd0 FUN_00486bd0
 */

void __thiscall FUN_00696d90(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = **(int **)(param_1 + 0x30);
  FUN_005d06a0(param_2,iVar1);
  puVar3 = (undefined4 *)(iVar1 + 0x70);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(iVar1 + 0xa0) = DAT_008a2fd0;
  *(undefined4 *)(iVar1 + 0xa4) = DAT_008a2fd4;
  *(undefined4 *)(iVar1 + 0xa8) = DAT_008a2fd8;
  *(undefined4 *)(iVar1 + 0xac) = DAT_008a2fdc;
  FUN_00486bd0((undefined4 *)(iVar1 + 0x70),param_1 + 0x48);
  return;
}

