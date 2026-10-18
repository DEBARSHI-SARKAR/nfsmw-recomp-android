/* speed.exe 005dd520 FUN_005dd520; analysis pseudocode, not buildable source.
 * calls 00614e00 FUN_00614e00
 * calls 00605ba0 FUN_00605ba0
 * calls 00613060 FUN_00613060
 * calls 0060e250 FUN_0060e250
 * calls 005dd2e0 FUN_005dd2e0
 */

void __thiscall FUN_005dd520(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 4))();
  FUN_005dd2e0(uVar1);
  FUN_00614e00(uVar1,**(undefined4 **)(param_1 + 0xc));
  FUN_0060e250(uVar1,0xffffd8ef);
  FUN_00605ba0(uVar1,0xfffffffd);
  FUN_00605ba0(uVar1,0xfffffffb);
  FUN_00605ba0(uVar1,0xfffffffc);
  FUN_00613060(uVar1,3,0);
  return;
}

