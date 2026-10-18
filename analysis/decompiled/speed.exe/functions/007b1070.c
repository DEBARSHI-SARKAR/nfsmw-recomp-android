/* speed.exe 007b1070 FUN_007b1070; analysis pseudocode, not buildable source.
 * calls 0056bb20 FUN_0056bb20
 * calls 005252d0 FUN_005252d0
 * calls 005251a0 FUN_005251a0
 * calls 007b0e00 FUN_007b0e00
 * calls 004647e0 FUN_004647e0
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00524850 FUN_00524850
 * calls 00515b90 FUN_00515b90
 * calls 0056bc10 FUN_0056bc10
 */

void __fastcall FUN_007b1070(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  byte local_40 [64];
  
  FUN_007b0e00();
  uVar3 = FUN_0056bc10(*(undefined4 *)(param_1 + 0x1b0));
  FUN_004647e0(local_40,0x40,&DAT_008941f8,uVar3);
  iVar4 = FUN_0056bb20();
  if (((iVar4 != 2) && (iVar4 != 0xd)) && (local_40[0] != 0)) {
    pbVar5 = local_40;
    do {
      bVar2 = *pbVar5;
      if (('@' < (char)bVar2) && ((char)bVar2 < '[')) {
        bVar2 = bVar2 | 0x20;
      }
      *pbVar5 = bVar2;
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (*pbVar1 != 0);
  }
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0xb71b576d,&DAT_008941f8,local_40);
  if ((*(int *)(param_1 + 0x150) == 0x103) || (*(int *)(param_1 + 0x150) == 0x302)) {
    if (*(int *)(param_1 + 0x38) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(*(int *)(param_1 + 0x2c) + 0x24))(*(int *)(param_1 + 0x38));
    }
    if (iVar4 == *(int *)(param_1 + 0x1ac)) {
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd0582feb);
      FUN_00514cc0(uVar3);
      uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xd0582feb,0x1a777e25);
      FUN_00515b90(uVar3);
      goto LAB_007b11ab;
    }
    if (iVar4 == *(int *)(param_1 + 0x1a8)) {
      uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd0582feb);
      FUN_00514cc0(uVar3);
      uVar3 = FUN_005251a0(*(undefined4 *)(param_1 + 0x10),0xd0582feb,0x696ae039);
      FUN_00515b90(uVar3);
      goto LAB_007b11ab;
    }
  }
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xd0582feb);
  FUN_00514c70(uVar3);
LAB_007b11ab:
  if ((((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) && (DAT_009b9e8d == '\0')) &&
     (*(int *)(param_1 + 0x150) == 0x802)) {
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x8805e665);
    FUN_00514cc0(uVar3);
    return;
  }
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x8805e665);
  FUN_00514c70(uVar3);
  return;
}

