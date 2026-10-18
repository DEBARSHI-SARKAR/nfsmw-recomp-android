/* speed.exe 004ac100 thunk_FUN_004ac040; analysis pseudocode, not buildable source.
 */

void thunk_FUN_004ac040(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  
  iVar1 = FUN_00464080(DAT_008ee558);
  if (iVar1 < param_1) {
    FUN_00464a50(DAT_008ee558,0,0x7fffffff);
    if (param_3 == '\0') {
      FUN_00465a70(param_1,0x1000);
      return;
    }
    FUN_00465a70(param_1,0x1040);
    return;
  }
  if (param_3 == '\0') {
    FUN_00465a70(param_1,(DAT_008ee558 & 0xf) + 0x1000);
    return;
  }
  FUN_00465a70(param_1,(DAT_008ee558 & 0xf) + 0x1040);
  return;
}

