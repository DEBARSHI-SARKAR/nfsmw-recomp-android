/* speed.exe 00573330 FUN_00573330; analysis pseudocode, not buildable source.
 * calls 00515e90 FUN_00515e90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00573330(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 0x20) == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x34) = 0x3f1d2f1b;
    *(undefined4 *)(iVar1 + 0x3c) = 0x3e4ccccd;
    fVar2 = (float)DAT_00925b14;
    *(undefined1 *)(iVar1 + 0x44) = 0;
    *(float *)(iVar1 + 0x38) = fVar2 * _DAT_00890984;
    *(int *)(param_1 + 0xc) = param_2;
    FUN_00515e90(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10));
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x34) = 0x3f733333;
    *(undefined4 *)(iVar1 + 0x3c) = 0x3e4ccccd;
    fVar2 = (float)DAT_00925b14;
    *(undefined1 *)(iVar1 + 0x44) = 0;
    *(float *)(iVar1 + 0x38) = fVar2 * _DAT_00890984;
    return 1;
  }
  return 0;
}

