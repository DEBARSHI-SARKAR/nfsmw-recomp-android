/* speed.exe 004b8700 FUN_004b8700; analysis pseudocode, not buildable source.
 * calls 00464080 FUN_00464080
 * calls 00465a70 FUN_00465a70
 * calls 00464a50 FUN_00464a50
 */

void FUN_004b8700(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00464080(DAT_008ee558);
  if (param_1 <= iVar1) {
    FUN_00465a70(param_1,(DAT_008ee558 & 0xf) + 0x1000);
    return;
  }
  FUN_00464a50(DAT_008ee558,0,0x7fffffff);
  FUN_00465a70(param_1,0x1000);
  return;
}

