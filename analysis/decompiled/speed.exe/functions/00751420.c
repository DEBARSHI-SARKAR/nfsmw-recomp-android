/* speed.exe 00751420 FUN_00751420; analysis pseudocode, not buildable source.
 * calls 0045e300 FUN_0045e300
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00444fe0 FUN_00444fe0
 * calls 007477f0 FUN_007477f0
 * calls 007477a0 FUN_007477a0
 */

void __thiscall FUN_00751420(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_50 [76];
  
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    FUN_00444fe0(param_1 + 0x60,param_2);
  }
  else {
    if (*(int *)(iVar1 + 0xf4) != 0) {
      FUN_007477f0();
    }
    FUN_0045e300(local_50,iVar1 + 0x20);
    FUN_0045ecf0(param_1 + 0x60,local_50,param_2);
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_007477a0();
  }
  return;
}

