/* speed.exe 00592710 FUN_00592710; analysis pseudocode, not buildable source.
 * calls 00592490 FUN_00592490
 */

void __thiscall FUN_00592710(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 8) != param_1 + 8)) &&
     (*(int *)(param_1 + 0x10) != param_1 + 0x10)) {
    *(undefined1 *)(param_2 + 0x14) = 1;
    iVar1 = FUN_00592490(param_2);
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 0x2c))) {
      *(undefined1 *)(iVar1 + 0x28) = 1;
    }
  }
  return;
}

