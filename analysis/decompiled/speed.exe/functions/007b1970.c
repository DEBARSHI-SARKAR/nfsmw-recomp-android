/* speed.exe 007b1970 FUN_007b1970; analysis pseudocode, not buildable source.
 * calls 007afae0 FUN_007afae0
 * calls 005251a0 FUN_005251a0
 * calls 00747ac0 FUN_00747ac0
 * calls 00514cc0 FUN_00514cc0
 * calls 00514c70 FUN_00514c70
 * calls 00573140 FUN_00573140
 * calls 00524850 FUN_00524850
 * calls 00515b90 FUN_00515b90
 */

void __fastcall FUN_007b1970(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (**(code **)(*param_1 + 0x14))();
  uVar4 = 0;
  uVar3 = FUN_00573140("HUDINDEX",0);
  uVar3 = FUN_00747ac0(uVar3,uVar4);
  iVar1 = param_1[4];
  uVar4 = FUN_00573140("%0.4d_LINES_%2.2d",param_1[0x71],uVar3);
  uVar4 = FUN_005251a0(iVar1,0xc0721eb9,uVar4);
  FUN_00515b90(uVar4);
  iVar1 = param_1[4];
  uVar4 = FUN_00573140("TACH_FILL_%2.2d",uVar3);
  uVar4 = FUN_005251a0(iVar1,0x5d19f25,uVar4);
  FUN_00515b90(uVar4);
  iVar1 = param_1[4];
  uVar4 = FUN_00573140("TACH_NEEDLE_%2.2d",uVar3);
  uVar4 = FUN_005251a0(iVar1,0xd312f0cb,uVar4);
  FUN_00515b90(uVar4);
  cVar2 = FUN_007afae0();
  if (cVar2 != '\0') {
    iVar1 = param_1[4];
    uVar4 = FUN_00573140("TURBO_LINES_%2.2d",uVar3);
    uVar4 = FUN_005251a0(iVar1,0xc62ad685,uVar4);
    FUN_00515b90(uVar4);
    iVar1 = param_1[4];
    uVar3 = FUN_00573140("TURBO_NEEDLE_%2.2d",uVar3);
    uVar3 = FUN_005251a0(iVar1,0x8fe2a217,uVar3);
    FUN_00515b90(uVar3);
    uVar3 = FUN_00524850(param_1[4],0xc5d551b7);
    FUN_00514cc0(uVar3);
    return;
  }
  uVar3 = FUN_00524850(param_1[4],0xc5d551b7);
  FUN_00514c70(uVar3);
  return;
}

