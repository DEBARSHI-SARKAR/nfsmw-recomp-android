/* speed.exe 00761240 FUN_00761240; analysis pseudocode, not buildable source.
 * calls 00760ca0 FUN_00760ca0
 * calls 004655f0 FUN_004655f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00761240(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_4;
  
  _DAT_00904fcc = 1;
  piVar2 = (int *)(param_1 + 8);
  local_4 = 4;
  do {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (iVar1 != *(int *)(param_1 + 4))) {
      if (*(char *)(iVar1 + 0x1155) == '\0') {
        FUN_00760ca0();
        FUN_004655f0(iVar1);
        *piVar2 = 0;
        *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -1;
      }
      else {
        *(undefined1 *)(iVar1 + 0x1155) = 0;
        if (*(int *)(iVar1 + 0x1150) != 0) {
          *(undefined4 *)(iVar1 + 0x1150) = 0;
        }
      }
    }
    piVar2 = piVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

