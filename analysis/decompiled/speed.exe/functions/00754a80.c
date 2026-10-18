/* speed.exe 00754a80 FUN_00754a80; analysis pseudocode, not buildable source.
 * calls 00754a80 FUN_00754a80
 * calls 00733f40 FUN_00733f40
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0078a290 FUN_0078a290
 * calls 0078a310 FUN_0078a310
 * calls 0078b2c0 FUN_0078b2c0
 * calls 007ec1bd FUN_007ec1bd
 */

void __thiscall FUN_00754a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  FUN_007ec1bd();
  *(int *)(param_1 + 0xf7c) = *(int *)(param_1 + 0xf88) * 0x74 + param_1;
  FUN_00733f40(param_2,param_3,*(undefined1 *)(param_1 + 0xf9d));
  FUN_0078a310(*(undefined1 *)(param_1 + 0xf9e),1);
  puVar7 = *(undefined4 **)(param_1 + 0xf7c);
  puVar9 = (undefined4 *)(param_1 + 0xe80);
  for (iVar6 = 0x1d; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = FUN_0078b2c0();
  *(int *)(param_1 + 0xf98) = iVar6 - DAT_009b0fc0;
  if ((*(int *)(param_1 + 0xf6c) != 0) &&
     (piVar2 = *(int **)(*(int *)(param_1 + 0xf6c) + 4), piVar8 = (int *)*piVar2, piVar8 != piVar2))
  {
    do {
      iVar6 = piVar8[3];
      iVar4 = 0;
      do {
        if (iVar6 == (&DAT_009b08a8)[iVar4]) break;
        if (iVar6 == (&DAT_009b08ac)[iVar4]) {
          iVar4 = iVar4 + 1;
          break;
        }
        if (iVar6 == (&DAT_009b08b0)[iVar4]) {
          iVar4 = iVar4 + 2;
          break;
        }
        if (iVar6 == (&DAT_009b08b4)[iVar4]) {
          iVar4 = iVar4 + 3;
          break;
        }
        if (iVar6 == (&DAT_009b08b8)[iVar4]) {
          iVar4 = iVar4 + 4;
          break;
        }
        iVar4 = iVar4 + 5;
      } while (iVar4 < 0xf);
      if (iVar4 != 0x10) {
        uVar10 = DAT_009b183c;
        uVar5 = FUN_0078a290(iVar4);
        FUN_0078a310(uVar5,uVar10);
        iVar6 = 0;
        do {
          if (*(int *)(piVar8[4] + 0xf68) == (&DAT_008b2be0)[iVar6]) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 7);
        uVar10 = DAT_009b16f8;
        uVar5 = FUN_0078a290(iVar6);
        FUN_0078a310(uVar5,uVar10);
        FUN_00754a80(param_2,param_3);
      }
      if (*(char *)((int)piVar8 + 0x15) == '\0') {
        piVar2 = (int *)piVar8[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar8 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar8 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar8[1] + 0x15);
          piVar3 = (int *)piVar8[1];
          piVar2 = piVar8;
          while ((piVar8 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar8[2]))) {
            cVar1 = *(char *)(piVar8[1] + 0x15);
            piVar3 = (int *)piVar8[1];
            piVar2 = piVar8;
          }
        }
      }
    } while (piVar8 != *(int **)(*(int *)(param_1 + 0xf6c) + 4));
  }
  FUN_007ec1c8();
  return;
}

