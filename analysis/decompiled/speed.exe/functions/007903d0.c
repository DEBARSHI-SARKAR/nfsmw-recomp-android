/* speed.exe 007903d0 FUN_007903d0; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460d20 FUN_00460d20
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

uint __thiscall FUN_007903d0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  puVar1 = (undefined4 *)(param_1 + 8);
  puVar2 = (undefined4 *)*puVar1;
  while ((puVar2 != puVar1 && (iVar3 = FUN_00460d20(param_2,puVar2 + 3), iVar3 != 0))) {
    puVar2 = (undefined4 *)*puVar2;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return (puVar2 == puVar1) - 1 & (uint)puVar2;
}

