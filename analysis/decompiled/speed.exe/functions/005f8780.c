/* speed.exe 005f8780 FUN_005f8780; analysis pseudocode, not buildable source.
 * calls 005dff70 FUN_005dff70
 * calls 005e0d70 FUN_005e0d70
 * calls 005ac310 FUN_005ac310
 * calls 005e0be0 FUN_005e0be0
 * calls 005e0bf0 FUN_005e0bf0
 */

/* WARNING: Removing unreachable block (ram,0x005f8829) */
/* WARNING: Removing unreachable block (ram,0x005f8833) */

undefined4 FUN_005f8780(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_005dff70();
  iVar2 = FUN_005e0d70(iVar1,param_1);
  uVar3 = FUN_005e0d70(iVar1,param_2);
  uVar4 = FUN_005e0be0(iVar2,uVar3);
  uVar3 = FUN_005ac310(6,0x16,iVar2,uVar3,uVar4);
  if (iVar2 == 1) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  uVar3 = FUN_005e0bf0(iVar1,uVar3);
  return uVar3;
}

