/* speed.exe 006e5ac0 FUN_006e5ac0; analysis pseudocode, not buildable source.
 * calls 006cd680 FUN_006cd680
 * calls 006cd500 FUN_006cd500
 * calls 006cd4f0 FUN_006cd4f0
 * calls 006cce70 FUN_006cce70
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5b50) */
/* WARNING: Removing unreachable block (ram,0x006e5b56) */
/* WARNING: Removing unreachable block (ram,0x006e5b73) */

undefined4 FUN_006e5ac0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_006cce70();
  uVar2 = FUN_006cd680(uVar1,param_1);
  uVar3 = FUN_006cd680(uVar1,param_2);
  uVar4 = FUN_006cd4f0(uVar2,uVar3);
  FUN_005ac310(6,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_006cd500(uVar1,param_2);
  return uVar1;
}

