/* speed.exe 007247a0 FUN_007247a0; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 0045f9f0 FUN_0045f9f0
 */

undefined4 __thiscall FUN_007247a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0045f9f0(param_1 + 0xc,param_1 + 0x14,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_007244f0(param_1 + 0x24);
  return uVar2;
}

