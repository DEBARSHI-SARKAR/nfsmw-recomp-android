/* speed.exe 0058e3e0 FUN_0058e3e0; analysis pseudocode, not buildable source.
 * calls 0051a2f0 FUN_0051a2f0
 * calls 00799c10 FUN_00799c10
 * calls 00527f80 FUN_00527f80
 * calls 00796d30 FUN_00796d30
 * calls 0079d550 FUN_0079d550
 * calls 00794f80 FUN_00794f80
 */

void __fastcall FUN_0058e3e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_230 [548];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087259b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0051a2f0();
  uVar5 = 0;
  puVar4 = local_230;
  uVar3 = 0;
  local_4 = 0;
  FUN_00796d30(puVar4,0,0);
  FUN_00799c10(puVar4,uVar3,uVar5);
  puVar4 = &LAB_0057d6f0;
  FUN_00794f80(&LAB_0057d6f0,param_1);
  iVar2 = FUN_0079d550(puVar4,param_1);
  iVar1 = DAT_0091cf90;
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_0091cf90 + 0x1a0) = *(undefined4 *)(DAT_0091cf90 + 0x19c);
    *(undefined4 *)(iVar1 + 0x19c) = 5;
    *(undefined4 *)(iVar1 + 0x17c) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00527f80();
  ExceptionList = local_c;
  return;
}

