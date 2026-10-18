/* speed.exe 005155e0 FUN_005155e0; analysis pseudocode, not buildable source.
 */

void FUN_005155e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
    case 0xc:
      *(undefined4 *)(iVar1 + 0x38) = param_2;
      *(undefined4 *)(iVar1 + 0x3c) = param_3;
    }
    *(undefined4 *)(iVar1 + 0x38) = param_2;
    *(undefined4 *)(iVar1 + 0x3c) = param_3;
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400000;
  }
  return;
}

