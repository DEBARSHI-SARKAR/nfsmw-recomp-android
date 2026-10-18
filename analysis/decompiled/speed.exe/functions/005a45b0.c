/* speed.exe 005a45b0 FUN_005a45b0; analysis pseudocode, not buildable source.
 * calls 005a4390 FUN_005a4390
 * calls 00582c70 FUN_00582c70
 * calls 0059a060 FUN_0059a060
 * calls 0059a500 FUN_0059a500
 * calls 00599db0 FUN_00599db0
 * calls 0059a790 FUN_0059a790
 */

void FUN_005a45b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x1c) & 0x40) == 0) {
    if (*(int *)(param_1 + 0x18) == 7) {
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x2000000;
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) >> 1 & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x1c) & 0x2000000) == 0)) {
      FUN_00582c70();
      return;
    }
    switch(*(int *)(param_1 + 0x18)) {
    case 1:
      FUN_0059a500(param_1,iVar1,param_2);
      return;
    case 2:
      FUN_005a4390(param_1,iVar1,param_2);
      return;
    case 7:
      FUN_00599db0(param_1,iVar1,param_2);
      return;
    case 9:
      FUN_0059a790(param_1,iVar1,param_2);
      return;
    case 0xc:
      FUN_0059a060(param_1,iVar1,param_2);
    }
  }
  return;
}

