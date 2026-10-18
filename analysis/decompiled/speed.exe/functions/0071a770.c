/* speed.exe 0071a770 FUN_0071a770; analysis pseudocode, not buildable source.
 * calls 006ff320 FUN_006ff320
 * calls 007153b0 FUN_007153b0
 * calls 0070e570 FUN_0070e570
 * calls 005fc560 FUN_005fc560
 * calls 007c4b80 FUN_007c4b80
 * calls 00709d00 FUN_00709d00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0071a770(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  float local_4;
  
  iVar1 = DAT_00993cc8;
  local_4 = 0.0;
  if (*(int **)(DAT_00993cc8 + 0x130) != (int *)0x0) {
    fVar7 = (float10)(**(code **)(**(int **)(DAT_00993cc8 + 0x130) + 0x60))();
    local_4 = (float)fVar7;
    if (((((fVar7 <= (float10)_DAT_0089119c) || (cVar2 = FUN_00709d00(0x103,4), cVar2 != '\0')) ||
         ((DAT_00992230 != (int *)0x0 &&
          ((DAT_00992230[0x22] != 0 && (*(int *)(DAT_00992230[0x22] + 8) == 0x103)))))) ||
        (cVar2 = FUN_00709d00(0xde,4), cVar2 != '\0')) ||
       (cVar2 = FUN_006ff320(0xde), cVar2 != '\0')) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffffffbf;
    }
    else {
      if (DAT_0091e000 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(DAT_0091e000 + 0x1968);
      }
      if (((iVar5 == 0) || (cVar2 = FUN_005fc560(), cVar2 == '\0')) ||
         ((cVar2 = FUN_00709d00(0xcc,4), cVar2 == '\0' &&
          (cVar2 = FUN_006ff320(0xcc), cVar2 == '\0')))) {
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x40;
        piVar3 = (int *)FUN_007153b0(0,1);
        piVar6 = DAT_00992230;
        if (piVar3 != (int *)0x0) {
          if (DAT_00992230 != (int *)0x0) {
            (**(code **)(*DAT_00992230 + 0x48))();
          }
          FUN_0070e570();
          if (((*(int **)(iVar1 + 0xe0) == (int *)0x0) ||
              (fVar7 = (float10)(**(code **)(**(int **)(iVar1 + 0xe0) + 0x58))(),
              (float10)_DAT_00890fc8 <= fVar7)) ||
             (cVar2 = (**(code **)(**(int **)(iVar1 + 0xe0) + 0x60))(), cVar2 == '\0')) {
            (**(code **)(*piVar3 + 0x134))();
          }
          else {
            (**(code **)(**(int **)(iVar1 + 0xe0) + 0x134))();
          }
          if (piVar6 != (int *)0x0) goto LAB_0071a8ca;
        }
      }
    }
  }
  piVar6 = DAT_00992230;
  if (DAT_00992230 == (int *)0x0) {
    return;
  }
LAB_0071a8ca:
  iVar1 = piVar6[0x11];
  if (iVar1 != 0) {
    if (_DAT_008969bc < local_4 * _DAT_008969bc) {
      uVar4 = FUN_007c4b80();
      *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x14) = uVar4;
      return;
    }
    uVar4 = FUN_007c4b80();
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x14) = uVar4;
  }
  return;
}

