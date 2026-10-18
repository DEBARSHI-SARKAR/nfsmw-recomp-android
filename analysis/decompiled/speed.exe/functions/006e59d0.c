/* speed.exe 006e59d0 FUN_006e59d0; analysis pseudocode, not buildable source.
 * calls 006cd1e0 FUN_006cd1e0
 * calls 006cce70 FUN_006cce70
 * calls 006cd370 FUN_006cd370
 * calls 005ac310 FUN_005ac310
 * calls 006cd1f0 FUN_006cd1f0
 */

/* WARNING: Removing unreachable block (ram,0x006e5a79) */
/* WARNING: Removing unreachable block (ram,0x006e5a83) */

undefined4 FUN_006e59d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_006cce70();
  iVar2 = FUN_006cd370(iVar1,param_1);
  uVar3 = FUN_006cd370(iVar1,param_2);
  uVar4 = FUN_006cd1e0(iVar2,uVar3);
  uVar3 = FUN_005ac310(6,0x16,iVar2,uVar3,uVar4);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar3 = FUN_006cd1f0(iVar1,uVar3);
  return uVar3;
}

