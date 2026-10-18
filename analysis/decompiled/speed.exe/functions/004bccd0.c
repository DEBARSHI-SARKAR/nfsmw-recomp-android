/* speed.exe 004bccd0 FUN_004bccd0; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 * calls 004ba340 FUN_004ba340
 */

void __thiscall FUN_004bccd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 0x84)) {
  case 1:
  case 3:
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 100);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0x48) != '\0') {
      *(undefined4 *)(param_1 + 0x44) = uVar1;
    }
    break;
  case 2:
    FUN_004b0320();
    return;
  case 4:
    FUN_004ba340(param_2,*(undefined4 *)(*(int *)(param_1 + 0x18) + 100));
    return;
  }
  return;
}

