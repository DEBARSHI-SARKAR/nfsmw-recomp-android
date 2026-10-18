/* speed.exe 0079e160 FUN_0079e160; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078c490 FUN_0078c490
 * calls 0085ce00 FUN_0085ce00
 * calls 0079d3f0 FUN_0079d3f0
 * calls 00460d20 FUN_00460d20
 * calls 0085cd00 FUN_0085cd00
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls 00796d30 FUN_00796d30
 * calls 0078c580 FUN_0078c580
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079e160(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  iVar1 = FUN_0085ce00(*param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0056e340();
    iVar3 = FUN_00460d20(param_2,uVar2);
    if ((iVar3 == 0) || (iVar1 = FUN_00460d20(param_2,iVar1 + 0x50), iVar1 == 0)) {
      FUN_0078c580();
    }
    else {
      FUN_0085cd00(*param_1,param_2,0);
      FUN_00796d30();
      FUN_0079d3f0();
      FUN_0078c490();
    }
    InterlockedDecrement((LONG *)&DAT_009b42d4);
    FUN_007ec1c8();
    return;
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

