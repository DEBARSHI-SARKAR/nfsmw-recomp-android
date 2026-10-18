/* speed.exe 0070e490 FUN_0070e490; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070e490(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_008967fc;
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[4] - iVar1 >> 2) << 2,0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

