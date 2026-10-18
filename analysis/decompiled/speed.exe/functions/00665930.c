/* speed.exe 00665930 FUN_00665930; analysis pseudocode, not buildable source.
 * calls 006560d0 FUN_006560d0
 * calls 006560b0 FUN_006560b0
 * calls 00656250 FUN_00656250
 * calls 00655bd0 FUN_00655bd0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006659d4) */
/* WARNING: Removing unreachable block (ram,0x006659c0) */
/* WARNING: Removing unreachable block (ram,0x006659c6) */
/* WARNING: Removing unreachable block (ram,0x006659de) */

undefined4 FUN_00665930(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bd0();
  uVar2 = FUN_00656250(uVar1,param_1);
  uVar3 = FUN_00656250(uVar1,param_2);
  uVar4 = FUN_006560b0(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,0x10,uVar2,uVar3,uVar4);
  uVar1 = FUN_006560d0(uVar1,uVar2);
  return uVar1;
}

