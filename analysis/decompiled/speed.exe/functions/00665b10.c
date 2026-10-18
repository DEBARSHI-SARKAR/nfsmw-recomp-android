/* speed.exe 00665b10 FUN_00665b10; analysis pseudocode, not buildable source.
 * calls 006568c0 FUN_006568c0
 * calls 00656730 FUN_00656730
 * calls 00655bd0 FUN_00655bd0
 * calls 005ac310 FUN_005ac310
 * calls 00656740 FUN_00656740
 */

/* WARNING: Removing unreachable block (ram,0x00665ba0) */
/* WARNING: Removing unreachable block (ram,0x00665ba6) */
/* WARNING: Removing unreachable block (ram,0x00665bc3) */

undefined4 FUN_00665b10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bd0();
  uVar2 = FUN_006568c0(uVar1,param_1);
  uVar3 = FUN_006568c0(uVar1,param_2);
  uVar4 = FUN_00656730(uVar2,uVar3);
  FUN_005ac310(5,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_00656740(uVar1,param_2);
  return uVar1;
}

