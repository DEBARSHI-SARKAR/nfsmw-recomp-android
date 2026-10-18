/* speed.exe 00681620 FUN_00681620; analysis pseudocode, not buildable source.
 * calls 00723c90 FUN_00723c90
 * calls 00455960 FUN_00455960
 * calls 00681540 FUN_00681540
 * calls 00728920 FUN_00728920
 */

void __thiscall FUN_00681620(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x34) & param_2) == 0) {
    iVar1 = FUN_00723c90(*(undefined4 *)(param_1 + 0x2c));
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) & 0xef;
      FUN_00728920();
    }
    iVar1 = FUN_00455960(*(undefined4 *)(param_1 + 0x28));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar2 = FUN_00681540(param_1,iVar1,param_3);
      *(undefined4 *)(param_1 + 0x38) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = FUN_00723c90(*(undefined4 *)(param_1 + 0x2c));
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 4) = *(byte *)(iVar1 + 4) | 0x10;
      FUN_00728920();
    }
  }
  return;
}

