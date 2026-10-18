/* speed.exe 00790bc0 FUN_00790bc0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0085ce00 FUN_0085ce00
 * calls 00460d20 FUN_00460d20
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078c580 FUN_0078c580
 * calls 0056e340 FUN_0056e340
 * calls 0085cd00 FUN_0085cd00
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls 0078c490 FUN_0078c490
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_00790bc0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  iVar1 = FUN_0085ce00(*param_1);
  if (iVar1 == 0) {
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    return;
  }
  if (param_2 != 0) {
    uVar2 = FUN_0056e340();
    iVar1 = FUN_00460d20(param_2 * 0xb0 + 0x50 + iVar1,uVar2);
    if (iVar1 != 0) {
      FUN_0085cd00(*param_1,0,param_2);
      FUN_0078c490();
      goto LAB_00790c5f;
    }
  }
  FUN_0078c580();
LAB_00790c5f:
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

