/* speed.exe 00603970 FUN_00603970; analysis pseudocode, not buildable source.
 * calls 00603340 FUN_00603340
 * calls 00465a70 FUN_00465a70
 */

void __fastcall FUN_00603970(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00603340(0);
  *param_1 = iVar1;
  param_1[1] = 0;
  iVar1 = FUN_00465a70(iVar1 * 0x30,0);
  param_1[2] = iVar1;
  iVar1 = FUN_00465a70(*param_1 * 0x14,0);
  param_1[3] = iVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00603340(param_1[3]);
  return;
}

