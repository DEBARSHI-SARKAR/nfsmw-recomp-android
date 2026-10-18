/* speed.exe 0078c1d0 FUN_0078c1d0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460d20 FUN_00460d20
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056e340 FUN_0056e340
 * calls 0085ccb0 FUN_0085ccb0
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

void __thiscall FUN_0078c1d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  uVar1 = FUN_0056e340();
  iVar2 = FUN_00460d20(param_2 + 0x48,uVar1);
  if (iVar2 != 0) {
    FUN_0085ccb0(*param_1,param_2);
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}

