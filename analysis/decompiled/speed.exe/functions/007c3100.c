/* speed.exe 007c3100 FUN_007c3100; analysis pseudocode, not buildable source.
 * calls 005ac310 FUN_005ac310
 * calls 007a85f0 FUN_007a85f0
 * calls 007a8770 FUN_007a8770
 * calls 00655bb0 FUN_00655bb0
 * calls 007a85e0 FUN_007a85e0
 */

/* WARNING: Removing unreachable block (ram,0x007c31a9) */
/* WARNING: Removing unreachable block (ram,0x007c31b3) */

undefined4 FUN_007c3100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00655bb0();
  iVar2 = FUN_007a8770(iVar1,param_1);
  uVar3 = FUN_007a8770(iVar1,param_2);
  uVar4 = FUN_007a85e0(iVar2,uVar3);
  uVar3 = FUN_005ac310(5,0x16,iVar2,uVar3,uVar4);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar3 = FUN_007a85f0(iVar1,uVar3);
  return uVar3;
}

