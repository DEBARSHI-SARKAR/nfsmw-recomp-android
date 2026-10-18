/* speed.exe 00517b30 FUN_00517b30; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

void __thiscall FUN_00517b30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00460d20(param_2,"drag_tutorial");
  if (iVar1 != 0) {
    iVar1 = FUN_00460d20(param_2,"speedtrap_tutorial");
    if (iVar1 != 0) {
      iVar1 = FUN_00460d20(param_2,"tollbooth_tutorial");
      if (iVar1 != 0) {
        iVar1 = FUN_00460d20(param_2,"bounty_tutorial");
        if (iVar1 != 0) {
          iVar1 = FUN_00460d20(param_2,"pursuit_tutorial");
          if (iVar1 != 0) {
            *(undefined1 *)(param_1 + 0x1c) = 0;
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return;
}

