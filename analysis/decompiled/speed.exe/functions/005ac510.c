/* speed.exe 005ac510 FUN_005ac510; analysis pseudocode, not buildable source.
 * calls 005789a0 FUN_005789a0
 * calls 005ac310 FUN_005ac310
 * calls 005783e0 FUN_005783e0
 * calls 00578810 FUN_00578810
 * calls 00578820 FUN_00578820
 */

/* WARNING: Removing unreachable block (ram,0x005ac5a0) */
/* WARNING: Removing unreachable block (ram,0x005ac5a6) */
/* WARNING: Removing unreachable block (ram,0x005ac5c3) */

undefined4 FUN_005ac510(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005783e0();
  uVar2 = FUN_005789a0(uVar1,param_1);
  uVar3 = FUN_005789a0(uVar1,param_2);
  uVar4 = FUN_00578810(uVar2,uVar3);
  FUN_005ac310(5,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_00578820(uVar1,param_2);
  return uVar1;
}

