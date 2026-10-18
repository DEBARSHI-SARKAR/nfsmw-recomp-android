/* speed.exe 005f18a0 FUN_005f18a0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 005e4210 FUN_005e4210
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 005ef060 FUN_005ef060
 * calls 006269b0 FUN_006269b0
 * calls 004546a0 FUN_004546a0
 * calls 005e43d0 FUN_005e43d0
 */

void __fastcall FUN_005f18a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_24;
  undefined1 local_20 [8];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008758c0;
  local_c = ExceptionList;
  local_24 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x6c) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 4 + local_24 * 8);
      if (iVar1 != 0) {
        *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) & 0xfd;
        *(undefined2 *)(iVar1 + 0x1a) = 0;
        FUN_005e4210(iVar1,iVar1 + 4);
        iVar3 = FUN_004546a0();
        while (iVar3 != 0) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = FUN_00455fd0(0x5cea9d46,iVar3,0,0);
          FUN_00452380(uVar4,uVar5,uVar6);
          local_4 = 0;
          if (local_18 == 0) {
            local_18 = FUN_006269b0(8);
          }
          local_4 = 1;
          FUN_005e4210(iVar1,local_20);
          iVar3 = FUN_004546a0();
          local_4 = 0xffffffff;
          FUN_0045a430();
        }
        FUN_005e43d0(iVar1);
        iVar2 = *(int *)(iVar1 + 0x1c);
        iVar3 = iVar2 + (uint)*(ushort *)(iVar1 + 0x1a) * 8;
        FUN_005ef060(iVar2,iVar3,iVar3 - iVar2 >> 3);
        *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 2;
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(uint *)(param_1 + 0x6c));
  }
  ExceptionList = local_c;
  return;
}

