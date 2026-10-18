/* speed.exe 007a67f0 FUN_007a67f0; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00514cc0 FUN_00514cc0
 * calls 005249d0 FUN_005249d0
 * calls 00524920 FUN_00524920
 * calls 00524850 FUN_00524850
 * calls 00515b90 FUN_00515b90
 */

void __thiscall FUN_007a67f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 1) {
    FUN_00524920(*(undefined4 *)(param_1 + 4),0xcffb7033,0x16a259,1);
  }
  else if (param_2 == 2) {
    uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xcffb7033);
    FUN_00514cc0(uVar1);
    uVar1 = FUN_005251a0(*(undefined4 *)(param_1 + 4),0xcffb7033,0xf0574bb2);
    FUN_00515b90(uVar1);
    iVar2 = FUN_005249d0(*(undefined4 *)(param_1 + 4),0xcffb7033,0x5079c8f8);
    if (iVar2 != 0) {
      FUN_00524920(*(undefined4 *)(param_1 + 4),0xcffb7033,0x5079c8f8,1);
      return;
    }
  }
  else if (param_2 == 3) {
    uVar1 = FUN_00524850(*(undefined4 *)(param_1 + 4),0xcffb7033);
    FUN_00514cc0(uVar1);
    uVar1 = FUN_005251a0(*(undefined4 *)(param_1 + 4),0xcffb7033,0xcffb7033);
    FUN_00515b90(uVar1);
    iVar2 = FUN_005249d0(*(undefined4 *)(param_1 + 4),0xcffb7033,0x280164f);
    if (iVar2 != 0) {
      FUN_00524920(*(undefined4 *)(param_1 + 4),0xcffb7033,0x280164f,1);
      return;
    }
  }
  return;
}

