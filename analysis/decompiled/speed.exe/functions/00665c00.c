/* speed.exe 00665c00 FUN_00665c00; analysis pseudocode, not buildable source.
 * calls 00656a80 FUN_00656a80
 * calls 00655bb0 FUN_00655bb0
 * calls 00656c10 FUN_00656c10
 * calls 00656a90 FUN_00656a90
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x00665ca4) */
/* WARNING: Removing unreachable block (ram,0x00665c90) */
/* WARNING: Removing unreachable block (ram,0x00665c96) */
/* WARNING: Removing unreachable block (ram,0x00665cae) */

undefined4 FUN_00665c00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_00656c10(uVar1,param_1);
  uVar3 = FUN_00656c10(uVar1,param_2);
  uVar4 = FUN_00656a80(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,2,uVar2,uVar3,uVar4);
  uVar1 = FUN_00656a90(uVar1,uVar2);
  return uVar1;
}

