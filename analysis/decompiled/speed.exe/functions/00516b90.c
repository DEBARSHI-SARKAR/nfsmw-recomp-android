/* speed.exe 00516b90 FUN_00516b90; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

bool __thiscall FUN_00516b90(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*param_1 != -0xd8) {
    for (iVar1 = *(int *)(*param_1 + 0xe4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x20) != 0) {
        iVar1 = FUN_00460d20(param_2,*(undefined4 *)(iVar1 + 0xc));
        return iVar1 == 0;
      }
    }
  }
  return false;
}

