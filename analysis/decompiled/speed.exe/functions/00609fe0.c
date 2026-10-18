/* speed.exe 00609fe0 FUN_00609fe0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00609fe0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c))
      ;
      *(undefined1 *)(param_1 + 0x24) = 1;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x28);
    **(undefined4 **)(iVar2 + 8) = 0;
    piVar1 = (int *)(iVar2 + 8);
    *piVar1 = *piVar1 + 8;
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return;
}

