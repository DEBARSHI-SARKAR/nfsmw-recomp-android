/* speed.exe 004770b0 FUN_004770b0; analysis pseudocode, not buildable source.
 * calls 0046b980 FUN_0046b980
 */

void __thiscall
FUN_004770b0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_EDX;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xf0) = *param_2;
  *(undefined4 *)(param_1 + 0xf4) = param_2[1];
  *(undefined4 *)(param_1 + 0xf8) = param_2[2];
  *(undefined4 *)(param_1 + 0xfc) = param_3;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  uVar1 = param_5[2];
  uVar2 = *param_5;
  *(undefined4 *)(param_1 + 0x114) = param_5[1];
  *(undefined4 *)(param_1 + 0x110) = uVar2;
  *(undefined4 *)(param_1 + 0x118) = uVar1;
  *(undefined4 *)(param_1 + 300) = param_7;
  *(undefined4 *)(param_1 + 0x130) = param_8;
  fVar3 = (float10)FUN_0046b980(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xf0));
  *(float *)(extraout_ECX + 0xf0) = (float)fVar3;
  fVar3 = (float10)FUN_0046b980(*(undefined4 *)(extraout_ECX + 0xc4),
                                *(undefined4 *)(extraout_ECX + 0xf4));
  *(float *)(extraout_ECX_00 + 0xf4) = (float)fVar3;
  fVar3 = (float10)FUN_0046b980(*(undefined4 *)(extraout_ECX_00 + 0xcc),
                                *(undefined4 *)(extraout_ECX_00 + 0xfc));
  *(float *)(extraout_ECX_01 + 0xfc) = (float)fVar3;
  *(undefined4 *)(extraout_ECX_01 + 0x134) = extraout_EDX;
  *(undefined4 *)(extraout_ECX_01 + 0x138) = param_6;
  return;
}

