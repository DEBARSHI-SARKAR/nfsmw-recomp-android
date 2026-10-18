/* speed.exe 004b47a0 FUN_004b47a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004b47a0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 100);
  fVar2 = *(float *)(*(int *)(param_1 + 0x18) + 100);
  *(undefined4 *)(param_1 + 0x34) = 0x3f000000;
  fVar2 = fVar2 + _DAT_00896480;
  *(undefined4 *)(param_1 + 0x40) = 5;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(float *)(param_1 + 0x38) = fVar2;
  *(float *)(param_1 + 0x44) = fVar2;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x54) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x60) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x50) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x2f) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x74) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x70) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x88) = DAT_009142dc;
  return;
}

