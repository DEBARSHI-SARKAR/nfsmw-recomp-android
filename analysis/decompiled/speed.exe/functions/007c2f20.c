/* speed.exe 007c2f20 FUN_007c2f20; analysis pseudocode, not buildable source.
 * calls 005ac310 FUN_005ac310
 * calls 007a8130 FUN_007a8130
 * calls 007a7fb0 FUN_007a7fb0
 * calls 007a7fa0 FUN_007a7fa0
 * calls 00655bb0 FUN_00655bb0
 */

/* WARNING: Removing unreachable block (ram,0x007c2fc4) */
/* WARNING: Removing unreachable block (ram,0x007c2fb0) */
/* WARNING: Removing unreachable block (ram,0x007c2fb6) */
/* WARNING: Removing unreachable block (ram,0x007c2fce) */

undefined4 FUN_007c2f20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_007a8130(uVar1,param_1);
  uVar3 = FUN_007a8130(uVar1,param_2);
  uVar4 = FUN_007a7fa0(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,4,uVar2,uVar3,uVar4);
  uVar1 = FUN_007a7fb0(uVar1,uVar2);
  return uVar1;
}

