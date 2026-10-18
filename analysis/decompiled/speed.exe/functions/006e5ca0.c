/* speed.exe 006e5ca0 FUN_006e5ca0; analysis pseudocode, not buildable source.
 * calls 006cdb10 FUN_006cdb10
 * calls 006cdb20 FUN_006cdb20
 * calls 006cdca0 FUN_006cdca0
 * calls 006cc7b0 FUN_006cc7b0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5d30) */
/* WARNING: Removing unreachable block (ram,0x006e5d36) */
/* WARNING: Removing unreachable block (ram,0x006e5d53) */

undefined4 FUN_006e5ca0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_006cc7b0();
  uVar2 = FUN_006cdca0(uVar1,param_1);
  uVar3 = FUN_006cdca0(uVar1,param_2);
  uVar4 = FUN_006cdb10(uVar2,uVar3);
  FUN_005ac310(6,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_006cdb20(uVar1,param_2);
  return uVar1;
}

