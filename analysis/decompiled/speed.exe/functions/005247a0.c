/* speed.exe 005247a0 FUN_005247a0; analysis pseudocode, not buildable source.
 * calls 00642d70 FUN_00642d70
 */

void __fastcall FUN_005247a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00642d70();
  }
  puVar1 = &DAT_008f3434;
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

