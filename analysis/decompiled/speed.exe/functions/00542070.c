/* speed.exe 00542070 FUN_00542070; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 0078b8a0 FUN_0078b8a0
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 005b8400 FUN_005b8400
 * calls 007902d0 FUN_007902d0
 * calls 00799f50 FUN_00799f50
 * calls 0083e3e0 FUN_0083e3e0
 * calls 00516be0 FUN_00516be0
 */

void __fastcall FUN_00542070(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  
  uVar1 = *(uint *)(param_1 + 0x350);
  if (*(uint *)(param_1 + 0x358) == uVar1) {
    *(uint *)(param_1 + 0x35c) = *(uint *)(param_1 + 0x35c) ^ 0x80000000;
  }
  else {
    *(undefined4 *)(param_1 + 0x35c) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x35c);
  iVar4 = *(int *)(param_1 + 0x10);
  if (uVar2 == 0) {
    puVar5 = &DAT_0089e38c;
  }
  else {
    puVar5 = &DAT_0089e394;
  }
  uVar3 = FUN_005af1c0(puVar5);
  if (iVar4 != 0) {
    iVar4 = FUN_00516af0(iVar4);
    if (iVar4 != 0) {
      iVar4 = FUN_005b8550(0x4f7e6ae9);
      if (iVar4 != 0) {
        iVar4 = FUN_005b1360(uVar3);
        if (iVar4 != 0) {
          FUN_005b8400(iVar4,0);
          *(undefined4 *)(iVar4 + 0x10) = 0;
        }
      }
    }
  }
  iVar4 = param_1 + 0x2c;
  FUN_00799f50(iVar4);
  FUN_0078b8a0(iVar4);
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  FUN_00799f50(uVar3,param_1,uVar1 | uVar2,FUN_00514600);
  uVar3 = FUN_007902d0(uVar3);
  FUN_0083e3e0(uVar3);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x350);
  FUN_00516be0(0xf1943ca3,*(undefined4 *)(param_1 + 0x10),0xffffffff,0xff);
  return;
}

