/* speed.exe 00665cf0 FUN_00665cf0; analysis pseudocode, not buildable source.
 * calls 00656f20 FUN_00656f20
 * calls 00655bb0 FUN_00655bb0
 * calls 00656da0 FUN_00656da0
 * calls 00656d90 FUN_00656d90
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x00665d94) */
/* WARNING: Removing unreachable block (ram,0x00665d80) */
/* WARNING: Removing unreachable block (ram,0x00665d86) */
/* WARNING: Removing unreachable block (ram,0x00665dab) */

undefined4 FUN_00665cf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_00656f20(uVar1,param_1);
  uVar1 = FUN_00656f20(uVar1,param_2);
  uVar3 = FUN_00656d90(uVar2,uVar1);
  FUN_005ac310(5,0xd,uVar2,uVar1,uVar3);
  return uVar2;
}

