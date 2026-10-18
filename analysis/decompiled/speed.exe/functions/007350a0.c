/* speed.exe 007350a0 FUN_007350a0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_007350a0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1144);
  if (iVar1 != 4) {
    if (iVar1 != 6) {
      if (iVar1 == 0) goto LAB_007350f7;
      if ((iVar1 != 5) && (param_2 != iVar1)) {
        *(int *)(param_1 + 0x1144) = param_2;
        if (param_2 != 2) goto LAB_007350f7;
        *(undefined4 *)(param_1 + 0x1258) = 80000;
        *(undefined4 *)(param_1 + 0x1254) = 24000;
        *(undefined4 *)(param_1 + 0x1260) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1170) = param_3;
    return;
  }
LAB_007350f7:
  *(undefined4 *)(param_1 + 0x1170) = param_3;
  return;
}

