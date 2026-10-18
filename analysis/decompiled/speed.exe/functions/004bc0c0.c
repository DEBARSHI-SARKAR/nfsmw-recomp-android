/* speed.exe 004bc0c0 FUN_004bc0c0; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_004bc0c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_004b0320(param_2);
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0x128) != '\0') {
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
    uVar2 = FUN_007c4b80();
    iVar1 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(iVar1 + 8) + 0x50);
    uVar2 = FUN_007c4b80();
    *(undefined4 *)(param_1 + 0x40) = uVar2;
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(*(int *)(iVar1 + 8) + 0x40);
  }
  return;
}

