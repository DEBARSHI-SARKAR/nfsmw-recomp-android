/* speed.exe 006e5bb0 FUN_006e5bb0; analysis pseudocode, not buildable source.
 * calls 006cd800 FUN_006cd800
 * calls 006cd810 FUN_006cd810
 * calls 006cc7b0 FUN_006cc7b0
 * calls 005ac310 FUN_005ac310
 * calls 006cd990 FUN_006cd990
 */

/* WARNING: Removing unreachable block (ram,0x006e5c59) */
/* WARNING: Removing unreachable block (ram,0x006e5c63) */

undefined4 FUN_006e5bb0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_006cc7b0();
  iVar2 = FUN_006cd990(iVar1,param_1);
  uVar3 = FUN_006cd990(iVar1,param_2);
  uVar4 = FUN_006cd800(iVar2,uVar3);
  uVar3 = FUN_005ac310(6,0x16,iVar2,uVar3,uVar4);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar3 = FUN_006cd810(iVar1,uVar3);
  return uVar3;
}

