/* speed.exe 005f89a0 FUN_005f89a0; analysis pseudocode, not buildable source.
 * calls 005dff70 FUN_005dff70
 * calls 005e13c0 FUN_005e13c0
 * calls 005e1240 FUN_005e1240
 * calls 005ac310 FUN_005ac310
 * calls 005e1230 FUN_005e1230
 */

/* WARNING: Removing unreachable block (ram,0x005f8a44) */
/* WARNING: Removing unreachable block (ram,0x005f8a30) */
/* WARNING: Removing unreachable block (ram,0x005f8a36) */
/* WARNING: Removing unreachable block (ram,0x005f8a4e) */

undefined4 FUN_005f89a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005dff70();
  uVar2 = FUN_005e13c0(uVar1,param_1);
  uVar3 = FUN_005e13c0(uVar1,param_2);
  uVar4 = FUN_005e1230(uVar2,uVar3);
  uVar2 = FUN_005ac310(6,2,uVar2,uVar3,uVar4);
  uVar1 = FUN_005e1240(uVar1,uVar2);
  return uVar1;
}

