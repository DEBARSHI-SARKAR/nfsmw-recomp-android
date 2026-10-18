/* speed.exe 00665a20 FUN_00665a20; analysis pseudocode, not buildable source.
 * calls 006565b0 FUN_006565b0
 * calls 00656420 FUN_00656420
 * calls 00656430 FUN_00656430
 * calls 00655bb0 FUN_00655bb0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x00665ab0) */
/* WARNING: Removing unreachable block (ram,0x00665ab6) */
/* WARNING: Removing unreachable block (ram,0x00665ad3) */

undefined4 FUN_00665a20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00655bb0();
  uVar2 = FUN_006565b0(uVar1,param_1);
  uVar3 = FUN_006565b0(uVar1,param_2);
  uVar4 = FUN_00656420(uVar2,uVar3);
  FUN_005ac310(5,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_00656430(uVar1,param_2);
  return uVar1;
}

