/* speed.exe 005678a0 FUN_005678a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005678a0(int param_1,char param_2)

{
  int iVar1;
  float fVar2;
  
  if (param_2 == '\0') {
    _DAT_0091cf04 = 0;
    _DAT_0091cf0c = 0x3f700000;
    fVar2 = _DAT_008970c0;
  }
  else {
    _DAT_0091cf04 = 0xc2f00000;
    _DAT_0091cf0c = 0xbf700000;
    fVar2 = _DAT_008a04f0;
  }
  *(float *)(param_1 + 0xb8) = fVar2 + *(float *)(param_1 + 0xb8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0x2c);
  *(float *)(iVar1 + 0x1c) = fVar2 + *(float *)(iVar1 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 0x2c);
  *(float *)(iVar1 + 0x1c) = fVar2 + *(float *)(iVar1 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0x2c);
  *(float *)(iVar1 + 0x1c) = fVar2 + *(float *)(iVar1 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x2c);
  *(float *)(iVar1 + 0x1c) = fVar2 + *(float *)(iVar1 + 0x1c);
  iVar1 = *(int *)(*(int *)(param_1 + 0x90) + 0x2c);
  *(float *)(iVar1 + 0x1c) = fVar2 + *(float *)(iVar1 + 0x1c);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x90) + 0x2c) + 0x20) =
       *(undefined4 *)(param_1 + 0xbc);
  return;
}

