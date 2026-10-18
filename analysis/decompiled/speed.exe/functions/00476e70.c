/* speed.exe 00476e70 FUN_00476e70; analysis pseudocode, not buildable source.
 * calls 0046b980 FUN_0046b980
 */

void __thiscall FUN_00476e70(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    if (*(int *)(param_1 + 0x80) != 1) {
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0x42340000;
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0x3f400000;
      fVar1 = (float10)FUN_0046b980(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xfc))
      ;
      *(float *)(extraout_ECX + 0xfc) = (float)fVar1;
      *(undefined4 *)(extraout_ECX + 0x134) = extraout_EDX;
      *(undefined4 *)(extraout_ECX + 0x138) = 0x3f0e147b;
      param_1 = extraout_ECX;
    }
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(undefined4 *)(param_1 + 0x124) = param_2;
  }
  return;
}

