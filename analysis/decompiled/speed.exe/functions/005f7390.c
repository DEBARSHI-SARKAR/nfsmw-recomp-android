/* speed.exe 005f7390 FUN_005f7390; analysis pseudocode, not buildable source.
 * calls 00465240 FUN_00465240
 * calls 00465a70 FUN_00465a70
 * calls 00460a10 FUN_00460a10
 * calls 005f66d0 FUN_005f66d0
 * calls 00466140 FUN_00466140
 */

void __thiscall FUN_005f7390(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = FUN_00465a70(0x164000,0x47);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_00460a10();
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  FUN_00465240(uVar1,*(undefined4 *)(param_1 + 0x50),0x164000,"GManager Temp");
  FUN_00466140(*(undefined4 *)(param_1 + 0x4c),0);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar3) == 0) {
        FUN_005f66d0(param_2,*(undefined4 *)(param_1 + 0x4c));
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (uVar2 < *(uint *)(param_1 + 0x20));
  }
  return;
}

