/* speed.exe 005e8300 FUN_005e8300; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 */

void __fastcall FUN_005e8300(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  if (*(char *)(param_1 + 0x154) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x150);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x14c)) + (float10)*(float *)(param_1 + 0x150);
  }
  *(float *)(param_1 + 0x150) = (float)fVar3;
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x14c) = (float)fVar3;
  if (*(char *)(param_1 + 0x160) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x15c);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x158)) + (float10)*(float *)(param_1 + 0x15c);
  }
  *(float *)(param_1 + 0x15c) = (float)fVar3;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x158) = (float)fVar3;
  if (*(char *)(param_1 + 0x16c) == '\0') {
    fVar3 = (float10)*(float *)(param_1 + 0x168);
  }
  else {
    fVar3 = (float10)FUN_006e8de0();
    fVar3 = (fVar3 - (float10)*(float *)(param_1 + 0x164)) + (float10)*(float *)(param_1 + 0x168);
  }
  *(float *)(param_1 + 0x168) = (float)fVar3;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  fVar3 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x164) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar1 = (undefined4 *)(param_1 + 0xb8);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}

