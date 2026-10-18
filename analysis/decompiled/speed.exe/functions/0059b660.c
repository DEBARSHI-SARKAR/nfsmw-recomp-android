/* speed.exe 0059b660 FUN_0059b660; analysis pseudocode, not buildable source.
 * calls 0045d380 FUN_0045d380
 * calls 00592490 FUN_00592490
 * calls 00586c10 FUN_00586c10
 * calls 00586760 FUN_00586760
 * calls 00592600 FUN_00592600
 * calls 00586ca0 FUN_00586ca0
 */

void __fastcall FUN_0059b660(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x10) != param_1 + 0x10) &&
     (*(int **)(param_1 + 8) != (int *)(param_1 + 8))) {
    if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x1c)) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      iVar3 = *(uint *)(param_1 + 0x1c) - *(uint *)(param_1 + 0x18);
      uVar2 = FUN_00586ca0(uVar1);
      if (iVar3 + 1U < uVar2) {
        iVar3 = FUN_0045d380(iVar3);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar3 + -4;
        }
        *(int *)(param_1 + 0x28) = iVar3;
        iVar3 = FUN_00592490(*(undefined4 *)(param_1 + 0x24));
      }
      else {
        iVar3 = *(int *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0x28) = uVar1;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar3 + -4;
        }
      }
      *(int *)(param_1 + 0x2c) = iVar3;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      FUN_00592600();
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_00586760(0x249db7b7);
      }
      FUN_00586c10();
      return;
    }
  }
  return;
}

