/* speed.exe 007c31f0 FUN_007c31f0; analysis pseudocode, not buildable source.
 * calls 007a8a90 FUN_007a8a90
 * calls 005ac310 FUN_005ac310
 * calls 007a8910 FUN_007a8910
 * calls 007a8900 FUN_007a8900
 * calls 00655bb0 FUN_00655bb0
 */

/* WARNING: Removing unreachable block (ram,0x007c3280) */
/* WARNING: Removing unreachable block (ram,0x007c3286) */
/* WARNING: Removing unreachable block (ram,0x007c32a3) */

undefined4 FUN_007c31f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_007a8a90(uVar1,param_1);
  uVar3 = FUN_007a8a90(uVar1,param_2);
  uVar4 = FUN_007a8900(uVar2,uVar3);
  FUN_005ac310(6,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_007a8910(uVar1,param_2);
  return uVar1;
}

