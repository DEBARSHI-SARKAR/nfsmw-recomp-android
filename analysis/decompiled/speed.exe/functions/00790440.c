/* speed.exe 00790440 FUN_00790440; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

uint __thiscall FUN_00790440(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  puVar1 = (undefined4 *)(param_1 + 8);
  puVar2 = (undefined4 *)*puVar1;
  for (iVar3 = 0; (puVar2 != puVar1 && (iVar3 != param_2)); iVar3 = iVar3 + 1) {
    puVar2 = (undefined4 *)*puVar2;
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return (puVar2 == puVar1) - 1 & (uint)puVar2;
}

