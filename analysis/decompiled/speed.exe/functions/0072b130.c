/* speed.exe 0072b130 FUN_0072b130; analysis pseudocode, not buildable source.
 * calls 00651030 FUN_00651030
 * calls 007299e0 FUN_007299e0
 */

undefined4 FUN_0072b130(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*param_1 != -0x7ffca000) {
    return 0;
  }
  iVar2 = param_1[1];
  puVar6 = (undefined4 *)0x0;
  for (piVar1 = param_1 + 2; piVar1 != (int *)(iVar2 + 8 + (int)param_1);
      piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
    iVar5 = *piVar1;
    if (iVar5 == 0x36001) {
      puVar6 = (undefined4 *)((int)piVar1 + 0x17U & 0xfffffff0);
      if (puVar6[2] != 2) {
        return 1;
      }
      iVar5 = FUN_007299e0(puVar6[3]);
      *(undefined4 **)(iVar5 + 0x18) = puVar6;
    }
    else if (iVar5 == 0x36002) {
      if (puVar6 != (undefined4 *)0x0) {
        piVar4 = (int *)((int)piVar1 + 0x17U & 0xfffffff0);
        puVar6[6] = piVar4;
        *piVar4 = (int)(piVar4 + 4);
        if (puVar6[5] == 0) {
          FUN_00651030();
        }
      }
    }
    else if ((iVar5 == 0x36003) && (puVar6 != (undefined4 *)0x0)) {
      puVar6[7] = (int)piVar1 + 0x17U & 0xfffffff0;
    }
  }
  puVar6[5] = 1;
  puVar3 = DAT_009aa4dc;
  if (((puVar6[4] != 0) && (puVar6[6] != 0)) && (puVar6[7] != 0)) {
    *DAT_009aa490 = puVar6;
    puVar3 = puVar6;
    puVar6[1] = DAT_009aa490;
    DAT_009aa490 = puVar3;
    *puVar6 = &DAT_009aa48c;
    return 1;
  }
  *DAT_009aa4dc = puVar6;
  DAT_009aa4dc = puVar6;
  *puVar6 = &DAT_009aa4d8;
  puVar6[1] = puVar3;
  return 1;
}

