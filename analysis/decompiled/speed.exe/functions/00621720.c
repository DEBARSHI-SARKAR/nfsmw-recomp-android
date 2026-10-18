/* speed.exe 00621720 FUN_00621720; analysis pseudocode, not buildable source.
 * calls 00727480 FUN_00727480
 */

void __fastcall FUN_00621720(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_28;
  float local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_00876d88;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = &PTR_FUN_008a6a8c;
  local_28 = param_1[5];
  local_24 = -(float)param_1[3];
  local_14 = 0;
  for (iVar1 = FUN_00727480(&local_28,10,0); iVar1 != 0; iVar1 = FUN_00727480(&local_28,10,iVar1)) {
    *(ushort *)(iVar1 + 0x1a) = (ushort)(param_1[2] != 0);
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_1c;
  return;
}

