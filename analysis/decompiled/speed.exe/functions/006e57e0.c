/* speed.exe 006e57e0 FUN_006e57e0; analysis pseudocode, not buildable source.
 * calls 006ccb50 FUN_006ccb50
 * calls 006ccce0 FUN_006ccce0
 * calls 006ccb60 FUN_006ccb60
 * calls 006cc7b0 FUN_006cc7b0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e5884) */
/* WARNING: Removing unreachable block (ram,0x006e5870) */
/* WARNING: Removing unreachable block (ram,0x006e5876) */
/* WARNING: Removing unreachable block (ram,0x006e588e) */

undefined4 FUN_006e57e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_006cc7b0();
  uVar2 = FUN_006ccce0(uVar1,param_1);
  uVar3 = FUN_006ccce0(uVar1,param_2);
  uVar4 = FUN_006ccb50(uVar2,uVar3);
  uVar2 = FUN_005ac310(6,4,uVar2,uVar3,uVar4);
  uVar1 = FUN_006ccb60(uVar1,uVar2);
  return uVar1;
}

