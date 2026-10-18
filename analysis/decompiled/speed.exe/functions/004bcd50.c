/* speed.exe 004bcd50 FUN_004bcd50; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 * calls 004b02b0 FUN_004b02b0
 */

void __thiscall FUN_004bcd50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((0 < *(int *)(param_1 + 0x84)) && (*(int *)(param_1 + 0x84) < 5)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(param_1 + 0x7c) = uVar1;
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x60);
      FUN_004b02b0(uVar1,uVar1,0,0);
    }
  }
  return;
}

