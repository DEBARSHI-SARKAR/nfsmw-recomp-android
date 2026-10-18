/* speed.exe 0056a5e0 FUN_0056a5e0; analysis pseudocode, not buildable source.
 * calls 00524920 FUN_00524920
 * calls 005af1c0 FUN_005af1c0
 * calls 00514d10 FUN_00514d10
 */

void __fastcall FUN_0056a5e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00514d10(*(undefined4 *)(param_1 + 0x2c),0x16a259,1);
  FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xe526d0d2,0x33113ac,1);
  FUN_00524920(*(undefined4 *)(param_1 + 0x10),0xe1045a4f,0x33113ac,1);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0(&DAT_008a0614,1);
  FUN_00524920(uVar1,0x962b9c62,uVar2);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_005af1c0(&DAT_008a0614,1);
  FUN_00524920(uVar1,0xec85c7e4,uVar2);
  return;
}

