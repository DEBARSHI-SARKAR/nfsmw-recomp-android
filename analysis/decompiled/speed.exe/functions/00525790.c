/* speed.exe 00525790 FUN_00525790; analysis pseudocode, not buildable source.
 * calls 004af1e0 FUN_004af1e0
 * calls 00642d70 FUN_00642d70
 * calls 004b9080 FUN_004b9080
 */

void FUN_00525790(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_004af1e0(0,0xffffffff);
  FUN_004b9080(0,0x10,"PauseAllSystems");
  if (DAT_009885c8 != (int *)0x0) {
    (**(code **)(*DAT_009885c8 + 0x34))();
  }
  if (param_1 != '\0') {
    if (*DAT_0091cad0 != 0) {
      FUN_00642d70();
    }
    puVar1 = &DAT_008f3434;
    iVar2 = 0x10;
    do {
      *puVar1 = 0;
      puVar1 = puVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

