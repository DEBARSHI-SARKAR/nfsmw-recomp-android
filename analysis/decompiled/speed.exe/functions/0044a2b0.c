/* speed.exe 0044a2b0 FUN_0044a2b0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0044a2b0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x14); puVar1 != (undefined4 *)(param_1 + 0x14);
      puVar1 = (undefined4 *)*puVar1) {
    piVar2 = (int *)puVar1[2];
    iVar3 = piVar2[5];
    if (((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 1)) && (iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0x10) = 1;
    }
    iVar3 = (**(code **)(*piVar2 + 0x20))();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*piVar2 + 0x20))();
      *(undefined1 *)(iVar3 + 0x28) = 1;
    }
  }
  return;
}

