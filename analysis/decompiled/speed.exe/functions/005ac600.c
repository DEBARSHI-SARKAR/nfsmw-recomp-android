/* speed.exe 005ac600 FUN_005ac600; analysis pseudocode, not buildable source.
 * calls 00578c60 FUN_00578c60
 * calls 005ac310 FUN_005ac310
 * calls 005783e0 FUN_005783e0
 * calls 00578de0 FUN_00578de0
 * calls 00578c50 FUN_00578c50
 */

/* WARNING: Removing unreachable block (ram,0x005ac6a4) */
/* WARNING: Removing unreachable block (ram,0x005ac690) */
/* WARNING: Removing unreachable block (ram,0x005ac696) */
/* WARNING: Removing unreachable block (ram,0x005ac6bb) */

undefined4 FUN_005ac600(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_005783e0();
  uVar2 = FUN_00578de0(uVar1,param_1);
  uVar1 = FUN_00578de0(uVar1,param_2);
  uVar3 = FUN_00578c50(uVar2,uVar1);
  FUN_005ac310(5,0xd,uVar2,uVar1,uVar3);
  return uVar2;
}

