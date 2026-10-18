/* speed.exe 005f8690 FUN_005f8690; analysis pseudocode, not buildable source.
 * calls 005e08e0 FUN_005e08e0
 * calls 005dff70 FUN_005dff70
 * calls 005e08c0 FUN_005e08c0
 * calls 005ac310 FUN_005ac310
 * calls 005e0a60 FUN_005e0a60
 */

/* WARNING: Removing unreachable block (ram,0x005f8734) */
/* WARNING: Removing unreachable block (ram,0x005f8720) */
/* WARNING: Removing unreachable block (ram,0x005f8726) */
/* WARNING: Removing unreachable block (ram,0x005f873e) */

undefined4 FUN_005f8690(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005dff70();
  uVar2 = FUN_005e0a60(uVar1,param_1);
  uVar3 = FUN_005e0a60(uVar1,param_2);
  uVar4 = FUN_005e08c0(uVar2,uVar3);
  uVar2 = FUN_005ac310(6,0x10,uVar2,uVar3,uVar4);
  uVar1 = FUN_005e08e0(uVar1,uVar2);
  return uVar1;
}

