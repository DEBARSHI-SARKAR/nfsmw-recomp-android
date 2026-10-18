/* speed.exe 00522f60 FUN_00522f60; analysis pseudocode, not buildable source.
 * calls 005b8400 FUN_005b8400
 * calls 005b1360 FUN_005b1360
 * calls 00522e50 FUN_00522e50
 */

void __fastcall FUN_00522f60(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1e] <= param_1[0x1d]) {
    return;
  }
  if ((*param_1 != 0) && (iVar1 = FUN_005b1360(0x280164f), iVar1 != 0)) {
    FUN_005b8400(iVar1,0);
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  param_1[0x1d] = param_1[0x1d] + 1;
  FUN_00522e50();
  return;
}

