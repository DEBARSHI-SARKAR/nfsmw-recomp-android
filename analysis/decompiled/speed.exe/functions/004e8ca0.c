/* speed.exe 004e8ca0 FUN_004e8ca0; analysis pseudocode, not buildable source.
 * calls 0081e274 FUN_0081e274
 * calls 0081deee FUN_0081deee
 * calls 0081d582 FUN_0081d582
 * calls 0081e2cb FUN_0081e2cb
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081dbad FUN_0081dbad
 * calls 0081bccb FUN_0081bccb
 * calls 004e1350 FUN_004e1350
 * calls 004e15e0 FUN_004e15e0
 */

undefined4 __thiscall FUN_004e8ca0(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined2 uStack_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 auStack_a4 [4];
  uint uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [8];
  undefined2 uStack_60;
  
  if ((-1 < *(int *)(param_1 + 0x1c)) && (*(int *)(param_1 + 0x28) != 0)) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0081bccb();
      FUN_0081e274(*(undefined4 *)(param_1 + 0x1c));
      FUN_0081bcd9();
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    uVar2 = FUN_004e1350(param_2);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(param_1 + 0x34) = uVar2;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x10);
    fVar6 = (float10)FUN_004e15e0(uVar2);
    *(float *)(param_1 + 0x40) = (float)fVar6;
    uStack_a8 = *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x18);
    uStack_a6 = 1;
    uStack_a5 = 8;
    FUN_0081e2cb(auStack_68);
    uStack_60 = 4;
    FUN_0081d582(auStack_80);
    auStack_80[0] = 0;
    FUN_0081bccb();
    iVar3 = FUN_0081dbad(*(undefined4 *)(param_1 + 0x1c),&uStack_a8,auStack_68,auStack_80);
    *(int *)(param_1 + 0x20) = iVar3;
    if (-1 < iVar3) {
      uVar1 = *(uint *)(param_1 + 0x14);
      puVar5 = *(undefined4 **)(param_1 + 4);
      for (uVar4 = (uVar1 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uVar1 = *(uint *)(param_1 + 0x14);
      puVar5 = *(undefined4 **)(param_1 + 8);
      for (uVar4 = (uVar1 & 0x7fffffff) >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (iVar3 = (uVar1 & 1) << 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      uStack_a0 = uStack_a0 ^ (*(uint *)(param_1 + 0x14) ^ uStack_a0) & 0x7fffffff;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x18);
      uStack_98 = *(undefined4 *)(param_1 + 4);
      FUN_0081deee(*(undefined4 *)(param_1 + 0x1c),auStack_a4);
      uStack_98 = *(undefined4 *)(param_1 + 8);
      FUN_0081deee(*(undefined4 *)(param_1 + 0x1c),auStack_a4);
    }
    FUN_0081bcd9();
    return *(undefined4 *)(param_1 + 0x20);
  }
  return 0xffffffff;
}

