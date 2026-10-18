/* speed.exe 00541c30 FUN_00541c30; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 005af1c0 FUN_005af1c0
 * calls 004647e0 FUN_004647e0
 * calls 00524920 FUN_00524920
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00525220 FUN_00525220
 * calls 005b8400 FUN_005b8400
 */

void __fastcall FUN_00541c30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_8 [8];
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x34fa2c1;
LAB_00541c75:
    FUN_00525220(uVar2,0x116d2d5c,uVar4);
  }
  else {
    if (iVar3 == 1) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0xb94fd70e;
      goto LAB_00541c75;
    }
    if (iVar3 == 2) {
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = 0x6f547e4c;
      goto LAB_00541c75;
    }
  }
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x2caec5d0,
               *(undefined4 *)(&DAT_008f33d8 + *(int *)(param_1 + 0x350) * 4));
  iVar3 = *(int *)(param_1 + 0x358);
  if (iVar3 < 2) {
    FUN_004647e0(local_8,8,"POS%d",iVar3 + 1);
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(local_8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x3c);
    if ((iVar1 + 2 <= iVar3) && (iVar3 <= iVar1 + 5)) {
      FUN_004647e0(local_8,8,"POS%d",(iVar3 - iVar1) + 1);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_005af1c0(local_8,1);
      FUN_00524920(uVar2,0x9321399c,uVar4);
      goto LAB_00541d6f;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = FUN_005af1c0(&DAT_0089e384);
  }
  if (iVar3 != 0) {
    iVar3 = FUN_00516af0(iVar3);
    if (iVar3 != 0) {
      iVar3 = FUN_005b8550(0x9321399c);
      if (iVar3 != 0) {
        iVar3 = FUN_005b1360(uVar2);
        if (iVar3 != 0) {
          FUN_005b8400(iVar3,0);
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
      }
    }
  }
LAB_00541d6f:
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x30ee5e68,
               *(undefined4 *)
                (&DAT_008f3378 + (*(int *)(param_1 + 0x3c) * 3 + *(int *)(param_1 + 0x30)) * 4));
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x1d303349,
               *(undefined4 *)
                (&DAT_008f3384 + (*(int *)(param_1 + 0x3c) * 3 + *(int *)(param_1 + 0x30)) * 4));
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x972082a,
               *(undefined4 *)
                (&DAT_008f3390 + (*(int *)(param_1 + 0x3c) * 3 + *(int *)(param_1 + 0x30)) * 4));
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0xf5b3dd0b,
               *(undefined4 *)
                (&DAT_008f339c + (*(int *)(param_1 + 0x3c) * 3 + *(int *)(param_1 + 0x30)) * 4));
  return;
}

