/* speed.exe 00665de0 FUN_00665de0; analysis pseudocode, not buildable source.
 * calls 006570b0 FUN_006570b0
 * calls 006570a0 FUN_006570a0
 * calls 00655bd0 FUN_00655bd0
 * calls 005ac310 FUN_005ac310
 * calls 00657230 FUN_00657230
 */

/* WARNING: Removing unreachable block (ram,0x00665e84) */
/* WARNING: Removing unreachable block (ram,0x00665e70) */
/* WARNING: Removing unreachable block (ram,0x00665e76) */
/* WARNING: Removing unreachable block (ram,0x00665e8e) */

undefined4 FUN_00665de0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bd0();
  uVar2 = FUN_00657230(uVar1,param_1);
  uVar3 = FUN_00657230(uVar1,param_2);
  uVar4 = FUN_006570a0(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,2,uVar2,uVar3,uVar4);
  uVar1 = FUN_006570b0(uVar1,uVar2);
  return uVar1;
}

