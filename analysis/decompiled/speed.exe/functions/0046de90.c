/* speed.exe 0046de90 FUN_0046de90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0046de90(int param_1,float param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 2) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x8c);
    return (((float10)param_2 * (float10)*(float *)(iVar1 + 0x10) +
            (float10)*(float *)(iVar1 + 0x14)) * (float10)param_2 +
           (float10)*(float *)(iVar1 + 0x18)) * (float10)param_2 + (float10)*(float *)(iVar1 + 0x1c)
    ;
  }
  return (float10)param_2 * (float10)(*(float **)(param_1 + 0x8c))[2] +
         ((float10)_DAT_0089096c - (float10)param_2) * (float10)**(float **)(param_1 + 0x8c);
}

