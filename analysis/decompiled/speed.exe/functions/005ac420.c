/* speed.exe 005ac420 FUN_005ac420; analysis pseudocode, not buildable source.
 * calls 00578650 FUN_00578650
 * calls 005784c0 FUN_005784c0
 * calls 005ac310 FUN_005ac310
 * calls 005783e0 FUN_005783e0
 * calls 005784d0 FUN_005784d0
 */

/* WARNING: Removing unreachable block (ram,0x005ac4c4) */
/* WARNING: Removing unreachable block (ram,0x005ac4b0) */
/* WARNING: Removing unreachable block (ram,0x005ac4b6) */
/* WARNING: Removing unreachable block (ram,0x005ac4ce) */

undefined4 FUN_005ac420(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005783e0();
  uVar2 = FUN_00578650(uVar1,param_1);
  uVar3 = FUN_00578650(uVar1,param_2);
  uVar4 = FUN_005784c0(uVar2,uVar3);
  uVar2 = FUN_005ac310(5,4,uVar2,uVar3,uVar4);
  uVar1 = FUN_005784d0(uVar1,uVar2);
  return uVar1;
}

