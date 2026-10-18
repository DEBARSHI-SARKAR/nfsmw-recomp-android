/* speed.exe 005f8870 FUN_005f8870; analysis pseudocode, not buildable source.
 * calls 005e0f00 FUN_005e0f00
 * calls 005dff70 FUN_005dff70
 * calls 005e1080 FUN_005e1080
 * calls 005ac310 FUN_005ac310
 * calls 005e0ef0 FUN_005e0ef0
 */

/* WARNING: Removing unreachable block (ram,0x005f8900) */
/* WARNING: Removing unreachable block (ram,0x005f8906) */
/* WARNING: Removing unreachable block (ram,0x005f8923) */

undefined4 FUN_005f8870(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005dff70();
  uVar2 = FUN_005e1080(uVar1,param_1);
  uVar3 = FUN_005e1080(uVar1,param_2);
  uVar4 = FUN_005e0ef0(uVar2,uVar3);
  FUN_005ac310(6,1,uVar2,uVar3,uVar4);
  uVar1 = FUN_005e0f00(uVar1,param_2);
  return uVar1;
}

