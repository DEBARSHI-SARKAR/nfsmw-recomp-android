/* speed.exe 0057dbb0 FUN_0057dbb0; analysis pseudocode, not buildable source.
 * calls 007a2940 FUN_007a2940
 * calls 00525940 FUN_00525940
 * calls 004aefe0 FUN_004aefe0
 */

void __thiscall FUN_0057dbb0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -4;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  FUN_00525940(*(undefined4 *)(iVar1 + 0xc),0,param_2,0);
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + -4;
  }
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    if (DAT_0091cf48 != (undefined4 *)0x0) {
      (**(code **)*DAT_0091cf48)(1);
      DAT_0091cf48 = (undefined4 *)0x0;
      FUN_007a2940();
    }
    FUN_004aefe0();
    return;
  }
  return;
}

