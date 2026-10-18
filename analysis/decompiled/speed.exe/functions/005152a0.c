/* speed.exe 005152a0 FUN_005152a0; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005152a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 7:
  case 9:
  case 0xc:
    iVar2 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
    return (float10)*(float *)(iVar1 + 0x38) / (float10)(int)*(short *)(iVar2 + 0x44);
  case 2:
    return (float10)*(float *)(iVar1 + 0x38);
  default:
    return (float10)_DAT_0089096c;
  }
}

