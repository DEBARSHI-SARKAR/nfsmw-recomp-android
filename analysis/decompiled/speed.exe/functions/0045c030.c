/* speed.exe 0045c030 FUN_0045c030; analysis pseudocode, not buildable source.
 * calls 0045bf90 FUN_0045bf90
 * calls 0045c6e0 FUN_0045c6e0
 */

void __fastcall FUN_0045c030(int param_1)

{
  int iVar1;
  
  while ((iVar1 = *(int *)(param_1 + 4), *(int *)(iVar1 + 0x40) != 0 ||
         (*(int *)(iVar1 + 0x4c) != 0))) {
    FUN_0045bf90(iVar1 + 0x38);
    FUN_0045c6e0(*(int *)(param_1 + 4) + 0x44);
  }
  if (DAT_0090dcb8 != '\0') {
    if (DAT_0090dcbc != (undefined4 *)0x0) {
      (**(code **)*DAT_0090dcbc)(1);
    }
    DAT_0090dcbc = (undefined4 *)0x0;
    DAT_0090dcb8 = '\0';
  }
  return;
}

