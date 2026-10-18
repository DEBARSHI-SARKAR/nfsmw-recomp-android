/* speed.exe 00517ac0 FUN_00517ac0; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 0045ce70 FUN_0045ce70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00517ac0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (*(char *)(param_1 + 0x1d) != '\0') {
    uVar1 = FUN_0045ce40();
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    return (float10)*(float *)(param_1 + 0x14);
  }
  uVar1 = FUN_0045ce40();
  fVar2 = (float10)FUN_0045ce70(*(undefined4 *)(param_1 + 0x18),uVar1);
  fVar3 = (float10)_DAT_00890d60;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  fVar3 = fVar2 * fVar3 + (float10)*(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x14) = (float)fVar3;
  return fVar3;
}

