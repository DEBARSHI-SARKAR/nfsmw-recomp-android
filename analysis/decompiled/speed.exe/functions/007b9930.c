/* speed.exe 007b9930 FUN_007b9930; analysis pseudocode, not buildable source.
 * calls 00593910 thunk_FUN_005931b0
 * calls 005252d0 FUN_005252d0
 * calls 007b3680 FUN_007b3680
 * calls 005251a0 FUN_005251a0
 * calls 0045d3a0 FUN_0045d3a0
 * calls 007b34c0 FUN_007b34c0
 * calls 00515b90 FUN_00515b90
 * calls 0056ecc0 FUN_0056ecc0
 * calls 00525220 FUN_00525220
 * calls 00516c90 FUN_00516c90
 * calls 0056dbe0 FUN_0056dbe0
 * calls 00591240 FUN_00591240
 */

void __fastcall FUN_007b9930(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  thunk_FUN_005931b0();
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
    piVar1 = (int *)FUN_0056ecc0(uVar2);
    if (*piVar1 != -1) {
      uVar5 = *(undefined4 *)(param_1 + -0x1c);
      FUN_0056ecc0(uVar2);
      uVar2 = FUN_00591240();
      uVar2 = FUN_005251a0(uVar5,0xb05dd708,uVar2);
      FUN_00515b90(uVar2);
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0x18) == -1) {
      FUN_00525220(*(undefined4 *)(param_1 + -0x1c),0xbfa25765,0xc2598bd8);
      FUN_00516c90(0x42ea22dd,*(undefined4 *)(param_1 + -0x1c),0);
    }
    else {
      FUN_00525220(*(undefined4 *)(param_1 + -0x1c),0xbfa25765,0xc9847935);
      FUN_00516c90(0x6d41ccc,*(undefined4 *)(param_1 + -0x1c),0);
      iVar4 = 0;
      do {
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x18);
        iVar3 = FUN_0056dbe0(iVar4);
        iVar4 = iVar4 + 1;
        *(undefined4 *)(iVar3 + 0x10) = uVar2;
      } while (iVar4 < 0xb);
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x18) + 4;
    }
    uVar2 = *(undefined4 *)(param_1 + -0x1c);
    uVar5 = FUN_0045d3a0(iVar4);
    FUN_005252d0(uVar2,0x6f25a248,&DAT_0089d764,uVar5);
    uVar2 = *(undefined4 *)(param_1 + -0x1c);
    uVar5 = FUN_0045d3a0(0);
    FUN_005252d0(uVar2,0xb2037bdc,&DAT_0089d764,uVar5);
    FUN_007b34c0();
    FUN_007b3680();
    return;
  }
  return;
}

