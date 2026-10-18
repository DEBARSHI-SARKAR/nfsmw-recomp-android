/* speed.exe 006e5e90 FUN_006e5e90; analysis pseudocode, not buildable source.
 * calls 006ce1d0 FUN_006ce1d0
 * calls 006cce70 FUN_006cce70
 * calls 006ce350 FUN_006ce350
 * calls 006ce1c0 FUN_006ce1c0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5f34) */
/* WARNING: Removing unreachable block (ram,0x006e5f20) */
/* WARNING: Removing unreachable block (ram,0x006e5f26) */
/* WARNING: Removing unreachable block (ram,0x006e5f3e) */

undefined4 FUN_006e5e90(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_006cce70();
  uVar2 = FUN_006ce350(uVar1,param_1);
  uVar3 = FUN_006ce350(uVar1,param_2);
  uVar4 = FUN_006ce1c0(uVar2,uVar3);
  uVar2 = FUN_005ac310(6,2,uVar2,uVar3,uVar4);
  uVar1 = FUN_006ce1d0(uVar1,uVar2);
  return uVar1;
}

