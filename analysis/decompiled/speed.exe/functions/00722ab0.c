/* speed.exe 00722ab0 FUN_00722ab0; analysis pseudocode, not buildable source.
 * calls 005f19c0 FUN_005f19c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00722ab0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_2 == -0x7ffcbeb9) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar2 = param_1 + 3;
    for (iVar1 = 0x11d; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[0x120] = 0;
    param_1[0x122] = 0;
    param_1[0x121] = 0;
    _DAT_009a3a24 = 0;
    _DAT_009a3a28 = 0;
    FUN_005f19c0();
    return 1;
  }
  if (*param_2 == 0x3414d) {
    param_1[0x122] = 0;
    param_1[0x121] = 0;
    return 1;
  }
  return 0;
}

