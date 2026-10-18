/* speed.exe 006e5f80 FUN_006e5f80; analysis pseudocode, not buildable source.
 * calls 006ce4e0 FUN_006ce4e0
 * calls 006ce660 FUN_006ce660
 * calls 006ce4d0 FUN_006ce4d0
 * calls 006cc7b0 FUN_006cc7b0
 * calls 005ac310 FUN_005ac310
 */

/* WARNING: Removing unreachable block (ram,0x006e6024) */
/* WARNING: Removing unreachable block (ram,0x006e6010) */
/* WARNING: Removing unreachable block (ram,0x006e6016) */
/* WARNING: Removing unreachable block (ram,0x006e603b) */

undefined4 FUN_006e5f80(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_006cc7b0();
  uVar2 = FUN_006ce660(uVar1,param_1);
  uVar1 = FUN_006ce660(uVar1,param_2);
  uVar3 = FUN_006ce4d0(uVar2,uVar1);
  FUN_005ac310(6,0xd,uVar2,uVar1,uVar3);
  return uVar2;
}

