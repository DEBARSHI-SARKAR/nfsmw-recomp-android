/* speed.exe 00432ab0 FUN_00432ab0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00432ab0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar2 != *(undefined4 **)(param_1 + 0x20)) {
    do {
      (**(code **)(*(int *)*puVar2 + 0xc))();
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 **)(param_1 + 0x20));
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(*(int *)(param_1 + 0x24) - iVar1 >> 2) << 2,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x32) = 0;
  return;
}

