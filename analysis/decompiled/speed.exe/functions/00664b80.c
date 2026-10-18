/* speed.exe 00664b80 FUN_00664b80; analysis pseudocode, not buildable source.
 * calls 0056b950 FUN_0056b950
 * calls 0065fd30 FUN_0065fd30
 * calls 00516e10 FUN_00516e10
 * calls 0073a420 FUN_0073a420
 * calls 006616f0 FUN_006616f0
 * calls 00461970 FUN_00461970
 * calls 00627400 FUN_00627400
 * calls 00663c90 FUN_00663c90
 * calls 00461980 FUN_00461980
 * calls 00733b00 FUN_00733b00
 * calls 0062d570 FUN_0062d570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00664b80(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a35f;
  local_c = ExceptionList;
  DAT_00925e90 = 1;
  ExceptionList = &local_c;
  FUN_00733b00(param_1);
  iVar1 = FUN_00627400(0xc);
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_0062d570(0);
  }
  local_4 = 0xffffffff;
  iVar1 = FUN_00516e10(iVar1);
  *(undefined4 *)(iVar1 + 2) = 0;
  *(undefined4 *)(iVar1 + 6) = 0;
  FUN_00663c90();
  FUN_0073a420(0,0);
  FUN_0056b950(1,1,0,0);
  FUN_0065fd30("FRONTEND\\FRONTA.BUN",2,0,0,0);
  FUN_006616f0(0,0);
  if (DAT_00925e70 != 0) {
    DAT_00925e70 = 0;
  }
  DAT_00925e84 = 1;
  _DAT_00925e88 = "GameFlowLoadingFrontEndPart1";
  _DAT_00925e8c = 0;
  iVar1 = FUN_0065fd30("FRONTEND\\FRONTB.LZC",2,9,0,0);
  FUN_006616f0(&LAB_00662c00,0);
  *(undefined4 *)(iVar1 + 0x28) = 0x2007;
  uVar2 = FUN_00461970("FRONTEND\\FRONTB.LZC");
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  FUN_00461980(*(undefined4 *)(iVar1 + 0x1c));
  uVar2 = FUN_00461970("FRONTEND\\FRONTB.BUN");
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  ExceptionList = local_c;
  return;
}

