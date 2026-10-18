/* speed.exe 0079b3a0 FUN_0079b3a0; analysis pseudocode, not buildable source.
 * calls 0079ca30 FUN_0079ca30
 * calls 0083a670 FUN_0083a670
 * calls 0083abc0 FUN_0083abc0
 * calls 00460f20 FUN_00460f20
 * calls 0079b260 FUN_0079b260
 */

void __fastcall FUN_0079b3a0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = DAT_0091cf90;
  *(byte *)(DAT_0091cf90 + 0x141) = (byte)(*(uint *)(param_1 + 0x28) >> 9) & 1;
  *(byte *)(iVar5 + 0x143) = (byte)(*(uint *)(param_1 + 0x28) >> 10) & 1;
  *(byte *)(iVar5 + 0x142) = (byte)(*(uint *)(param_1 + 0x28) >> 0xb) & 1;
  *(byte *)(iVar5 + 0x15f) = (byte)(*(uint *)(param_1 + 0x28) >> 0xd) & 1;
  *(byte *)(iVar5 + 0x178) = (byte)(*(uint *)(param_1 + 0x28) >> 0xe) & 1;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((int)uVar2 < 0) {
    *(undefined4 *)(iVar5 + 0x168) = 1;
  }
  else if ((uVar2 & 0x40000000) == 0) {
    if ((uVar2 & 0x20000000) != 0) {
      *(undefined4 *)(iVar5 + 0x168) = 2;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x168) = 0;
  }
  iVar1 = param_1 + 0xac;
  uVar4 = FUN_0083a670(iVar1,&DAT_0089dcd0,0);
  uVar4 = FUN_0083abc0(uVar4);
  *(undefined4 *)(iVar5 + 0x18c) = uVar4;
  uVar4 = FUN_0083a670(iVar1,&DAT_0089dccc,0);
  uVar3 = FUN_0083abc0(uVar4);
  *(undefined1 *)(iVar5 + 400) = uVar3;
  *(byte *)(iVar5 + 0x191) = (byte)(*(uint *)(param_1 + 0x28) >> 0xc) & 1;
  uVar4 = FUN_0083a670(iVar1,&DAT_0089dda0,0);
  uVar3 = FUN_0083abc0(uVar4);
  *(undefined1 *)(iVar5 + 0x138) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((uVar2 & 0x100000) == 0) {
    if ((uVar2 & 0x200000) == 0) {
      if ((uVar2 & 0x400000) == 0) {
        if ((uVar2 & 0x800000) == 0) {
          if ((uVar2 & 0x1000000) == 0) {
            *(uint *)(iVar5 + 0x160) = 6 - (uint)((uVar2 & 0x2000000) != 0);
          }
          else {
            *(undefined4 *)(iVar5 + 0x160) = 4;
          }
        }
        else {
          *(undefined4 *)(iVar5 + 0x160) = 3;
        }
      }
      else {
        *(undefined4 *)(iVar5 + 0x160) = 2;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x160) = 1;
    }
  }
  else {
    *(undefined4 *)(iVar5 + 0x160) = 0;
  }
  iVar5 = FUN_0079ca30();
  if ((*(int *)(iVar5 + 8) == -1) || (iVar5 == -8)) {
    iVar5 = FUN_00460f20(param_1 + 0x44,0x2e);
    if (iVar5 != 0) {
      uVar7 = 0;
      uVar6 = 0;
      iVar5 = iVar5 + 1;
      uVar4 = 0;
      FUN_0079ca30(iVar5,0,0,0);
      FUN_0079b260(iVar5,uVar4,uVar6,uVar7);
    }
  }
  return;
}

