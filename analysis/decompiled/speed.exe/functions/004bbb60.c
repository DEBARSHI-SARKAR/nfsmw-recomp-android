/* speed.exe 004bbb60 FUN_004bbb60; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 */

void __thiscall FUN_004bbb60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x164) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x2c);
    *(undefined4 *)(param_1 + 0x158) = uVar1;
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0x164) != '\0') {
      *(undefined4 *)(param_1 + 0x160) = uVar1;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
    FUN_004b0320(param_2);
    return;
  case 3:
  case 7:
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x30) + 0x2c);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      *(undefined4 *)(param_1 + 0x9c) = uVar1;
    }
  }
  return;
}

