/* speed.exe 00665840 FUN_00665840; analysis pseudocode, not buildable source.
 * calls 00655db0 FUN_00655db0
 * calls 00655bb0 FUN_00655bb0
 * calls 00655d90 FUN_00655d90
 * calls 00655f30 FUN_00655f30
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006658e4) */
/* WARNING: Removing unreachable block (ram,0x006658d0) */
/* WARNING: Removing unreachable block (ram,0x006658d6) */
/* WARNING: Removing unreachable block (ram,0x006658ee) */

undefined4 FUN_00665840(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_00655f30(uVar1,param_1);
  uVar3 = FUN_00655f30(uVar1,param_2);
  uVar4 = FUN_00655d90(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,0x10,uVar2,uVar3,uVar4);
  uVar1 = FUN_00655db0(uVar1,uVar2);
  return uVar1;
}

