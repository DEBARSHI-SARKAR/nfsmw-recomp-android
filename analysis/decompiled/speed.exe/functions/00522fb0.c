/* speed.exe 00522fb0 FUN_00522fb0; analysis pseudocode, not buildable source.
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00522e50 FUN_00522e50
 */

void __fastcall FUN_00522fb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x74) < 3) {
    return;
  }
  if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_005b1360(0x280164f), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
  FUN_00522e50();
  return;
}

