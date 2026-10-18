/* speed.exe 007c3010 FUN_007c3010; analysis pseudocode, not buildable source.
 * calls 005ac310 FUN_005ac310
 * calls 007a8450 FUN_007a8450
 * calls 00655bb0 FUN_00655bb0
 * calls 007a82b0 FUN_007a82b0
 * calls 007a82d0 FUN_007a82d0
 */

/* WARNING: Removing unreachable block (ram,0x007c30b4) */
/* WARNING: Removing unreachable block (ram,0x007c30a0) */
/* WARNING: Removing unreachable block (ram,0x007c30a6) */
/* WARNING: Removing unreachable block (ram,0x007c30be) */

undefined4 FUN_007c3010(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_007a8450(uVar1,param_1);
  uVar3 = FUN_007a8450(uVar1,param_2);
  uVar4 = FUN_007a82b0(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,0xe,uVar2,uVar3,uVar4);
  uVar1 = FUN_007a82d0(uVar1,uVar2);
  return uVar1;
}

