/* speed.exe 00665ed0 FUN_00665ed0; analysis pseudocode, not buildable source.
 * calls 00657540 FUN_00657540
 * calls 006573c0 FUN_006573c0
 * calls 006573b0 FUN_006573b0
 * calls 00655bd0 FUN_00655bd0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x00665f74) */
/* WARNING: Removing unreachable block (ram,0x00665f60) */
/* WARNING: Removing unreachable block (ram,0x00665f66) */
/* WARNING: Removing unreachable block (ram,0x00665f8b) */

undefined4 FUN_00665ed0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00655bd0();
  uVar2 = FUN_00657540(uVar1,param_1);
  uVar1 = FUN_00657540(uVar1,param_2);
  uVar3 = FUN_006573b0(uVar2,uVar1);
  FUN_005ac310(5,0xd,uVar2,uVar1,uVar3);
  return uVar2;
}

