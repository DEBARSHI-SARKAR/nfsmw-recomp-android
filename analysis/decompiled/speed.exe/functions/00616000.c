/* speed.exe 00616000 FUN_00616000; analysis pseudocode, not buildable source.
 * calls 00615cb0 FUN_00615cb0
 * calls 00613eb0 FUN_00613eb0
 * calls 00605950 FUN_00605950
 * calls 0060c3d0 FUN_0060c3d0
 * calls 00607d80 FUN_00607d80
 * calls 00607cb0 FUN_00607cb0
 */

int FUN_00616000(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((param_2 < 1) && (-10000 < param_2)) {
    param_2 = param_2 + 1 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3);
  }
  puVar5 = *(undefined4 **)(param_1 + 8);
  *puVar5 = 4;
  uVar2 = FUN_00613eb0(param_1,&DAT_008a4270,1);
  puVar5[1] = uVar2;
  puVar5 = *(undefined4 **)(param_1 + 8);
  *(undefined4 **)(param_1 + 8) = puVar5 + 2;
  if (param_2 < 1) {
    iVar4 = FUN_00605950();
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  puVar3 = (undefined4 *)FUN_00607d80(*(undefined4 *)(iVar4 + 4),puVar5);
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  iVar4 = FUN_0060c3d0(1);
  if (iVar4 < 0) {
    FUN_00615cb0();
    if (param_2 < 1) {
      puVar5 = (undefined4 *)FUN_00605950();
    }
    else {
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
    }
    puVar3 = *(undefined4 **)(param_1 + 8);
    *puVar3 = *puVar5;
    puVar3[1] = puVar5[1];
    puVar5 = *(undefined4 **)(param_1 + 8);
    *(undefined4 **)(param_1 + 8) = puVar5 + 2;
    puVar3 = (undefined4 *)FUN_00607d80(puVar5[-1],puVar5);
    *puVar5 = *puVar3;
    puVar5[1] = puVar3[1];
    iVar4 = FUN_0060c3d0(2);
    if (iVar4 < 0) {
      iVar4 = 1;
      while( true ) {
        if (param_2 < 1) {
          if (param_2 < -9999) {
            if (param_2 == -0x2711) {
              iVar6 = param_1 + 0x40;
            }
            else if (param_2 == -10000) {
              iVar6 = *(int *)(param_1 + 0x10) + 0x2c;
            }
            else {
              iVar6 = *(int *)(*(int *)(param_1 + 0xc) + -4);
              if ((int)(uint)*(byte *)(iVar6 + 7) < -0x2711 - param_2) {
                iVar6 = 0;
              }
              else {
                iVar6 = iVar6 + 8 + (-0x2711 - param_2) * 8;
              }
            }
          }
          else {
            iVar6 = *(int *)(param_1 + 8) + param_2 * 8;
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
        }
        puVar3 = (undefined4 *)FUN_00607cb0(*(undefined4 *)(iVar6 + 4),iVar4);
        puVar5 = *(undefined4 **)(param_1 + 8);
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        piVar1 = *(int **)(param_1 + 8);
        *(int **)(param_1 + 8) = piVar1 + 2;
        if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) break;
        *(int **)(param_1 + 8) = piVar1;
        iVar4 = iVar4 + 1;
      }
      *(int **)(param_1 + 8) = piVar1;
      iVar4 = iVar4 + -1;
    }
  }
  return iVar4;
}

