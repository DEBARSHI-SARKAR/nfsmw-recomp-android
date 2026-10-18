/* speed.exe 005f9cc0 FUN_005f9cc0; analysis pseudocode, not buildable source.
 * calls 0060e370 FUN_0060e370
 * calls 0060e250 FUN_0060e250
 * calls 00605bd0 FUN_00605bd0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 005f9480 FUN_005f9480
 * calls 00614e00 FUN_00614e00
 * calls 00605ba0 FUN_00605ba0
 * calls 00605a60 FUN_00605a60
 */

void __thiscall FUN_005f9cc0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    FUN_005f9480();
  }
  uVar1 = **(undefined4 **)(param_1 + 0xc);
  FUN_00614e00(param_2,uVar1);
  FUN_0060e250(param_2,0xffffd8f0);
  iVar2 = FUN_00605bd0(param_2,0xffffffff);
  if (iVar2 == 0) {
    FUN_00605a60(param_2,0xfffffffe);
    FUN_0060e2e0(param_2);
    FUN_00614e00(param_2,uVar1);
    FUN_00605ba0(param_2,0xfffffffe);
    FUN_0060e370(param_2,0xffffd8f0);
  }
  *(undefined1 *)(param_1 + 0x3d) = 1;
  return;
}

