/* speed.exe 005abf80 FUN_005abf80; analysis pseudocode, not buildable source.
 * calls 005aafb0 FUN_005aafb0
 * calls 005abd70 FUN_005abd70
 */

undefined4 __fastcall FUN_005abf80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_c [8];
  
  puVar3 = &stack0x00000004;
  puVar2 = local_c;
  FUN_005abd70(puVar2,puVar3,param_1);
  uVar1 = FUN_005aafb0(puVar2,puVar3);
  return uVar1;
}

