/* speed.exe 00541e00 FUN_00541e00; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0057e680 FUN_0057e680
 * calls 005252d0 FUN_005252d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00541e00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = FUN_0057e680();
  uVar2 = FUN_007c4b80(uVar2);
  FUN_005252d0(uVar1,param_2,&DAT_0089cee4,uVar2);
  return;
}

