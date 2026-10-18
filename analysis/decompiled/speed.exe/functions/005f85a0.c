/* speed.exe 005f85a0 FUN_005f85a0; analysis pseudocode, not buildable source.
 * calls 005dff70 FUN_005dff70
 * calls 005e0690 FUN_005e0690
 * calls 005e0500 FUN_005e0500
 * calls 005ac310 FUN_005ac310
 * calls 005e0510 FUN_005e0510
 */

/* WARNING: Removing unreachable block (ram,0x005f8644) */
/* WARNING: Removing unreachable block (ram,0x005f8630) */
/* WARNING: Removing unreachable block (ram,0x005f8636) */
/* WARNING: Removing unreachable block (ram,0x005f864e) */

undefined4 FUN_005f85a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_005dff70();
  uVar2 = FUN_005e0690(uVar1,param_1);
  uVar3 = FUN_005e0690(uVar1,param_2);
  uVar4 = FUN_005e0500(uVar2,uVar3);
  uVar2 = FUN_005ac310(6,4,uVar2,uVar3,uVar4);
  uVar1 = FUN_005e0510(uVar1,uVar2);
  return uVar1;
}

