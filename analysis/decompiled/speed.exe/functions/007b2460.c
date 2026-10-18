/* speed.exe 007b2460 FUN_007b2460; analysis pseudocode, not buildable source.
 * calls 007afae0 FUN_007afae0
 * calls 0066c560 FUN_0066c560
 * calls 005251a0 FUN_005251a0
 * calls 00747ac0 FUN_00747ac0
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00573140 FUN_00573140
 * calls 00524850 FUN_00524850
 * calls 007c4b80 FUN_007c4b80
 * calls 00515b90 FUN_00515b90
 */

void __fastcall FUN_007b2460(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_0066c560(&DAT_009b9ec8);
  iVar2 = FUN_007c4b80();
  if (iVar2 < 0x251d) {
    if (iVar2 < 0x2135) {
      iVar2 = ((iVar2 < 0x1d4d) - 1 & 1000) + 7000;
    }
    else {
      iVar2 = 9000;
    }
  }
  else {
    iVar2 = 10000;
  }
  uVar5 = 0;
  uVar3 = FUN_00573140("HUDINDEX",0);
  uVar5 = FUN_00747ac0(uVar3,uVar5);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_00573140("%d_LINES_%2.2d",iVar2,uVar5);
  uVar3 = FUN_005251a0(uVar3,0xc0721eb9,uVar4);
  FUN_00515b90(uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_00573140("TACH_FILL_%2.2d",uVar5);
  uVar3 = FUN_005251a0(uVar3,0x5d19f25,uVar4);
  FUN_00515b90(uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_00573140("TACH_NEEDLE_%2.2d",uVar5);
  uVar3 = FUN_005251a0(uVar3,0xd312f0cb,uVar4);
  FUN_00515b90(uVar3);
  cVar1 = FUN_007afae0();
  if (cVar1 != '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_00573140("TURBO_LINES_%2.2d",uVar5);
    uVar3 = FUN_005251a0(uVar3,0xc62ad685,uVar4);
    FUN_00515b90(uVar3);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = FUN_00573140("TURBO_NEEDLE_%2.2d",uVar5);
    uVar3 = FUN_005251a0(uVar3,0x8fe2a217,uVar5);
    FUN_00515b90(uVar3);
    uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc5d551b7);
    FUN_00514cc0(uVar3);
    return;
  }
  uVar3 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0xc5d551b7);
  FUN_00514c70(uVar3);
  return;
}

