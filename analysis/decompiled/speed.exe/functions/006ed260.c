/* speed.exe 006ed260 FUN_006ed260; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

bool FUN_006ed260(float *param_1,char param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int *local_8;
  
  uVar3 = (-(uint)(param_2 != '\0') & 0xc) + 0x34;
  if (uVar3 < DAT_009377c8) {
    _param_2 = 0.0;
    local_8 = (int *)0x0;
    puVar8 = DAT_0092ca8c;
    if (DAT_0092ca8c != DAT_0092ca8c + DAT_0092ca94) {
      do {
        cVar2 = (**(code **)(*(int *)*puVar8 + 4))();
        if (((cVar2 == '\0') && (piVar4 = (int *)FUN_005d59f0(&LAB_00402830), piVar4 != (int *)0x0))
           && (piVar5 = (int *)FUN_005d59f0(&LAB_004039c0), piVar5 != (int *)0x0)) {
          piVar6 = (int *)(**(code **)(*piVar4 + 0x54))();
          cVar2 = (**(code **)(*piVar5 + 0x34))();
          if (cVar2 != '\0') {
            pfVar7 = (float *)(**(code **)(*piVar6 + 0x20))();
            fVar1 = (*pfVar7 - *param_1) * (*pfVar7 - *param_1) +
                    (pfVar7[1] - param_1[1]) * (pfVar7[1] - param_1[1]) +
                    (pfVar7[2] - param_1[2]) * (pfVar7[2] - param_1[2]);
            if (_param_2 < fVar1) {
              _param_2 = fVar1;
              local_8 = piVar4;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != DAT_0092ca8c + DAT_0092ca94);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))();
      }
    }
  }
  return DAT_009377c8 < uVar3;
}

