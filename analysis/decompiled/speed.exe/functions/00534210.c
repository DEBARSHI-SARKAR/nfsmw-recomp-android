/* speed.exe 00534210 FUN_00534210; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 * calls 005b8550 FUN_005b8550
 * calls 00514c70 FUN_00514c70
 * calls 00516af0 FUN_00516af0
 */

void __thiscall FUN_00534210(int param_1,char *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00516af0(*(int *)(param_1 + 0x10));
    if (iVar1 != 0) {
      iVar1 = FUN_005b8550(0x43578dea);
      if (iVar1 != 0) {
        if (*param_2 != '\0') {
          FUN_00514cc0();
          return;
        }
        FUN_00514c70(iVar1);
      }
    }
  }
  return;
}

