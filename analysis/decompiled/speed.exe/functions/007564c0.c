/* speed.exe 007564c0 FUN_007564c0; analysis pseudocode, not buildable source.
 * calls 00745bc0 FUN_00745bc0
 * calls 007375c0 FUN_007375c0
 * calls 00744c70 FUN_00744c70
 * calls 00746750 FUN_00746750
 * calls 007561c0 FUN_007561c0
 * calls 00739250 FUN_00739250
 * calls 00745c70 FUN_00745c70
 * calls 00742900 FUN_00742900
 * calls 00746440 FUN_00746440
 * calls 007459f0 FUN_007459f0
 * calls 007c4b80 FUN_007c4b80
 * calls 00747050 FUN_00747050
 * calls 00745f20 FUN_00745f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_007564c0(int param_1,int param_2,float param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  
  if ((1 < *(int *)(param_1 + 0x28)) &&
     (puVar1 = *(undefined4 **)(param_1 + 0x44), puVar1 != (undefined4 *)0x0)) {
    FUN_00742900(param_2 + 0x50);
    puVar1[0x5e9] = param_3;
    puVar1[0x588] = *(undefined4 *)(param_2 + 0x60);
    puVar1[0x589] = *(undefined4 *)(param_2 + 100);
    *(undefined1 *)(puVar1 + 0x5f0) = *(undefined1 *)(param_2 + 0x70);
    FUN_007375c0();
    puVar1[0x45f] = (uint)*(byte *)(param_2 + 0x71);
    uVar7 = FUN_007c4b80();
    *(undefined2 *)(puVar1 + 0x460) = uVar7;
    uVar7 = FUN_007c4b80();
    *(undefined2 *)((int)puVar1 + 0x1182) = uVar7;
    pfVar2 = *(float **)(param_1 + 0x38);
    fVar4 = SQRT(pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
    fVar5 = param_3 + *(float *)(param_1 + 0x3a0);
    bVar3 = _DAT_00890bf8 <= fVar5;
    *(float *)(param_1 + 0x3a0) = fVar5;
    if (bVar3) {
      *(float *)(param_1 + 0x3a0) = fVar5 - _DAT_00890bf8;
    }
    *puVar1 = *(undefined4 *)(param_1 + 0x3a0);
    FUN_00745bc0(param_3,param_2);
    FUN_00739250(param_3);
    cVar6 = FUN_00744c70(&DAT_00919650);
    if ((cVar6 == '\0') && (cVar6 = FUN_00744c70(&DAT_009196c0), cVar6 == '\0')) {
      uVar8 = *(uint *)(param_1 + 0x3f8) & 0xfffffff7;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x3f8) | 8;
    }
    *(uint *)(param_1 + 0x3f8) = uVar8;
    FUN_007459f0(param_3,param_2);
    FUN_00746750(param_3,fVar4,param_2);
    FUN_00745c70(param_3,fVar4,param_2);
    FUN_00746440(param_3,param_2);
    FUN_00745f20(param_3,param_2);
    FUN_00747050(param_3);
    FUN_007561c0(param_2,param_3);
    if (1 < *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}

