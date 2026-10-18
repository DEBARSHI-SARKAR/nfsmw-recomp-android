/* speed.exe 007a58d0 FUN_007a58d0; analysis pseudocode, not buildable source.
 * calls 007a58d0 FUN_007a58d0
 * calls 007a57a0 FUN_007a57a0
 * calls 00576f10 FUN_00576f10
 */

int FUN_007a58d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (param_1 == 0x801) {
    iVar2 = FUN_007a58d0(0x101);
    iVar3 = FUN_007a58d0(0x102);
    iVar4 = FUN_007a58d0(0x103);
    iVar5 = FUN_007a58d0(0x104);
    iVar6 = FUN_007a58d0(0x105);
    iVar7 = FUN_007a58d0(0x307);
    return iVar7 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
  }
  if (param_1 != 0x802) {
    if (param_1 != 0x803) {
      uVar9 = 0;
      uVar1 = FUN_007a57a0(param_1,0);
      iVar2 = FUN_00576f10(uVar1,uVar9);
      return iVar2;
    }
    iVar2 = FUN_007a58d0(0x301);
    iVar3 = FUN_007a58d0(0x302);
    iVar4 = FUN_007a58d0(0x305);
    return iVar4 + iVar2 + iVar3;
  }
  iVar2 = FUN_007a58d0(0x201);
  iVar3 = FUN_007a58d0(0x202);
  iVar4 = FUN_007a58d0(0x203);
  iVar5 = FUN_007a58d0(0x204);
  iVar6 = FUN_007a58d0(0x205);
  iVar7 = FUN_007a58d0(0x206);
  iVar8 = FUN_007a58d0(0x207);
  return iVar8 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
}

