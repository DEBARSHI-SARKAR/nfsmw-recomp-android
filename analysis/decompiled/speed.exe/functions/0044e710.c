/* speed.exe 0044e710 FUN_0044e710; analysis pseudocode, not buildable source.
 * calls 0044cfe0 FUN_0044cfe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0044e710(int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  undefined3 extraout_var;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x10);
    *(float *)(param_1 + 0x28) = (float)*(int *)(iVar1 + 0x28) * _DAT_008934e0;
    *(float *)(param_1 + 0x2c) = (float)*(int *)(iVar1 + 0x2c) * _DAT_008934e0;
    FUN_0044cfe0();
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,1);
}

